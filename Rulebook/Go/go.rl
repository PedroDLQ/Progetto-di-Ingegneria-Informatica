# Go implementation in Rulebook
# RUN: rlc %s -o %t -i %stdlib --shared

import serialization.print
import collections.vector
import machine_learning
import action
import bounded_arg

# Constants
const kSize = 19
const kNumPlayer = 2
const kKomiPoints = 6 # 0.5 points implicitly considered for easier comparison

enum CrossState:
    Black:
        Byte to_char = 'B'
    White:
        Byte to_char = 'W'
    Empty:
        Byte to_char = '+'

    fun is_equal(CrossState other) -> Bool:
        return self.value == other.value
    
    fun opposite_color() -> CrossState:
        if self.is_equal(CrossState::Black):
            return CrossState::White
        
        return CrossState::Black

cls Coords: 
    Int x
    Int y 

    fun init(Int x, Int y) -> Coords:
        self.x = x
        self.y = y

        return self

cls Territory:
    Vector<Coords> coords
    Bool has_black_border
    Bool has_white_border 

cls Scores:
    Int black_score
    Int white_score
    
# Go checkboard representation
cls Board:
    CrossState[kSize][kSize] grid
    CrossState[kSize][kSize] prev_grid_state # For Ko rule checking
    BInt<0, 1> curr_player
    BInt<0, 2> pass_count
    Int black_stones
    Int white_stones

    # Constructor
    fun init():
        self.curr_player = 0 # Black (0) always first
        self.pass_count = 0
        self.black_stones = 0
        self.white_stones = 0 

        # Initialize empty board
        let i = 0
        while i < kSize:
            let j = 0
                while j < kSize:
                    self.grid[i][j] = CrossState::Empty
                    j = j + 1
            i = i + 1

        self.prev_grid_state = self.grid

    # Cloning trait
    fun clone() -> Board:
        let clone_board: Board

        clone_board.grid = self.grid
        clone_board.prev_grid_state = self.prev_grid_state
        clone_board.curr_player = self.curr_player
        clone_board.pass_count = self.pass_count
        clone_board.black_stones = self.black_stones
        clone_board.white_stones = self.white_stones

        return clone_board

    # Specified cross getter
    fun get_cross(Coords coords) -> CrossState:
        return self.grid[coords.x][coords.y]

    # Specified cross setter
    fun set_cross(Coords coords, CrossState stone):
        self.grid[coords.x][coords.y] = stone 

    # Find neghboring stones
    fun find_neighbors(Coords coords) -> Vector<Coords>:
        let neighbors: Vector<Coords>

        let pos: Coords

        # Check all 4 directions
        if coords.y > 0: 
            neighbors.append(pos.init(coords.x, coords.y - 1))
        if coords.y < kSize - 1:
            neighbors.append(pos.init(coords.x, coords.y + 1))
        if coords.x > 0:
            neighbors.append(pos.init(coords.x - 1, coords.y))    
        if coords.x < kSize - 1:
            neighbors.append(pos.init(coords.x + 1, coords.y))

        return neighbors

    # Find connected group of stones with BFS/DFS
    fun find_group(Coords coords, CrossState color, Bool[kSize][kSize] visited, Vector<Coords> group):   
        # Out of Bounds
        if coords.x < 0 or coords.x >= kSize or coords.y < 0 or coords.y >= kSize:
            return 

        # Already visited
        if visited[coords.x][coords.y]:
            return         

        # Different Color
        if !self.grid[coords.x][coords.y].is_equal(color):
            return

        # Mark visited and add to group
        visited[coords.x][coords.y] = true
        group.append(coords)

        let pos: Coords

        # Recursive calls
        self.find_group(pos.init(coords.x, coords.y - 1), color, visited, group)
        self.find_group(pos.init(coords.x, coords.y + 1), color, visited, group)
        self.find_group(pos.init(coords.x - 1, coords.y), color, visited, group)
        self.find_group(pos.init(coords.x + 1, coords.y), color, visited, group)
        
    # Group of stone helper function
    fun get_group(Coords coords) -> Vector<Coords>:
        let visited: Bool[kSize][kSize]

        let group: Vector<Coords>

        let color = self.grid[coords.x][coords.y]
        if color.is_equal(CrossState::Empty):
            return group

        self.find_group(coords, color, visited, group)  

        return group

    # Count liberties of a group (Uniquely counted)
    fun count_liberties(Vector<Coords> group) -> Int:
        let liberty_map: Bool[kSize][kSize]
        let liberties = 0

        let i = 0
        while i < group.size():
            let stone = group.get(i)

            let neighbors = self.find_neighbors(stone)

            let j = 0
            while j < neighbors.size():
                let n = neighbors.get(j)

                if self.grid[n.x][n.y].is_equal(CrossState::Empty):
                    if !liberty_map[n.x][n.y]:
                        liberty_map[n.x][n.y] = true
                        liberties = liberties + 1
                
                j = j + 1
            i = i + 1

        return liberties

    # Remove a group of stones from the board (capture)
    fun remove_group(Vector<Coords> group):
        # Empty check
        if group.size() == 0:
            return

        let color = self.get_cross(group.back())

        let i = 0
        while i < group.size():
            let stone = group.get(i)
            self.grid[stone.x][stone.y] = CrossState::Empty

            i = i + 1

        # Update stone count for scoring
        if color.is_equal(CrossState::Black):
            self.black_stones = self.black_stones - group.size()   
        else: 
            self.white_stones = self.white_stones - group.size()

    # Capture function
    fun capture_group(Coords coords):
        let placed_color = self.grid[coords.x][coords.y]
        let enemy_color = placed_color.opposite_color()
        let neighbors = self.find_neighbors(coords)
        let already_checked: Bool[kSize][kSize]

        let i = 0
        while i < neighbors.size():
            let n = neighbors.get(i)

            # Only inspect enemy groups
            if self.grid[n.x][n.y].is_equal(enemy_color):
            
                # Avoid double check
                let group = self.get_group(n)
                if !already_checked[n.x][n.y]:

                    let gr = 0
                    while gr < group.size():
                        let stone = group.get(gr)
                        already_checked[stone.x][stone.y] = true
                        gr = gr + 1

                if self.count_liberties(group) == 0:
                    self.remove_group(group)

            i = i + 1

    # Attempt a move
    fun try_move(Coords coords) -> Bool:
        # Check if already occupied or out of bounds
        if coords.x < 0 or coords.x >= kSize or coords.y < 0 or coords.y >= kSize:
            return false
        if !self.grid[coords.x][coords.y].is_equal(CrossState::Empty):
            return false 

        # Clone board and simulate placement
        let sim_board = self.clone()

        sim_board.set_cross(coords, sim_board.player_to_stone(sim_board.curr_player))

        # Check for captures
        sim_board.capture_group(coords)

        # Check for suicide move
        let group = sim_board.get_group(coords)
        if sim_board.count_liberties(group) == 0:
            return false

        # Check for Ko exception
        if self.is_grid_equal(sim_board.grid):
            return false

        # Update previous state board and increment stone counter
        sim_board.prev_grid_state = self.grid
        if sim_board.curr_player.value == 0:
            sim_board.black_stones = sim_board.black_stones + 1
        else:
            sim_board.white_stones = sim_board.white_stones + 1

        # Substitute board with valid simulated one
        self = sim_board
        return true

    # Grid comparing function for Ko rule
    fun is_grid_equal(CrossState[kSize][kSize] other) -> Bool:
        let i = 0
        while i < kSize:
            let j = 0
            while j < kSize:
                if !self.prev_grid_state[i][j].is_equal(other[i][j]):
                    return false
                j = j + 1
            i = i + 1
        return true

    # Map player to place stone
    fun player_to_stone(BInt<0, 1> player) -> CrossState:
        if player.value == 0:
            return CrossState::Black
        return CrossState::White

    # Print the board state
    fun to_string() -> String:
        let result = ""s
        let i = 0
        while i < kSize:
            let j = 0
            while j < kSize:
                let stone = ""s
                stone 
                result.append(self.grid[i][j].to_char())
                j = j + 1
            result = result + "\n"s
            i = i + 1
        return result

    # Increase pass counter
    fun turn_passed():
        self.pass_count = self.pass_count + 1
    
    # Reset pass counter
    fun reset_pass_counter():
        self.pass_count = 0

    # Switch to next player
    fun next_player():
        if self.curr_player.value == 0:
            self.curr_player.value = 1
        else: 
            self.curr_player.value = 0

    # Collect territories for scoring purposes (CHINESE RULES)
    fun collect_territories(Coords coords, Bool[kSize][kSize] visited, Territory terr): 
        # Out of bounds check
        if coords.x < 0 or coords.x >= kSize or coords.y < 0 or coords.y >= kSize:
            return
        
        # Already visited check
        if visited[coords.x][coords.y]:
            return
        
        let curr_cross = self.grid[coords.x][coords.y]

        # Bordering stone
        if curr_cross.is_equal(CrossState::Black):
            terr.has_black_border = true
            return
        else if curr_cross.is_equal(CrossState::White):
            terr.has_white_border = true
            return

        # Empty space
        visited[coords.x][coords.y] = true
        terr.coords.append(coords)

        let pos: Coords
        # Recursive calls
        self.collect_territories(pos.init(coords.x, coords.y - 1), visited, terr)
        self.collect_territories(pos.init(coords.x, coords.y + 1), visited, terr)
        self.collect_territories(pos.init(coords.x - 1, coords.y), visited, terr)
        self.collect_territories(pos.init(coords.x + 1, coords.y), visited, terr)

    # Count territories for scroing purposes (CHINESE RULES) 
    fun count_territories() -> Scores:
        let visited: Bool[kSize][kSize]
        let scores: Scores
        
        let black_territory = 0
        let white_territory = 0

        let pos: Coords
        let i = 0
        while i < kSize:
            let j = 0
            while j < kSize:
                if self.grid[i][j].is_equal(CrossState::Empty) and !visited[i][j]:
                    let terr: Territory

                    self.collect_territories(pos.init(i, j), visited, terr)
                    let terr_size = terr.coords.size()

                    # Black territory
                    if terr.has_black_border and !terr.has_white_border:
                        black_territory = black_territory + terr_size

                    # White territory
                    if terr.has_white_border and !terr.has_black_border:
                        white_territory = white_territory + terr_size # Else: Dame (Neutral)

                j = j + 1
            i = i + 1

        # Store territory points for final score
        scores.black_score = black_territory
        scores.white_score = white_territory
        return scores

    # End game winner calcuation:
    fun get_winner() -> CrossState:
        # Add Komi points to white score
        let white_score = self.white_stones + kKomiPoints
        let black_score = self.black_stones

        # Add territory points
        let territory_scores = self.count_territories()
        white_score = white_score + territory_scores.white_score
        black_score = black_score + territory_scores.black_score
    
        if black_score > white_score:
            return CrossState::Black
        else if white_score >= black_score: # 0.5 komi point gives white the edge in ties
            return CrossState::White

        return CrossState::Empty # Should never happen

# Main Go implementation
@classes
act play() -> Game:
    frm board: Board
    frm winner: CrossState

    while board.pass_count.value < 2:
        actions:
            act pass_turn()
                board.turn_passed()
                board.next_player()

            act place_stone(Coords coords) { board.try_move(coords) }
                # Move already set in try_move(), only reset pass counter
                board.reset_pass_counter()
                board.next_player()

    # End game
    winner = board.get_winner()
    return

# Function for machine learning components to display the game state
fun pretty_print(Game game):
    print(game.board.to_string())

    print(game.board.player_to_stone(game.board.curr_player).to_char())

# Return current player or special value if game is over
fun get_current_player(Game g) -> Int:
    if g.is_done():
        return -4
    return g.board.curr_player.value

# Score disambiguation function for ML training
fun score(Game g, Int player_id) -> Float:
    if !g.is_done():
        return 0.0

    let winner = g.board.get_winner() 
    if winner.is_equal(CrossState::Black) and player_id == 0:
        return 1.0
    else if winner.is_equal(CrossState::White) and player_id == 1:
        return 1.0
    
    return -1.0

# Return number of players
fun get_num_players() -> Int:
    return 2

# Function for fuzzing
fun fuzz(Vector<Byte> input):
    if input.size() == 0:
        return 
    let state = play()
    let action: AnyGameAction
    parse_and_execute(state, action, input)