# Unit tests for Backgammon implementation in Rulebook
# RUN: rlc %s -o %t -i %stdlib --shared

import serialization.print
import collections.vector

# Helpers
fun make_move(Player p, Int from_pt, Int to_pt) -> Move:
    let m: Move
    m.init(p, from_pt, to_pt)
    return m

fun make_roll(Int v) -> diceRoll:
    let r: diceRoll
    r.value = v
    return r

# Fully-initialised board with the standard starting position.
fun fresh_board() -> Board:
    let b: Board
    b.init()
    return b

# Board with every point cleared and all counters zeroed.
# Use this when a test needs to place checkers manually.
fun empty_board() -> Board:
    let b: Board
    b.init()
    let i = 0
    while i < 24:
        b.points[i].owner = Player::Empty
        b.points[i].count = 0
        i = i + 1
    b.bar_white = 0
    b.bar_black = 0
    b.off_white = 0
    b.off_black = 0
    return b

# Place n checkers of colour p at internal index idx.
fun place(Board b, Int idx, Player p, Int n):
    b.points[idx].owner = p
    b.points[idx].count = n

# Fill a player's home board with exactly 15 checkers spread across 5 points.
fun fill_home(Board b, Player p):
    if p.is_white():
        let i = 18
        while i < 23:
            b.points[i].owner = Player::White
            b.points[i].count = 3
            i = i + 1
    else:
        let i = 0
        while i < 5:
            b.points[i].owner = Player::Black
            b.points[i].count = 3
            i = i + 1


# Player tests
fun test_player_is_equal_same_values() -> Bool:
    assert(Player::White.is_equal(Player::White), "White == White")
    assert(Player::Black.is_equal(Player::Black), "Black == Black")
    assert(Player::Empty.is_equal(Player::Empty), "Empty == Empty")
    return true

fun test_player_is_equal_cross_values() -> Bool:
    assert(!Player::White.is_equal(Player::Black), "White != Black")
    assert(!Player::White.is_equal(Player::Empty), "White != Empty")
    assert(!Player::Black.is_equal(Player::Empty), "Black != Empty")
    return true

fun test_player_predicates_white() -> Bool:
    assert(Player::White.is_white(),  "is_white true  for White")
    assert(!Player::White.is_black(), "is_black false for White")
    assert(!Player::White.is_empty(), "is_empty false for White")
    return true

fun test_player_predicates_black() -> Bool:
    assert(!Player::Black.is_white(), "is_white false for Black")
    assert(Player::Black.is_black(),  "is_black true  for Black")
    assert(!Player::Black.is_empty(), "is_empty false for Black")
    return true

fun test_player_predicates_empty() -> Bool:
    assert(!Player::Empty.is_white(), "is_white false for Empty")
    assert(!Player::Empty.is_black(), "is_black false for Empty")
    assert(Player::Empty.is_empty(),  "is_empty true  for Empty")
    return true

fun test_player_opponent_white() -> Bool:
    assert(Player::White.opponent().is_equal(Player::Black), "opponent of White is Black")
    return true

fun test_player_opponent_black() -> Bool:
    assert(Player::Black.opponent().is_equal(Player::White), "opponent of Black is White")
    return true

fun test_player_opponent_empty() -> Bool:
    assert(Player::Empty.opponent().is_equal(Player::Empty), "opponent of Empty is Empty")
    return true


# human_to_idx
fun test_human_to_idx_white_point_1() -> Bool:
    assert(human_to_idx(1, false) == 0, "White point 1 -> idx 0")
    return true

fun test_human_to_idx_white_point_24() -> Bool:
    assert(human_to_idx(24, false) == 23, "White point 24 -> idx 23")
    return true

fun test_human_to_idx_white_midpoint() -> Bool:
    assert(human_to_idx(12, false) == 11, "White point 12 -> idx 11")
    assert(human_to_idx(13, false) == 12, "White point 13 -> idx 12")
    return true

fun test_human_to_idx_black_point_1() -> Bool:
    assert(human_to_idx(1, true) == 23, "Black point 1 -> idx 23")
    return true

fun test_human_to_idx_black_point_24() -> Bool:
    assert(human_to_idx(24, true) == 0, "Black point 24 -> idx 0")
    return true

fun test_human_to_idx_black_point_6() -> Bool:
    # Black point 6 -> idx 18, which is Black's home-board entry boundary
    assert(human_to_idx(6, true) == 18, "Black point 6 -> idx 18")
    return true

fun test_human_to_idx_sentinel_bar() -> Bool:
    assert(human_to_idx(kBarSrc, false) == kBarInternal, "White kBarSrc -> kBarInternal")
    assert(human_to_idx(kBarSrc, true)  == kBarInternal, "Black kBarSrc -> kBarInternal")
    return true

fun test_human_to_idx_sentinel_bearoff() -> Bool:
    assert(human_to_idx(kBearOff, false) == kOffInternal, "White kBearOff -> kOffInternal")
    assert(human_to_idx(kBearOff, true)  == kOffInternal, "Black kBearOff -> kOffInternal")
    return true

# Mirror symmetry: White point N and Black point (25-N) must map to the same idx.
fun test_human_to_idx_mirror_symmetry() -> Bool:
    assert(human_to_idx(7, false) == human_to_idx(18, true),
           "White pt 7 == Black pt 18 (mirror symmetry)")
    assert(human_to_idx(1, false) == human_to_idx(24, true),
           "White pt 1 == Black pt 24 (mirror symmetry boundary)")
    return true

# Move - to_internal
fun test_move_to_internal_white_normal() -> Bool:
    let m = make_move(Player::White, 6, 11)
    m.to_internal()
    assert(m.from_point == 5,  "White from pt 6  -> idx 5")
    assert(m.to_point   == 10, "White to   pt 11 -> idx 10")
    return true

fun test_move_to_internal_black_normal() -> Bool:
    # Black pt 6 -> idx 18, Black pt 10 -> idx 14
    let m = make_move(Player::Black, 6, 10)
    m.to_internal()
    assert(m.from_point == 18, "Black from pt 6  -> idx 18")
    assert(m.to_point   == 14, "Black to   pt 10 -> idx 14")
    return true

fun test_move_to_internal_white_sentinels() -> Bool:
    let m = make_move(Player::White, kBarSrc, kBearOff)
    m.to_internal()
    assert(m.from_point == kBarInternal, "White kBarSrc  -> kBarInternal")
    assert(m.to_point   == kOffInternal, "White kBearOff -> kOffInternal")
    return true

fun test_move_to_internal_black_sentinels() -> Bool:
    let m = make_move(Player::Black, kBarSrc, kBearOff)
    m.to_internal()
    assert(m.from_point == kBarInternal, "Black kBarSrc  -> kBarInternal")
    assert(m.to_point   == kOffInternal, "Black kBearOff -> kOffInternal")
    return true

fun test_move_to_internal_white_boundary_points() -> Bool:
    let m = make_move(Player::White, 1, 24)
    m.to_internal()
    assert(m.from_point == 0,  "White pt 1  -> idx 0  (low boundary)")
    assert(m.to_point   == 23, "White pt 24 -> idx 23 (high boundary)")
    return true

fun test_move_to_internal_black_boundary_points() -> Bool:
    let m = make_move(Player::Black, 1, 24)
    m.to_internal()
    assert(m.from_point == 23, "Black pt 1  -> idx 23 (high boundary)")
    assert(m.to_point   == 0,  "Black pt 24 -> idx 0  (low boundary)")
    return true


# Move - human_range_ok
fun test_human_range_ok_valid_normal() -> Bool:
    let m = make_move(Player::White, 3, 8)
    assert(m.human_range_ok(make_roll(5)), "White 3->8 roll 5 passes range check")
    return true

fun test_human_range_ok_wrong_distance_normal() -> Bool:
    let m = make_move(Player::White, 3, 9)
    assert(!m.human_range_ok(make_roll(5)), "3->9 roll 5 fails (distance 6 ≠ 5)")
    return true

fun test_human_range_ok_from_too_large() -> Bool:
    let m = make_move(Player::White, 25, 6)
    assert(!m.human_range_ok(make_roll(1)), "from_point 25 is out of range")
    return true

fun test_human_range_ok_from_negative() -> Bool:
    let m = make_move(Player::White, -1, 5)
    assert(!m.human_range_ok(make_roll(1)), "from_point -1 is out of range")
    return true

fun test_human_range_ok_to_zero() -> Bool:
    # to_point must be >= 1
    let m = make_move(Player::White, 3, 0)
    assert(!m.human_range_ok(make_roll(3)), "to_point 0 fails range check")
    return true

fun test_human_range_ok_to_too_large() -> Bool:
    let m = make_move(Player::White, 22, 26)
    assert(!m.human_range_ok(make_roll(4)), "to_point 26 fails range check")
    return true

fun test_human_range_ok_bar_entry_correct_die() -> Bool:
    let m = make_move(Player::White, kBarSrc, 5)
    assert(m.human_range_ok(make_roll(5)), "bar entry pt 5 roll 5 passes")
    return true

fun test_human_range_ok_bar_entry_wrong_die() -> Bool:
    let m = make_move(Player::White, kBarSrc, 5)
    assert(!m.human_range_ok(make_roll(3)), "bar entry pt 5 roll 3 fails (5 ≠ 3)")
    return true

fun test_human_range_ok_bearoff_exact() -> Bool:
    # from=23, to=25: distance = 25-23 = 2 <= roll 2 -> passes
    let m = make_move(Player::White, 23, kBearOff)
    assert(m.human_range_ok(make_roll(2)), "exact bear-off from 23 roll 2 passes")
    return true

fun test_human_range_ok_bearoff_small_excess_passes() -> Bool:
    # from=22, to=25: distance = 3 <= roll 4 -> passes range check
    # (can_bearoff_from will determine whether excess is actually legal)
    let m = make_move(Player::White, 22, kBearOff)
    assert(m.human_range_ok(make_roll(4)),
           "small excess bear-off (dist 3, roll 4) passes range pre-filter")
    return true

fun test_human_range_ok_bearoff_large_overshoot_rejected() -> Bool:
    # from=19, to=25: distance = 6 > roll 4 -> rejected by range pre-filter
    let m = make_move(Player::White, 19, kBearOff)
    assert(!m.human_range_ok(make_roll(4)),
           "large overshoot bear-off (dist 6, roll 4) rejected by range check")
    return true


# Board - init
fun test_board_init_white_positions_and_counts() -> Bool:
    let b = fresh_board()
    assert(b.points[0].owner.is_white()  and b.points[0].count.value  == 2, "2W at idx 0")
    assert(b.points[11].owner.is_white() and b.points[11].count.value == 5, "5W at idx 11")
    assert(b.points[16].owner.is_white() and b.points[16].count.value == 3, "3W at idx 16")
    assert(b.points[18].owner.is_white() and b.points[18].count.value == 5, "5W at idx 18")
    return true

fun test_board_init_black_positions_and_counts() -> Bool:
    let b = fresh_board()
    assert(b.points[5].owner.is_black()  and b.points[5].count.value  == 5, "5B at idx 5")
    assert(b.points[7].owner.is_black()  and b.points[7].count.value  == 3, "3B at idx 7")
    assert(b.points[12].owner.is_black() and b.points[12].count.value == 5, "5B at idx 12")
    assert(b.points[23].owner.is_black() and b.points[23].count.value == 2, "2B at idx 23")
    return true

fun test_board_init_empty_points() -> Bool:
    let b = fresh_board()
    assert(b.points[1].owner.is_empty(),  "idx 1  starts empty")
    assert(b.points[6].owner.is_empty(),  "idx 6  starts empty")
    assert(b.points[20].owner.is_empty(), "idx 20 starts empty")
    return true

fun test_board_init_counters_all_zero() -> Bool:
    let b = fresh_board()
    assert(b.bar_white.value == 0, "bar_white starts at 0")
    assert(b.bar_black.value == 0, "bar_black starts at 0")
    assert(b.off_white.value == 0, "off_white starts at 0")
    assert(b.off_black.value == 0, "off_black starts at 0")
    return true

fun test_board_init_total_white_15() -> Bool:
    let b = fresh_board()
    let total = 0
    let i = 0
    while i < 24:
        if b.points[i].owner.is_white():
            total = total + b.points[i].count.value
        i = i + 1
    assert(total == kTotalChips, "total White checkers on board == 15")
    return true

fun test_board_init_total_black_15() -> Bool:
    let b = fresh_board()
    let total = 0
    let i = 0
    while i < 24:
        if b.points[i].owner.is_black():
            total = total + b.points[i].count.value
        i = i + 1
    assert(total == kTotalChips, "total Black checkers on board == 15")
    return true


# Board - clone
fun test_clone_is_deep_copy() -> Bool:
    let b = fresh_board()
    let c = b.clone()
    c.points[0].count = 0
    c.points[0].owner = Player::Empty
    assert(b.points[0].count.value == 2,  "original count unchanged after clone mutation")
    assert(b.points[0].owner.is_white(),  "original owner unchanged after clone mutation")
    return true

fun test_clone_copies_bar_and_off() -> Bool:
    let b = empty_board()
    b.bar_white = 3
    b.bar_black = 1
    b.off_white = 7
    b.off_black = 4
    let c = b.clone()
    assert(c.bar_white.value == 3, "clone copies bar_white")
    assert(c.bar_black.value == 1, "clone copies bar_black")
    assert(c.off_white.value == 7, "clone copies off_white")
    assert(c.off_black.value == 4, "clone copies off_black")
    return true

fun test_clone_copies_curr_player() -> Bool:
    let b = fresh_board()
    b.curr_player = Player::Black
    let c = b.clone()
    assert(c.curr_player.is_black(), "clone copies curr_player")
    return true

fun test_clone_mutation_does_not_affect_original_bar() -> Bool:
    let b = empty_board()
    b.bar_white = 2
    let c = b.clone()
    c.bar_white = 0
    assert(b.bar_white.value == 2,
           "mutating clone's bar_white does not affect original")
    return true


# Board - next_player
fun test_next_player_white_to_black() -> Bool:
    let b = fresh_board()
    b.curr_player = Player::White
    b.next_player()
    assert(b.curr_player.is_black(), "White -> Black")
    return true

fun test_next_player_black_to_white() -> Bool:
    let b = fresh_board()
    b.curr_player = Player::Black
    b.next_player()
    assert(b.curr_player.is_white(), "Black -> White")
    return true

fun test_next_player_double_toggle() -> Bool:
    let b = fresh_board()
    b.curr_player = Player::White
    b.next_player()
    b.next_player()
    assert(b.curr_player.is_white(), "double toggle returns to White")
    return true


# Board - bar / off queries
fun test_bar_count_white() -> Bool:
    let b = empty_board()
    b.bar_white = 3
    assert(b.bar_count(Player::White) == 3, "bar_count White == 3")
    return true

fun test_bar_count_black() -> Bool:
    let b = empty_board()
    b.bar_black = 2
    assert(b.bar_count(Player::Black) == 2, "bar_count Black == 2")
    return true

fun test_has_on_bar_true_white() -> Bool:
    let b = empty_board()
    b.bar_white = 1
    assert(b.has_on_bar(Player::White), "has_on_bar true when bar_white > 0")
    return true

fun test_has_on_bar_false_white() -> Bool:
    let b = empty_board()
    assert(!b.has_on_bar(Player::White), "has_on_bar false when bar_white == 0")
    return true

fun test_has_on_bar_true_black() -> Bool:
    let b = empty_board()
    b.bar_black = 2
    assert(b.has_on_bar(Player::Black), "has_on_bar true when bar_black > 0")
    return true

fun test_has_on_bar_false_black() -> Bool:
    let b = empty_board()
    assert(!b.has_on_bar(Player::Black), "has_on_bar false when bar_black == 0")
    return true

fun test_off_count_white() -> Bool:
    let b = empty_board()
    b.off_white = 9
    assert(b.off_count(Player::White) == 9, "off_count White == 9")
    return true

fun test_off_count_black() -> Bool:
    let b = empty_board()
    b.off_black = 6
    assert(b.off_count(Player::Black) == 6, "off_count Black == 6")
    return true


# Board - checkers_home_and_off / is_all_in_home
fun test_checkers_home_and_off_white_initial() -> Bool:
    # Fresh board: White has exactly 5 checkers in home (idx 18-23); off=0.
    let b = fresh_board()
    assert(b.checkers_home_and_off(Player::White) == 5,
           "White starts with 5 in home+off")
    return true

fun test_checkers_home_and_off_black_initial() -> Bool:
    # Fresh board: Black has exactly 5 checkers in home (idx 0-5); off=0.
    let b = fresh_board()
    assert(b.checkers_home_and_off(Player::Black) == 5,
           "Black starts with 5 in home+off")
    return true

fun test_is_all_in_home_false_initially() -> Bool:
    let b = fresh_board()
    assert(!b.is_all_in_home(Player::White), "White not all in home at start")
    assert(!b.is_all_in_home(Player::Black), "Black not all in home at start")
    return true

fun test_is_all_in_home_true_white_all_home() -> Bool:
    let b = empty_board()
    fill_home(b, Player::White)
    assert(b.checkers_home_and_off(Player::White) == 15,
           "checkers_home_and_off counts all 15 when home is full")
    assert(b.is_all_in_home(Player::White),
           "is_all_in_home true when 15 checkers in home")
    return true

fun test_is_all_in_home_true_black_all_home() -> Bool:
    let b = empty_board()
    fill_home(b, Player::Black)
    assert(b.is_all_in_home(Player::Black),
           "Black is_all_in_home true with 15 in idx 0-4")
    return true

fun test_is_all_in_home_counts_borne_off_white() -> Bool:
    let b = empty_board()
    # 10 in home board + 5 already off = 15 -> all in home
    place(b, 18, Player::White, 10)
    b.off_white = 5
    assert(b.is_all_in_home(Player::White),
           "borne-off checkers count toward the 15 total (White)")
    return true

fun test_is_all_in_home_counts_borne_off_black() -> Bool:
    let b = empty_board()
    place(b, 1, Player::Black, 8)
    b.off_black = 7
    assert(b.is_all_in_home(Player::Black),
           "borne-off checkers count toward the 15 total (Black)")
    return true

fun test_is_all_in_home_false_one_outside() -> Bool:
    let b = empty_board()
    fill_home(b, Player::White)
    # Swap one checker from home to outside
    b.points[18].count = 2
    place(b, 10, Player::White, 1)
    assert(!b.is_all_in_home(Player::White),
           "not all in home when one checker is outside the home board")
    return true


# Board - is_blocked
fun test_is_blocked_empty_point() -> Bool:
    let b = empty_board()
    assert(!b.is_blocked(10, Player::White), "empty point is not blocked")
    return true

fun test_is_blocked_own_checker_not_blocked() -> Bool:
    let b = empty_board()
    place(b, 10, Player::White, 3)
    assert(!b.is_blocked(10, Player::White), "own point never blocks self")
    return true

fun test_is_blocked_enemy_one_checker_blot() -> Bool:
    let b = empty_board()
    place(b, 10, Player::Black, 1)
    assert(!b.is_blocked(10, Player::White), "single enemy = blot, not blocked")
    return true

fun test_is_blocked_enemy_two_checkers() -> Bool:
    let b = empty_board()
    place(b, 10, Player::Black, 2)
    assert(b.is_blocked(10, Player::White), "two enemy checkers block the point")
    return true

fun test_is_blocked_enemy_five_checkers() -> Bool:
    let b = empty_board()
    place(b, 10, Player::Black, 5)
    assert(b.is_blocked(10, Player::White), "five enemy checkers block the point")
    return true

fun test_is_blocked_out_of_range_low() -> Bool:
    let b = empty_board()
    assert(!b.is_blocked(-1, Player::White), "idx -1 out of range -> not blocked")
    return true

fun test_is_blocked_out_of_range_high() -> Bool:
    let b = empty_board()
    assert(!b.is_blocked(24, Player::White), "idx 24 out of range -> not blocked")
    return true


# Board - get_winner / is_game_over
fun test_get_winner_none_at_start() -> Bool:
    let b = fresh_board()
    assert(b.get_winner().is_empty(), "no winner at game start")
    return true

fun test_get_winner_white_15_off() -> Bool:
    let b = empty_board()
    b.off_white = 15
    assert(b.get_winner().is_white(), "White wins when off_white == 15")
    return true

fun test_get_winner_black_15_off() -> Bool:
    let b = empty_board()
    b.off_black = 15
    assert(b.get_winner().is_black(), "Black wins when off_black == 15")
    return true

fun test_get_winner_14_off_not_enough() -> Bool:
    let b = empty_board()
    b.off_white = 14
    assert(b.get_winner().is_empty(), "14 off is not a win")
    return true

fun test_is_game_over_false_at_start() -> Bool:
    let b = fresh_board()
    assert(!b.is_game_over(), "game not over at start")
    return true

fun test_is_game_over_true_when_winner() -> Bool:
    let b = empty_board()
    b.off_black = 15
    assert(b.is_game_over(), "is_game_over true when Black has 15 off")
    return true


# Board - get_score_multiplier
fun test_score_multiplier_single_win_white() -> Bool:
    let b = empty_board()
    b.off_white = 15
    b.off_black = 1    # loser bore off at least one checker
    assert(b.get_score_multiplier(Player::White) == 1.0,
           "single win: loser bore off ≥1 -> 1.0")
    return true

fun test_score_multiplier_gammon_white() -> Bool:
    let b = empty_board()
    b.off_white = 15
    b.off_black = 0    # loser bore off nothing; not on bar, not in winner's home
    assert(b.get_score_multiplier(Player::White) == 2.0,
           "gammon -> 2.0")
    return true

fun test_score_multiplier_backgammon_via_bar_white() -> Bool:
    let b = empty_board()
    b.off_white = 15
    b.off_black = 0
    b.bar_black = 1    # loser has a checker on the bar
    assert(b.get_score_multiplier(Player::White) == 3.0,
           "backgammon via loser on bar -> 3.0")
    return true

fun test_score_multiplier_backgammon_via_home_board_white() -> Bool:
    let b = empty_board()
    b.off_white = 15
    b.off_black = 0
    # Black checker stranded inside White's home board (idx 18-23)
    place(b, 21, Player::Black, 1)
    assert(b.get_score_multiplier(Player::White) == 3.0,
           "backgammon via loser checker in winner's home -> 3.0")
    return true

fun test_score_multiplier_single_win_black() -> Bool:
    let b = empty_board()
    b.off_black = 15
    b.off_white = 3
    assert(b.get_score_multiplier(Player::Black) == 1.0,
           "Black single win -> 1.0")
    return true

fun test_score_multiplier_gammon_black() -> Bool:
    let b = empty_board()
    b.off_black = 15
    b.off_white = 0
    assert(b.get_score_multiplier(Player::Black) == 2.0,
           "Black gammon -> 2.0")
    return true

fun test_score_multiplier_backgammon_black_via_bar() -> Bool:
    let b = empty_board()
    b.off_black = 15
    b.off_white = 0
    b.bar_white = 2
    assert(b.get_score_multiplier(Player::Black) == 3.0,
           "Black backgammon via White on bar -> 3.0")
    return true

fun test_score_multiplier_backgammon_black_via_home() -> Bool:
    let b = empty_board()
    b.off_black = 15
    b.off_white = 0
    # White checker stranded in Black's home board (idx 0-5)
    place(b, 3, Player::White, 1)
    assert(b.get_score_multiplier(Player::Black) == 3.0,
           "Black backgammon via White checker in Black's home -> 3.0")
    return true

fun test_score_multiplier_empty_winner_returns_zero() -> Bool:
    let b = empty_board()
    assert(b.get_score_multiplier(Player::Empty) == 0.0,
           "Empty winner returns 0.0 (no game over yet)")
    return true

# Board - can_bearoff_from
fun test_bearoff_white_exact_roll_1() -> Bool:
    # roll=1 -> exact_idx=23
    let b = empty_board()
    place(b, 23, Player::White, 1)
    assert(b.can_bearoff_from(23, make_roll(1), Player::White),
           "White exact bear-off idx 23 roll 1")
    return true

fun test_bearoff_white_exact_roll_6() -> Bool:
    # roll=6 -> exact_idx=18
    let b = empty_board()
    place(b, 18, Player::White, 1)
    assert(b.can_bearoff_from(18, make_roll(6), Player::White),
           "White exact bear-off idx 18 roll 6")
    return true

fun test_bearoff_white_excess_no_higher_checker() -> Bool:
    # roll=4 -> exact_idx=20. Checker at idx 22 (from_idx > exact_idx)
    # No White at idx 23 -> excess allowed.
    let b = empty_board()
    place(b, 22, Player::White, 1)
    assert(b.can_bearoff_from(22, make_roll(4), Player::White),
           "White excess bear-off allowed when nothing above from_idx")
    return true

fun test_bearoff_white_excess_blocked_by_higher_checker() -> Bool:
    # roll=4 -> exact_idx=20. Checker at idx 22 (from_idx)
    let b = empty_board()
    place(b, 22, Player::White, 1)
    place(b, 23, Player::White, 1)
    assert(!b.can_bearoff_from(22, make_roll(4), Player::White),
           "White excess blocked by checker at a higher index (closer to exit)")
    return true

fun test_bearoff_white_below_exact_idx_rejected() -> Bool:
    # roll=1 -> exact_idx=23. Checker at idx 20 (from_idx < exact_idx) -> rejected
    let b = empty_board()
    place(b, 20, Player::White, 1)
    assert(!b.can_bearoff_from(20, make_roll(1), Player::White),
           "White rejected when from_idx < exact_idx (not yet at exact point)")
    return true

fun test_bearoff_white_roll_6_below_exact_rejected() -> Bool:
    # roll=6 -> exact_idx=18. Checker at idx 17 (from_idx < 18) -> rejected.
    let b = empty_board()
    place(b, 17, Player::White, 1)
    assert(!b.can_bearoff_from(17, make_roll(6), Player::White),
           "White idx 17 rejected with roll 6 (below exact_idx 18)")
    return true

# Black bears off below the low end (idx 0 = exit edge).
fun test_bearoff_black_exact_roll_1() -> Bool:
    # roll=1 -> exact_idx=0
    let b = empty_board()
    place(b, 0, Player::Black, 1)
    assert(b.can_bearoff_from(0, make_roll(1), Player::Black),
           "Black exact bear-off idx 0 roll 1")
    return true

fun test_bearoff_black_exact_roll_6() -> Bool:
    # roll=6 -> exact_idx=5
    let b = empty_board()
    place(b, 5, Player::Black, 1)
    assert(b.can_bearoff_from(5, make_roll(6), Player::Black),
           "Black exact bear-off idx 5 roll 6")
    return true

fun test_bearoff_black_excess_allowed() -> Bool:
    # roll=4 -> exact_idx=3. Checker at idx 1 (from_idx < exact_idx = closer to exit)
    let b = empty_board()
    place(b, 1, Player::Black, 1)
    assert(b.can_bearoff_from(1, make_roll(4), Player::Black),
           "Black excess bear-off allowed when nothing below from_idx")
    return true

fun test_bearoff_black_excess_blocked() -> Bool:
    # roll=4 -> exact_idx=3. Checker at idx 1 (from_idx)
    let b = empty_board()
    place(b, 1, Player::Black, 1)
    place(b, 0, Player::Black, 1)
    assert(!b.can_bearoff_from(1, make_roll(4), Player::Black),
           "Black excess blocked by checker at idx 0 (closer to exit)")
    return true

fun test_bearoff_black_above_exact_rejected() -> Bool:
    # roll=2 -> exact_idx=1. Checker at idx 3 (from_idx > exact_idx) -> rejected.
    let b = empty_board()
    place(b, 3, Player::Black, 1)
    assert(!b.can_bearoff_from(3, make_roll(2), Player::Black),
           "Black rejected when from_idx > exact_idx (checker further from exit)")
    return true


# Board - is_valid_move
fun test_valid_move_normal_white() -> Bool:
    let b = empty_board()
    place(b, 5, Player::White, 1)
    assert(b.is_valid_move(make_move(Player::White, 6, 9), make_roll(3)),
           "White normal 6->9 roll 3 is valid")
    return true

fun test_valid_move_normal_black() -> Bool:
    # Black pt 6 -> idx 18; Black pt 9 -> idx 15; roll=3.
    let b = empty_board()
    place(b, 18, Player::Black, 1)
    assert(b.is_valid_move(make_move(Player::Black, 6, 9), make_roll(3)),
           "Black normal 6->9 roll 3 is valid")
    return true

fun test_valid_move_wrong_die_distance() -> Bool:
    let b = empty_board()
    place(b, 5, Player::White, 1)
    assert(!b.is_valid_move(make_move(Player::White, 6, 10), make_roll(3)),
           "White 6->10 roll 3 rejected (distance 4 ≠ 3)")
    return true

fun test_valid_move_blocked_destination() -> Bool:
    let b = empty_board()
    place(b, 5, Player::White, 1)
    place(b, 8, Player::Black, 2)   # blocked
    assert(!b.is_valid_move(make_move(Player::White, 6, 9), make_roll(3)),
           "move to blocked point rejected")
    return true

fun test_valid_move_hit_blot_allowed() -> Bool:
    let b = empty_board()
    place(b, 5, Player::White, 1)
    place(b, 8, Player::Black, 1)   # single enemy = blot
    assert(b.is_valid_move(make_move(Player::White, 6, 9), make_roll(3)),
           "landing on a blot is allowed")
    return true

fun test_valid_move_empty_source_rejected() -> Bool:
    let b = empty_board()
    assert(!b.is_valid_move(make_move(Player::White, 6, 9), make_roll(3)),
           "move from empty point rejected")
    return true

fun test_valid_move_wrong_owner_rejected() -> Bool:
    let b = empty_board()
    place(b, 5, Player::Black, 1)
    assert(!b.is_valid_move(make_move(Player::White, 6, 9), make_roll(3)),
           "White cannot move Black's checker")
    return true

fun test_valid_move_bar_entry_open() -> Bool:
    let b = empty_board()
    b.bar_white = 1
    assert(b.is_valid_move(make_move(Player::White, kBarSrc, 3), make_roll(3)),
           "White bar entry to open pt 3 roll 3 is valid")
    return true

fun test_valid_move_bar_entry_blocked() -> Bool:
    let b = empty_board()
    b.bar_white = 1
    place(b, 2, Player::Black, 2)   # pt 3 blocked
    assert(!b.is_valid_move(make_move(Player::White, kBarSrc, 3), make_roll(3)),
           "White bar entry to blocked pt 3 rejected")
    return true

fun test_valid_move_bar_forces_entry_first() -> Bool:
    let b = empty_board()
    b.bar_white = 1
    place(b, 5, Player::White, 1)
    assert(!b.is_valid_move(make_move(Player::White, 6, 9), make_roll(3)),
           "cannot move normally while checker is on bar")
    return true

fun test_valid_move_bar_entry_wrong_point() -> Bool:
    # White on bar, roll=3 -> must enter at pt 3; trying pt 4 fails.
    let b = empty_board()
    b.bar_white = 1
    assert(!b.is_valid_move(make_move(Player::White, kBarSrc, 4), make_roll(3)),
           "bar entry to wrong point rejected")
    return true

fun test_valid_move_bearoff_white_exact() -> Bool:
    let b = empty_board()
    place(b, 23, Player::White, 15)   # all 15 in home
    assert(b.is_valid_move(make_move(Player::White, 24, kBearOff), make_roll(1)),
           "White exact bear-off from pt 24 roll 1 is valid")
    return true

fun test_valid_move_bearoff_requires_all_home() -> Bool:
    let b = empty_board()
    place(b, 23, Player::White, 14)
    place(b, 3,  Player::White, 1)   # one outside home
    assert(!b.is_valid_move(make_move(Player::White, 24, kBearOff), make_roll(1)),
           "bear-off rejected when a checker is outside the home board")
    return true

fun test_valid_move_bearoff_black_exact() -> Bool:
    # Black pt 24 (human) -> idx 0. roll=1 -> exact_idx=0. Match -> valid.
    let b = empty_board()
    fill_home(b, Player::Black)
    assert(b.is_valid_move(make_move(Player::Black, 24, kBearOff), make_roll(1)),
           "Black exact bear-off from pt 24 (idx 0) roll 1 is valid")
    return true


# Board - has_any_legal_move
fun test_has_any_legal_move_open_destination() -> Bool:
    let b = empty_board()
    place(b, 5, Player::White, 1)
    assert(b.has_any_legal_move(Player::White, make_roll(3)),
           "legal move exists: pt 6 -> pt 9 is open")
    return true

fun test_has_any_legal_move_all_blocked() -> Bool:
    # White at idx 0 (pt 1). Roll=3 -> only dest is idx 3 (pt 4), blocked.
    let b = empty_board()
    place(b, 0, Player::White, 1)
    place(b, 3, Player::Black, 2)
    assert(!b.has_any_legal_move(Player::White, make_roll(3)),
           "no legal move when only possible destination is blocked")
    return true

fun test_has_any_legal_move_bar_entry_open() -> Bool:
    let b = empty_board()
    b.bar_white = 1
    # Roll=4 -> entry at pt 4 (idx 3), empty
    assert(b.has_any_legal_move(Player::White, make_roll(4)),
           "bar entry legal when entry point is open")
    return true

fun test_has_any_legal_move_bar_entry_blocked() -> Bool:
    let b = empty_board()
    b.bar_white = 1
    place(b, 3, Player::Black, 2)   # entry point blocked
    assert(!b.has_any_legal_move(Player::White, make_roll(4)),
           "no legal move when bar entry is blocked")
    return true

fun test_has_any_legal_move_bearoff_qualifies() -> Bool:
    let b = empty_board()
    fill_home(b, Player::White)
    assert(b.has_any_legal_move(Player::White, make_roll(1)),
           "bear-off counts as a legal move when all checkers are home")
    return true

fun test_has_any_legal_move_multiple_sources_one_valid() -> Bool:
    let b = empty_board()
    place(b, 0, Player::White, 1)   # pt 1 -> dest pt 4 blocked
    place(b, 5, Player::White, 1)   # pt 6 -> dest pt 9 open
    place(b, 3, Player::Black, 2)   # block pt 4 (idx 3)
    assert(b.has_any_legal_move(Player::White, make_roll(3)),
           "has_any_legal_move true even when only one of two sources is playable")
    return true

# Board - can_play_sequence
fun test_can_play_sequence_both_dice_playable() -> Bool:
    let b = empty_board()
    # Two White checkers at idx 5 (pt 6).
    place(b, 5, Player::White, 2)
    assert(b.can_play_sequence(make_roll(3), make_roll(4), Player::White),
           "can play d1=3 then d2=4 when both destinations are open")
    return true

fun test_can_play_sequence_second_die_blocked_after_first() -> Bool:
    let b = empty_board()
    place(b, 5,  Player::White, 1)
    place(b, 12, Player::Black, 2)   # blocks idx 12 (d2=4 follow-up from idx 8)
    assert(!b.can_play_sequence(make_roll(3), make_roll(4), Player::White),
           "sequence fails when d2 destination is blocked after d1 is played")
    return true

fun test_can_play_sequence_bar_then_normal() -> Bool:
    let b = empty_board()
    b.bar_white = 1
    # d1=2 -> entry at idx 1 (pt 2) open. After entry, d2=3 -> idx 4 open.
    assert(b.can_play_sequence(make_roll(2), make_roll(3), Player::White),
           "bar entry then normal move is a valid sequence")
    return true

fun test_can_play_sequence_bar_entry_blocked() -> Bool:
    let b = empty_board()
    b.bar_white = 1
    place(b, 1, Player::Black, 2)   # blocks entry for d1=2
    assert(!b.can_play_sequence(make_roll(2), make_roll(3), Player::White),
           "sequence impossible when bar entry is blocked")
    return true

fun test_can_play_sequence_order_matters() -> Bool:
    # d_small=3 open; after that d_large=5 open.
    let b = empty_board()
    place(b, 5,  Player::White, 1)   # pt 6
    place(b, 10, Player::Black, 2)   # blocks pt 11 (idx 10 = pt 6 + 5)
    let d_small = make_roll(3)
    let d_large = make_roll(5)
    assert( b.can_play_sequence(d_small, d_large, Player::White),
            "small-then-large sequence works when only that order is legal")
    assert(!b.can_play_sequence(d_large, d_small, Player::White),
            "large-then-small fails when the large die's destination is blocked")
    return true


# Board - apply_move
fun test_apply_move_normal_decrements_source() -> Bool:
    let b = empty_board()
    place(b, 5, Player::White, 2)
    b.apply_move(make_move(Player::White, 6, 9))
    assert(b.points[5].count.value == 1, "source decremented by 1")
    return true

fun test_apply_move_normal_empties_source_on_last_checker() -> Bool:
    let b = empty_board()
    place(b, 5, Player::White, 1)
    b.apply_move(make_move(Player::White, 6, 9))
    assert(b.points[5].owner.is_empty(), "source cleared after last checker moves")
    assert(b.points[5].count.value == 0,  "source count == 0")
    return true

fun test_apply_move_normal_lands_at_destination() -> Bool:
    let b = empty_board()
    place(b, 5, Player::White, 1)
    b.apply_move(make_move(Player::White, 6, 9))
    assert(b.points[8].owner.is_white(), "destination owned by White")
    assert(b.points[8].count.value == 1, "destination count == 1")
    return true

fun test_apply_move_stacks_on_own_checker() -> Bool:
    let b = empty_board()
    place(b, 5, Player::White, 1)
    place(b, 8, Player::White, 2)
    b.apply_move(make_move(Player::White, 6, 9))
    assert(b.points[8].count.value == 3, "stacks on own existing checker")
    return true

fun test_apply_move_hits_blot_sends_to_bar() -> Bool:
    let b = empty_board()
    place(b, 5, Player::White, 1)
    place(b, 8, Player::Black, 1)   # blot
    b.apply_move(make_move(Player::White, 6, 9))
    assert(b.points[8].owner.is_white(),  "White lands on hit point")
    assert(b.points[8].count.value == 1,  "hit point count == 1")
    assert(b.bar_black.value == 1,        "Black blot sent to bar")
    return true

fun test_apply_move_hit_clears_blot_from_point() -> Bool:
    let b = empty_board()
    place(b, 5, Player::White, 1)
    place(b, 8, Player::Black, 1)
    b.apply_move(make_move(Player::White, 6, 9))
    assert(!b.points[8].owner.is_black(), "Black blot no longer at hit point")
    return true

fun test_apply_move_bearoff_increments_off_white() -> Bool:
    let b = empty_board()
    fill_home(b, Player::White)
    b.apply_move(make_move(Player::White, 24, kBearOff))
    assert(b.off_white.value == 1, "off_white incremented by bear-off")
    return true

fun test_apply_move_bearoff_empties_last_checker_wins() -> Bool:
    let b = empty_board()
    place(b, 23, Player::White, 1)
    b.off_white = 14
    b.apply_move(make_move(Player::White, 24, kBearOff))
    assert(b.points[23].owner.is_empty(), "source cleared after last checker borne off")
    assert(b.off_white.value == 15,       "off_white reaches 15 -> win condition")
    return true

fun test_apply_move_bar_entry_decrements_bar() -> Bool:
    let b = empty_board()
    b.bar_white = 3
    b.apply_move(make_move(Player::White, kBarSrc, 3))
    assert(b.bar_white.value == 2, "bar_white decremented after re-entry")
    return true

fun test_apply_move_bar_entry_places_checker() -> Bool:
    let b = empty_board()
    b.bar_white = 1
    b.apply_move(make_move(Player::White, kBarSrc, 3))
    assert(b.points[2].owner.is_white(), "re-entry point owned by White (idx 2 = pt 3)")
    assert(b.points[2].count.value == 1, "re-entry point count == 1")
    return true

fun test_apply_move_black_normal() -> Bool:
    # Black pt 6 -> idx 18; Black pt 9 -> idx 15.
    let b = empty_board()
    place(b, 18, Player::Black, 1)
    b.apply_move(make_move(Player::Black, 6, 9))
    assert(b.points[18].owner.is_empty(), "Black source idx 18 emptied")
    assert(b.points[15].owner.is_black(), "Black lands at idx 15")
    assert(b.points[15].count.value == 1, "Black destination count == 1")
    return true

fun test_apply_move_black_hits_white_blot() -> Bool:
    let b = empty_board()
    place(b, 18, Player::Black, 1)
    place(b, 15, Player::White, 1)   # White blot
    b.apply_move(make_move(Player::Black, 6, 9))
    assert(b.bar_white.value == 1,        "White blot sent to bar by Black hit")
    assert(b.points[15].owner.is_black(), "Black owns the hit point")
    return true


# Win detection via apply_move
fun test_winner_white_after_last_bearoff() -> Bool:
    let b = empty_board()
    place(b, 23, Player::White, 1)
    b.off_white = 14
    b.apply_move(make_move(Player::White, 24, kBearOff))
    assert(b.get_winner().is_white(), "White wins after bearing off last checker")
    return true

fun test_winner_black_after_last_bearoff() -> Bool:
    let b = empty_board()
    place(b, 0, Player::Black, 1)
    b.off_black = 14
    b.apply_move(make_move(Player::Black, 24, kBearOff))
    assert(b.get_winner().is_black(), "Black wins after bearing off last checker")
    return true

fun test_no_winner_before_last_bearoff() -> Bool:
    let b = empty_board()
    place(b, 23, Player::White, 2)
    b.off_white = 13
    b.apply_move(make_move(Player::White, 24, kBearOff))
    assert(b.get_winner().is_empty(),
           "no winner yet with 14 off (one checker still on board)")
    return true


# ML / utility interface
fun test_get_num_players() -> Bool:
    assert(get_num_players() == 2, "backgammon has exactly 2 players")
    return true

fun test_score_mid_game_is_zero() -> Bool:
    let g = play()
    assert(score(g, 0) == 0.0, "score is 0.0 mid-game for player 0")
    assert(score(g, 1) == 0.0, "score is 0.0 mid-game for player 1")
    return true

fun test_get_current_player_is_0_or_1_at_start() -> Bool:
    let g = play()
    let cp = get_current_player(g)
    assert(cp == 0 or cp == 1, "current player is 0 or 1 at game start")
    return true

fun test_get_current_player_done_returns_sentinel() -> Bool:
    # A live game must never return the sentinel -4.
    let g = play()
    assert(get_current_player(g) != -4,
           "get_current_player does not return -4 while game is live")
    return true
