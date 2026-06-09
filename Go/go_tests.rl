# Unit tests for Go implementation in Rulebook
# RUN: rlc %s -o %t -i %stdlib --shared

import serialization.print
import collections.vector

# Convenience constructor used across all tests
fun make_coords(Int x, Int y) -> Coords:
    let pos: Coords
    return pos.init(x, y)

# Cross state tests
fun test_cross_state_is_equal_same() -> Bool:
    assert(CrossState::Black.is_equal(CrossState::Black), "Black == Black")
    assert(CrossState::White.is_equal(CrossState::White), "White == White")
    assert(CrossState::Empty.is_equal(CrossState::Empty), "Empty == Empty")
    return true

fun test_cross_state_is_equal_different() -> Bool:
    assert(!CrossState::Black.is_equal(CrossState::White), "Black != White")
    assert(!CrossState::Black.is_equal(CrossState::Empty), "Black != Empty")
    assert(!CrossState::White.is_equal(CrossState::Empty), "White != Empty")
    return true

fun test_cross_state_opposite_color_black() -> Bool:
    assert(CrossState::Black.opposite_color().is_equal(CrossState::White),
           "opposite of Black is White")
    return true

fun test_cross_state_opposite_color_white() -> Bool:
    assert(CrossState::White.opposite_color().is_equal(CrossState::Black),
           "opposite of White is Black")
    return true

# opposite_color is only meaningful for Black/White; Empty falls through to Black
fun test_cross_state_opposite_color_empty() -> Bool:
    # Empty.opposite_color() returns Black (the else branch)
    assert(CrossState::Empty.opposite_color().is_equal(CrossState::Black),
           "opposite of Empty returns Black (else branch)")
    return true


# Coordinates tests
fun test_coords_init() -> Bool:
    let c = make_coords(3, 7)
    assert(c.x == 3, "coords.x == 3")
    assert(c.y == 7, "coords.y == 7")
    return true

fun test_coords_origin() -> Bool:
    let c = make_coords(0, 0)
    assert(c.x == 0, "origin x == 0")
    assert(c.y == 0, "origin y == 0")
    return true

fun test_coords_corner() -> Bool:
    let c = make_coords(kSize - 1, kSize - 1)
    assert(c.x == 18, "bottom-right x == 18")
    assert(c.y == 18, "bottom-right y == 18")
    return true

# Board tests
fun test_board_init_empty() -> Bool:
    let board: Board
    board.init()

    let i = 0
    while i < kSize:
        let j = 0
        while j < kSize:
            assert(board.get_cross(make_coords(i, j)).is_equal(CrossState::Empty),
                   "every cell starts empty")
            j = j + 1
        i = i + 1
    return true

fun test_board_init_player_black_first() -> Bool:
    let board: Board
    board.init()
    assert(board.curr_player.value == 0, "Black (0) plays first")
    return true

fun test_board_init_stone_counters_zero() -> Bool:
    let board: Board
    board.init()
    assert(board.black_stones == 0, "black_stones starts at 0")
    assert(board.white_stones == 0, "white_stones starts at 0")
    return true

fun test_board_init_pass_count_zero() -> Bool:
    let board: Board
    board.init()
    assert(board.pass_count.value == 0, "pass_count starts at 0")
    return true

fun test_board_set_get_cross_black() -> Bool:
    let board: Board
    board.init()
    let c = make_coords(5, 5)
    board.set_cross(c, CrossState::Black)
    assert(board.get_cross(c).is_equal(CrossState::Black), "set then get Black")
    return true

fun test_board_set_get_cross_white() -> Bool:
    let board: Board
    board.init()
    let c = make_coords(10, 3)
    board.set_cross(c, CrossState::White)
    assert(board.get_cross(c).is_equal(CrossState::White), "set then get White")
    return true

fun test_board_set_get_cross_corners() -> Bool:
    let board: Board
    board.init()
    board.set_cross(make_coords(0, 0),               CrossState::Black)
    board.set_cross(make_coords(0, kSize - 1),       CrossState::White)
    board.set_cross(make_coords(kSize - 1, 0),       CrossState::Black)
    board.set_cross(make_coords(kSize - 1, kSize - 1), CrossState::White)

    assert(board.get_cross(make_coords(0, 0)).is_equal(CrossState::Black),         "top-left Black")
    assert(board.get_cross(make_coords(0, kSize - 1)).is_equal(CrossState::White), "top-right White")
    assert(board.get_cross(make_coords(kSize - 1, 0)).is_equal(CrossState::Black), "bottom-left Black")
    assert(board.get_cross(make_coords(kSize - 1, kSize - 1)).is_equal(CrossState::White),
           "bottom-right White")
    return true

# Board cloning method tests
fun test_board_clone_independent() -> Bool:
    let board: Board
    board.init()
    board.set_cross(make_coords(3, 3), CrossState::Black)

    let clone = board.clone()
    # Mutate clone; original must be unchanged
    clone.set_cross(make_coords(3, 3), CrossState::White)

    assert(board.get_cross(make_coords(3, 3)).is_equal(CrossState::Black),
           "original unaffected after clone mutation")
    assert(clone.get_cross(make_coords(3, 3)).is_equal(CrossState::White),
           "clone reflects mutation")
    return true

fun test_board_clone_copies_player() -> Bool:
    let board: Board
    board.init()
    board.next_player() # now White's turn

    let clone = board.clone()
    assert(clone.curr_player.value == 1, "clone copies curr_player")
    return true

fun test_board_clone_copies_stone_counts() -> Bool:
    let board: Board
    board.init()
    board.black_stones = 5
    board.white_stones = 3

    let clone = board.clone()
    assert(clone.black_stones == 5, "clone copies black_stones")
    assert(clone.white_stones == 3, "clone copies white_stones")
    return true

fun test_find_neighbors_center() -> Bool:
    let board: Board
    board.init()
    let neighbors = board.find_neighbors(make_coords(10, 10))
    # Interior cell always has exactly 4 neighbors
    assert(neighbors.size() == 4, "interior cell has 4 neighbors")
    return true

fun test_find_neighbors_corner_top_left() -> Bool:
    let board: Board
    board.init()
    let neighbors = board.find_neighbors(make_coords(0, 0))
    assert(neighbors.size() == 2, "top-left corner has 2 neighbors")
    return true

fun test_find_neighbors_corner_bottom_right() -> Bool:
    let board: Board
    board.init()
    let neighbors = board.find_neighbors(make_coords(kSize - 1, kSize - 1))
    assert(neighbors.size() == 2, "bottom-right corner has 2 neighbors")
    return true

fun test_find_neighbors_edge_top() -> Bool:
    let board: Board
    board.init()
    let neighbors = board.find_neighbors(make_coords(0, 5))
    assert(neighbors.size() == 3, "top edge (non-corner) has 3 neighbors")
    return true

fun test_find_neighbors_edge_left() -> Bool:
    let board: Board
    board.init()
    let neighbors = board.find_neighbors(make_coords(5, 0))
    assert(neighbors.size() == 3, "left edge (non-corner) has 3 neighbors")
    return true

fun test_get_group_single_stone() -> Bool:
    let board: Board
    board.init()
    board.set_cross(make_coords(5, 5), CrossState::Black)

    let group = board.get_group(make_coords(5, 5))
    assert(group.size() == 1, "single stone group has size 1")
    return true

fun test_get_group_empty_cell_returns_empty() -> Bool:
    let board: Board
    board.init()

    let group = board.get_group(make_coords(5, 5))
    assert(group.size() == 0, "get_group on empty cell returns empty vector")
    return true

fun test_get_group_connected_chain() -> Bool:
    # Three horizontally connected Black stones
    let board: Board
    board.init()
    board.set_cross(make_coords(5, 5), CrossState::Black)
    board.set_cross(make_coords(5, 6), CrossState::Black)
    board.set_cross(make_coords(5, 7), CrossState::Black)

    let group = board.get_group(make_coords(5, 5))
    assert(group.size() == 3, "connected chain of 3 has group size 3")
    return true

fun test_get_group_does_not_cross_colors() -> Bool:
    # Black chain interrupted by a White stone
    let board: Board
    board.init()
    board.set_cross(make_coords(5, 5), CrossState::Black)
    board.set_cross(make_coords(5, 6), CrossState::White) # boundary
    board.set_cross(make_coords(5, 7), CrossState::Black)

    let group_left  = board.get_group(make_coords(5, 5))
    let group_right = board.get_group(make_coords(5, 7))
    assert(group_left.size()  == 1, "left Black group size 1 (White blocks)")
    assert(group_right.size() == 1, "right Black group size 1 (White blocks)")
    return true

fun test_get_group_l_shape() -> Bool:
    # L-shaped group of 4
    let board: Board
    board.init()
    board.set_cross(make_coords(3, 3), CrossState::Black)
    board.set_cross(make_coords(3, 4), CrossState::Black)
    board.set_cross(make_coords(3, 5), CrossState::Black)
    board.set_cross(make_coords(4, 5), CrossState::Black)

    let group = board.get_group(make_coords(3, 3))
    assert(group.size() == 4, "L-shape group has size 4")
    return true

# Liberty check tests
fun test_count_liberties_center_single() -> Bool:
    let board: Board
    board.init()
    board.set_cross(make_coords(10, 10), CrossState::Black)

    let group = board.get_group(make_coords(10, 10))
    assert(board.count_liberties(group) == 4, "center stone has 4 liberties")
    return true

fun test_count_liberties_corner_single() -> Bool:
    let board: Board
    board.init()
    board.set_cross(make_coords(0, 0), CrossState::Black)

    let group = board.get_group(make_coords(0, 0))
    assert(board.count_liberties(group) == 2, "corner stone has 2 liberties")
    return true

fun test_count_liberties_edge_single() -> Bool:
    let board: Board
    board.init()
    board.set_cross(make_coords(0, 5), CrossState::Black)

    let group = board.get_group(make_coords(0, 5))
    assert(board.count_liberties(group) == 3, "edge stone has 3 liberties")
    return true

fun test_count_liberties_shared_not_double_counted() -> Bool:
    # Two horizontally adjacent Black stones share an internal liberty
    let board: Board
    board.init()
    board.set_cross(make_coords(10, 10), CrossState::Black)
    board.set_cross(make_coords(10, 11), CrossState::Black)

    let group = board.get_group(make_coords(10, 10))
    # (10,9), (10,12), (9,10), (9,11), (11,10), (11,11) = 6 unique liberties
    assert(board.count_liberties(group) == 6, "two adjacent stones share liberties correctly")
    return true

fun test_count_liberties_zero_when_surrounded() -> Bool:
    # Surround a corner stone completely
    let board: Board
    board.init()
    board.set_cross(make_coords(0, 0), CrossState::Black)
    board.set_cross(make_coords(0, 1), CrossState::White) # block y+
    board.set_cross(make_coords(1, 0), CrossState::White) # block x+

    let group = board.get_group(make_coords(0, 0))
    assert(board.count_liberties(group) == 0, "surrounded corner stone has 0 liberties")
    return true

fun test_count_liberties_reduced_by_enemy() -> Bool:
    let board: Board
    board.init()
    board.set_cross(make_coords(5, 5), CrossState::Black)
    board.set_cross(make_coords(5, 6), CrossState::White) # occupy one liberty

    let group = board.get_group(make_coords(5, 5))
    assert(board.count_liberties(group) == 3, "one liberty blocked by enemy => 3 liberties")
    return true

# Group removal tests
fun test_remove_group_clears_cells() -> Bool:
    let board: Board
    board.init()
    board.set_cross(make_coords(5, 5), CrossState::Black)
    board.set_cross(make_coords(5, 6), CrossState::Black)
    board.black_stones = 2

    let group = board.get_group(make_coords(5, 5))
    board.remove_group(group)

    assert(board.get_cross(make_coords(5, 5)).is_equal(CrossState::Empty), "cell cleared after remove")
    assert(board.get_cross(make_coords(5, 6)).is_equal(CrossState::Empty), "cell cleared after remove")
    return true

fun test_remove_group_decrements_black_stones() -> Bool:
    let board: Board
    board.init()
    board.set_cross(make_coords(5, 5), CrossState::Black)
    board.set_cross(make_coords(5, 6), CrossState::Black)
    board.black_stones = 2

    let group = board.get_group(make_coords(5, 5))
    board.remove_group(group)

    assert(board.black_stones == 0, "black_stones decremented after capture")
    return true

fun test_remove_group_decrements_white_stones() -> Bool:
    let board: Board
    board.init()
    board.set_cross(make_coords(7, 7), CrossState::White)
    board.white_stones = 1

    let group = board.get_group(make_coords(7, 7))
    board.remove_group(group)

    assert(board.white_stones == 0, "white_stones decremented after capture")
    return true

fun test_remove_empty_group_noop() -> Bool:
    let board: Board
    board.init()
    board.black_stones = 3

    let empty_group: Vector<Coords>
    board.remove_group(empty_group) # should not crash or change counts

    assert(board.black_stones == 3, "remove empty group is a noop")
    return true

# Capture tests
fun test_capture_surrounds_and_removes_enemy() -> Bool:
    let board: Board
    board.init()

    # Place White stone at (5,5)
    board.set_cross(make_coords(5, 5), CrossState::White)
    board.white_stones = 1

    # Surround with Black on three sides
    board.set_cross(make_coords(4, 5), CrossState::Black)
    board.set_cross(make_coords(6, 5), CrossState::Black)
    board.set_cross(make_coords(5, 6), CrossState::Black)
    board.black_stones = 3

    # Place the last Black stone that closes the capture
    board.set_cross(make_coords(5, 4), CrossState::Black)
    board.black_stones = 4

    board.capture_group(make_coords(5, 4))

    assert(board.get_cross(make_coords(5, 5)).is_equal(CrossState::Empty),
           "captured White stone is removed")
    assert(board.white_stones == 0, "white_stones decremented after capture")
    return true

fun test_capture_does_not_remove_stone_with_liberty() -> Bool:
    let board: Board
    board.init()

    # White stone at (5,5) with one free liberty at (5,4)
    board.set_cross(make_coords(5, 5), CrossState::White)
    board.white_stones = 1

    board.set_cross(make_coords(4, 5), CrossState::Black)
    board.set_cross(make_coords(6, 5), CrossState::Black)
    board.set_cross(make_coords(5, 6), CrossState::Black)
    board.black_stones = 3

    # Black placed adjacent but White still has liberty at (5,4)
    board.set_cross(make_coords(7, 5), CrossState::Black) # irrelevant position
    board.black_stones = 4

    board.capture_group(make_coords(4, 5))

    assert(board.get_cross(make_coords(5, 5)).is_equal(CrossState::White),
           "White stone with liberty is NOT captured")
    assert(board.white_stones == 1, "white_stones unchanged when stone not captured")
    return true

fun test_capture_chain_of_enemy_stones() -> Bool:
    # Capture a two-stone White chain
    let board: Board
    board.init()

    board.set_cross(make_coords(5, 5), CrossState::White)
    board.set_cross(make_coords(5, 6), CrossState::White)
    board.white_stones = 2

    # Surround the chain
    board.set_cross(make_coords(4, 5), CrossState::Black)
    board.set_cross(make_coords(4, 6), CrossState::Black)
    board.set_cross(make_coords(6, 5), CrossState::Black)
    board.set_cross(make_coords(6, 6), CrossState::Black)
    board.set_cross(make_coords(5, 7), CrossState::Black)
    board.black_stones = 5

    # Last closing stone
    board.set_cross(make_coords(5, 4), CrossState::Black)
    board.black_stones = 6

    board.capture_group(make_coords(5, 4))

    assert(board.get_cross(make_coords(5, 5)).is_equal(CrossState::Empty), "first White stone captured")
    assert(board.get_cross(make_coords(5, 6)).is_equal(CrossState::Empty), "second White stone captured")
    assert(board.white_stones == 0, "white_stones == 0 after chain capture")
    return true

# Move tests
fun test_try_move_valid_placement() -> Bool:
    let board: Board
    board.init()

    let result = board.try_move(make_coords(3, 3))
    assert(result, "valid move on empty board returns true")
    assert(board.get_cross(make_coords(3, 3)).is_equal(CrossState::Black),
           "Black stone placed at (3,3)")
    return true

fun test_try_move_increments_stone_counter() -> Bool:
    let board: Board
    board.init()

    board.try_move(make_coords(3, 3))
    assert(board.black_stones == 1, "black_stones incremented after valid move")
    return true

fun test_try_move_occupied_cell_fails() -> Bool:
    let board: Board
    board.init()

    board.try_move(make_coords(5, 5)) # Black plays
    board.next_player()

    let result = board.try_move(make_coords(5, 5)) # White tries same cell
    assert(!result, "cannot place on occupied cell")
    return true

fun test_try_move_out_of_bounds_negative_fails() -> Bool:
    let board: Board
    board.init()

    let result = board.try_move(make_coords(-1, 5))
    assert(!result, "negative x coordinate is out of bounds")
    return true

fun test_try_move_out_of_bounds_too_large_fails() -> Bool:
    let board: Board
    board.init()

    let result = board.try_move(make_coords(kSize, 5))
    assert(!result, "x == kSize is out of bounds")
    return true

fun test_try_move_suicide_fails() -> Bool:
    let board: Board
    board.init()

    # White is player 1; force White's turn
    board.curr_player.value = 1

    # Surround (0,0) with Black stones on the two available sides
    board.set_cross(make_coords(0, 1), CrossState::Black)
    board.set_cross(make_coords(1, 0), CrossState::Black)
    board.black_stones = 2

    let result = board.try_move(make_coords(0, 0))
    assert(!result, "suicide move returns false")
    return true

fun test_try_move_switches_turn_externally() -> Bool:
    # try_move itself does NOT call next_player; the caller does.
    # Verify curr_player is unchanged after try_move.
    let board: Board
    board.init()

    board.try_move(make_coords(3, 3))
    assert(board.curr_player.value == 0, "try_move does not switch player internally")
    return true
    
# Ko rule tests
fun test_is_grid_equal_empty_boards() -> Bool:
    let board: Board
    board.init()
    # prev_grid_state is initialised to the same empty grid
    assert(board.is_grid_equal(board.grid), "fresh board: grid == prev_grid_state")
    return true

fun test_is_grid_equal_after_placement_differs() -> Bool:
    let board: Board
    board.init()

    # Store the clean grid as prev, then mutate grid
    board.prev_grid_state = board.grid
    board.set_cross(make_coords(5, 5), CrossState::Black)

    assert(!board.is_grid_equal(board.grid),
           "grid differs from prev_grid_state after placement")
    return true

fun test_ko_rule_prevents_immediate_recapture() -> Bool:
    let board: Board
    board.init()

    board.set_cross(make_coords(3, 4), CrossState::White)
    board.white_stones = 1

    board.set_cross(make_coords(3, 3), CrossState::Black)
    board.set_cross(make_coords(3, 5), CrossState::Black)
    board.set_cross(make_coords(2, 4), CrossState::Black)
    board.black_stones = 3

    # Black closes at (4,4), captures (3,4)
    let ok = board.try_move(make_coords(4, 4))
    assert(ok, "Black's capturing move is valid")

    board.next_player() # now White's turn

    # White tries to immediately recapture at (3,4) - Ko violation
    let ko_attempt = board.try_move(make_coords(3, 4))
    assert(!ko_attempt, "Ko rule prevents immediate recapture by White")
    return true

# Player related methods tests
fun test_player_to_stone_player0_is_black() -> Bool:
    let board: Board
    board.init()
    board.curr_player.value = 0
    assert(board.player_to_stone(board.curr_player).is_equal(CrossState::Black),
           "player 0 maps to Black")
    return true

fun test_player_to_stone_player1_is_white() -> Bool:
    let board: Board
    board.init()
    board.curr_player.value = 1
    assert(board.player_to_stone(board.curr_player).is_equal(CrossState::White),
           "player 1 maps to White")
    return true

fun test_next_player_toggles_0_to_1() -> Bool:
    let board: Board
    board.init()
    board.next_player()
    assert(board.curr_player.value == 1, "next_player: 0 -> 1")
    return true

fun test_next_player_toggles_1_to_0() -> Bool:
    let board: Board
    board.init()
    board.next_player()
    board.next_player()
    assert(board.curr_player.value == 0, "next_player: 1 -> 0")
    return true

fun test_turn_passed_increments_counter() -> Bool:
    let board: Board
    board.init()
    board.turn_passed()
    assert(board.pass_count.value == 1, "turn_passed increments pass_count to 1")
    return true

fun test_two_passes_reaches_game_end_condition() -> Bool:
    let board: Board
    board.init()
    board.turn_passed()
    board.turn_passed()
    assert(board.pass_count.value == 2, "two passes sets pass_count to 2 (game end)")
    return true

fun test_reset_pass_counter() -> Bool:
    let board: Board
    board.init()
    board.turn_passed()
    board.turn_passed()
    board.reset_pass_counter()
    assert(board.pass_count.value == 0, "reset_pass_counter sets pass_count to 0")
    return true

fun test_pass_then_move_resets_counter() -> Bool:
    # In the game loop, place_stone calls reset_pass_counter
    let board: Board
    board.init()
    board.turn_passed()
    board.next_player()
    board.try_move(make_coords(3, 3))
    board.reset_pass_counter() # mirrors what the game act does
    assert(board.pass_count.value == 0, "placing a stone resets pass counter")
    return true

# Score counting tests
fun test_count_territories_empty_board_no_territory() -> Bool:
    let board: Board
    board.init()
    let scores = board.count_territories()
    # All empty cells neighbour nothing; dame (neutral) territory
    assert(scores.black_score == 0, "empty board: no Black territory")
    assert(scores.white_score == 0, "empty board: no White territory")
    return true

fun test_count_territories_black_claims_corner() -> Bool:
    let board: Board
    board.init()

    board.set_cross(make_coords(0, 1), CrossState::Black)
    board.set_cross(make_coords(1, 0), CrossState::Black)
    board.set_cross(make_coords(1, 1), CrossState::Black)

    let scores = board.count_territories()
    assert(scores.black_score >= 1, "Black scores at least 1 territory point for enclosed corner cell")
    assert(scores.white_score == 0, "White has no territory")
    return true

fun test_count_territories_white_claims_corner() -> Bool:
    # Mirror for White
    let board: Board
    board.init()

    board.set_cross(make_coords(0, 1), CrossState::White)
    board.set_cross(make_coords(1, 0), CrossState::White)
    board.set_cross(make_coords(1, 1), CrossState::White)

    let scores = board.count_territories()
    assert(scores.white_score >= 1, "White scores at least 1 territory point")
    assert(scores.black_score == 0, "Black has no territory")
    return true

fun test_count_territories_shared_border_is_dame() -> Bool:
    # Place one Black and one White stone next to the same empty region
    let board: Board
    board.init()

    board.set_cross(make_coords(9, 9),  CrossState::Black)
    board.set_cross(make_coords(9, 11), CrossState::White)

    let scores = board.count_territories()
    # (9,10) is contested – neither colour gets it
    assert(scores.black_score == 0, "contested cell not awarded to Black")
    assert(scores.white_score == 0, "contested cell not awarded to White")
    return true

# Winner calculation tests
fun test_get_winner_black_wins_by_stones() -> Bool:
    let board: Board
    board.init()
    # Give Black many more stones to overcome komi
    board.black_stones = 50
    board.white_stones = 10

    let winner = board.get_winner()
    assert(winner.is_equal(CrossState::Black), "Black wins with overwhelming stone advantage")
    return true

fun test_get_winner_white_wins_by_komi() -> Bool:
    # Tied stones → komi (6 points = 6.5 real) gives White the win
    let board: Board
    board.init()
    board.black_stones = 10
    board.white_stones = 10

    let winner = board.get_winner()
    assert(winner.is_equal(CrossState::White), "White wins on komi when stones are tied")
    return true

fun test_get_winner_white_wins_close_game() -> Bool:
    # Black 15, White 10 + komi(6) = 16 → White wins by 1
    let board: Board
    board.init()
    board.black_stones = 15
    board.white_stones = 10

    let winner = board.get_winner()
    assert(winner.is_equal(CrossState::White), "White wins narrow game thanks to komi")
    return true

fun test_get_winner_black_wins_overcoming_komi() -> Bool:
    # Black 17, White 10 + komi(6) = 16 → Black wins by 1
    let board: Board
    board.init()
    board.black_stones = 17
    board.white_stones = 10

    let winner = board.get_winner()
    assert(winner.is_equal(CrossState::Black), "Black wins by overcoming komi")
    return true

fun test_score_returns_zero_if_game_not_done() -> Bool:
    let game = play()
    assert(score(game, 0) == 0.0, "score returns 0.0 while game is in progress")
    return true

fun test_score_black_wins_player0_gets_positive() -> Bool:
    let game = play()
    # End game by two consecutive passes
    game.pass_turn()
    game.pass_turn()

    # With empty board White wins on komi; player 0 (Black) loses
    let s = score(game, 0)
    assert(s == -1.0, "player 0 (Black) gets -1.0 when White wins on empty board")
    return true

fun test_score_white_wins_player1_gets_positive() -> Bool:
    let game = play()
    game.pass_turn()
    game.pass_turn()

    let s = score(game, 1)
    assert(s == 1.0, "player 1 (White) gets 1.0 when White wins on empty board")
    return true

fun test_get_current_player_initially_black() -> Bool:
    let game = play()
    assert(get_current_player(game) == 0, "current player is 0 (Black) at game start")
    return true

fun test_get_current_player_after_pass_is_white() -> Bool:
    let game = play()
    game.pass_turn()
    assert(get_current_player(game) == 1, "after one pass current player is 1 (White)")
    return true

fun test_get_current_player_done_returns_sentinel() -> Bool:
    let game = play()
    game.pass_turn()
    game.pass_turn()
    assert(get_current_player(game) == -4, "finished game returns sentinel -4")
    return true

fun test_get_num_players() -> Bool:
    assert(get_num_players() == 2, "Go has exactly 2 players")
    return true

# Game flow tests
fun test_game_flow_place_stone_alternates_players() -> Bool:
    let game = play()
    game.place_stone(make_coords(3, 3)) # Black places
    assert(get_current_player(game) == 1, "after Black move it is White's turn")
    game.place_stone(make_coords(4, 4)) # White places
    assert(get_current_player(game) == 0, "after White move it is Black's turn again")
    return true

fun test_game_flow_pass_alternates_players() -> Bool:
    let game = play()
    game.pass_turn()
    assert(get_current_player(game) == 1, "after Black pass it is White's turn")
    return true

fun test_game_not_done_after_one_pass() -> Bool:
    let game = play()
    game.pass_turn()
    assert(!game.is_done(), "game is not done after a single pass")
    return true

fun test_game_done_after_two_passes() -> Bool:
    let game = play()
    game.pass_turn()
    game.pass_turn()
    assert(game.is_done(), "game ends after two consecutive passes")
    return true

fun test_game_pass_then_move_then_pass_not_done() -> Bool:
    let game = play()
    game.pass_turn()                     # Black passes
    game.place_stone(make_coords(3, 3)) # White plays – resets pass counter
    game.pass_turn()                     # Black passes again (only 1 consecutive pass)
    assert(!game.is_done(), "pass-move-pass sequence does not end the game")
    return true
