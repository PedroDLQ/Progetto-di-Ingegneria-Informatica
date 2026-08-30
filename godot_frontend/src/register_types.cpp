#include "register_types.h"
#include <gdextension_interface.h>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/godot.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/wrapped.hpp>
#define RLC_GET_TYPE_DEF
#define RLC_GODOT
#include "backgammon_bridge.inc"

using namespace godot;

void initialize_board_games_module(ModuleInitializationLevel p_level) {
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }

    godot_nativescript_init();   
    // ClassDB registration in Godot
    // ClassDB::register_class<BackgammonBridge>();

    // Day 5 Task: ClassDB::register_class<GoBridge>();
}

void uninitialize_board_games_module(ModuleInitializationLevel p_level) {
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }

    godot_gdnative_terminate();
}

extern "C" {
GDExtensionBool GDE_EXPORT board_games_library_init(
    GDExtensionInterfaceGetProcAddress p_get_proc_address,
    const GDExtensionClassLibraryPtr p_library,
    GDExtensionInitialization *r_initialization) {
    
    godot::GDExtensionBinding::InitObject init_obj(p_get_proc_address, p_library, r_initialization);

    init_obj.register_initializer(initialize_board_games_module);
    init_obj.register_terminator(uninitialize_board_games_module);
    init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);

    return init_obj.init();
}
}
