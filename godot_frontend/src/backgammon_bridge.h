#ifndef BACKGAMMON_BRIDGE_H
#define BACKGAMMON_BRIDGE_H

#include <cstddef>
#include <cstdint>
#include "backgammon.h"

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>

namespace RLCLib {
    // Tell the compiler RLC_play exists so the header recognizes it
    godot::Variant RLC_play(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
}

namespace godot {

class BackgammonBridge : public Node {
    GDCLASS(BackgammonBridge, Node);

private:
    Game game_instance;

protected:
    static void _bind_methods() {}

public:
    BackgammonBridge() {}
    ~BackgammonBridge() {}

    void play();
    /* Board State Getters (For drawing tokens/checkers)
    int32_t get_board_point_count(int32_t p_idx);
    int32_t get_board_point_owner(int32_t p_idx);
    int32_t get_current_player();
    int32_t get_bar_count(int32_t player_id);
    int32_t get_off_count(int32_t player_id);

    // Turn Flow & Dice APIs (For UI displays)
    PackedInt32Array get_active_dice();
    bool is_game_over();
    int32_t get_winner();

    // Gameplay Interaction Input
    // Replaces complex manual select/apply flows with a single clean UI call
    PackedInt32Array get_remaining_moves();
    bool request_move(int32_t from_pt, int32_t to_pt);  

*/};

}

#endif