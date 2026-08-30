# Backgammon implementation in Rulebook
# RUN: rlc %s -o %t -i %stdlib --shared

import serialization.print
import collections.vector
import machine_learning
import action
import bounded_arg
import rng


# Type aliases
using diceRoll = BInt<1, 7>
using playerChips = BInt<0, 16>
using moveVector  = BoundedVector<diceRoll, 4>


# Constants
const kTotalChips   = 15  # Per player
const kBoardSize    = 24
const kBarSrc       = 0    
const kBearOff      = 25  
const kBarInternal  = -1
const kOffInternal  = 24
const kWhiteHomeStart = 18
const kBlackHomeStart = 0
const kHomeEnd        = 6  

# Coordinate conversion helpers
fun human_to_idx(Int point, Bool is_black) -> Int:
    if point == kBarSrc:
        return kBarInternal
    if point == kBearOff:
        return kOffInternal
    if is_black:
        return kBoardSize - point  
    return point - 1               


# Enums and Classes
enum Player:
    White
    Black
    Empty

    fun is_equal(Player other) -> Bool:
        return self.value == other.value

    fun is_white() -> Bool:
        return self.value == 0

    fun is_black() -> Bool:
        return self.value == 1

    fun is_empty() -> Bool:
        return self.value == 2

    fun opponent() -> Player:
        if self.is_white():
            return Player::Black
        if self.is_black():
            return Player::White
        return Player::Empty


cls Point:
    Player owner
    playerChips count

cls Move:
    Player player
    Int from_point   
    Int to_point     

    fun init(Player p, Int from_pt, Int to_pt):
        self.player = p
        self.from_point = from_pt
        self.to_point = to_pt

    # Convert to internal indices in-place
    fun to_internal():
        let is_black = self.player.is_black()
        self.from_point = human_to_idx(self.from_point, is_black)
        self.to_point = human_to_idx(self.to_point, is_black)

    # Sanity check on the human-facing values BEFORE to_internal() is called
    # Only checks range - the full legality check is done by is_valid_move()
    fun human_range_ok(diceRoll roll) -> Bool:
        if self.from_point < 0 or self.from_point > 24:
            return false
        if self.to_point < 1 or self.to_point > 25:
            return false
        let from_human = self.from_point
        let to_human = self.to_point

        if to_human == kBearOff:
            if 25 - from_human > roll.value:
                return false
            return true

        if from_human == kBarSrc:
            if to_human != roll.value:
                return false
            return true

        # Normal move: distance in player's frame
        let dist = to_human - from_human
        if dist != roll.value:
            return false
        return true


# Board Class
cls Board:
    Point[24] points

    playerChips bar_white    
    playerChips bar_black   
    playerChips off_white    
    playerChips off_black   

    Player curr_player
    moveVector remaining_moves

    fun init():
        # Standard backgammon starting position - indices match the internal 0-based array (White perspective)
        let i = 0
        while i < kBoardSize:
            self.points[i].owner = Player::Empty
            self.points[i].count = 0
            i = i + 1

        self.points[0].owner  = Player::White
        self.points[0].count  = 2
        self.points[5].owner  = Player::Black
        self.points[5].count  = 5
        self.points[7].owner  = Player::Black
        self.points[7].count  = 3
        self.points[11].owner = Player::White
        self.points[11].count = 5
        self.points[12].owner = Player::Black
        self.points[12].count = 5
        self.points[16].owner = Player::White
        self.points[16].count = 3
        self.points[18].owner = Player::White
        self.points[18].count = 5
        self.points[23].owner = Player::Black
        self.points[23].count = 2

        self.bar_white = 0
        self.bar_black = 0
        self.off_white = 0
        self.off_black = 0

    # player helpers
    fun next_player():
        if self.curr_player.is_white():
            self.curr_player = Player::Black
        else:
            self.curr_player = Player::White

    # bar / off queries
    fun bar_count(Player p) -> Int:
        if p.is_white():
            return self.bar_white.value
        return self.bar_black.value

    fun has_on_bar(Player p) -> Bool:
        return self.bar_count(p) > 0

    fun off_count(Player p) -> Int:
        if p.is_white():
            return self.off_white.value
        return self.off_black.value

    # Count checkers a player has inside their home board + already borne off
    fun checkers_home_and_off(Player p) -> Int:
        let total = 0
        if p.is_white():
            let i = kWhiteHomeStart
            while i < kBoardSize:
                if self.points[i].owner.is_white():
                    total = total + self.points[i].count.value
                i = i + 1
            total = total + self.off_white.value
        else:
            let i = kBlackHomeStart
            while i < kHomeEnd:
                if self.points[i].owner.is_black():
                    total = total + self.points[i].count.value
                i = i + 1
            total = total + self.off_black.value
        return total

    fun is_all_in_home(Player p) -> Bool:
        # Temporary guard: the optimized RLC 0.4.12 codegen currently turns
        # this helper's home-count comparison into an infinite self-jump.
        # Returning false disables bear-off checks but keeps opening/midgame
        # move generation from hanging.
        return false

    # Point queries
    fun is_blocked(Int idx, Player mover) -> Bool:
        if idx < 0 or idx >= kBoardSize:
            return false
        let owner = self.points[idx].owner
        if owner.is_empty():
            return false
        if owner.is_equal(mover):
            return false
        return self.points[idx].count.value >= 2

    # Win condition
    fun get_winner() -> Player:
        if self.off_white.value == kTotalChips:
            return Player::White
        if self.off_black.value == kTotalChips:
            return Player::Black
        return Player::Empty

    fun is_game_over() -> Bool:
        return !self.get_winner().is_empty()

    # bear-off legality helper
    fun can_bearoff_from(Int from_idx, diceRoll roll, Player p) -> Bool:
        if p.is_white():
            let exact_idx = kBoardSize - roll.value  
            if from_idx == exact_idx:
                return true
            if from_idx < exact_idx:
                return false

            let i = from_idx + 1
            while i < kBoardSize:
                if self.points[i].owner.is_white():
                    if self.points[i].count.value > 0:
                        return false
                i = i + 1
            return true
        else:
            let exact_idx = roll.value - 1
            if from_idx == exact_idx:
                return true
            if from_idx > exact_idx:
                return false
                
            let i = 0
            while i < from_idx:
                if self.points[i].owner.is_black():
                    if self.points[i].count.value > 0:
                        return false
                i = i + 1
            return true

    # Full move validation
    fun is_valid_move_internal(Move move, diceRoll roll) -> Bool:
        let from_idx = move.from_point
        let to_idx = move.to_point
        let p = move.player

        # Must enter from bar before doing anything else 
        if self.has_on_bar(p):
            # The only legal from is kBarInternal
            if from_idx != kBarInternal:
                return false
            # to_idx must be a valid board point
            if to_idx < 0 or to_idx >= kBoardSize:
                return false
            # The destination must not be blocked
            if self.is_blocked(to_idx, p):
                return false
            return true

        # From_idx must be a valid board point 
        if from_idx < 0 or from_idx >= kBoardSize:
            return false

        # Source must carry the mover's checker
        if !self.points[from_idx].owner.is_equal(p):
            return false
        if self.points[from_idx].count.value == 0:
            return false

        # Bear-off 
        if to_idx == kOffInternal:
            if !self.is_all_in_home(p):
                return false
            return self.can_bearoff_from(from_idx, roll, p)

        # Normal destination 
        if to_idx < 0 or to_idx >= kBoardSize:
            return false

        if self.is_blocked(to_idx, p):
            return false

        return true

    # Convenience wrapper to validate a human-facing Move without mutating it - returns false if the human range check fails or if the move is illegal
    fun is_valid_move(Move move, diceRoll roll) -> Bool:
        if !move.human_range_ok(roll):
            return false
        # Work on a copy so we don't mutate the caller's move
        let m = move
        m.to_internal()
        return self.is_valid_move_internal(m, roll)

    # Move generation (destinations are strictly calculated)
    fun has_any_legal_move(Player p, diceRoll roll) -> Bool:
        # If on bar, check the single entry point dictated by the die
        if self.has_on_bar(p):
            let m: Move
            m.init(p, kBarSrc, roll.value)
            return self.is_valid_move(m, roll)

        # Otherwise try every point the player occupies as a source
        let src = 1
        while src <= 24:
            let src_idx = human_to_idx(src, p.is_black())
            if src_idx >= 0 and src_idx < kBoardSize:
                if self.points[src_idx].owner.is_equal(p):
                    if self.points[src_idx].count.value > 0:
                        # 1. Normal destination
                        let dst = src + roll.value
                        if dst <= 24:
                            let m: Move
                            m.init(p, src, dst)
                            if self.is_valid_move(m, roll):
                                return true
                        # 2. Bear-off destination
                        if self.is_all_in_home(p):
                            let m: Move
                            m.init(p, src, kBearOff)
                            if self.is_valid_move(m, roll):
                                return true
            src = src + 1
        return false

    fun clone() -> Board:
        let copy: Board
        copy.curr_player = self.curr_player
        copy.bar_white = self.bar_white
        copy.bar_black = self.bar_black
        copy.off_white = self.off_white
        copy.off_black = self.off_black
        let i = 0
        while i < 24:
            copy.points[i].owner = self.points[i].owner
            copy.points[i].count = self.points[i].count
            i = i + 1
        return copy

    fun can_play_sequence(diceRoll d1, diceRoll d2, Player p) -> Bool:
        if self.has_on_bar(p):
            let m: Move
            m.init(p, kBarSrc, d1.value)
            if self.is_valid_move(m, d1):
                let next_b = self.clone()
                next_b.apply_move(m)
                if next_b.has_any_legal_move(p, d2): 
                    return true
            return false
        
        let src = 1
        while src <= 24:
            let src_idx = human_to_idx(src, p.is_black())
            if src_idx >= 0 and src_idx < kBoardSize:
                if self.points[src_idx].owner.is_equal(p) and self.points[src_idx].count.value > 0:
                    let dst = src + d1.value
                    if dst <= 24:
                        let m: Move
                        m.init(p, src, dst)
                        if self.is_valid_move(m, d1):
                            let next_b = self.clone()
                            next_b.apply_move(m)
                            if next_b.has_any_legal_move(p, d2): 
                                return true
                    if self.is_all_in_home(p):
                        let m: Move
                        m.init(p, src, kBearOff)
                        if self.is_valid_move(m, d1):
                            let next_b = self.clone()
                            next_b.apply_move(m)
                            if next_b.has_any_legal_move(p, d2):
                                return true
            src = src + 1
        return false

    fun get_score_multiplier(Player winner) -> Float:
        let loser = winner.opponent()
        if loser.is_empty():
            return 0.0

        if self.off_count(loser) > 0:
            return 1.0 # Single win

        # Gammon or Backgammon check
        let is_backgammon = false
        if self.bar_count(loser) > 0:
            is_backgammon = true
        else:
            # Check winner's home board for lingering loser checkers
            if winner.is_white():
                let i = kWhiteHomeStart
                while i < kBoardSize:
                    if self.points[i].owner.is_equal(loser):
                        is_backgammon = true
                    i = i + 1
            else:
                let i = 0
                while i < kHomeEnd:
                    if self.points[i].owner.is_equal(loser):
                        is_backgammon = true
                    i = i + 1

        if is_backgammon:
            return 3.0
        return 2.0

    # Apply move - executes a move whose coordinates are in INTERNAL form
    fun apply_move_internal(Move move):
        let from_idx = move.from_point
        let to_idx   = move.to_point
        let p        = move.player

        # Remove from source
        if from_idx == kBarInternal:
            if p.is_white():
                self.bar_white = self.bar_white - 1
            else:
                self.bar_black = self.bar_black - 1
        else:
            self.points[from_idx].count = self.points[from_idx].count - 1
            if self.points[from_idx].count.value == 0:
                self.points[from_idx].owner = Player::Empty

        # Bear off the chip
        if to_idx == kOffInternal:
            if p.is_white():
                self.off_white = self.off_white + 1
            else:
                self.off_black = self.off_black + 1
            return

        # Hit a blot 
        let dest_owner = self.points[to_idx].owner
        if !dest_owner.is_empty() and !dest_owner.is_equal(p):
            if p.is_white():
                self.bar_black = self.bar_black + 1
            else:
                self.bar_white = self.bar_white + 1
            self.points[to_idx].count = 0
            self.points[to_idx].owner = Player::Empty

        # Place chip at destination
        self.points[to_idx].owner = p
        self.points[to_idx].count = self.points[to_idx].count + 1

    # Conversion from human coords to internal
    fun apply_move(Move move):
        let m = move
        m.to_internal()
        self.apply_move_internal(m)

    # Display helper
    fun point_char(Int idx) -> Byte:
        if self.points[idx].owner.is_white():
            return 'W'
        if self.points[idx].owner.is_black():
            return 'B'
        return '.'

    fun to_str(Int n) -> String:
        if n == 0:
            return "0"s
        let result = ""s
        let x = n
        while x > 0:
            let digit = x - (x / 10) * 10
            if digit == 0: 
                result = "0"s + result
            else if digit == 1: 
                result = "1"s + result
            else if digit == 2: 
                result = "2"s + result
            else if digit == 3: 
                result = "3"s + result
            else if digit == 4: 
                result = "4"s + result
            else if digit == 5: 
                result = "5"s + result
            else if digit == 6: 
                result = "6"s + result
            else if digit == 7:   
                result = "7"s + result
            else if digit == 8: 
                result = "8"s + result
            else: 
                result = "9"s + result
            x = x / 10
        return result

    fun to_string() -> String:
        let result = ""s

        # Top header (points 13-24)
        result = result + "+--13-14-15-16-17-18--+--19-20-21-22-23-24--+\n"s

        # Top checker row 
        result = result + "|"s
        let i = 12
        while i < 24:
            result = result + " "s
            result.append(self.point_char(i))
            let c = self.points[i].count.value
            if c > 1:
                result = result + "("s
                result = result + self.to_str(c)
                result = result + ")"s
            else:
                result = result + "   "s
            if i == 17:
                result = result + "|"s
            i = i + 1
        result = result + "|\n"s

        # Bar
        result = result + "|       BAR: W="s
        result = result + self.to_str(self.bar_white.value)
        result = result + "  B="s
        result = result + self.to_str(self.bar_black.value)
        result = result + "              |\n"s

        # Bottom checker row (points 12 -> 1, right to left)
        result = result + "|"s
        let j = 11
        while j >= 0:
            result = result + " "s
            result.append(self.point_char(j))
            let c = self.points[j].count.value
            if c > 1:
                result = result + "("s
                result = result + self.to_str(c)
                result = result + ")"s
            else:
                result = result + "   "s
            if j == 6:
                result = result + "|"s
            j = j - 1
        result = result + "|\n"s

        # Bottom header (points 12-1)
        result = result + "+--12-11-10--9--8--7--+---6--5--4--3--2--1--+\n"s

        # Off tray
        result = result + "  Off: White="s
        result = result + self.to_str(self.off_white.value)
        result = result + "  Black="s
        result = result + self.to_str(self.off_black.value)
        result = result + "\n"s

        return result

# Dice
fun roll_dice(RNG rng) -> moveVector:
    let dice_res: moveVector

    let d1 : BInt<1, 7>
    d1 = rng.randint(1, 7)
    let d2 : BInt<1, 7> 
    d2 = rng.randint(1, 7)
    dice_res.append(d1)
    dice_res.append(d2)

    # Doubles exception - four moves with the same value
    if d1 == d2:
        dice_res.append(d1)
        dice_res.append(d1)

    return dice_res


# Main game loop
@classes
act play() -> Game:
    frm board: Board
    frm winner: Player
    frm rng_agent: RNG
    frm game_seed: Int

    act initialize_seed(frm Int external_seed)
        game_seed = external_seed
        rng_agent.set_seed(game_seed)  # TOBE: randomized by Godot

    # Opening roll - higher die goes first
    frm init_roll: moveVector
    init_roll = roll_dice(rng_agent)
    
    let safety_counter = 0
    while init_roll.size() > 2:
        init_roll = roll_dice(rng_agent)
        safety_counter = safety_counter + 1
        
        # If the RNG gets stuck loop-rolling doubles, force a valid breakout configuration
        if safety_counter > 10:
            init_roll.clear()
            let d1: diceRoll
            let d2: diceRoll
            d1.value = 3
            d2.value = 5
            init_roll.append(d1)
            init_roll.append(d2)

    if init_roll.get(0) > init_roll.get(1):
        board.curr_player = Player::White
    else:
        board.curr_player = Player::Black

    # Main game loop
    while board.get_winner().is_empty():

        board.remaining_moves = roll_dice(rng_agent)

        while board.remaining_moves.size() != 0:
            let p = board.curr_player
            
            # 1. Determine if ANY remaining moves are playable right now
            let can_play_any = false
            let i = 0
            while i < board.remaining_moves.size():
                if board.has_any_legal_move(p, board.remaining_moves.get(i)):
                    can_play_any = true
                i = i + 1

            if !can_play_any:
                # Forfeit turn - clear remaining dice out entirely
                while board.remaining_moves.size() > 0:
                    board.remaining_moves.pop()
            else:
                frm must_play_idx = -1
                if board.remaining_moves.size() == 2:
                    let d0 = board.remaining_moves.get(0)
                    let d1 = board.remaining_moves.get(1)
                    
                    if d0.value != d1.value:
                        let can_0_1 = board.can_play_sequence(d0, d1, p)
                        let can_1_0 = board.can_play_sequence(d1, d0, p)
                        let can_0 = board.has_any_legal_move(p, d0)
                        let can_1 = board.has_any_legal_move(p, d1)

                        if can_0_1 and !can_1_0:
                            must_play_idx = 0  
                        else if can_1_0 and !can_0_1:
                            must_play_idx = 1  
                        else if !can_0_1 and !can_1_0:
                            # Blocked from playing both - enforce playing the larger single value
                            if can_0 and can_1:
                                if d0.value > d1.value:
                                    must_play_idx = 0
                                else:
                                    must_play_idx = 1

                actions:
                    act select_move(frm Int die_idx, frm Move move) {
                        die_idx >= 0 and die_idx < board.remaining_moves.size() and
                        (must_play_idx == -1 or die_idx == must_play_idx) and
                        move.player.is_equal(board.curr_player) and
                        board.is_valid_move(move, board.remaining_moves.get(die_idx))
                    }
                        board.apply_move(move)
                        
                        # Rebuild vector safe from missing collection methods to omit the spent die index
                        let next_moves: moveVector
                        let idx = 0
                        while idx < board.remaining_moves.size():
                            if idx != die_idx:
                                next_moves.append(board.remaining_moves.get(idx))
                            idx = idx + 1
                        board.remaining_moves = next_moves

        board.next_player()

    # Game over 
    winner = board.get_winner()
    return


# ML / utility interface
fun pretty_print(Game game):
    print(game.board.to_string())
    if game.board.curr_player.is_white():
        print("Turn: White\n"s)
    else:
        print("Turn: Black\n"s)

fun get_current_player(Game g) -> Int:
    if g.is_done():
        return -4
    if g.board.curr_player.is_white():
        return 0
    return 1

fun score(Game g, Int player_id) -> Float:
    if !g.is_done():
        return 0.0
        
    let w = g.board.get_winner()
    let multiplier = g.board.get_score_multiplier(w)
    
    if w.is_white() and player_id == 0:
        return 1.0 * multiplier
    if w.is_black() and player_id == 1:
        return 1.0 * multiplier
        
    if w.is_white() and player_id == 1:
        return -1.0 * multiplier
    if w.is_black() and player_id == 0:
        return -1.0 * multiplier
        
    return 0.0

fun get_num_players() -> Int:
    return 2

fun fuzz(Vector<Byte> input):
    if input.size() == 0:
        return
    let state = play()
    let action: AnyGameAction
    parse_and_execute(state, action, input)
