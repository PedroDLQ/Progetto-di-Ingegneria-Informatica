#include <cstdint>
#ifndef RLC_GET_FUNCTION_DECLS
#define RLC_GET_TYPE_DECLS
#endif
#ifndef RLC_GET_FUNCTION_DECLS
#define RLC_GET_FUNCTION_DECLS
#endif
#ifdef __cplusplus
extern "C"{
#endif
#ifndef RLC_HEADER
#ifdef RLC_C_HEADER
#undef RLC_C_HEADER
#define RLC_HEADER

#include "stddef.h"
#include "stdint.h"
#define RLC_GET_FUNCTION_DECLS
#define RLC_GET_TYPE_DECLS
#endif
#endif
#ifdef RLC_GET_TYPE_DECLS
typedef union VectorTint8_tT VectorTint8_tT;
typedef union String String;
typedef union BIntT1T7T BIntT1T7T;
typedef union BIntT0T16T BIntT0T16T;
typedef union VectorTdoubleT VectorTdoubleT;
typedef union VectorTboolT VectorTboolT;
typedef union VectorTStringT VectorTStringT;
typedef union VectorTBIntT1T7TT VectorTBIntT1T7TT;
typedef union BoundedVectorTBIntT1T7TT4T BoundedVectorTBIntT1T7TT4T;
typedef union RNG RNG;
typedef union Player Player;
typedef union Point Point;
typedef union Move Move;
typedef union Board Board;
typedef union GameInitializeSeed GameInitializeSeed;
typedef union GameSelectMove GameSelectMove;
typedef union ConfigureRNG ConfigureRNG;
typedef union Game Game;
struct AnyGameAction;
#undef RLC_GET_TYPE_DECLS
#endif

#ifdef RLC_TYPE
RLC_TYPE(Vector)
RLC_TYPE(String)
RLC_TYPE(BInt)
RLC_TYPE(BInt)
RLC_TYPE(Vector)
RLC_TYPE(Vector)
RLC_TYPE(Vector)
RLC_TYPE(Vector)
RLC_TYPE(BoundedVector)
RLC_TYPE(RNG)
RLC_TYPE(Player)
RLC_TYPE(Point)
RLC_TYPE(Move)
RLC_TYPE(Board)
RLC_TYPE(GameInitializeSeed)
RLC_TYPE(GameSelectMove)
RLC_TYPE(ConfigureRNG)
RLC_TYPE(Game)
#undef RLC_TYPE
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__Game(union Game * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Game * self
RLC_VISIT_FUNCTION(init, rl_m_init__Game, Game_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__Game_r_bool(bool * __result, union Game * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Game * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__Game_r_bool, can_Game_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__ConfigureRNG(union ConfigureRNG * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union ConfigureRNG * self
RLC_VISIT_FUNCTION(init, rl_m_init__ConfigureRNG, ConfigureRNG_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__ConfigureRNG_r_bool(bool * __result, union ConfigureRNG * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union ConfigureRNG * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__ConfigureRNG_r_bool, can_ConfigureRNG_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__Point_24(union Point * self[24]);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Point *[24] self
RLC_VISIT_FUNCTION(init, rl_m_init__Point_24, init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__Point_24_r_bool(bool * __result, union Point * self[24]);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Point *[24] self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__Point_24_r_bool, can_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__Point(union Point * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Point * self
RLC_VISIT_FUNCTION(init, rl_m_init__Point, Point_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__Point_r_bool(bool * __result, union Point * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Point * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__Point_r_bool, can_Point_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__AnyGameAction(struct AnyGameAction * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS struct AnyGameAction * self
RLC_VISIT_FUNCTION(init, rl_m_init__AnyGameAction, init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__AnyGameAction_r_bool(bool * __result, struct AnyGameAction * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS struct AnyGameAction * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__AnyGameAction_r_bool, can_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__BoundedVectorTBIntT1T7TT4T(union BoundedVectorTBIntT1T7TT4T * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self
RLC_VISIT_FUNCTION(init, rl_m_init__BoundedVectorTBIntT1T7TT4T, BoundedVector_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__BoundedVectorTBIntT1T7TT4T_r_bool(bool * __result, union BoundedVectorTBIntT1T7TT4T * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__BoundedVectorTBIntT1T7TT4T_r_bool, can_BoundedVector_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__RNG(union RNG * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union RNG * self
RLC_VISIT_FUNCTION(init, rl_m_init__RNG, RNG_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__RNG_r_bool(bool * __result, union RNG * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union RNG * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__RNG_r_bool, can_RNG_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__int64_t_4(int64_t * self[4]);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int64_t *[4] self
RLC_VISIT_FUNCTION(init, rl_m_init__int64_t_4, init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__int64_t_4_r_bool(bool * __result, int64_t * self[4]);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int64_t *[4] self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__int64_t_4_r_bool, can_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__int8_t_1(int8_t * self[1]);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int8_t *[1] self
RLC_VISIT_FUNCTION(init, rl_m_init__int8_t_1, init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__int8_t_1_r_bool(bool * __result, int8_t * self[1]);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int8_t *[1] self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__int8_t_1_r_bool, can_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__int8_t_8(int8_t * self[8]);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int8_t *[8] self
RLC_VISIT_FUNCTION(init, rl_m_init__int8_t_8, init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__int8_t_8_r_bool(bool * __result, int8_t * self[8]);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int8_t *[8] self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__int8_t_8_r_bool, can_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__strlit(char* * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS char* * self
RLC_VISIT_FUNCTION(init, rl_m_init__strlit, init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__strlit_r_bool(bool * __result, char* * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS char* * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__strlit_r_bool, can_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__GameSelectMove(union GameSelectMove * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union GameSelectMove * self
RLC_VISIT_FUNCTION(init, rl_m_init__GameSelectMove, GameSelectMove_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__GameSelectMove_r_bool(bool * __result, union GameSelectMove * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union GameSelectMove * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__GameSelectMove_r_bool, can_GameSelectMove_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__Move(union Move * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Move * self
RLC_VISIT_FUNCTION(init, rl_m_init__Move, Move_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__Move_r_bool(bool * __result, union Move * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Move * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__Move_r_bool, can_Move_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__Player(union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(init, rl_m_init__Player, Player_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__Player_r_bool(bool * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__Player_r_bool, can_Player_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__GameInitializeSeed(union GameInitializeSeed * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union GameInitializeSeed * self
RLC_VISIT_FUNCTION(init, rl_m_init__GameInitializeSeed, GameInitializeSeed_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__GameInitializeSeed_r_bool(bool * __result, union GameInitializeSeed * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union GameInitializeSeed * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__GameInitializeSeed_r_bool, can_GameInitializeSeed_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__Game_Game(union Game * self, union Game * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Game * self, union Game * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__Game_Game, Game_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__Game_Game_r_bool(bool * __result, union Game * self, union Game * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Game * self, union Game * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__Game_Game_r_bool, can_Game_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__ConfigureRNG_ConfigureRNG(union ConfigureRNG * self, union ConfigureRNG * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union ConfigureRNG * self, union ConfigureRNG * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__ConfigureRNG_ConfigureRNG, ConfigureRNG_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__ConfigureRNG_ConfigureRNG_r_bool(bool * __result, union ConfigureRNG * self, union ConfigureRNG * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union ConfigureRNG * self, union ConfigureRNG * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__ConfigureRNG_ConfigureRNG_r_bool, can_ConfigureRNG_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__AnyGameAction_GameInitializeSeed(struct AnyGameAction * self, union GameInitializeSeed * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS struct AnyGameAction * self, union GameInitializeSeed * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__AnyGameAction_GameInitializeSeed, assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__AnyGameAction_GameInitializeSeed_r_bool(bool * __result, struct AnyGameAction * self, union GameInitializeSeed * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS struct AnyGameAction * self, union GameInitializeSeed * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__AnyGameAction_GameInitializeSeed_r_bool, can_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__AnyGameAction_GameSelectMove(struct AnyGameAction * self, union GameSelectMove * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS struct AnyGameAction * self, union GameSelectMove * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__AnyGameAction_GameSelectMove, assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__AnyGameAction_GameSelectMove_r_bool(bool * __result, struct AnyGameAction * self, union GameSelectMove * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS struct AnyGameAction * self, union GameSelectMove * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__AnyGameAction_GameSelectMove_r_bool, can_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__AnyGameAction_AnyGameAction(struct AnyGameAction * self, struct AnyGameAction * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS struct AnyGameAction * self, struct AnyGameAction * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__AnyGameAction_AnyGameAction, assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__AnyGameAction_AnyGameAction_r_bool(bool * __result, struct AnyGameAction * self, struct AnyGameAction * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS struct AnyGameAction * self, struct AnyGameAction * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__AnyGameAction_AnyGameAction_r_bool, can_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__GameSelectMove_GameSelectMove(union GameSelectMove * self, union GameSelectMove * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union GameSelectMove * self, union GameSelectMove * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__GameSelectMove_GameSelectMove, GameSelectMove_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__GameSelectMove_GameSelectMove_r_bool(bool * __result, union GameSelectMove * self, union GameSelectMove * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union GameSelectMove * self, union GameSelectMove * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__GameSelectMove_GameSelectMove_r_bool, can_GameSelectMove_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__GameInitializeSeed_GameInitializeSeed(union GameInitializeSeed * self, union GameInitializeSeed * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union GameInitializeSeed * self, union GameInitializeSeed * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__GameInitializeSeed_GameInitializeSeed, GameInitializeSeed_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__GameInitializeSeed_GameInitializeSeed_r_bool(bool * __result, union GameInitializeSeed * self, union GameInitializeSeed * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union GameInitializeSeed * self, union GameInitializeSeed * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__GameInitializeSeed_GameInitializeSeed_r_bool, can_GameInitializeSeed_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__Board_Board(union Board * self, union Board * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Board * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__Board_Board, Board_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__Board_Board_r_bool(bool * __result, union Board * self, union Board * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Board * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__Board_Board_r_bool, can_Board_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__BIntT1T7T_BIntT1T7T(union BIntT1T7T * self, union BIntT1T7T * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT1T7T * self, union BIntT1T7T * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__BIntT1T7T_BIntT1T7T, BInt_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__BIntT1T7T_BIntT1T7T_r_bool(bool * __result, union BIntT1T7T * self, union BIntT1T7T * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT1T7T * self, union BIntT1T7T * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__BIntT1T7T_BIntT1T7T_r_bool, can_BInt_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__Point_24_Point_24(union Point * self[24], union Point * other[24]);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Point *[24] self, union Point *[24] other
RLC_VISIT_FUNCTION(assign, rl_m_assign__Point_24_Point_24, assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__Point_24_Point_24_r_bool(bool * __result, union Point * self[24], union Point * other[24]);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Point *[24] self, union Point *[24] other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__Point_24_Point_24_r_bool, can_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__Point_Point(union Point * self, union Point * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Point * self, union Point * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__Point_Point, Point_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__Point_Point_r_bool(bool * __result, union Point * self, union Point * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Point * self, union Point * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__Point_Point_r_bool, can_Point_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__Move_Move(union Move * self, union Move * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Move * self, union Move * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__Move_Move, Move_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__Move_Move_r_bool(bool * __result, union Move * self, union Move * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Move * self, union Move * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__Move_Move_r_bool, can_Move_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__BIntT0T16T_BIntT0T16T(union BIntT0T16T * self, union BIntT0T16T * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT0T16T * self, union BIntT0T16T * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__BIntT0T16T_BIntT0T16T, BInt_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__BIntT0T16T_BIntT0T16T_r_bool(bool * __result, union BIntT0T16T * self, union BIntT0T16T * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT0T16T * self, union BIntT0T16T * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__BIntT0T16T_BIntT0T16T_r_bool, can_BInt_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__Player_Player(union Player * self, union Player * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Player * self, union Player * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__Player_Player, Player_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__Player_Player_r_bool(bool * __result, union Player * self, union Player * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Player * self, union Player * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__Player_Player_r_bool, can_Player_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__RNG_RNG(union RNG * self, union RNG * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union RNG * self, union RNG * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__RNG_RNG, RNG_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__RNG_RNG_r_bool(bool * __result, union RNG * self, union RNG * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union RNG * self, union RNG * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__RNG_RNG_r_bool, can_RNG_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__int64_t_4_int64_t_4(int64_t * self[4], int64_t * other[4]);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int64_t *[4] self, int64_t *[4] other
RLC_VISIT_FUNCTION(assign, rl_m_assign__int64_t_4_int64_t_4, assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__int64_t_4_int64_t_4_r_bool(bool * __result, int64_t * self[4], int64_t * other[4]);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int64_t *[4] self, int64_t *[4] other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__int64_t_4_int64_t_4_r_bool, can_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__strlit_strlit(char* * self, char* * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS char* * self, char* * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__strlit_strlit, assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__strlit_strlit_r_bool(bool * __result, char* * self, char* * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS char* * self, char* * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__strlit_strlit_r_bool, can_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__String_String(union String * self, union String * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, union String * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__String_String, String_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__String_String_r_bool(bool * __result, union String * self, union String * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, union String * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__String_String_r_bool, can_String_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_drop__String(union String * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * self
RLC_VISIT_FUNCTION(drop, rl_m_drop__String, String_drop, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_drop__String_r_bool(bool * __result, union String * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * self
RLC_VISIT_FUNCTION(can_drop, rl_m_can_drop__String_r_bool, can_String_drop, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_drop__Board(union Board * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Board * self
RLC_VISIT_FUNCTION(drop, rl_m_drop__Board, Board_drop, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_drop__Board_r_bool(bool * __result, union Board * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Board * self
RLC_VISIT_FUNCTION(can_drop, rl_m_can_drop__Board_r_bool, can_Board_drop, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_drop__BoundedVectorTBIntT1T7TT4T(union BoundedVectorTBIntT1T7TT4T * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self
RLC_VISIT_FUNCTION(drop, rl_m_drop__BoundedVectorTBIntT1T7TT4T, BoundedVector_drop, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_drop__BoundedVectorTBIntT1T7TT4T_r_bool(bool * __result, union BoundedVectorTBIntT1T7TT4T * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self
RLC_VISIT_FUNCTION(can_drop, rl_m_can_drop__BoundedVectorTBIntT1T7TT4T_r_bool, can_BoundedVector_drop, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_drop__Game(union Game * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Game * self
RLC_VISIT_FUNCTION(drop, rl_m_drop__Game, Game_drop, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_drop__Game_r_bool(bool * __result, union Game * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Game * self
RLC_VISIT_FUNCTION(can_drop, rl_m_can_drop__Game_r_bool, can_Game_drop, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_print_string__String(union String * s);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * s
RLC_VISIT_FUNCTION(print_string, rl_print_string__String, String_print_string, void ,  s)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_print_string__String_r_bool(bool * __result, union String * s);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * s
RLC_VISIT_FUNCTION(can_print_string, rl_can_print_string__String_r_bool, can_String_print_string, bool ,  s)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_print_string_lit__strlit(char* * s);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS char* * s
RLC_VISIT_FUNCTION(print_string_lit, rl_print_string_lit__strlit, print_string_lit, void ,  s)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_print_string_lit__strlit_r_bool(bool * __result, char* * s);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS char* * s
RLC_VISIT_FUNCTION(can_print_string_lit, rl_can_print_string_lit__strlit_r_bool, can_print_string_lit, bool ,  s)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_print__String(union String * to_print);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * to_print
RLC_VISIT_FUNCTION(print, rl_print__String, String_print, void ,  to_print)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_print__String_r_bool(bool * __result, union String * to_print);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * to_print
RLC_VISIT_FUNCTION(can_print, rl_can_print__String_r_bool, can_String_print, bool ,  to_print)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_max__int64_t_int64_t_r_int64_t(int64_t * __result, int64_t * a, int64_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int64_t * a, int64_t * b
RLC_VISIT_FUNCTION(max, rl_max__int64_t_int64_t_r_int64_t, max, int64_t ,  a,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_max__int64_t_int64_t_r_bool(bool * __result, int64_t * a, int64_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int64_t * a, int64_t * b
RLC_VISIT_FUNCTION(can_max, rl_can_max__int64_t_int64_t_r_bool, can_max, bool ,  a,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_min__int64_t_int64_t_r_int64_t(int64_t * __result, int64_t * a, int64_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int64_t * a, int64_t * b
RLC_VISIT_FUNCTION(min, rl_min__int64_t_int64_t_r_int64_t, min, int64_t ,  a,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_min__int64_t_int64_t_r_bool(bool * __result, int64_t * a, int64_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int64_t * a, int64_t * b
RLC_VISIT_FUNCTION(can_min, rl_can_min__int64_t_int64_t_r_bool, can_min, bool ,  a,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_sqrt__double_r_double(double * __result, double * f);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS double * f
RLC_VISIT_FUNCTION(sqrt, rl_sqrt__double_r_double, sqrt, double ,  f)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_sqrt__double_r_bool(bool * __result, double * f);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS double * f
RLC_VISIT_FUNCTION(can_sqrt, rl_can_sqrt__double_r_bool, can_sqrt, bool ,  f)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_abs__int64_t_r_int64_t(int64_t * __result, int64_t * a);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int64_t * a
RLC_VISIT_FUNCTION(abs, rl_abs__int64_t_r_int64_t, abs, int64_t ,  a)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_abs__int64_t_r_bool(bool * __result, int64_t * a);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int64_t * a
RLC_VISIT_FUNCTION(can_abs, rl_can_abs__int64_t_r_bool, can_abs, bool ,  a)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_near__double_double_double_r_bool(bool * __result, double * value, double * target, double * distance);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS double * value, double * target, double * distance
RLC_VISIT_FUNCTION(near, rl_near__double_double_double_r_bool, near, bool ,  value,  target,  distance)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_near__double_double_double_r_bool(bool * __result, double * value, double * target, double * distance);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS double * value, double * target, double * distance
RLC_VISIT_FUNCTION(can_near, rl_can_near__double_double_double_r_bool, can_near, bool ,  value,  target,  distance)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_custom_equal__int64_t_int64_t_r_bool(bool * __result, int64_t * lhs, int64_t * rhs);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int64_t * lhs, int64_t * rhs
RLC_VISIT_FUNCTION(custom_equal, rl_custom_equal__int64_t_int64_t_r_bool, custom_equal, bool ,  lhs,  rhs)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_custom_equal__int64_t_int64_t_r_bool(bool * __result, int64_t * lhs, int64_t * rhs);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int64_t * lhs, int64_t * rhs
RLC_VISIT_FUNCTION(can_custom_equal, rl_can_custom_equal__int64_t_int64_t_r_bool, can_custom_equal, bool ,  lhs,  rhs)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_custom_equal__bool_bool_r_bool(bool * __result, bool * lhs, bool * rhs);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS bool * lhs, bool * rhs
RLC_VISIT_FUNCTION(custom_equal, rl_custom_equal__bool_bool_r_bool, custom_equal, bool ,  lhs,  rhs)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_custom_equal__bool_bool_r_bool(bool * __result, bool * lhs, bool * rhs);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS bool * lhs, bool * rhs
RLC_VISIT_FUNCTION(can_custom_equal, rl_can_custom_equal__bool_bool_r_bool, can_custom_equal, bool ,  lhs,  rhs)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_custom_equal__int8_t_int8_t_r_bool(bool * __result, int8_t * lhs, int8_t * rhs);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int8_t * lhs, int8_t * rhs
RLC_VISIT_FUNCTION(custom_equal, rl_custom_equal__int8_t_int8_t_r_bool, custom_equal, bool ,  lhs,  rhs)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_custom_equal__int8_t_int8_t_r_bool(bool * __result, int8_t * lhs, int8_t * rhs);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int8_t * lhs, int8_t * rhs
RLC_VISIT_FUNCTION(can_custom_equal, rl_can_custom_equal__int8_t_int8_t_r_bool, can_custom_equal, bool ,  lhs,  rhs)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_custom_equal__double_double_r_bool(bool * __result, double * lhs, double * rhs);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS double * lhs, double * rhs
RLC_VISIT_FUNCTION(custom_equal, rl_custom_equal__double_double_r_bool, custom_equal, bool ,  lhs,  rhs)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_custom_equal__double_double_r_bool(bool * __result, double * lhs, double * rhs);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS double * lhs, double * rhs
RLC_VISIT_FUNCTION(can_custom_equal, rl_can_custom_equal__double_double_r_bool, can_custom_equal, bool ,  lhs,  rhs)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_parse_and_execute__Game_AnyGameAction_VectorTint8_tT_int64_t(union Game * state, struct AnyGameAction * variant, union VectorTint8_tT * input, int64_t * read_bytes);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS union Game * state, struct AnyGameAction * variant, union VectorTint8_tT * input, int64_t * read_bytes
RLC_VISIT_FUNCTION(parse_and_execute, rl_parse_and_execute__Game_AnyGameAction_VectorTint8_tT_int64_t, Game_parse_and_execute, void ,  state,  variant,  input,  read_bytes)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_parse_and_execute__Game_AnyGameAction_VectorTint8_tT_int64_t_r_bool(bool * __result, union Game * state, struct AnyGameAction * variant, union VectorTint8_tT * input, int64_t * read_bytes);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS union Game * state, struct AnyGameAction * variant, union VectorTint8_tT * input, int64_t * read_bytes
RLC_VISIT_FUNCTION(can_parse_and_execute, rl_can_parse_and_execute__Game_AnyGameAction_VectorTint8_tT_int64_t_r_bool, can_Game_parse_and_execute, bool ,  state,  variant,  input,  read_bytes)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_parse_and_execute__Game_AnyGameAction_VectorTint8_tT(union Game * state, struct AnyGameAction * variant, union VectorTint8_tT * input);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union Game * state, struct AnyGameAction * variant, union VectorTint8_tT * input
RLC_VISIT_FUNCTION(parse_and_execute, rl_parse_and_execute__Game_AnyGameAction_VectorTint8_tT, Game_parse_and_execute, void ,  state,  variant,  input)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_parse_and_execute__Game_AnyGameAction_VectorTint8_tT_r_bool(bool * __result, union Game * state, struct AnyGameAction * variant, union VectorTint8_tT * input);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union Game * state, struct AnyGameAction * variant, union VectorTint8_tT * input
RLC_VISIT_FUNCTION(can_parse_and_execute, rl_can_parse_and_execute__Game_AnyGameAction_VectorTint8_tT_r_bool, can_Game_parse_and_execute, bool ,  state,  variant,  input)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_enumerate__bool_VectorTboolT(bool * b, union VectorTboolT * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS bool * b, union VectorTboolT * output
RLC_VISIT_FUNCTION(enumerate, rl_enumerate__bool_VectorTboolT, enumerate, void ,  b,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_enumerate__bool_VectorTboolT_r_bool(bool * __result, bool * b, union VectorTboolT * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS bool * b, union VectorTboolT * output
RLC_VISIT_FUNCTION(can_enumerate, rl_can_enumerate__bool_VectorTboolT_r_bool, can_enumerate, bool ,  b,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_enumeration_error__int64_t_String_VectorTStringT(int64_t * x, union String * out, union VectorTStringT * context);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS int64_t * x, union String * out, union VectorTStringT * context
RLC_VISIT_FUNCTION(enumeration_error, rl_enumeration_error__int64_t_String_VectorTStringT, enumeration_error, void ,  x,  out,  context)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_enumeration_error__int64_t_String_VectorTStringT_r_bool(bool * __result, int64_t * x, union String * out, union VectorTStringT * context);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS int64_t * x, union String * out, union VectorTStringT * context
RLC_VISIT_FUNCTION(can_enumeration_error, rl_can_enumeration_error__int64_t_String_VectorTStringT_r_bool, can_enumeration_error, bool ,  x,  out,  context)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_enumeration_error__double_String_VectorTStringT(double * x, union String * out, union VectorTStringT * context);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS double * x, union String * out, union VectorTStringT * context
RLC_VISIT_FUNCTION(enumeration_error, rl_enumeration_error__double_String_VectorTStringT, enumeration_error, void ,  x,  out,  context)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_enumeration_error__double_String_VectorTStringT_r_bool(bool * __result, double * x, union String * out, union VectorTStringT * context);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS double * x, union String * out, union VectorTStringT * context
RLC_VISIT_FUNCTION(can_enumeration_error, rl_can_enumeration_error__double_String_VectorTStringT_r_bool, can_enumeration_error, bool ,  x,  out,  context)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_write_in_observation_tensor__int64_t_int64_t_int64_t_VectorTdoubleT_int64_t(int64_t * value, int64_t * min, int64_t * max, union VectorTdoubleT * output, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 5
#define RLC_ARGUMENTS int64_t * value, int64_t * min, int64_t * max, union VectorTdoubleT * output, int64_t * index
RLC_VISIT_FUNCTION(write_in_observation_tensor, rl_write_in_observation_tensor__int64_t_int64_t_int64_t_VectorTdoubleT_int64_t, write_in_observation_tensor, void ,  value,  min,  max,  output,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_write_in_observation_tensor__int64_t_int64_t_int64_t_VectorTdoubleT_int64_t_r_bool(bool * __result, int64_t * value, int64_t * min, int64_t * max, union VectorTdoubleT * output, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 5
#define RLC_ARGUMENTS int64_t * value, int64_t * min, int64_t * max, union VectorTdoubleT * output, int64_t * index
RLC_VISIT_FUNCTION(can_write_in_observation_tensor, rl_can_write_in_observation_tensor__int64_t_int64_t_int64_t_VectorTdoubleT_int64_t_r_bool, can_write_in_observation_tensor, bool ,  value,  min,  max,  output,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_write_in_observation_tensor__int64_t_int64_t_VectorTdoubleT_int64_t(int64_t * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS int64_t * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index
RLC_VISIT_FUNCTION(write_in_observation_tensor, rl_write_in_observation_tensor__int64_t_int64_t_VectorTdoubleT_int64_t, write_in_observation_tensor, void ,  obj,  observer_id,  output,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_write_in_observation_tensor__int64_t_int64_t_VectorTdoubleT_int64_t_r_bool(bool * __result, int64_t * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS int64_t * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index
RLC_VISIT_FUNCTION(can_write_in_observation_tensor, rl_can_write_in_observation_tensor__int64_t_int64_t_VectorTdoubleT_int64_t_r_bool, can_write_in_observation_tensor, bool ,  obj,  observer_id,  output,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_size_as_observation_tensor__int64_t_r_int64_t(int64_t * __result, int64_t * obj);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int64_t * obj
RLC_VISIT_FUNCTION(size_as_observation_tensor, rl_size_as_observation_tensor__int64_t_r_int64_t, size_as_observation_tensor, int64_t ,  obj)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_size_as_observation_tensor__int64_t_r_bool(bool * __result, int64_t * obj);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int64_t * obj
RLC_VISIT_FUNCTION(can_size_as_observation_tensor, rl_can_size_as_observation_tensor__int64_t_r_bool, can_size_as_observation_tensor, bool ,  obj)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_write_in_observation_tensor__double_int64_t_VectorTdoubleT_int64_t(double * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS double * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index
RLC_VISIT_FUNCTION(write_in_observation_tensor, rl_write_in_observation_tensor__double_int64_t_VectorTdoubleT_int64_t, write_in_observation_tensor, void ,  obj,  observer_id,  output,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_write_in_observation_tensor__double_int64_t_VectorTdoubleT_int64_t_r_bool(bool * __result, double * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS double * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index
RLC_VISIT_FUNCTION(can_write_in_observation_tensor, rl_can_write_in_observation_tensor__double_int64_t_VectorTdoubleT_int64_t_r_bool, can_write_in_observation_tensor, bool ,  obj,  observer_id,  output,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_size_as_observation_tensor__double_r_int64_t(int64_t * __result, double * obj);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS double * obj
RLC_VISIT_FUNCTION(size_as_observation_tensor, rl_size_as_observation_tensor__double_r_int64_t, size_as_observation_tensor, int64_t ,  obj)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_size_as_observation_tensor__double_r_bool(bool * __result, double * obj);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS double * obj
RLC_VISIT_FUNCTION(can_size_as_observation_tensor, rl_can_size_as_observation_tensor__double_r_bool, can_size_as_observation_tensor, bool ,  obj)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_write_in_observation_tensor__bool_int64_t_VectorTdoubleT_int64_t(bool * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS bool * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index
RLC_VISIT_FUNCTION(write_in_observation_tensor, rl_write_in_observation_tensor__bool_int64_t_VectorTdoubleT_int64_t, write_in_observation_tensor, void ,  obj,  observer_id,  output,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_write_in_observation_tensor__bool_int64_t_VectorTdoubleT_int64_t_r_bool(bool * __result, bool * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS bool * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index
RLC_VISIT_FUNCTION(can_write_in_observation_tensor, rl_can_write_in_observation_tensor__bool_int64_t_VectorTdoubleT_int64_t_r_bool, can_write_in_observation_tensor, bool ,  obj,  observer_id,  output,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_size_as_observation_tensor__bool_r_int64_t(int64_t * __result, bool * obj);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS bool * obj
RLC_VISIT_FUNCTION(size_as_observation_tensor, rl_size_as_observation_tensor__bool_r_int64_t, size_as_observation_tensor, int64_t ,  obj)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_size_as_observation_tensor__bool_r_bool(bool * __result, bool * obj);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS bool * obj
RLC_VISIT_FUNCTION(can_size_as_observation_tensor, rl_can_size_as_observation_tensor__bool_r_bool, can_size_as_observation_tensor, bool ,  obj)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_write_in_observation_tensor__int8_t_int64_t_VectorTdoubleT_int64_t(int8_t * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS int8_t * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index
RLC_VISIT_FUNCTION(write_in_observation_tensor, rl_write_in_observation_tensor__int8_t_int64_t_VectorTdoubleT_int64_t, write_in_observation_tensor, void ,  obj,  observer_id,  output,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_write_in_observation_tensor__int8_t_int64_t_VectorTdoubleT_int64_t_r_bool(bool * __result, int8_t * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS int8_t * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * index
RLC_VISIT_FUNCTION(can_write_in_observation_tensor, rl_can_write_in_observation_tensor__int8_t_int64_t_VectorTdoubleT_int64_t_r_bool, can_write_in_observation_tensor, bool ,  obj,  observer_id,  output,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_size_as_observation_tensor__int8_t_r_int64_t(int64_t * __result, int8_t * obj);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int8_t * obj
RLC_VISIT_FUNCTION(size_as_observation_tensor, rl_size_as_observation_tensor__int8_t_r_int64_t, size_as_observation_tensor, int64_t ,  obj)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_size_as_observation_tensor__int8_t_r_bool(bool * __result, int8_t * obj);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int8_t * obj
RLC_VISIT_FUNCTION(can_size_as_observation_tensor, rl_can_size_as_observation_tensor__int8_t_r_bool, can_size_as_observation_tensor, bool ,  obj)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_write_tensor_warning_context__String_VectorTStringT(union String * out, union VectorTStringT * context);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * out, union VectorTStringT * context
RLC_VISIT_FUNCTION(write_tensor_warning_context, rl_write_tensor_warning_context__String_VectorTStringT, String_write_tensor_warning_context, void ,  out,  context)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_write_tensor_warning_context__String_VectorTStringT_r_bool(bool * __result, union String * out, union VectorTStringT * context);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * out, union VectorTStringT * context
RLC_VISIT_FUNCTION(can_write_tensor_warning_context, rl_can_write_tensor_warning_context__String_VectorTStringT_r_bool, can_String_write_tensor_warning_context, bool ,  out,  context)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_tensorable_warning__int64_t_String_VectorTStringT(int64_t * x, union String * out, union VectorTStringT * context);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS int64_t * x, union String * out, union VectorTStringT * context
RLC_VISIT_FUNCTION(tensorable_warning, rl_tensorable_warning__int64_t_String_VectorTStringT, tensorable_warning, void ,  x,  out,  context)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_tensorable_warning__int64_t_String_VectorTStringT_r_bool(bool * __result, int64_t * x, union String * out, union VectorTStringT * context);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS int64_t * x, union String * out, union VectorTStringT * context
RLC_VISIT_FUNCTION(can_tensorable_warning, rl_can_tensorable_warning__int64_t_String_VectorTStringT_r_bool, can_tensorable_warning, bool ,  x,  out,  context)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_tensorable_warning__double_String_VectorTStringT(double * x, union String * out, union VectorTStringT * context);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS double * x, union String * out, union VectorTStringT * context
RLC_VISIT_FUNCTION(tensorable_warning, rl_tensorable_warning__double_String_VectorTStringT, tensorable_warning, void ,  x,  out,  context)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_tensorable_warning__double_String_VectorTStringT_r_bool(bool * __result, double * x, union String * out, union VectorTStringT * context);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS double * x, union String * out, union VectorTStringT * context
RLC_VISIT_FUNCTION(can_tensorable_warning, rl_can_tensorable_warning__double_String_VectorTStringT_r_bool, can_tensorable_warning, bool ,  x,  out,  context)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_append_to_vector__int64_t_VectorTint8_tT(int64_t * to_add, union VectorTint8_tT * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int64_t * to_add, union VectorTint8_tT * output
RLC_VISIT_FUNCTION(append_to_vector, rl_append_to_vector__int64_t_VectorTint8_tT, append_to_vector, void ,  to_add,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_append_to_vector__int64_t_VectorTint8_tT_r_bool(bool * __result, int64_t * to_add, union VectorTint8_tT * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int64_t * to_add, union VectorTint8_tT * output
RLC_VISIT_FUNCTION(can_append_to_vector, rl_can_append_to_vector__int64_t_VectorTint8_tT_r_bool, can_append_to_vector, bool ,  to_add,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_append_to_vector__double_VectorTint8_tT(double * to_add, union VectorTint8_tT * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS double * to_add, union VectorTint8_tT * output
RLC_VISIT_FUNCTION(append_to_vector, rl_append_to_vector__double_VectorTint8_tT, append_to_vector, void ,  to_add,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_append_to_vector__double_VectorTint8_tT_r_bool(bool * __result, double * to_add, union VectorTint8_tT * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS double * to_add, union VectorTint8_tT * output
RLC_VISIT_FUNCTION(can_append_to_vector, rl_can_append_to_vector__double_VectorTint8_tT_r_bool, can_append_to_vector, bool ,  to_add,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_append_to_vector__bool_VectorTint8_tT(bool * to_add, union VectorTint8_tT * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS bool * to_add, union VectorTint8_tT * output
RLC_VISIT_FUNCTION(append_to_vector, rl_append_to_vector__bool_VectorTint8_tT, append_to_vector, void ,  to_add,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_append_to_vector__bool_VectorTint8_tT_r_bool(bool * __result, bool * to_add, union VectorTint8_tT * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS bool * to_add, union VectorTint8_tT * output
RLC_VISIT_FUNCTION(can_append_to_vector, rl_can_append_to_vector__bool_VectorTint8_tT_r_bool, can_append_to_vector, bool ,  to_add,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_append_to_vector__int8_t_VectorTint8_tT(int8_t * to_add, union VectorTint8_tT * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int8_t * to_add, union VectorTint8_tT * output
RLC_VISIT_FUNCTION(append_to_vector, rl_append_to_vector__int8_t_VectorTint8_tT, append_to_vector, void ,  to_add,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_append_to_vector__int8_t_VectorTint8_tT_r_bool(bool * __result, int8_t * to_add, union VectorTint8_tT * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int8_t * to_add, union VectorTint8_tT * output
RLC_VISIT_FUNCTION(can_append_to_vector, rl_can_append_to_vector__int8_t_VectorTint8_tT_r_bool, can_append_to_vector, bool ,  to_add,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_parse_from_vector__int64_t_VectorTint8_tT_int64_t_r_bool(bool * __result, int64_t * result, union VectorTint8_tT * input, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS int64_t * result, union VectorTint8_tT * input, int64_t * index
RLC_VISIT_FUNCTION(parse_from_vector, rl_parse_from_vector__int64_t_VectorTint8_tT_int64_t_r_bool, parse_from_vector, bool ,  result,  input,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_parse_from_vector__int64_t_VectorTint8_tT_int64_t_r_bool(bool * __result, int64_t * result, union VectorTint8_tT * input, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS int64_t * result, union VectorTint8_tT * input, int64_t * index
RLC_VISIT_FUNCTION(can_parse_from_vector, rl_can_parse_from_vector__int64_t_VectorTint8_tT_int64_t_r_bool, can_parse_from_vector, bool ,  result,  input,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_parse_from_vector__double_VectorTint8_tT_int64_t_r_bool(bool * __result, double * result, union VectorTint8_tT * input, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS double * result, union VectorTint8_tT * input, int64_t * index
RLC_VISIT_FUNCTION(parse_from_vector, rl_parse_from_vector__double_VectorTint8_tT_int64_t_r_bool, parse_from_vector, bool ,  result,  input,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_parse_from_vector__double_VectorTint8_tT_int64_t_r_bool(bool * __result, double * result, union VectorTint8_tT * input, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS double * result, union VectorTint8_tT * input, int64_t * index
RLC_VISIT_FUNCTION(can_parse_from_vector, rl_can_parse_from_vector__double_VectorTint8_tT_int64_t_r_bool, can_parse_from_vector, bool ,  result,  input,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_parse_from_vector__bool_VectorTint8_tT_int64_t_r_bool(bool * __result, bool * result, union VectorTint8_tT * input, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS bool * result, union VectorTint8_tT * input, int64_t * index
RLC_VISIT_FUNCTION(parse_from_vector, rl_parse_from_vector__bool_VectorTint8_tT_int64_t_r_bool, parse_from_vector, bool ,  result,  input,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_parse_from_vector__bool_VectorTint8_tT_int64_t_r_bool(bool * __result, bool * result, union VectorTint8_tT * input, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS bool * result, union VectorTint8_tT * input, int64_t * index
RLC_VISIT_FUNCTION(can_parse_from_vector, rl_can_parse_from_vector__bool_VectorTint8_tT_int64_t_r_bool, can_parse_from_vector, bool ,  result,  input,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_parse_from_vector__int8_t_VectorTint8_tT_int64_t_r_bool(bool * __result, int8_t * result, union VectorTint8_tT * input, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS int8_t * result, union VectorTint8_tT * input, int64_t * index
RLC_VISIT_FUNCTION(parse_from_vector, rl_parse_from_vector__int8_t_VectorTint8_tT_int64_t_r_bool, parse_from_vector, bool ,  result,  input,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_parse_from_vector__int8_t_VectorTint8_tT_int64_t_r_bool(bool * __result, int8_t * result, union VectorTint8_tT * input, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS int8_t * result, union VectorTint8_tT * input, int64_t * index
RLC_VISIT_FUNCTION(can_parse_from_vector, rl_can_parse_from_vector__int8_t_VectorTint8_tT_int64_t_r_bool, can_parse_from_vector, bool ,  result,  input,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_parse_from_vector__Player_VectorTint8_tT_int64_t_r_bool(bool * __result, union Player * to_add, union VectorTint8_tT * input, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union Player * to_add, union VectorTint8_tT * input, int64_t * index
RLC_VISIT_FUNCTION(parse_from_vector, rl_parse_from_vector__Player_VectorTint8_tT_int64_t_r_bool, Player_parse_from_vector, bool ,  to_add,  input,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_parse_from_vector__Player_VectorTint8_tT_int64_t_r_bool(bool * __result, union Player * to_add, union VectorTint8_tT * input, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union Player * to_add, union VectorTint8_tT * input, int64_t * index
RLC_VISIT_FUNCTION(can_parse_from_vector, rl_can_parse_from_vector__Player_VectorTint8_tT_int64_t_r_bool, can_Player_parse_from_vector, bool ,  to_add,  input,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_from_byte_vector__int8_t_VectorTint8_tT_int64_t_r_bool(bool * __result, int8_t * result, union VectorTint8_tT * input, int64_t * read_bytes);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS int8_t * result, union VectorTint8_tT * input, int64_t * read_bytes
RLC_VISIT_FUNCTION(from_byte_vector, rl_from_byte_vector__int8_t_VectorTint8_tT_int64_t_r_bool, from_byte_vector, bool ,  result,  input,  read_bytes)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_from_byte_vector__int8_t_VectorTint8_tT_int64_t_r_bool(bool * __result, int8_t * result, union VectorTint8_tT * input, int64_t * read_bytes);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS int8_t * result, union VectorTint8_tT * input, int64_t * read_bytes
RLC_VISIT_FUNCTION(can_from_byte_vector, rl_can_from_byte_vector__int8_t_VectorTint8_tT_int64_t_r_bool, can_from_byte_vector, bool ,  result,  input,  read_bytes)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_from_byte_vector__AnyGameAction_VectorTint8_tT_int64_t_r_bool(bool * __result, struct AnyGameAction * result, union VectorTint8_tT * input, int64_t * read_bytes);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS struct AnyGameAction * result, union VectorTint8_tT * input, int64_t * read_bytes
RLC_VISIT_FUNCTION(from_byte_vector, rl_from_byte_vector__AnyGameAction_VectorTint8_tT_int64_t_r_bool, from_byte_vector, bool ,  result,  input,  read_bytes)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_from_byte_vector__AnyGameAction_VectorTint8_tT_int64_t_r_bool(bool * __result, struct AnyGameAction * result, union VectorTint8_tT * input, int64_t * read_bytes);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS struct AnyGameAction * result, union VectorTint8_tT * input, int64_t * read_bytes
RLC_VISIT_FUNCTION(can_from_byte_vector, rl_can_from_byte_vector__AnyGameAction_VectorTint8_tT_int64_t_r_bool, can_from_byte_vector, bool ,  result,  input,  read_bytes)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__String(union String * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * self
RLC_VISIT_FUNCTION(init, rl_m_init__String, String_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__String_r_bool(bool * __result, union String * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__String_r_bool, can_String_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_append__String_int8_t(union String * self, int8_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, int8_t * b
RLC_VISIT_FUNCTION(append, rl_m_append__String_int8_t, String_append, void ,  self,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_append__String_int8_t_r_bool(bool * __result, union String * self, int8_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, int8_t * b
RLC_VISIT_FUNCTION(can_append, rl_m_can_append__String_int8_t_r_bool, can_String_append, bool ,  self,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_get__String_int64_t_r_int8_tRef(int8_t* * __result, union String * self, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, int64_t * index
RLC_VISIT_FUNCTION(get, rl_m_get__String_int64_t_r_int8_tRef, String_get, int8_t* ,  self,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_get__String_int64_t_r_bool(bool * __result, union String * self, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, int64_t * index
RLC_VISIT_FUNCTION(can_get, rl_m_can_get__String_int64_t_r_bool, can_String_get, bool ,  self,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_substring_matches__String_strlit_int64_t_r_bool(bool * __result, union String * self, char* * lit, int64_t * pos);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union String * self, char* * lit, int64_t * pos
RLC_VISIT_FUNCTION(substring_matches, rl_m_substring_matches__String_strlit_int64_t_r_bool, String_substring_matches, bool ,  self,  lit,  pos)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_substring_matches__String_strlit_int64_t_r_bool(bool * __result, union String * self, char* * lit, int64_t * pos);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union String * self, char* * lit, int64_t * pos
RLC_VISIT_FUNCTION(can_substring_matches, rl_m_can_substring_matches__String_strlit_int64_t_r_bool, can_String_substring_matches, bool ,  self,  lit,  pos)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_size__String_r_int64_t(int64_t * __result, union String * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * self
RLC_VISIT_FUNCTION(size, rl_m_size__String_r_int64_t, String_size, int64_t ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_size__String_r_bool(bool * __result, union String * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * self
RLC_VISIT_FUNCTION(can_size, rl_m_can_size__String_r_bool, can_String_size, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_count__String_int8_t_r_int64_t(int64_t * __result, union String * self, int8_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, int8_t * b
RLC_VISIT_FUNCTION(count, rl_m_count__String_int8_t_r_int64_t, String_count, int64_t ,  self,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_count__String_int8_t_r_bool(bool * __result, union String * self, int8_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, int8_t * b
RLC_VISIT_FUNCTION(can_count, rl_m_can_count__String_int8_t_r_bool, can_String_count, bool ,  self,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_append__String_strlit(union String * self, char* * str);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, char* * str
RLC_VISIT_FUNCTION(append, rl_m_append__String_strlit, String_append, void ,  self,  str)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_append__String_strlit_r_bool(bool * __result, union String * self, char* * str);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, char* * str
RLC_VISIT_FUNCTION(can_append, rl_m_can_append__String_strlit_r_bool, can_String_append, bool ,  self,  str)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_append__String_String(union String * self, union String * str);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, union String * str
RLC_VISIT_FUNCTION(append, rl_m_append__String_String, String_append, void ,  self,  str)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_append__String_String_r_bool(bool * __result, union String * self, union String * str);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, union String * str
RLC_VISIT_FUNCTION(can_append, rl_m_can_append__String_String_r_bool, can_String_append, bool ,  self,  str)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_append_quoted__String_String(union String * self, union String * str);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, union String * str
RLC_VISIT_FUNCTION(append_quoted, rl_m_append_quoted__String_String, String_append_quoted, void ,  self,  str)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_append_quoted__String_String_r_bool(bool * __result, union String * self, union String * str);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, union String * str
RLC_VISIT_FUNCTION(can_append_quoted, rl_m_can_append_quoted__String_String_r_bool, can_String_append_quoted, bool ,  self,  str)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_add__String_String_r_String(union String * __result, union String * self, union String * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, union String * other
RLC_VISIT_FUNCTION(add, rl_m_add__String_String_r_String, String_add, union String ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_add__String_String_r_bool(bool * __result, union String * self, union String * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, union String * other
RLC_VISIT_FUNCTION(can_add, rl_m_can_add__String_String_r_bool, can_String_add, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_equal__String_strlit_r_bool(bool * __result, union String * self, char* * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, char* * other
RLC_VISIT_FUNCTION(equal, rl_m_equal__String_strlit_r_bool, String_equal, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_equal__String_strlit_r_bool(bool * __result, union String * self, char* * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, char* * other
RLC_VISIT_FUNCTION(can_equal, rl_m_can_equal__String_strlit_r_bool, can_String_equal, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_equal__String_String_r_bool(bool * __result, union String * self, union String * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, union String * other
RLC_VISIT_FUNCTION(equal, rl_m_equal__String_String_r_bool, String_equal, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_equal__String_String_r_bool(bool * __result, union String * self, union String * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, union String * other
RLC_VISIT_FUNCTION(can_equal, rl_m_can_equal__String_String_r_bool, can_String_equal, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_not_equal__String_String_r_bool(bool * __result, union String * self, union String * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, union String * other
RLC_VISIT_FUNCTION(not_equal, rl_m_not_equal__String_String_r_bool, String_not_equal, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_not_equal__String_String_r_bool(bool * __result, union String * self, union String * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, union String * other
RLC_VISIT_FUNCTION(can_not_equal, rl_m_can_not_equal__String_String_r_bool, can_String_not_equal, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_not_equal__String_strlit_r_bool(bool * __result, union String * self, char* * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, char* * other
RLC_VISIT_FUNCTION(not_equal, rl_m_not_equal__String_strlit_r_bool, String_not_equal, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_not_equal__String_strlit_r_bool(bool * __result, union String * self, char* * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, char* * other
RLC_VISIT_FUNCTION(can_not_equal, rl_m_can_not_equal__String_strlit_r_bool, can_String_not_equal, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_drop_back__String_int64_t(union String * self, int64_t * quantity);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, int64_t * quantity
RLC_VISIT_FUNCTION(drop_back, rl_m_drop_back__String_int64_t, String_drop_back, void ,  self,  quantity)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_drop_back__String_int64_t_r_bool(bool * __result, union String * self, int64_t * quantity);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * self, int64_t * quantity
RLC_VISIT_FUNCTION(can_drop_back, rl_m_can_drop_back__String_int64_t_r_bool, can_String_drop_back, bool ,  self,  quantity)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_back__String_r_int8_tRef(int8_t* * __result, union String * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * self
RLC_VISIT_FUNCTION(back, rl_m_back__String_r_int8_tRef, String_back, int8_t* ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_back__String_r_bool(bool * __result, union String * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * self
RLC_VISIT_FUNCTION(can_back, rl_m_can_back__String_r_bool, can_String_back, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_reverse__String(union String * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * self
RLC_VISIT_FUNCTION(reverse, rl_m_reverse__String, String_reverse, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_reverse__String_r_bool(bool * __result, union String * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * self
RLC_VISIT_FUNCTION(can_reverse, rl_m_can_reverse__String_r_bool, can_String_reverse, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_to_indented_lines__String_r_String(union String * __result, union String * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * self
RLC_VISIT_FUNCTION(to_indented_lines, rl_m_to_indented_lines__String_r_String, String_to_indented_lines, union String ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_to_indented_lines__String_r_bool(bool * __result, union String * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union String * self
RLC_VISIT_FUNCTION(can_to_indented_lines, rl_m_can_to_indented_lines__String_r_bool, can_String_to_indented_lines, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_s__strlit_r_String(union String * __result, char* * literal);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS char* * literal
RLC_VISIT_FUNCTION(s, rl_s__strlit_r_String, s, union String ,  literal)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_s__strlit_r_bool(bool * __result, char* * literal);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS char* * literal
RLC_VISIT_FUNCTION(can_s, rl_can_s__strlit_r_bool, can_s, bool ,  literal)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_append_to_string__strlit_String(char* * x, union String * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS char* * x, union String * output
RLC_VISIT_FUNCTION(append_to_string, rl_append_to_string__strlit_String, append_to_string, void ,  x,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_append_to_string__strlit_String_r_bool(bool * __result, char* * x, union String * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS char* * x, union String * output
RLC_VISIT_FUNCTION(can_append_to_string, rl_can_append_to_string__strlit_String_r_bool, can_append_to_string, bool ,  x,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_load_file__String_String_r_bool(bool * __result, union String * file_name, union String * out);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * file_name, union String * out
RLC_VISIT_FUNCTION(load_file, rl_load_file__String_String_r_bool, String_load_file, bool ,  file_name,  out)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_load_file__String_String_r_bool(bool * __result, union String * file_name, union String * out);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * file_name, union String * out
RLC_VISIT_FUNCTION(can_load_file, rl_can_load_file__String_String_r_bool, can_String_load_file, bool ,  file_name,  out)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_append_to_string__int64_t_String(int64_t * x, union String * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int64_t * x, union String * output
RLC_VISIT_FUNCTION(append_to_string, rl_append_to_string__int64_t_String, append_to_string, void ,  x,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_append_to_string__int64_t_String_r_bool(bool * __result, int64_t * x, union String * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int64_t * x, union String * output
RLC_VISIT_FUNCTION(can_append_to_string, rl_can_append_to_string__int64_t_String_r_bool, can_append_to_string, bool ,  x,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_append_to_string__int8_t_String(int8_t * x, union String * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int8_t * x, union String * output
RLC_VISIT_FUNCTION(append_to_string, rl_append_to_string__int8_t_String, append_to_string, void ,  x,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_append_to_string__int8_t_String_r_bool(bool * __result, int8_t * x, union String * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int8_t * x, union String * output
RLC_VISIT_FUNCTION(can_append_to_string, rl_can_append_to_string__int8_t_String_r_bool, can_append_to_string, bool ,  x,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_append_to_string__double_String(double * x, union String * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS double * x, union String * output
RLC_VISIT_FUNCTION(append_to_string, rl_append_to_string__double_String, append_to_string, void ,  x,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_append_to_string__double_String_r_bool(bool * __result, double * x, union String * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS double * x, union String * output
RLC_VISIT_FUNCTION(can_append_to_string, rl_can_append_to_string__double_String_r_bool, can_append_to_string, bool ,  x,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_append_to_string__String_String(union String * x, union String * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * x, union String * output
RLC_VISIT_FUNCTION(append_to_string, rl_append_to_string__String_String, String_append_to_string, void ,  x,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_append_to_string__String_String_r_bool(bool * __result, union String * x, union String * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union String * x, union String * output
RLC_VISIT_FUNCTION(can_append_to_string, rl_can_append_to_string__String_String_r_bool, can_String_append_to_string, bool ,  x,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_append_to_string__bool_String(bool * x, union String * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS bool * x, union String * output
RLC_VISIT_FUNCTION(append_to_string, rl_append_to_string__bool_String, append_to_string, void ,  x,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_append_to_string__bool_String_r_bool(bool * __result, bool * x, union String * output);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS bool * x, union String * output
RLC_VISIT_FUNCTION(can_append_to_string, rl_can_append_to_string__bool_String_r_bool, can_append_to_string, bool ,  x,  output)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_is_space__int8_t_r_bool(bool * __result, int8_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int8_t * b
RLC_VISIT_FUNCTION(is_space, rl_is_space__int8_t_r_bool, is_space, bool ,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_is_space__int8_t_r_bool(bool * __result, int8_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int8_t * b
RLC_VISIT_FUNCTION(can_is_space, rl_can_is_space__int8_t_r_bool, can_is_space, bool ,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_is_alphanumeric__int8_t_r_bool(bool * __result, int8_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int8_t * b
RLC_VISIT_FUNCTION(is_alphanumeric, rl_is_alphanumeric__int8_t_r_bool, is_alphanumeric, bool ,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_is_alphanumeric__int8_t_r_bool(bool * __result, int8_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int8_t * b
RLC_VISIT_FUNCTION(can_is_alphanumeric, rl_can_is_alphanumeric__int8_t_r_bool, can_is_alphanumeric, bool ,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_is_open_paren__int8_t_r_bool(bool * __result, int8_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int8_t * b
RLC_VISIT_FUNCTION(is_open_paren, rl_is_open_paren__int8_t_r_bool, is_open_paren, bool ,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_is_open_paren__int8_t_r_bool(bool * __result, int8_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int8_t * b
RLC_VISIT_FUNCTION(can_is_open_paren, rl_can_is_open_paren__int8_t_r_bool, can_is_open_paren, bool ,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_is_close_paren__int8_t_r_bool(bool * __result, int8_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int8_t * b
RLC_VISIT_FUNCTION(is_close_paren, rl_is_close_paren__int8_t_r_bool, is_close_paren, bool ,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_is_close_paren__int8_t_r_bool(bool * __result, int8_t * b);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int8_t * b
RLC_VISIT_FUNCTION(can_is_close_paren, rl_can_is_close_paren__int8_t_r_bool, can_is_close_paren, bool ,  b)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_parse_string__int64_t_String_int64_t_r_bool(bool * __result, int64_t * result, union String * buffer, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS int64_t * result, union String * buffer, int64_t * index
RLC_VISIT_FUNCTION(parse_string, rl_parse_string__int64_t_String_int64_t_r_bool, parse_string, bool ,  result,  buffer,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_parse_string__int64_t_String_int64_t_r_bool(bool * __result, int64_t * result, union String * buffer, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS int64_t * result, union String * buffer, int64_t * index
RLC_VISIT_FUNCTION(can_parse_string, rl_can_parse_string__int64_t_String_int64_t_r_bool, can_parse_string, bool ,  result,  buffer,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_parse_string__int8_t_String_int64_t_r_bool(bool * __result, int8_t * result, union String * buffer, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS int8_t * result, union String * buffer, int64_t * index
RLC_VISIT_FUNCTION(parse_string, rl_parse_string__int8_t_String_int64_t_r_bool, parse_string, bool ,  result,  buffer,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_parse_string__int8_t_String_int64_t_r_bool(bool * __result, int8_t * result, union String * buffer, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS int8_t * result, union String * buffer, int64_t * index
RLC_VISIT_FUNCTION(can_parse_string, rl_can_parse_string__int8_t_String_int64_t_r_bool, can_parse_string, bool ,  result,  buffer,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_parse_string__double_String_int64_t_r_bool(bool * __result, double * result, union String * buffer, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS double * result, union String * buffer, int64_t * index
RLC_VISIT_FUNCTION(parse_string, rl_parse_string__double_String_int64_t_r_bool, parse_string, bool ,  result,  buffer,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_parse_string__double_String_int64_t_r_bool(bool * __result, double * result, union String * buffer, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS double * result, union String * buffer, int64_t * index
RLC_VISIT_FUNCTION(can_parse_string, rl_can_parse_string__double_String_int64_t_r_bool, can_parse_string, bool ,  result,  buffer,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_length__strlit_r_int64_t(int64_t * __result, char* * literal);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS char* * literal
RLC_VISIT_FUNCTION(length, rl_length__strlit_r_int64_t, length, int64_t ,  literal)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_length__strlit_r_bool(bool * __result, char* * literal);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS char* * literal
RLC_VISIT_FUNCTION(can_length, rl_can_length__strlit_r_bool, can_length, bool ,  literal)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_parse_string__String_String_int64_t_r_bool(bool * __result, union String * result, union String * buffer, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union String * result, union String * buffer, int64_t * index
RLC_VISIT_FUNCTION(parse_string, rl_parse_string__String_String_int64_t_r_bool, String_parse_string, bool ,  result,  buffer,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_parse_string__String_String_int64_t_r_bool(bool * __result, union String * result, union String * buffer, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union String * result, union String * buffer, int64_t * index
RLC_VISIT_FUNCTION(can_parse_string, rl_can_parse_string__String_String_int64_t_r_bool, can_String_parse_string, bool ,  result,  buffer,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_parse_string__bool_String_int64_t_r_bool(bool * __result, bool * result, union String * buffer, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS bool * result, union String * buffer, int64_t * index
RLC_VISIT_FUNCTION(parse_string, rl_parse_string__bool_String_int64_t_r_bool, parse_string, bool ,  result,  buffer,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_parse_string__bool_String_int64_t_r_bool(bool * __result, bool * result, union String * buffer, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS bool * result, union String * buffer, int64_t * index
RLC_VISIT_FUNCTION(can_parse_string, rl_can_parse_string__bool_String_int64_t_r_bool, can_parse_string, bool ,  result,  buffer,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__BIntT0T16T(union BIntT0T16T * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union BIntT0T16T * self
RLC_VISIT_FUNCTION(init, rl_m_init__BIntT0T16T, BInt_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__BIntT0T16T_r_bool(bool * __result, union BIntT0T16T * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union BIntT0T16T * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__BIntT0T16T_r_bool, can_BInt_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__BIntT1T7T(union BIntT1T7T * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union BIntT1T7T * self
RLC_VISIT_FUNCTION(init, rl_m_init__BIntT1T7T, BInt_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__BIntT1T7T_r_bool(bool * __result, union BIntT1T7T * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union BIntT1T7T * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__BIntT1T7T_r_bool, can_BInt_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_equal__BIntT1T7T_BIntT1T7T_r_bool(bool * __result, union BIntT1T7T * self, union BIntT1T7T * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT1T7T * self, union BIntT1T7T * other
RLC_VISIT_FUNCTION(equal, rl_m_equal__BIntT1T7T_BIntT1T7T_r_bool, BInt_equal, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_equal__BIntT1T7T_BIntT1T7T_r_bool(bool * __result, union BIntT1T7T * self, union BIntT1T7T * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT1T7T * self, union BIntT1T7T * other
RLC_VISIT_FUNCTION(can_equal, rl_m_can_equal__BIntT1T7T_BIntT1T7T_r_bool, can_BInt_equal, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_greater__BIntT1T7T_BIntT1T7T_r_bool(bool * __result, union BIntT1T7T * self, union BIntT1T7T * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT1T7T * self, union BIntT1T7T * other
RLC_VISIT_FUNCTION(greater, rl_m_greater__BIntT1T7T_BIntT1T7T_r_bool, BInt_greater, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_greater__BIntT1T7T_BIntT1T7T_r_bool(bool * __result, union BIntT1T7T * self, union BIntT1T7T * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT1T7T * self, union BIntT1T7T * other
RLC_VISIT_FUNCTION(can_greater, rl_m_can_greater__BIntT1T7T_BIntT1T7T_r_bool, can_BInt_greater, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__BIntT0T16T_int64_t(union BIntT0T16T * self, int64_t * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT0T16T * self, int64_t * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__BIntT0T16T_int64_t, BInt_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__BIntT0T16T_int64_t_r_bool(bool * __result, union BIntT0T16T * self, int64_t * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT0T16T * self, int64_t * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__BIntT0T16T_int64_t_r_bool, can_BInt_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__BIntT1T7T_int64_t(union BIntT1T7T * self, int64_t * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT1T7T * self, int64_t * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__BIntT1T7T_int64_t, BInt_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__BIntT1T7T_int64_t_r_bool(bool * __result, union BIntT1T7T * self, int64_t * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT1T7T * self, int64_t * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__BIntT1T7T_int64_t_r_bool, can_BInt_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_add__BIntT0T16T_int64_t_r_BIntT0T16T(union BIntT0T16T * __result, union BIntT0T16T * self, int64_t * val);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT0T16T * self, int64_t * val
RLC_VISIT_FUNCTION(add, rl_m_add__BIntT0T16T_int64_t_r_BIntT0T16T, BInt_add, union BIntT0T16T ,  self,  val)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_add__BIntT0T16T_int64_t_r_bool(bool * __result, union BIntT0T16T * self, int64_t * val);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT0T16T * self, int64_t * val
RLC_VISIT_FUNCTION(can_add, rl_m_can_add__BIntT0T16T_int64_t_r_bool, can_BInt_add, bool ,  self,  val)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_add__BIntT0T16T_BIntT0T16T_r_BIntT0T16T(union BIntT0T16T * __result, union BIntT0T16T * self, union BIntT0T16T * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT0T16T * self, union BIntT0T16T * other
RLC_VISIT_FUNCTION(add, rl_m_add__BIntT0T16T_BIntT0T16T_r_BIntT0T16T, BInt_add, union BIntT0T16T ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_add__BIntT0T16T_BIntT0T16T_r_bool(bool * __result, union BIntT0T16T * self, union BIntT0T16T * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT0T16T * self, union BIntT0T16T * other
RLC_VISIT_FUNCTION(can_add, rl_m_can_add__BIntT0T16T_BIntT0T16T_r_bool, can_BInt_add, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_sub__BIntT0T16T_BIntT0T16T_r_BIntT0T16T(union BIntT0T16T * __result, union BIntT0T16T * self, union BIntT0T16T * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT0T16T * self, union BIntT0T16T * other
RLC_VISIT_FUNCTION(sub, rl_m_sub__BIntT0T16T_BIntT0T16T_r_BIntT0T16T, BInt_sub, union BIntT0T16T ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_sub__BIntT0T16T_BIntT0T16T_r_bool(bool * __result, union BIntT0T16T * self, union BIntT0T16T * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT0T16T * self, union BIntT0T16T * other
RLC_VISIT_FUNCTION(can_sub, rl_m_can_sub__BIntT0T16T_BIntT0T16T_r_bool, can_BInt_sub, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_sub__BIntT0T16T_int64_t_r_BIntT0T16T(union BIntT0T16T * __result, union BIntT0T16T * self, int64_t * val);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT0T16T * self, int64_t * val
RLC_VISIT_FUNCTION(sub, rl_m_sub__BIntT0T16T_int64_t_r_BIntT0T16T, BInt_sub, union BIntT0T16T ,  self,  val)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_sub__BIntT0T16T_int64_t_r_bool(bool * __result, union BIntT0T16T * self, int64_t * val);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BIntT0T16T * self, int64_t * val
RLC_VISIT_FUNCTION(can_sub, rl_m_can_sub__BIntT0T16T_int64_t_r_bool, can_BInt_sub, bool ,  self,  val)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__VectorTBIntT1T7TT(union VectorTBIntT1T7TT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self
RLC_VISIT_FUNCTION(init, rl_m_init__VectorTBIntT1T7TT, Vector_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__VectorTBIntT1T7TT_r_bool(bool * __result, union VectorTBIntT1T7TT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__VectorTBIntT1T7TT_r_bool, can_Vector_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__VectorTint8_tT(union VectorTint8_tT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTint8_tT * self
RLC_VISIT_FUNCTION(init, rl_m_init__VectorTint8_tT, Vector_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__VectorTint8_tT_r_bool(bool * __result, union VectorTint8_tT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTint8_tT * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__VectorTint8_tT_r_bool, can_Vector_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__VectorTdoubleT(union VectorTdoubleT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTdoubleT * self
RLC_VISIT_FUNCTION(init, rl_m_init__VectorTdoubleT, Vector_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__VectorTdoubleT_r_bool(bool * __result, union VectorTdoubleT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTdoubleT * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__VectorTdoubleT_r_bool, can_Vector_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__VectorTStringT(union VectorTStringT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTStringT * self
RLC_VISIT_FUNCTION(init, rl_m_init__VectorTStringT, Vector_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__VectorTStringT_r_bool(bool * __result, union VectorTStringT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTStringT * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__VectorTStringT_r_bool, can_Vector_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__VectorTboolT(union VectorTboolT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTboolT * self
RLC_VISIT_FUNCTION(init, rl_m_init__VectorTboolT, Vector_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__VectorTboolT_r_bool(bool * __result, union VectorTboolT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTboolT * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__VectorTboolT_r_bool, can_Vector_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_drop__VectorTint8_tT(union VectorTint8_tT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTint8_tT * self
RLC_VISIT_FUNCTION(drop, rl_m_drop__VectorTint8_tT, Vector_drop, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_drop__VectorTint8_tT_r_bool(bool * __result, union VectorTint8_tT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTint8_tT * self
RLC_VISIT_FUNCTION(can_drop, rl_m_can_drop__VectorTint8_tT_r_bool, can_Vector_drop, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_drop__VectorTBIntT1T7TT(union VectorTBIntT1T7TT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self
RLC_VISIT_FUNCTION(drop, rl_m_drop__VectorTBIntT1T7TT, Vector_drop, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_drop__VectorTBIntT1T7TT_r_bool(bool * __result, union VectorTBIntT1T7TT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self
RLC_VISIT_FUNCTION(can_drop, rl_m_can_drop__VectorTBIntT1T7TT_r_bool, can_Vector_drop, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_drop__VectorTdoubleT(union VectorTdoubleT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTdoubleT * self
RLC_VISIT_FUNCTION(drop, rl_m_drop__VectorTdoubleT, Vector_drop, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_drop__VectorTdoubleT_r_bool(bool * __result, union VectorTdoubleT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTdoubleT * self
RLC_VISIT_FUNCTION(can_drop, rl_m_can_drop__VectorTdoubleT_r_bool, can_Vector_drop, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_drop__VectorTStringT(union VectorTStringT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTStringT * self
RLC_VISIT_FUNCTION(drop, rl_m_drop__VectorTStringT, Vector_drop, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_drop__VectorTStringT_r_bool(bool * __result, union VectorTStringT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTStringT * self
RLC_VISIT_FUNCTION(can_drop, rl_m_can_drop__VectorTStringT_r_bool, can_Vector_drop, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_drop__VectorTboolT(union VectorTboolT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTboolT * self
RLC_VISIT_FUNCTION(drop, rl_m_drop__VectorTboolT, Vector_drop, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_drop__VectorTboolT_r_bool(bool * __result, union VectorTboolT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTboolT * self
RLC_VISIT_FUNCTION(can_drop, rl_m_can_drop__VectorTboolT_r_bool, can_Vector_drop, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__VectorTBIntT1T7TT_VectorTBIntT1T7TT(union VectorTBIntT1T7TT * self, union VectorTBIntT1T7TT * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self, union VectorTBIntT1T7TT * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__VectorTBIntT1T7TT_VectorTBIntT1T7TT, Vector_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__VectorTBIntT1T7TT_VectorTBIntT1T7TT_r_bool(bool * __result, union VectorTBIntT1T7TT * self, union VectorTBIntT1T7TT * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self, union VectorTBIntT1T7TT * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__VectorTBIntT1T7TT_VectorTBIntT1T7TT_r_bool, can_Vector_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__VectorTStringT_VectorTStringT(union VectorTStringT * self, union VectorTStringT * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTStringT * self, union VectorTStringT * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__VectorTStringT_VectorTStringT, Vector_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__VectorTStringT_VectorTStringT_r_bool(bool * __result, union VectorTStringT * self, union VectorTStringT * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTStringT * self, union VectorTStringT * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__VectorTStringT_VectorTStringT_r_bool, can_Vector_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__VectorTint8_tT_VectorTint8_tT(union VectorTint8_tT * self, union VectorTint8_tT * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTint8_tT * self, union VectorTint8_tT * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__VectorTint8_tT_VectorTint8_tT, Vector_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__VectorTint8_tT_VectorTint8_tT_r_bool(bool * __result, union VectorTint8_tT * self, union VectorTint8_tT * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTint8_tT * self, union VectorTint8_tT * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__VectorTint8_tT_VectorTint8_tT_r_bool, can_Vector_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__VectorTboolT_VectorTboolT(union VectorTboolT * self, union VectorTboolT * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTboolT * self, union VectorTboolT * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__VectorTboolT_VectorTboolT, Vector_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__VectorTboolT_VectorTboolT_r_bool(bool * __result, union VectorTboolT * self, union VectorTboolT * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTboolT * self, union VectorTboolT * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__VectorTboolT_VectorTboolT_r_bool, can_Vector_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__VectorTdoubleT_VectorTdoubleT(union VectorTdoubleT * self, union VectorTdoubleT * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTdoubleT * self, union VectorTdoubleT * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__VectorTdoubleT_VectorTdoubleT, Vector_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__VectorTdoubleT_VectorTdoubleT_r_bool(bool * __result, union VectorTdoubleT * self, union VectorTdoubleT * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTdoubleT * self, union VectorTdoubleT * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__VectorTdoubleT_VectorTdoubleT_r_bool, can_Vector_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_resize__VectorTdoubleT_int64_t(union VectorTdoubleT * self, int64_t * new_size);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTdoubleT * self, int64_t * new_size
RLC_VISIT_FUNCTION(resize, rl_m_resize__VectorTdoubleT_int64_t, Vector_resize, void ,  self,  new_size)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_resize__VectorTdoubleT_int64_t_r_bool(bool * __result, union VectorTdoubleT * self, int64_t * new_size);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTdoubleT * self, int64_t * new_size
RLC_VISIT_FUNCTION(can_resize, rl_m_can_resize__VectorTdoubleT_int64_t_r_bool, can_Vector_resize, bool ,  self,  new_size)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_back__VectorTint8_tT_r_int8_tRef(int8_t* * __result, union VectorTint8_tT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTint8_tT * self
RLC_VISIT_FUNCTION(back, rl_m_back__VectorTint8_tT_r_int8_tRef, Vector_back, int8_t* ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_back__VectorTint8_tT_r_bool(bool * __result, union VectorTint8_tT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTint8_tT * self
RLC_VISIT_FUNCTION(can_back, rl_m_can_back__VectorTint8_tT_r_bool, can_Vector_back, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_get__VectorTint8_tT_int64_t_r_int8_tRef(int8_t* * __result, union VectorTint8_tT * self, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTint8_tT * self, int64_t * index
RLC_VISIT_FUNCTION(get, rl_m_get__VectorTint8_tT_int64_t_r_int8_tRef, Vector_get, int8_t* ,  self,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_get__VectorTint8_tT_int64_t_r_bool(bool * __result, union VectorTint8_tT * self, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTint8_tT * self, int64_t * index
RLC_VISIT_FUNCTION(can_get, rl_m_can_get__VectorTint8_tT_int64_t_r_bool, can_Vector_get, bool ,  self,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_get__VectorTdoubleT_int64_t_r_doubleRef(double* * __result, union VectorTdoubleT * self, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTdoubleT * self, int64_t * index
RLC_VISIT_FUNCTION(get, rl_m_get__VectorTdoubleT_int64_t_r_doubleRef, Vector_get, double* ,  self,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_get__VectorTdoubleT_int64_t_r_bool(bool * __result, union VectorTdoubleT * self, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTdoubleT * self, int64_t * index
RLC_VISIT_FUNCTION(can_get, rl_m_can_get__VectorTdoubleT_int64_t_r_bool, can_Vector_get, bool ,  self,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_get__VectorTStringT_int64_t_r_StringRef(union String* * __result, union VectorTStringT * self, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTStringT * self, int64_t * index
RLC_VISIT_FUNCTION(get, rl_m_get__VectorTStringT_int64_t_r_StringRef, Vector_get, union String* ,  self,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_get__VectorTStringT_int64_t_r_bool(bool * __result, union VectorTStringT * self, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTStringT * self, int64_t * index
RLC_VISIT_FUNCTION(can_get, rl_m_can_get__VectorTStringT_int64_t_r_bool, can_Vector_get, bool ,  self,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_get__VectorTBIntT1T7TT_int64_t_r_BIntT1T7TRef(union BIntT1T7T* * __result, union VectorTBIntT1T7TT * self, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self, int64_t * index
RLC_VISIT_FUNCTION(get, rl_m_get__VectorTBIntT1T7TT_int64_t_r_BIntT1T7TRef, Vector_get, union BIntT1T7T* ,  self,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_get__VectorTBIntT1T7TT_int64_t_r_bool(bool * __result, union VectorTBIntT1T7TT * self, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self, int64_t * index
RLC_VISIT_FUNCTION(can_get, rl_m_can_get__VectorTBIntT1T7TT_int64_t_r_bool, can_Vector_get, bool ,  self,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_get__VectorTboolT_int64_t_r_boolRef(bool* * __result, union VectorTboolT * self, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTboolT * self, int64_t * index
RLC_VISIT_FUNCTION(get, rl_m_get__VectorTboolT_int64_t_r_boolRef, Vector_get, bool* ,  self,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_get__VectorTboolT_int64_t_r_bool(bool * __result, union VectorTboolT * self, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTboolT * self, int64_t * index
RLC_VISIT_FUNCTION(can_get, rl_m_can_get__VectorTboolT_int64_t_r_bool, can_Vector_get, bool ,  self,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_append__VectorTint8_tT_int8_t(union VectorTint8_tT * self, int8_t * value);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTint8_tT * self, int8_t * value
RLC_VISIT_FUNCTION(append, rl_m_append__VectorTint8_tT_int8_t, Vector_append, void ,  self,  value)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_append__VectorTint8_tT_int8_t_r_bool(bool * __result, union VectorTint8_tT * self, int8_t * value);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTint8_tT * self, int8_t * value
RLC_VISIT_FUNCTION(can_append, rl_m_can_append__VectorTint8_tT_int8_t_r_bool, can_Vector_append, bool ,  self,  value)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_append__VectorTboolT_bool(union VectorTboolT * self, bool * value);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTboolT * self, bool * value
RLC_VISIT_FUNCTION(append, rl_m_append__VectorTboolT_bool, Vector_append, void ,  self,  value)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_append__VectorTboolT_bool_r_bool(bool * __result, union VectorTboolT * self, bool * value);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTboolT * self, bool * value
RLC_VISIT_FUNCTION(can_append, rl_m_can_append__VectorTboolT_bool_r_bool, can_Vector_append, bool ,  self,  value)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_append__VectorTStringT_String(union VectorTStringT * self, union String * value);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTStringT * self, union String * value
RLC_VISIT_FUNCTION(append, rl_m_append__VectorTStringT_String, Vector_append, void ,  self,  value)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_append__VectorTStringT_String_r_bool(bool * __result, union VectorTStringT * self, union String * value);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTStringT * self, union String * value
RLC_VISIT_FUNCTION(can_append, rl_m_can_append__VectorTStringT_String_r_bool, can_Vector_append, bool ,  self,  value)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_append__VectorTdoubleT_double(union VectorTdoubleT * self, double * value);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTdoubleT * self, double * value
RLC_VISIT_FUNCTION(append, rl_m_append__VectorTdoubleT_double, Vector_append, void ,  self,  value)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_append__VectorTdoubleT_double_r_bool(bool * __result, union VectorTdoubleT * self, double * value);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTdoubleT * self, double * value
RLC_VISIT_FUNCTION(can_append, rl_m_can_append__VectorTdoubleT_double_r_bool, can_Vector_append, bool ,  self,  value)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_append__VectorTBIntT1T7TT_BIntT1T7T(union VectorTBIntT1T7TT * self, union BIntT1T7T * value);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self, union BIntT1T7T * value
RLC_VISIT_FUNCTION(append, rl_m_append__VectorTBIntT1T7TT_BIntT1T7T, Vector_append, void ,  self,  value)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_append__VectorTBIntT1T7TT_BIntT1T7T_r_bool(bool * __result, union VectorTBIntT1T7TT * self, union BIntT1T7T * value);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self, union BIntT1T7T * value
RLC_VISIT_FUNCTION(can_append, rl_m_can_append__VectorTBIntT1T7TT_BIntT1T7T_r_bool, can_Vector_append, bool ,  self,  value)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_empty__VectorTBIntT1T7TT_r_bool(bool * __result, union VectorTBIntT1T7TT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self
RLC_VISIT_FUNCTION(empty, rl_m_empty__VectorTBIntT1T7TT_r_bool, Vector_empty, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_empty__VectorTBIntT1T7TT_r_bool(bool * __result, union VectorTBIntT1T7TT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self
RLC_VISIT_FUNCTION(can_empty, rl_m_can_empty__VectorTBIntT1T7TT_r_bool, can_Vector_empty, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_clear__VectorTBIntT1T7TT(union VectorTBIntT1T7TT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self
RLC_VISIT_FUNCTION(clear, rl_m_clear__VectorTBIntT1T7TT, Vector_clear, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_clear__VectorTBIntT1T7TT_r_bool(bool * __result, union VectorTBIntT1T7TT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self
RLC_VISIT_FUNCTION(can_clear, rl_m_can_clear__VectorTBIntT1T7TT_r_bool, can_Vector_clear, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_pop__VectorTStringT_r_String(union String * __result, union VectorTStringT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTStringT * self
RLC_VISIT_FUNCTION(pop, rl_m_pop__VectorTStringT_r_String, Vector_pop, union String ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_pop__VectorTStringT_r_bool(bool * __result, union VectorTStringT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTStringT * self
RLC_VISIT_FUNCTION(can_pop, rl_m_can_pop__VectorTStringT_r_bool, can_Vector_pop, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_pop__VectorTint8_tT_r_int8_t(int8_t * __result, union VectorTint8_tT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTint8_tT * self
RLC_VISIT_FUNCTION(pop, rl_m_pop__VectorTint8_tT_r_int8_t, Vector_pop, int8_t ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_pop__VectorTint8_tT_r_bool(bool * __result, union VectorTint8_tT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTint8_tT * self
RLC_VISIT_FUNCTION(can_pop, rl_m_can_pop__VectorTint8_tT_r_bool, can_Vector_pop, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_pop__VectorTdoubleT_r_double(double * __result, union VectorTdoubleT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTdoubleT * self
RLC_VISIT_FUNCTION(pop, rl_m_pop__VectorTdoubleT_r_double, Vector_pop, double ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_pop__VectorTdoubleT_r_bool(bool * __result, union VectorTdoubleT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTdoubleT * self
RLC_VISIT_FUNCTION(can_pop, rl_m_can_pop__VectorTdoubleT_r_bool, can_Vector_pop, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_pop__VectorTBIntT1T7TT_r_BIntT1T7T(union BIntT1T7T * __result, union VectorTBIntT1T7TT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self
RLC_VISIT_FUNCTION(pop, rl_m_pop__VectorTBIntT1T7TT_r_BIntT1T7T, Vector_pop, union BIntT1T7T ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_pop__VectorTBIntT1T7TT_r_bool(bool * __result, union VectorTBIntT1T7TT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self
RLC_VISIT_FUNCTION(can_pop, rl_m_can_pop__VectorTBIntT1T7TT_r_bool, can_Vector_pop, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_drop_back__VectorTint8_tT_int64_t(union VectorTint8_tT * self, int64_t * quantity);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTint8_tT * self, int64_t * quantity
RLC_VISIT_FUNCTION(drop_back, rl_m_drop_back__VectorTint8_tT_int64_t, Vector_drop_back, void ,  self,  quantity)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_drop_back__VectorTint8_tT_int64_t_r_bool(bool * __result, union VectorTint8_tT * self, int64_t * quantity);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union VectorTint8_tT * self, int64_t * quantity
RLC_VISIT_FUNCTION(can_drop_back, rl_m_can_drop_back__VectorTint8_tT_int64_t_r_bool, can_Vector_drop_back, bool ,  self,  quantity)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_size__VectorTint8_tT_r_int64_t(int64_t * __result, union VectorTint8_tT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTint8_tT * self
RLC_VISIT_FUNCTION(size, rl_m_size__VectorTint8_tT_r_int64_t, Vector_size, int64_t ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_size__VectorTint8_tT_r_bool(bool * __result, union VectorTint8_tT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTint8_tT * self
RLC_VISIT_FUNCTION(can_size, rl_m_can_size__VectorTint8_tT_r_bool, can_Vector_size, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_size__VectorTdoubleT_r_int64_t(int64_t * __result, union VectorTdoubleT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTdoubleT * self
RLC_VISIT_FUNCTION(size, rl_m_size__VectorTdoubleT_r_int64_t, Vector_size, int64_t ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_size__VectorTdoubleT_r_bool(bool * __result, union VectorTdoubleT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTdoubleT * self
RLC_VISIT_FUNCTION(can_size, rl_m_can_size__VectorTdoubleT_r_bool, can_Vector_size, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_size__VectorTStringT_r_int64_t(int64_t * __result, union VectorTStringT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTStringT * self
RLC_VISIT_FUNCTION(size, rl_m_size__VectorTStringT_r_int64_t, Vector_size, int64_t ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_size__VectorTStringT_r_bool(bool * __result, union VectorTStringT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTStringT * self
RLC_VISIT_FUNCTION(can_size, rl_m_can_size__VectorTStringT_r_bool, can_Vector_size, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_size__VectorTBIntT1T7TT_r_int64_t(int64_t * __result, union VectorTBIntT1T7TT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self
RLC_VISIT_FUNCTION(size, rl_m_size__VectorTBIntT1T7TT_r_int64_t, Vector_size, int64_t ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_size__VectorTBIntT1T7TT_r_bool(bool * __result, union VectorTBIntT1T7TT * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTBIntT1T7TT * self
RLC_VISIT_FUNCTION(can_size, rl_m_can_size__VectorTBIntT1T7TT_r_bool, can_Vector_size, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_assign__BoundedVectorTBIntT1T7TT4T_BoundedVectorTBIntT1T7TT4T(union BoundedVectorTBIntT1T7TT4T * self, union BoundedVectorTBIntT1T7TT4T * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self, union BoundedVectorTBIntT1T7TT4T * other
RLC_VISIT_FUNCTION(assign, rl_m_assign__BoundedVectorTBIntT1T7TT4T_BoundedVectorTBIntT1T7TT4T, BoundedVector_assign, void ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_assign__BoundedVectorTBIntT1T7TT4T_BoundedVectorTBIntT1T7TT4T_r_bool(bool * __result, union BoundedVectorTBIntT1T7TT4T * self, union BoundedVectorTBIntT1T7TT4T * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self, union BoundedVectorTBIntT1T7TT4T * other
RLC_VISIT_FUNCTION(can_assign, rl_m_can_assign__BoundedVectorTBIntT1T7TT4T_BoundedVectorTBIntT1T7TT4T_r_bool, can_BoundedVector_assign, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_get__BoundedVectorTBIntT1T7TT4T_int64_t_r_BIntT1T7TRef(union BIntT1T7T* * __result, union BoundedVectorTBIntT1T7TT4T * self, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self, int64_t * index
RLC_VISIT_FUNCTION(get, rl_m_get__BoundedVectorTBIntT1T7TT4T_int64_t_r_BIntT1T7TRef, BoundedVector_get, union BIntT1T7T* ,  self,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_get__BoundedVectorTBIntT1T7TT4T_int64_t_r_bool(bool * __result, union BoundedVectorTBIntT1T7TT4T * self, int64_t * index);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self, int64_t * index
RLC_VISIT_FUNCTION(can_get, rl_m_can_get__BoundedVectorTBIntT1T7TT4T_int64_t_r_bool, can_BoundedVector_get, bool ,  self,  index)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_append__BoundedVectorTBIntT1T7TT4T_BIntT1T7T(union BoundedVectorTBIntT1T7TT4T * self, union BIntT1T7T * value);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self, union BIntT1T7T * value
RLC_VISIT_FUNCTION(append, rl_m_append__BoundedVectorTBIntT1T7TT4T_BIntT1T7T, BoundedVector_append, void ,  self,  value)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_append__BoundedVectorTBIntT1T7TT4T_BIntT1T7T_r_bool(bool * __result, union BoundedVectorTBIntT1T7TT4T * self, union BIntT1T7T * value);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self, union BIntT1T7T * value
RLC_VISIT_FUNCTION(can_append, rl_m_can_append__BoundedVectorTBIntT1T7TT4T_BIntT1T7T_r_bool, can_BoundedVector_append, bool ,  self,  value)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_clear__BoundedVectorTBIntT1T7TT4T(union BoundedVectorTBIntT1T7TT4T * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self
RLC_VISIT_FUNCTION(clear, rl_m_clear__BoundedVectorTBIntT1T7TT4T, BoundedVector_clear, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_clear__BoundedVectorTBIntT1T7TT4T_r_bool(bool * __result, union BoundedVectorTBIntT1T7TT4T * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self
RLC_VISIT_FUNCTION(can_clear, rl_m_can_clear__BoundedVectorTBIntT1T7TT4T_r_bool, can_BoundedVector_clear, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_pop__BoundedVectorTBIntT1T7TT4T_r_BIntT1T7T(union BIntT1T7T * __result, union BoundedVectorTBIntT1T7TT4T * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self
RLC_VISIT_FUNCTION(pop, rl_m_pop__BoundedVectorTBIntT1T7TT4T_r_BIntT1T7T, BoundedVector_pop, union BIntT1T7T ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_pop__BoundedVectorTBIntT1T7TT4T_r_bool(bool * __result, union BoundedVectorTBIntT1T7TT4T * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self
RLC_VISIT_FUNCTION(can_pop, rl_m_can_pop__BoundedVectorTBIntT1T7TT4T_r_bool, can_BoundedVector_pop, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_size__BoundedVectorTBIntT1T7TT4T_r_int64_t(int64_t * __result, union BoundedVectorTBIntT1T7TT4T * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self
RLC_VISIT_FUNCTION(size, rl_m_size__BoundedVectorTBIntT1T7TT4T_r_int64_t, BoundedVector_size, int64_t ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_size__BoundedVectorTBIntT1T7TT4T_r_bool(bool * __result, union BoundedVectorTBIntT1T7TT4T * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union BoundedVectorTBIntT1T7TT4T * self
RLC_VISIT_FUNCTION(can_size, rl_m_can_size__BoundedVectorTBIntT1T7TT4T_r_bool, can_BoundedVector_size, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_randint__RNG_int64_t_int64_t_r_int64_t(int64_t * __result, union RNG * self, int64_t * min, int64_t * max);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union RNG * self, int64_t * min, int64_t * max
RLC_VISIT_FUNCTION(randint, rl_m_randint__RNG_int64_t_int64_t_r_int64_t, RNG_randint, int64_t ,  self,  min,  max)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_randint__RNG_int64_t_int64_t_r_bool(bool * __result, union RNG * self, int64_t * min, int64_t * max);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union RNG * self, int64_t * min, int64_t * max
RLC_VISIT_FUNCTION(can_randint, rl_m_can_randint__RNG_int64_t_int64_t_r_bool, can_RNG_randint, bool ,  self,  min,  max)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_set_seed__RNG_int64_t(union RNG * self, int64_t * new_seed);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union RNG * self, int64_t * new_seed
RLC_VISIT_FUNCTION(set_seed, rl_m_set_seed__RNG_int64_t, RNG_set_seed, void ,  self,  new_seed)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_set_seed__RNG_int64_t_r_bool(bool * __result, union RNG * self, int64_t * new_seed);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union RNG * self, int64_t * new_seed
RLC_VISIT_FUNCTION(can_set_seed, rl_m_can_set_seed__RNG_int64_t_r_bool, can_RNG_set_seed, bool ,  self,  new_seed)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_next__RNG_r_int64_t(int64_t * __result, union RNG * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union RNG * self
RLC_VISIT_FUNCTION(next, rl_m_next__RNG_r_int64_t, RNG_next, int64_t ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_next__RNG_r_bool(bool * __result, union RNG * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union RNG * self
RLC_VISIT_FUNCTION(can_next, rl_m_can_next__RNG_r_bool, can_RNG_next, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_make_rng__int64_t_r_RNG(union RNG * __result, int64_t * seed);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int64_t * seed
RLC_VISIT_FUNCTION(make_rng, rl_make_rng__int64_t_r_RNG, make_rng, union RNG ,  seed)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_make_rng__int64_t_r_bool(bool * __result, int64_t * seed);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS int64_t * seed
RLC_VISIT_FUNCTION(can_make_rng, rl_can_make_rng__int64_t_r_bool, can_make_rng, bool ,  seed)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_size_as_observation_tensor__RNG_r_int64_t(int64_t * __result, union RNG * obj);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union RNG * obj
RLC_VISIT_FUNCTION(size_as_observation_tensor, rl_size_as_observation_tensor__RNG_r_int64_t, RNG_size_as_observation_tensor, int64_t ,  obj)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_size_as_observation_tensor__RNG_r_bool(bool * __result, union RNG * obj);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union RNG * obj
RLC_VISIT_FUNCTION(can_size_as_observation_tensor, rl_can_size_as_observation_tensor__RNG_r_bool, can_RNG_size_as_observation_tensor, bool ,  obj)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_size_as_observation_tensor__ConfigureRNG_r_int64_t(int64_t * __result, union ConfigureRNG * obj);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union ConfigureRNG * obj
RLC_VISIT_FUNCTION(size_as_observation_tensor, rl_size_as_observation_tensor__ConfigureRNG_r_int64_t, ConfigureRNG_size_as_observation_tensor, int64_t ,  obj)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_size_as_observation_tensor__ConfigureRNG_r_bool(bool * __result, union ConfigureRNG * obj);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union ConfigureRNG * obj
RLC_VISIT_FUNCTION(can_size_as_observation_tensor, rl_can_size_as_observation_tensor__ConfigureRNG_r_bool, can_ConfigureRNG_size_as_observation_tensor, bool ,  obj)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_write_in_observation_tensor__RNG_int64_t_VectorTdoubleT_int64_t(union RNG * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * counter);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS union RNG * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * counter
RLC_VISIT_FUNCTION(write_in_observation_tensor, rl_write_in_observation_tensor__RNG_int64_t_VectorTdoubleT_int64_t, RNG_write_in_observation_tensor, void ,  obj,  observer_id,  output,  counter)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_write_in_observation_tensor__RNG_int64_t_VectorTdoubleT_int64_t_r_bool(bool * __result, union RNG * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * counter);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS union RNG * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * counter
RLC_VISIT_FUNCTION(can_write_in_observation_tensor, rl_can_write_in_observation_tensor__RNG_int64_t_VectorTdoubleT_int64_t_r_bool, can_RNG_write_in_observation_tensor, bool ,  obj,  observer_id,  output,  counter)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_write_in_observation_tensor__ConfigureRNG_int64_t_VectorTdoubleT_int64_t(union ConfigureRNG * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * counter);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS union ConfigureRNG * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * counter
RLC_VISIT_FUNCTION(write_in_observation_tensor, rl_write_in_observation_tensor__ConfigureRNG_int64_t_VectorTdoubleT_int64_t, ConfigureRNG_write_in_observation_tensor, void ,  obj,  observer_id,  output,  counter)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_write_in_observation_tensor__ConfigureRNG_int64_t_VectorTdoubleT_int64_t_r_bool(bool * __result, union ConfigureRNG * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * counter);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS union ConfigureRNG * obj, int64_t * observer_id, union VectorTdoubleT * output, int64_t * counter
RLC_VISIT_FUNCTION(can_write_in_observation_tensor, rl_can_write_in_observation_tensor__ConfigureRNG_int64_t_VectorTdoubleT_int64_t_r_bool, can_ConfigureRNG_write_in_observation_tensor, bool ,  obj,  observer_id,  output,  counter)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_human_to_idx__int64_t_bool_r_int64_t(int64_t * __result, int64_t * point, bool * is_black);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int64_t * point, bool * is_black
RLC_VISIT_FUNCTION(human_to_idx, rl_human_to_idx__int64_t_bool_r_int64_t, human_to_idx, int64_t ,  point,  is_black)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_human_to_idx__int64_t_bool_r_bool(bool * __result, int64_t * point, bool * is_black);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS int64_t * point, bool * is_black
RLC_VISIT_FUNCTION(can_human_to_idx, rl_can_human_to_idx__int64_t_bool_r_bool, can_human_to_idx, bool ,  point,  is_black)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_is_equal__Player_Player_r_bool(bool * __result, union Player * self, union Player * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Player * self, union Player * other
RLC_VISIT_FUNCTION(is_equal, rl_m_is_equal__Player_Player_r_bool, Player_is_equal, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_is_equal__Player_Player_r_bool(bool * __result, union Player * self, union Player * other);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Player * self, union Player * other
RLC_VISIT_FUNCTION(can_is_equal, rl_m_can_is_equal__Player_Player_r_bool, can_Player_is_equal, bool ,  self,  other)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_is_white__Player_r_bool(bool * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(is_white, rl_m_is_white__Player_r_bool, Player_is_white, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_is_white__Player_r_bool(bool * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(can_is_white, rl_m_can_is_white__Player_r_bool, can_Player_is_white, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_is_black__Player_r_bool(bool * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(is_black, rl_m_is_black__Player_r_bool, Player_is_black, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_is_black__Player_r_bool(bool * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(can_is_black, rl_m_can_is_black__Player_r_bool, can_Player_is_black, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_is_empty__Player_r_bool(bool * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(is_empty, rl_m_is_empty__Player_r_bool, Player_is_empty, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_is_empty__Player_r_bool(bool * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(can_is_empty, rl_m_can_is_empty__Player_r_bool, can_Player_is_empty, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_opponent__Player_r_Player(union Player * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(opponent, rl_m_opponent__Player_r_Player, Player_opponent, union Player ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_opponent__Player_r_bool(bool * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(can_opponent, rl_m_can_opponent__Player_r_bool, can_Player_opponent, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_is_enum__Player_r_bool(bool * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(is_enum, rl_is_enum__Player_r_bool, Player_is_enum, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_is_enum__Player_r_bool(bool * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(can_is_enum, rl_can_is_enum__Player_r_bool, can_Player_is_enum, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_max__Player_r_int64_t(int64_t * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(max, rl_max__Player_r_int64_t, Player_max, int64_t ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_max__Player_r_bool(bool * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(can_max, rl_can_max__Player_r_bool, can_Player_max, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_as_int__Player_r_int64_t(int64_t * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(as_int, rl_as_int__Player_r_int64_t, Player_as_int, int64_t ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_as_int__Player_r_bool(bool * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(can_as_int, rl_can_as_int__Player_r_bool, can_Player_as_int, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_from_int__Player_int64_t(union Player * self, int64_t * new_value);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Player * self, int64_t * new_value
RLC_VISIT_FUNCTION(from_int, rl_from_int__Player_int64_t, Player_from_int, void ,  self,  new_value)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_from_int__Player_int64_t_r_bool(bool * __result, union Player * self, int64_t * new_value);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Player * self, int64_t * new_value
RLC_VISIT_FUNCTION(can_from_int, rl_can_from_int__Player_int64_t_r_bool, can_Player_from_int, bool ,  self,  new_value)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_as_string_literal__Player_r_strlit(char* * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(as_string_literal, rl_as_string_literal__Player_r_strlit, Player_as_string_literal, char* ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_as_string_literal__Player_r_bool(bool * __result, union Player * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Player * self
RLC_VISIT_FUNCTION(can_as_string_literal, rl_can_as_string_literal__Player_r_bool, can_Player_as_string_literal, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__Move_Player_int64_t_int64_t(union Move * self, union Player * p, int64_t * from_pt, int64_t * to_pt);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS union Move * self, union Player * p, int64_t * from_pt, int64_t * to_pt
RLC_VISIT_FUNCTION(init, rl_m_init__Move_Player_int64_t_int64_t, Move_init, void ,  self,  p,  from_pt,  to_pt)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__Move_Player_int64_t_int64_t_r_bool(bool * __result, union Move * self, union Player * p, int64_t * from_pt, int64_t * to_pt);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS union Move * self, union Player * p, int64_t * from_pt, int64_t * to_pt
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__Move_Player_int64_t_int64_t_r_bool, can_Move_init, bool ,  self,  p,  from_pt,  to_pt)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_to_internal__Move(union Move * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Move * self
RLC_VISIT_FUNCTION(to_internal, rl_m_to_internal__Move, Move_to_internal, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_to_internal__Move_r_bool(bool * __result, union Move * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Move * self
RLC_VISIT_FUNCTION(can_to_internal, rl_m_can_to_internal__Move_r_bool, can_Move_to_internal, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_human_range_ok__Move_BIntT1T7T_r_bool(bool * __result, union Move * self, union BIntT1T7T * roll);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Move * self, union BIntT1T7T * roll
RLC_VISIT_FUNCTION(human_range_ok, rl_m_human_range_ok__Move_BIntT1T7T_r_bool, Move_human_range_ok, bool ,  self,  roll)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_human_range_ok__Move_BIntT1T7T_r_bool(bool * __result, union Move * self, union BIntT1T7T * roll);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Move * self, union BIntT1T7T * roll
RLC_VISIT_FUNCTION(can_human_range_ok, rl_m_can_human_range_ok__Move_BIntT1T7T_r_bool, can_Move_human_range_ok, bool ,  self,  roll)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_init__Board(union Board * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Board * self
RLC_VISIT_FUNCTION(init, rl_m_init__Board, Board_init, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_init__Board_r_bool(bool * __result, union Board * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Board * self
RLC_VISIT_FUNCTION(can_init, rl_m_can_init__Board_r_bool, can_Board_init, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_next_player__Board(union Board * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Board * self
RLC_VISIT_FUNCTION(next_player, rl_m_next_player__Board, Board_next_player, void ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_next_player__Board_r_bool(bool * __result, union Board * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Board * self
RLC_VISIT_FUNCTION(can_next_player, rl_m_can_next_player__Board_r_bool, can_Board_next_player, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_bar_count__Board_Player_r_int64_t(int64_t * __result, union Board * self, union Player * p);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Player * p
RLC_VISIT_FUNCTION(bar_count, rl_m_bar_count__Board_Player_r_int64_t, Board_bar_count, int64_t ,  self,  p)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_bar_count__Board_Player_r_bool(bool * __result, union Board * self, union Player * p);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Player * p
RLC_VISIT_FUNCTION(can_bar_count, rl_m_can_bar_count__Board_Player_r_bool, can_Board_bar_count, bool ,  self,  p)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_has_on_bar__Board_Player_r_bool(bool * __result, union Board * self, union Player * p);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Player * p
RLC_VISIT_FUNCTION(has_on_bar, rl_m_has_on_bar__Board_Player_r_bool, Board_has_on_bar, bool ,  self,  p)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_has_on_bar__Board_Player_r_bool(bool * __result, union Board * self, union Player * p);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Player * p
RLC_VISIT_FUNCTION(can_has_on_bar, rl_m_can_has_on_bar__Board_Player_r_bool, can_Board_has_on_bar, bool ,  self,  p)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_off_count__Board_Player_r_int64_t(int64_t * __result, union Board * self, union Player * p);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Player * p
RLC_VISIT_FUNCTION(off_count, rl_m_off_count__Board_Player_r_int64_t, Board_off_count, int64_t ,  self,  p)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_off_count__Board_Player_r_bool(bool * __result, union Board * self, union Player * p);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Player * p
RLC_VISIT_FUNCTION(can_off_count, rl_m_can_off_count__Board_Player_r_bool, can_Board_off_count, bool ,  self,  p)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_checkers_home_and_off__Board_Player_r_int64_t(int64_t * __result, union Board * self, union Player * p);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Player * p
RLC_VISIT_FUNCTION(checkers_home_and_off, rl_m_checkers_home_and_off__Board_Player_r_int64_t, Board_checkers_home_and_off, int64_t ,  self,  p)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_checkers_home_and_off__Board_Player_r_bool(bool * __result, union Board * self, union Player * p);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Player * p
RLC_VISIT_FUNCTION(can_checkers_home_and_off, rl_m_can_checkers_home_and_off__Board_Player_r_bool, can_Board_checkers_home_and_off, bool ,  self,  p)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_is_all_in_home__Board_Player_r_bool(bool * __result, union Board * self, union Player * p);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Player * p
RLC_VISIT_FUNCTION(is_all_in_home, rl_m_is_all_in_home__Board_Player_r_bool, Board_is_all_in_home, bool ,  self,  p)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_is_all_in_home__Board_Player_r_bool(bool * __result, union Board * self, union Player * p);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Player * p
RLC_VISIT_FUNCTION(can_is_all_in_home, rl_m_can_is_all_in_home__Board_Player_r_bool, can_Board_is_all_in_home, bool ,  self,  p)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_is_blocked__Board_int64_t_Player_r_bool(bool * __result, union Board * self, int64_t * idx, union Player * mover);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union Board * self, int64_t * idx, union Player * mover
RLC_VISIT_FUNCTION(is_blocked, rl_m_is_blocked__Board_int64_t_Player_r_bool, Board_is_blocked, bool ,  self,  idx,  mover)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_is_blocked__Board_int64_t_Player_r_bool(bool * __result, union Board * self, int64_t * idx, union Player * mover);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union Board * self, int64_t * idx, union Player * mover
RLC_VISIT_FUNCTION(can_is_blocked, rl_m_can_is_blocked__Board_int64_t_Player_r_bool, can_Board_is_blocked, bool ,  self,  idx,  mover)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_get_winner__Board_r_Player(union Player * __result, union Board * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Board * self
RLC_VISIT_FUNCTION(get_winner, rl_m_get_winner__Board_r_Player, Board_get_winner, union Player ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_get_winner__Board_r_bool(bool * __result, union Board * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Board * self
RLC_VISIT_FUNCTION(can_get_winner, rl_m_can_get_winner__Board_r_bool, can_Board_get_winner, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_is_game_over__Board_r_bool(bool * __result, union Board * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Board * self
RLC_VISIT_FUNCTION(is_game_over, rl_m_is_game_over__Board_r_bool, Board_is_game_over, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_is_game_over__Board_r_bool(bool * __result, union Board * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Board * self
RLC_VISIT_FUNCTION(can_is_game_over, rl_m_can_is_game_over__Board_r_bool, can_Board_is_game_over, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_bearoff_from__Board_int64_t_BIntT1T7T_Player_r_bool(bool * __result, union Board * self, int64_t * from_idx, union BIntT1T7T * roll, union Player * p);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS union Board * self, int64_t * from_idx, union BIntT1T7T * roll, union Player * p
RLC_VISIT_FUNCTION(can_bearoff_from, rl_m_can_bearoff_from__Board_int64_t_BIntT1T7T_Player_r_bool, Board_can_bearoff_from, bool ,  self,  from_idx,  roll,  p)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_can_bearoff_from__Board_int64_t_BIntT1T7T_Player_r_bool(bool * __result, union Board * self, int64_t * from_idx, union BIntT1T7T * roll, union Player * p);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS union Board * self, int64_t * from_idx, union BIntT1T7T * roll, union Player * p
RLC_VISIT_FUNCTION(can_can_bearoff_from, rl_m_can_can_bearoff_from__Board_int64_t_BIntT1T7T_Player_r_bool, can_Board_can_bearoff_from, bool ,  self,  from_idx,  roll,  p)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_is_valid_move_internal__Board_Move_BIntT1T7T_r_bool(bool * __result, union Board * self, union Move * move, union BIntT1T7T * roll);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union Board * self, union Move * move, union BIntT1T7T * roll
RLC_VISIT_FUNCTION(is_valid_move_internal, rl_m_is_valid_move_internal__Board_Move_BIntT1T7T_r_bool, Board_is_valid_move_internal, bool ,  self,  move,  roll)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_is_valid_move_internal__Board_Move_BIntT1T7T_r_bool(bool * __result, union Board * self, union Move * move, union BIntT1T7T * roll);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union Board * self, union Move * move, union BIntT1T7T * roll
RLC_VISIT_FUNCTION(can_is_valid_move_internal, rl_m_can_is_valid_move_internal__Board_Move_BIntT1T7T_r_bool, can_Board_is_valid_move_internal, bool ,  self,  move,  roll)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_is_valid_move__Board_Move_BIntT1T7T_r_bool(bool * __result, union Board * self, union Move * move, union BIntT1T7T * roll);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union Board * self, union Move * move, union BIntT1T7T * roll
RLC_VISIT_FUNCTION(is_valid_move, rl_m_is_valid_move__Board_Move_BIntT1T7T_r_bool, Board_is_valid_move, bool ,  self,  move,  roll)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_is_valid_move__Board_Move_BIntT1T7T_r_bool(bool * __result, union Board * self, union Move * move, union BIntT1T7T * roll);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union Board * self, union Move * move, union BIntT1T7T * roll
RLC_VISIT_FUNCTION(can_is_valid_move, rl_m_can_is_valid_move__Board_Move_BIntT1T7T_r_bool, can_Board_is_valid_move, bool ,  self,  move,  roll)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_has_any_legal_move__Board_Player_BIntT1T7T_r_bool(bool * __result, union Board * self, union Player * p, union BIntT1T7T * roll);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union Board * self, union Player * p, union BIntT1T7T * roll
RLC_VISIT_FUNCTION(has_any_legal_move, rl_m_has_any_legal_move__Board_Player_BIntT1T7T_r_bool, Board_has_any_legal_move, bool ,  self,  p,  roll)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_has_any_legal_move__Board_Player_BIntT1T7T_r_bool(bool * __result, union Board * self, union Player * p, union BIntT1T7T * roll);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union Board * self, union Player * p, union BIntT1T7T * roll
RLC_VISIT_FUNCTION(can_has_any_legal_move, rl_m_can_has_any_legal_move__Board_Player_BIntT1T7T_r_bool, can_Board_has_any_legal_move, bool ,  self,  p,  roll)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_clone__Board_r_Board(union Board * __result, union Board * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Board * self
RLC_VISIT_FUNCTION(clone, rl_m_clone__Board_r_Board, Board_clone, union Board ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_clone__Board_r_bool(bool * __result, union Board * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Board * self
RLC_VISIT_FUNCTION(can_clone, rl_m_can_clone__Board_r_bool, can_Board_clone, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_play_sequence__Board_BIntT1T7T_BIntT1T7T_Player_r_bool(bool * __result, union Board * self, union BIntT1T7T * d1, union BIntT1T7T * d2, union Player * p);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS union Board * self, union BIntT1T7T * d1, union BIntT1T7T * d2, union Player * p
RLC_VISIT_FUNCTION(can_play_sequence, rl_m_can_play_sequence__Board_BIntT1T7T_BIntT1T7T_Player_r_bool, Board_can_play_sequence, bool ,  self,  d1,  d2,  p)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_can_play_sequence__Board_BIntT1T7T_BIntT1T7T_Player_r_bool(bool * __result, union Board * self, union BIntT1T7T * d1, union BIntT1T7T * d2, union Player * p);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 4
#define RLC_ARGUMENTS union Board * self, union BIntT1T7T * d1, union BIntT1T7T * d2, union Player * p
RLC_VISIT_FUNCTION(can_can_play_sequence, rl_m_can_can_play_sequence__Board_BIntT1T7T_BIntT1T7T_Player_r_bool, can_Board_can_play_sequence, bool ,  self,  d1,  d2,  p)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_get_score_multiplier__Board_Player_r_double(double * __result, union Board * self, union Player * winner);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Player * winner
RLC_VISIT_FUNCTION(get_score_multiplier, rl_m_get_score_multiplier__Board_Player_r_double, Board_get_score_multiplier, double ,  self,  winner)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_get_score_multiplier__Board_Player_r_bool(bool * __result, union Board * self, union Player * winner);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Player * winner
RLC_VISIT_FUNCTION(can_get_score_multiplier, rl_m_can_get_score_multiplier__Board_Player_r_bool, can_Board_get_score_multiplier, bool ,  self,  winner)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_apply_move_internal__Board_Move(union Board * self, union Move * move);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Move * move
RLC_VISIT_FUNCTION(apply_move_internal, rl_m_apply_move_internal__Board_Move, Board_apply_move_internal, void ,  self,  move)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_apply_move_internal__Board_Move_r_bool(bool * __result, union Board * self, union Move * move);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Move * move
RLC_VISIT_FUNCTION(can_apply_move_internal, rl_m_can_apply_move_internal__Board_Move_r_bool, can_Board_apply_move_internal, bool ,  self,  move)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_apply_move__Board_Move(union Board * self, union Move * move);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Move * move
RLC_VISIT_FUNCTION(apply_move, rl_m_apply_move__Board_Move, Board_apply_move, void ,  self,  move)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_apply_move__Board_Move_r_bool(bool * __result, union Board * self, union Move * move);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, union Move * move
RLC_VISIT_FUNCTION(can_apply_move, rl_m_can_apply_move__Board_Move_r_bool, can_Board_apply_move, bool ,  self,  move)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_point_char__Board_int64_t_r_int8_t(int8_t * __result, union Board * self, int64_t * idx);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, int64_t * idx
RLC_VISIT_FUNCTION(point_char, rl_m_point_char__Board_int64_t_r_int8_t, Board_point_char, int8_t ,  self,  idx)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_point_char__Board_int64_t_r_bool(bool * __result, union Board * self, int64_t * idx);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, int64_t * idx
RLC_VISIT_FUNCTION(can_point_char, rl_m_can_point_char__Board_int64_t_r_bool, can_Board_point_char, bool ,  self,  idx)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_to_str__Board_int64_t_r_String(union String * __result, union Board * self, int64_t * n);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, int64_t * n
RLC_VISIT_FUNCTION(to_str, rl_m_to_str__Board_int64_t_r_String, Board_to_str, union String ,  self,  n)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_to_str__Board_int64_t_r_bool(bool * __result, union Board * self, int64_t * n);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Board * self, int64_t * n
RLC_VISIT_FUNCTION(can_to_str, rl_m_can_to_str__Board_int64_t_r_bool, can_Board_to_str, bool ,  self,  n)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_to_string__Board_r_String(union String * __result, union Board * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Board * self
RLC_VISIT_FUNCTION(to_string, rl_m_to_string__Board_r_String, Board_to_string, union String ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_to_string__Board_r_bool(bool * __result, union Board * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Board * self
RLC_VISIT_FUNCTION(can_to_string, rl_m_can_to_string__Board_r_bool, can_Board_to_string, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_roll_dice__RNG_r_BoundedVectorTBIntT1T7TT4T(union BoundedVectorTBIntT1T7TT4T * __result, union RNG * rng);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union RNG * rng
RLC_VISIT_FUNCTION(roll_dice, rl_roll_dice__RNG_r_BoundedVectorTBIntT1T7TT4T, RNG_roll_dice, union BoundedVectorTBIntT1T7TT4T ,  rng)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_roll_dice__RNG_r_bool(bool * __result, union RNG * rng);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union RNG * rng
RLC_VISIT_FUNCTION(can_roll_dice, rl_can_roll_dice__RNG_r_bool, can_RNG_roll_dice, bool ,  rng)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_apply__GameInitializeSeed_Game(union GameInitializeSeed * self, union Game * frame);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union GameInitializeSeed * self, union Game * frame
RLC_VISIT_FUNCTION(apply, rl_apply__GameInitializeSeed_Game, GameInitializeSeed_apply, void ,  self,  frame)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_apply__GameInitializeSeed_Game_r_bool(bool * __result, union GameInitializeSeed * self, union Game * frame);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union GameInitializeSeed * self, union Game * frame
RLC_VISIT_FUNCTION(can_apply, rl_can_apply__GameInitializeSeed_Game_r_bool, can_GameInitializeSeed_apply, bool ,  self,  frame)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_get_type_name__GameInitializeSeed_r_strlit(char* * __result, union GameInitializeSeed * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union GameInitializeSeed * self
RLC_VISIT_FUNCTION(get_type_name, rl_get_type_name__GameInitializeSeed_r_strlit, GameInitializeSeed_get_type_name, char* ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_get_type_name__GameInitializeSeed_r_bool(bool * __result, union GameInitializeSeed * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union GameInitializeSeed * self
RLC_VISIT_FUNCTION(can_get_type_name, rl_can_get_type_name__GameInitializeSeed_r_bool, can_GameInitializeSeed_get_type_name, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_apply__GameSelectMove_Game(union GameSelectMove * self, union Game * frame);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union GameSelectMove * self, union Game * frame
RLC_VISIT_FUNCTION(apply, rl_apply__GameSelectMove_Game, GameSelectMove_apply, void ,  self,  frame)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_apply__GameSelectMove_Game_r_bool(bool * __result, union GameSelectMove * self, union Game * frame);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union GameSelectMove * self, union Game * frame
RLC_VISIT_FUNCTION(can_apply, rl_can_apply__GameSelectMove_Game_r_bool, can_GameSelectMove_apply, bool ,  self,  frame)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_get_type_name__GameSelectMove_r_strlit(char* * __result, union GameSelectMove * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union GameSelectMove * self
RLC_VISIT_FUNCTION(get_type_name, rl_get_type_name__GameSelectMove_r_strlit, GameSelectMove_get_type_name, char* ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_get_type_name__GameSelectMove_r_bool(bool * __result, union GameSelectMove * self);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union GameSelectMove * self
RLC_VISIT_FUNCTION(can_get_type_name, rl_can_get_type_name__GameSelectMove_r_bool, can_GameSelectMove_get_type_name, bool ,  self)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_apply__AnyGameAction_Game(struct AnyGameAction * self, union Game * frame);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS struct AnyGameAction * self, union Game * frame
RLC_VISIT_FUNCTION(apply, rl_apply__AnyGameAction_Game, apply, void ,  self,  frame)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_apply__AnyGameAction_Game_r_bool(bool * __result, struct AnyGameAction * self, union Game * frame);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS struct AnyGameAction * self, union Game * frame
RLC_VISIT_FUNCTION(can_apply, rl_can_apply__AnyGameAction_Game_r_bool, can_apply, bool ,  self,  frame)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_pretty_print__Game(union Game * game);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Game * game
RLC_VISIT_FUNCTION(pretty_print, rl_pretty_print__Game, Game_pretty_print, void ,  game)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_pretty_print__Game_r_bool(bool * __result, union Game * game);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Game * game
RLC_VISIT_FUNCTION(can_pretty_print, rl_can_pretty_print__Game_r_bool, can_Game_pretty_print, bool ,  game)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_get_current_player__Game_r_int64_t(int64_t * __result, union Game * g);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Game * g
RLC_VISIT_FUNCTION(get_current_player, rl_get_current_player__Game_r_int64_t, Game_get_current_player, int64_t ,  g)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_get_current_player__Game_r_bool(bool * __result, union Game * g);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Game * g
RLC_VISIT_FUNCTION(can_get_current_player, rl_can_get_current_player__Game_r_bool, can_Game_get_current_player, bool ,  g)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_score__Game_int64_t_r_double(double * __result, union Game * g, int64_t * player_id);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Game * g, int64_t * player_id
RLC_VISIT_FUNCTION(score, rl_score__Game_int64_t_r_double, Game_score, double ,  g,  player_id)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_score__Game_int64_t_r_bool(bool * __result, union Game * g, int64_t * player_id);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Game * g, int64_t * player_id
RLC_VISIT_FUNCTION(can_score, rl_can_score__Game_int64_t_r_bool, can_Game_score, bool ,  g,  player_id)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_get_num_players__r_int64_t(int64_t * __result);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 0
#define RLC_ARGUMENTS 
RLC_VISIT_FUNCTION(get_num_players, rl_get_num_players__r_int64_t, get_num_players, int64_t , )
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_get_num_players__r_bool(bool * __result);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 0
#define RLC_ARGUMENTS 
RLC_VISIT_FUNCTION(can_get_num_players, rl_can_get_num_players__r_bool, can_get_num_players, bool , )
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_fuzz__VectorTint8_tT(union VectorTint8_tT * input);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTint8_tT * input
RLC_VISIT_FUNCTION(fuzz, rl_fuzz__VectorTint8_tT, Vector_fuzz, void ,  input)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_fuzz__VectorTint8_tT_r_bool(bool * __result, union VectorTint8_tT * input);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union VectorTint8_tT * input
RLC_VISIT_FUNCTION(can_fuzz, rl_can_fuzz__VectorTint8_tT_r_bool, can_Vector_fuzz, bool ,  input)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_configure_rng__r_ConfigureRNG(union ConfigureRNG * __result);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 0
#define RLC_ARGUMENTS 
RLC_VISIT_FUNCTION(configure_rng, rl_configure_rng__r_ConfigureRNG, ConfigureRNG_configure_rng, union ConfigureRNG , )
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_configure_rng__r_bool(bool * __result);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 0
#define RLC_ARGUMENTS 
RLC_VISIT_FUNCTION(can_configure_rng, rl_can_configure_rng__r_bool, can_ConfigureRNG_configure_rng, bool , )
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_set_rng_bit__ConfigureRNG_bool(union ConfigureRNG * self, bool * bit);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union ConfigureRNG * self, bool * bit
RLC_VISIT_FUNCTION(set_rng_bit, rl_m_set_rng_bit__ConfigureRNG_bool, ConfigureRNG_set_rng_bit, void ,  self,  bit)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_set_rng_bit__ConfigureRNG_bool_r_bool(bool * __result, union ConfigureRNG * self, bool * bit);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union ConfigureRNG * self, bool * bit
RLC_VISIT_FUNCTION(can_set_rng_bit, rl_m_can_set_rng_bit__ConfigureRNG_bool_r_bool, can_ConfigureRNG_set_rng_bit, bool ,  self,  bit)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_is_done__ConfigureRNG_r_bool(bool * __result, union ConfigureRNG * arg0);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union ConfigureRNG * arg0
RLC_VISIT_FUNCTION(is_done, rl_m_is_done__ConfigureRNG_r_bool, ConfigureRNG_is_done, bool ,  arg0)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_is_done__ConfigureRNG_r_bool(bool * __result, union ConfigureRNG * arg0);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union ConfigureRNG * arg0
RLC_VISIT_FUNCTION(can_is_done, rl_m_can_is_done__ConfigureRNG_r_bool, can_ConfigureRNG_is_done, bool ,  arg0)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_play__r_Game(union Game * __result);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 0
#define RLC_ARGUMENTS 
RLC_VISIT_FUNCTION(play, rl_play__r_Game, Game_play, union Game , )
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_can_play__r_bool(bool * __result);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 0
#define RLC_ARGUMENTS 
RLC_VISIT_FUNCTION(can_play, rl_can_play__r_bool, can_Game_play, bool , )
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_initialize_seed__Game_int64_t(union Game * self, int64_t * external_seed);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Game * self, int64_t * external_seed
RLC_VISIT_FUNCTION(initialize_seed, rl_m_initialize_seed__Game_int64_t, Game_initialize_seed, void ,  self,  external_seed)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_initialize_seed__Game_int64_t_r_bool(bool * __result, union Game * self, int64_t * external_seed);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 2
#define RLC_ARGUMENTS union Game * self, int64_t * external_seed
RLC_VISIT_FUNCTION(can_initialize_seed, rl_m_can_initialize_seed__Game_int64_t_r_bool, can_Game_initialize_seed, bool ,  self,  external_seed)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_select_move__Game_int64_t_Move(union Game * self, int64_t * die_idx, union Move * move);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union Game * self, int64_t * die_idx, union Move * move
RLC_VISIT_FUNCTION(select_move, rl_m_select_move__Game_int64_t_Move, Game_select_move, void ,  self,  die_idx,  move)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_select_move__Game_int64_t_Move_r_bool(bool * __result, union Game * self, int64_t * die_idx, union Move * move);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 3
#define RLC_ARGUMENTS union Game * self, int64_t * die_idx, union Move * move
RLC_VISIT_FUNCTION(can_select_move, rl_m_can_select_move__Game_int64_t_Move_r_bool, can_Game_select_move, bool ,  self,  die_idx,  move)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_is_done__Game_r_bool(bool * __result, union Game * arg0);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Game * arg0
RLC_VISIT_FUNCTION(is_done, rl_m_is_done__Game_r_bool, Game_is_done, bool ,  arg0)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
void rl_m_can_is_done__Game_r_bool(bool * __result, union Game * arg0);
#endif

#ifdef RLC_VISIT_FUNCTION
#define RLC_ARGUMENTS_COUNT 1
#define RLC_ARGUMENTS union Game * arg0
RLC_VISIT_FUNCTION(can_is_done, rl_m_can_is_done__Game_r_bool, can_Game_is_done, bool ,  arg0)
#undef RLC_ARGUMENTS_COUNT
#undef RLC_ARGUMENTS
#endif

#ifdef RLC_GET_FUNCTION_DECLS
#undef RLC_GET_FUNCTION_DECLS
#endif

#ifdef RLC_VISIT_FUNCTION
#undef RLC_VISIT_FUNCTION
#endif
#ifdef RLC_GET_TYPE_DEFS
typedef union VectorTint8_tT {
struct _ContentVectorTint8_tT {
    int8_t* _data;
    int64_t _size;
    int64_t _capacity;
  } content;
#ifdef __cplusplus
VectorTint8_tT& operator=(union VectorTint8_tT(& other));
void append(int8_t(& value));
~VectorTint8_tT();
int8_t pop();
int8_t* back();
int8_t* get(int64_t(& index));
int64_t size();
VectorTint8_tT();
void drop_back(int64_t(& quantity));
VectorTint8_tT(const VectorTint8_tT& other) : VectorTint8_tT() {*this = const_cast<VectorTint8_tT&>(other);}
VectorTint8_tT(VectorTint8_tT&& other) = delete;
VectorTint8_tT& operator=(VectorTint8_tT&& other) = delete;
#endif
} VectorTint8_tT;
typedef union String {
struct _ContentString {
    union VectorTint8_tT _data;
  } content;
#ifdef __cplusplus
void append(char*(& str));
void drop_back(int64_t(& quantity));
bool operator==(union String(& other));
void append_quoted(union String(& str));
bool not_equal(union String(& other));
bool substring_matches(char*(& lit), int64_t(& pos));
bool not_equal(char*(& other));
union String to_indented_lines();
void append(union String(& str));
~String();
bool operator==(char*(& other));
String& operator=(union String(& other));
void reverse();
void append(int8_t(& b));
int64_t size();
int8_t* get(int64_t(& index));
union String add(union String(& other));
String();
int64_t count(int8_t(& b));
int8_t* back();
String(const String& other) : String() {*this = const_cast<String&>(other);}
String(String&& other) = delete;
String& operator=(String&& other) = delete;
#endif
} String;
typedef union BIntT1T7T {
struct _ContentBIntT1T7T {
    int64_t value;
  } content;
#ifdef __cplusplus
bool operator==(union BIntT1T7T(& other));
bool greater(union BIntT1T7T(& other));
BIntT1T7T& operator=(union BIntT1T7T(& other));
void operator=(int64_t(& other));
BIntT1T7T();
BIntT1T7T(const BIntT1T7T& other) : BIntT1T7T() {*this = const_cast<BIntT1T7T&>(other);}
BIntT1T7T(BIntT1T7T&& other) = delete;
BIntT1T7T& operator=(BIntT1T7T&& other) = delete;
~BIntT1T7T() {}
#endif
} BIntT1T7T;
typedef union BIntT0T16T {
struct _ContentBIntT0T16T {
    int64_t value;
  } content;
#ifdef __cplusplus
union BIntT0T16T add(int64_t(& val));
union BIntT0T16T sub(int64_t(& val));
BIntT0T16T& operator=(union BIntT0T16T(& other));
void operator=(int64_t(& other));
union BIntT0T16T sub(union BIntT0T16T(& other));
BIntT0T16T();
union BIntT0T16T add(union BIntT0T16T(& other));
BIntT0T16T(const BIntT0T16T& other) : BIntT0T16T() {*this = const_cast<BIntT0T16T&>(other);}
BIntT0T16T(BIntT0T16T&& other) = delete;
BIntT0T16T& operator=(BIntT0T16T&& other) = delete;
~BIntT0T16T() {}
#endif
} BIntT0T16T;
typedef union VectorTdoubleT {
struct _ContentVectorTdoubleT {
    double* _data;
    int64_t _size;
    int64_t _capacity;
  } content;
#ifdef __cplusplus
void resize(int64_t(& new_size));
VectorTdoubleT();
int64_t size();
double pop();
void append(double(& value));
~VectorTdoubleT();
VectorTdoubleT& operator=(union VectorTdoubleT(& other));
double* get(int64_t(& index));
VectorTdoubleT(const VectorTdoubleT& other) : VectorTdoubleT() {*this = const_cast<VectorTdoubleT&>(other);}
VectorTdoubleT(VectorTdoubleT&& other) = delete;
VectorTdoubleT& operator=(VectorTdoubleT&& other) = delete;
#endif
} VectorTdoubleT;
typedef union VectorTboolT {
struct _ContentVectorTboolT {
    bool* _data;
    int64_t _size;
    int64_t _capacity;
  } content;
#ifdef __cplusplus
VectorTboolT();
void append(bool(& value));
bool* get(int64_t(& index));
VectorTboolT& operator=(union VectorTboolT(& other));
~VectorTboolT();
VectorTboolT(const VectorTboolT& other) : VectorTboolT() {*this = const_cast<VectorTboolT&>(other);}
VectorTboolT(VectorTboolT&& other) = delete;
VectorTboolT& operator=(VectorTboolT&& other) = delete;
#endif
} VectorTboolT;
typedef union VectorTStringT {
struct _ContentVectorTStringT {
    union String* _data;
    int64_t _size;
    int64_t _capacity;
  } content;
#ifdef __cplusplus
VectorTStringT();
void append(union String(& value));
union String* get(int64_t(& index));
VectorTStringT& operator=(union VectorTStringT(& other));
~VectorTStringT();
union String pop();
int64_t size();
VectorTStringT(const VectorTStringT& other) : VectorTStringT() {*this = const_cast<VectorTStringT&>(other);}
VectorTStringT(VectorTStringT&& other) = delete;
VectorTStringT& operator=(VectorTStringT&& other) = delete;
#endif
} VectorTStringT;
typedef union VectorTBIntT1T7TT {
struct _ContentVectorTBIntT1T7TT {
    union BIntT1T7T* _data;
    int64_t _size;
    int64_t _capacity;
  } content;
#ifdef __cplusplus
union BIntT1T7T pop();
~VectorTBIntT1T7TT();
void append(union BIntT1T7T(& value));
bool empty();
VectorTBIntT1T7TT& operator=(union VectorTBIntT1T7TT(& other));
union BIntT1T7T* get(int64_t(& index));
void clear();
VectorTBIntT1T7TT();
int64_t size();
VectorTBIntT1T7TT(const VectorTBIntT1T7TT& other) : VectorTBIntT1T7TT() {*this = const_cast<VectorTBIntT1T7TT&>(other);}
VectorTBIntT1T7TT(VectorTBIntT1T7TT&& other) = delete;
VectorTBIntT1T7TT& operator=(VectorTBIntT1T7TT&& other) = delete;
#endif
} VectorTBIntT1T7TT;
typedef union BoundedVectorTBIntT1T7TT4T {
struct _ContentBoundedVectorTBIntT1T7TT4T {
    union VectorTBIntT1T7TT _data;
  } content;
#ifdef __cplusplus
int64_t size();
void append(union BIntT1T7T(& value));
BoundedVectorTBIntT1T7TT4T();
void clear();
BoundedVectorTBIntT1T7TT4T& operator=(union BoundedVectorTBIntT1T7TT4T(& other));
union BIntT1T7T* get(int64_t(& index));
~BoundedVectorTBIntT1T7TT4T();
union BIntT1T7T pop();
BoundedVectorTBIntT1T7TT4T(const BoundedVectorTBIntT1T7TT4T& other) : BoundedVectorTBIntT1T7TT4T() {*this = const_cast<BoundedVectorTBIntT1T7TT4T&>(other);}
BoundedVectorTBIntT1T7TT4T(BoundedVectorTBIntT1T7TT4T&& other) = delete;
BoundedVectorTBIntT1T7TT4T& operator=(BoundedVectorTBIntT1T7TT4T&& other) = delete;
#endif
} BoundedVectorTBIntT1T7TT4T;
typedef union RNG {
struct _ContentRNG {
    int64_t s[4];
  } content;
#ifdef __cplusplus
RNG();
int64_t next();
int64_t randint(int64_t(& min), int64_t(& max));
void set_seed(int64_t(& new_seed));
RNG& operator=(union RNG(& other));
RNG(const RNG& other) : RNG() {*this = const_cast<RNG&>(other);}
RNG(RNG&& other) = delete;
RNG& operator=(RNG&& other) = delete;
~RNG() {}
#endif
} RNG;
typedef union Player {
struct _ContentPlayer {
    int64_t value;
  } content;
#ifdef __cplusplus
union Player opponent();
bool is_equal(union Player(& other));
bool is_black();
bool is_white();
Player();
Player& operator=(union Player(& other));
bool is_empty();
Player(const Player& other) : Player() {*this = const_cast<Player&>(other);}
Player(Player&& other) = delete;
Player& operator=(Player&& other) = delete;
~Player() {}
#endif
} Player;
typedef union Point {
struct _ContentPoint {
    union Player owner;
    union BIntT0T16T count;
  } content;
#ifdef __cplusplus
Point& operator=(union Point(& other));
Point();
Point(const Point& other) : Point() {*this = const_cast<Point&>(other);}
Point(Point&& other) = delete;
Point& operator=(Point&& other) = delete;
~Point() {}
#endif
} Point;
typedef union Move {
struct _ContentMove {
    union Player player;
    int64_t from_point;
    int64_t to_point;
  } content;
#ifdef __cplusplus
Move& operator=(union Move(& other));
void to_internal();
bool human_range_ok(union BIntT1T7T(& roll));
Move(union Player(& p), int64_t(& from_pt), int64_t(& to_pt));
Move();
Move(const Move& other) : Move() {*this = const_cast<Move&>(other);}
Move(Move&& other) = delete;
Move& operator=(Move&& other) = delete;
~Move() {}
#endif
} Move;
typedef union Board {
struct _ContentBoard {
    union Point points[24];
    union BIntT0T16T bar_white;
    union BIntT0T16T bar_black;
    union BIntT0T16T off_white;
    union BIntT0T16T off_black;
    union Player curr_player;
    union BoundedVectorTBIntT1T7TT4T remaining_moves;
  } content;
#ifdef __cplusplus
double get_score_multiplier(union Player(& winner));
union String to_str(int64_t(& n));
union Player get_winner();
bool has_any_legal_move(union Player(& p), union BIntT1T7T(& roll));
bool can_bearoff_from(int64_t(& from_idx), union BIntT1T7T(& roll), union Player(& p));
Board& operator=(union Board(& other));
int8_t point_char(int64_t(& idx));
bool has_on_bar(union Player(& p));
bool is_blocked(int64_t(& idx), union Player(& mover));
bool is_valid_move_internal(union Move(& move), union BIntT1T7T(& roll));
union String to_string();
int64_t off_count(union Player(& p));
bool is_valid_move(union Move(& move), union BIntT1T7T(& roll));
int64_t bar_count(union Player(& p));
bool can_play_sequence(union BIntT1T7T(& d1), union BIntT1T7T(& d2), union Player(& p));
~Board();
int64_t checkers_home_and_off(union Player(& p));
bool is_game_over();
void apply_move(union Move(& move));
bool is_all_in_home(union Player(& p));
union Board clone();
void apply_move_internal(union Move(& move));
Board();
void next_player();
Board(const Board& other) : Board() {*this = const_cast<Board&>(other);}
Board(Board&& other) = delete;
Board& operator=(Board&& other) = delete;
#endif
} Board;
typedef union GameInitializeSeed {
struct _ContentGameInitializeSeed {
    int64_t external_seed;
  } content;
#ifdef __cplusplus
GameInitializeSeed& operator=(union GameInitializeSeed(& other));
GameInitializeSeed();
GameInitializeSeed(const GameInitializeSeed& other) : GameInitializeSeed() {*this = const_cast<GameInitializeSeed&>(other);}
GameInitializeSeed(GameInitializeSeed&& other) = delete;
GameInitializeSeed& operator=(GameInitializeSeed&& other) = delete;
~GameInitializeSeed() {}
#endif
} GameInitializeSeed;
typedef union GameSelectMove {
struct _ContentGameSelectMove {
    int64_t die_idx;
    union Move move;
  } content;
#ifdef __cplusplus
GameSelectMove& operator=(union GameSelectMove(& other));
GameSelectMove();
GameSelectMove(const GameSelectMove& other) : GameSelectMove() {*this = const_cast<GameSelectMove&>(other);}
GameSelectMove(GameSelectMove&& other) = delete;
GameSelectMove& operator=(GameSelectMove&& other) = delete;
~GameSelectMove() {}
#endif
} GameSelectMove;
typedef union ConfigureRNG {
struct _ContentConfigureRNG {
    int64_t resume_index;
    union RNG rng;
    int64_t seed;
    int64_t i;
    int64_t entry;
  } content;
#ifdef __cplusplus
ConfigureRNG();
bool is_done();
void set_rng_bit(bool(& bit));
bool can_set_rng_bit(bool(& bit));
ConfigureRNG& operator=(union ConfigureRNG(& other));
ConfigureRNG(const ConfigureRNG& other) : ConfigureRNG() {*this = const_cast<ConfigureRNG&>(other);}
ConfigureRNG(ConfigureRNG&& other) = delete;
ConfigureRNG& operator=(ConfigureRNG&& other) = delete;
~ConfigureRNG() {}
#endif
} ConfigureRNG;
typedef union Game {
struct _ContentGame {
    int64_t resume_index;
    union Board board;
    union Player winner;
    union RNG rng_agent;
    int64_t game_seed;
    int64_t external_seed;
    union BoundedVectorTBIntT1T7TT4T init_roll;
    int64_t must_play_idx;
    int64_t die_idx;
    union Move move;
  } content;
#ifdef __cplusplus
~Game();
Game& operator=(union Game(& other));
Game();
bool is_done();
void initialize_seed(int64_t(& external_seed));
bool can_initialize_seed(int64_t(& external_seed));
void select_move(int64_t(& die_idx), union Move(& move));
bool can_select_move(int64_t(& die_idx), union Move(& move));
Game(const Game& other) : Game() {*this = const_cast<Game&>(other);}
Game(Game&& other) = delete;
Game& operator=(Game&& other) = delete;
#endif
} Game;
struct AnyGameAction {
  union _ContentAnyGameAction{
    #ifdef __cplusplus
_ContentAnyGameAction() {};
~_ContentAnyGameAction() {};
#endif
    union GameInitializeSeed field0;
    union GameSelectMove field1;
  } content;
  int64_t active_index;
#ifdef __cplusplus
AnyGameAction& operator=(struct AnyGameAction(& other));
void operator=(union GameSelectMove(& other));
AnyGameAction();
void operator=(union GameInitializeSeed(& other));
AnyGameAction(const AnyGameAction& other) : AnyGameAction() {*this = const_cast<AnyGameAction&>(other);}
AnyGameAction(AnyGameAction&& other) = delete;
AnyGameAction& operator=(AnyGameAction&& other) = delete;
~AnyGameAction() {}
#endif
};
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
inline Game::~Game() {
 rl_m_drop__Game(this);
}
inline Game& Game::operator=(union Game(& other)) {
 rl_m_assign__Game_Game(this, &other);
return *this;
}
inline Game::Game() {
 rl_m_init__Game(this);
}
inline bool Game::is_done() {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_done__Game_r_bool(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline void Game::initialize_seed(int64_t(& external_seed)) {
 rl_m_initialize_seed__Game_int64_t(this, &external_seed);
}
inline bool Game::can_initialize_seed(int64_t(& external_seed)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_can_initialize_seed__Game_int64_t_r_bool(&_rl__result.payload, this, &external_seed);
 return _rl__result.payload;
}
inline void Game::select_move(int64_t(& die_idx), union Move(& move)) {
 rl_m_select_move__Game_int64_t_Move(this, &die_idx, &move);
}
inline bool Game::can_select_move(int64_t(& die_idx), union Move(& move)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_can_select_move__Game_int64_t_Move_r_bool(&_rl__result.payload, this, &die_idx, &move);
 return _rl__result.payload;
}
inline ConfigureRNG::ConfigureRNG() {
 rl_m_init__ConfigureRNG(this);
}
inline bool ConfigureRNG::is_done() {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_done__ConfigureRNG_r_bool(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline void ConfigureRNG::set_rng_bit(bool(& bit)) {
 rl_m_set_rng_bit__ConfigureRNG_bool(this, &bit);
}
inline bool ConfigureRNG::can_set_rng_bit(bool(& bit)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_can_set_rng_bit__ConfigureRNG_bool_r_bool(&_rl__result.payload, this, &bit);
 return _rl__result.payload;
}
inline ConfigureRNG& ConfigureRNG::operator=(union ConfigureRNG(& other)) {
 rl_m_assign__ConfigureRNG_ConfigureRNG(this, &other);
return *this;
}
inline Move& Move::operator=(union Move(& other)) {
 rl_m_assign__Move_Move(this, &other);
return *this;
}
inline void Move::to_internal() {
 rl_m_to_internal__Move(this);
}
inline bool Move::human_range_ok(union BIntT1T7T(& roll)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_human_range_ok__Move_BIntT1T7T_r_bool(&_rl__result.payload, this, &roll);
 return _rl__result.payload;
}
inline Move::Move(union Player(& p), int64_t(& from_pt), int64_t(& to_pt)) {
 rl_m_init__Move_Player_int64_t_int64_t(this, &p, &from_pt, &to_pt);
}
inline Move::Move() {
 rl_m_init__Move(this);
}
inline void String::append(char*(& str)) {
 rl_m_append__String_strlit(this, &str);
}
inline void String::drop_back(int64_t(& quantity)) {
 rl_m_drop_back__String_int64_t(this, &quantity);
}
inline bool String::operator==(union String(& other)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_equal__String_String_r_bool(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline void String::append_quoted(union String(& str)) {
 rl_m_append_quoted__String_String(this, &str);
}
inline bool String::not_equal(union String(& other)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_not_equal__String_String_r_bool(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline bool String::substring_matches(char*(& lit), int64_t(& pos)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_substring_matches__String_strlit_int64_t_r_bool(&_rl__result.payload, this, &lit, &pos);
 return _rl__result.payload;
}
inline bool String::not_equal(char*(& other)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_not_equal__String_strlit_r_bool(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline union String String::to_indented_lines() {
 union ToReturn { union String payload; ToReturn() {}; ~ToReturn() { payload.~String(); } }	_rl__result;
 rl_m_to_indented_lines__String_r_String(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline void String::append(union String(& str)) {
 rl_m_append__String_String(this, &str);
}
inline String::~String() {
 rl_m_drop__String(this);
}
inline bool String::operator==(char*(& other)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_equal__String_strlit_r_bool(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline String& String::operator=(union String(& other)) {
 rl_m_assign__String_String(this, &other);
return *this;
}
inline void String::reverse() {
 rl_m_reverse__String(this);
}
inline void String::append(int8_t(& b)) {
 rl_m_append__String_int8_t(this, &b);
}
inline int64_t String::size() {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_size__String_r_int64_t(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline int8_t* String::get(int64_t(& index)) {
 union ToReturn { int8_t* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_get__String_int64_t_r_int8_tRef(&_rl__result.payload, this, &index);
 return _rl__result.payload;
}
inline union String String::add(union String(& other)) {
 union ToReturn { union String payload; ToReturn() {}; ~ToReturn() { payload.~String(); } }	_rl__result;
 rl_m_add__String_String_r_String(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline String::String() {
 rl_m_init__String(this);
}
inline int64_t String::count(int8_t(& b)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_count__String_int8_t_r_int64_t(&_rl__result.payload, this, &b);
 return _rl__result.payload;
}
inline int8_t* String::back() {
 union ToReturn { int8_t* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_back__String_r_int8_tRef(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline Point& Point::operator=(union Point(& other)) {
 rl_m_assign__Point_Point(this, &other);
return *this;
}
inline Point::Point() {
 rl_m_init__Point(this);
}
inline double Board::get_score_multiplier(union Player(& winner)) {
 union ToReturn { double payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_get_score_multiplier__Board_Player_r_double(&_rl__result.payload, this, &winner);
 return _rl__result.payload;
}
inline union String Board::to_str(int64_t(& n)) {
 union ToReturn { union String payload; ToReturn() {}; ~ToReturn() { payload.~String(); } }	_rl__result;
 rl_m_to_str__Board_int64_t_r_String(&_rl__result.payload, this, &n);
 return _rl__result.payload;
}
inline union Player Board::get_winner() {
 union ToReturn { union Player payload; ToReturn() {}; ~ToReturn() { payload.~Player(); } }	_rl__result;
 rl_m_get_winner__Board_r_Player(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline bool Board::has_any_legal_move(union Player(& p), union BIntT1T7T(& roll)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_has_any_legal_move__Board_Player_BIntT1T7T_r_bool(&_rl__result.payload, this, &p, &roll);
 return _rl__result.payload;
}
inline bool Board::can_bearoff_from(int64_t(& from_idx), union BIntT1T7T(& roll), union Player(& p)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_can_bearoff_from__Board_int64_t_BIntT1T7T_Player_r_bool(&_rl__result.payload, this, &from_idx, &roll, &p);
 return _rl__result.payload;
}
inline Board& Board::operator=(union Board(& other)) {
 rl_m_assign__Board_Board(this, &other);
return *this;
}
inline int8_t Board::point_char(int64_t(& idx)) {
 union ToReturn { int8_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_point_char__Board_int64_t_r_int8_t(&_rl__result.payload, this, &idx);
 return _rl__result.payload;
}
inline bool Board::has_on_bar(union Player(& p)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_has_on_bar__Board_Player_r_bool(&_rl__result.payload, this, &p);
 return _rl__result.payload;
}
inline bool Board::is_blocked(int64_t(& idx), union Player(& mover)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_blocked__Board_int64_t_Player_r_bool(&_rl__result.payload, this, &idx, &mover);
 return _rl__result.payload;
}
inline bool Board::is_valid_move_internal(union Move(& move), union BIntT1T7T(& roll)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_valid_move_internal__Board_Move_BIntT1T7T_r_bool(&_rl__result.payload, this, &move, &roll);
 return _rl__result.payload;
}
inline union String Board::to_string() {
 union ToReturn { union String payload; ToReturn() {}; ~ToReturn() { payload.~String(); } }	_rl__result;
 rl_m_to_string__Board_r_String(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline int64_t Board::off_count(union Player(& p)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_off_count__Board_Player_r_int64_t(&_rl__result.payload, this, &p);
 return _rl__result.payload;
}
inline bool Board::is_valid_move(union Move(& move), union BIntT1T7T(& roll)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_valid_move__Board_Move_BIntT1T7T_r_bool(&_rl__result.payload, this, &move, &roll);
 return _rl__result.payload;
}
inline int64_t Board::bar_count(union Player(& p)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_bar_count__Board_Player_r_int64_t(&_rl__result.payload, this, &p);
 return _rl__result.payload;
}
inline bool Board::can_play_sequence(union BIntT1T7T(& d1), union BIntT1T7T(& d2), union Player(& p)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_can_play_sequence__Board_BIntT1T7T_BIntT1T7T_Player_r_bool(&_rl__result.payload, this, &d1, &d2, &p);
 return _rl__result.payload;
}
inline Board::~Board() {
 rl_m_drop__Board(this);
}
inline int64_t Board::checkers_home_and_off(union Player(& p)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_checkers_home_and_off__Board_Player_r_int64_t(&_rl__result.payload, this, &p);
 return _rl__result.payload;
}
inline bool Board::is_game_over() {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_game_over__Board_r_bool(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline void Board::apply_move(union Move(& move)) {
 rl_m_apply_move__Board_Move(this, &move);
}
inline bool Board::is_all_in_home(union Player(& p)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_all_in_home__Board_Player_r_bool(&_rl__result.payload, this, &p);
 return _rl__result.payload;
}
inline union Board Board::clone() {
 union ToReturn { union Board payload; ToReturn() {}; ~ToReturn() { payload.~Board(); } }	_rl__result;
 rl_m_clone__Board_r_Board(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline void Board::apply_move_internal(union Move(& move)) {
 rl_m_apply_move_internal__Board_Move(this, &move);
}
inline Board::Board() {
 rl_m_init__Board(this);
}
inline void Board::next_player() {
 rl_m_next_player__Board(this);
}
inline bool BIntT1T7T::operator==(union BIntT1T7T(& other)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_equal__BIntT1T7T_BIntT1T7T_r_bool(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline bool BIntT1T7T::greater(union BIntT1T7T(& other)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_greater__BIntT1T7T_BIntT1T7T_r_bool(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline BIntT1T7T& BIntT1T7T::operator=(union BIntT1T7T(& other)) {
 rl_m_assign__BIntT1T7T_BIntT1T7T(this, &other);
return *this;
}
inline void BIntT1T7T::operator=(int64_t(& other)) {
 rl_m_assign__BIntT1T7T_int64_t(this, &other);
}
inline BIntT1T7T::BIntT1T7T() {
 rl_m_init__BIntT1T7T(this);
}
inline union BIntT0T16T BIntT0T16T::add(int64_t(& val)) {
 union ToReturn { union BIntT0T16T payload; ToReturn() {}; ~ToReturn() { payload.~BIntT0T16T(); } }	_rl__result;
 rl_m_add__BIntT0T16T_int64_t_r_BIntT0T16T(&_rl__result.payload, this, &val);
 return _rl__result.payload;
}
inline union BIntT0T16T BIntT0T16T::sub(int64_t(& val)) {
 union ToReturn { union BIntT0T16T payload; ToReturn() {}; ~ToReturn() { payload.~BIntT0T16T(); } }	_rl__result;
 rl_m_sub__BIntT0T16T_int64_t_r_BIntT0T16T(&_rl__result.payload, this, &val);
 return _rl__result.payload;
}
inline BIntT0T16T& BIntT0T16T::operator=(union BIntT0T16T(& other)) {
 rl_m_assign__BIntT0T16T_BIntT0T16T(this, &other);
return *this;
}
inline void BIntT0T16T::operator=(int64_t(& other)) {
 rl_m_assign__BIntT0T16T_int64_t(this, &other);
}
inline union BIntT0T16T BIntT0T16T::sub(union BIntT0T16T(& other)) {
 union ToReturn { union BIntT0T16T payload; ToReturn() {}; ~ToReturn() { payload.~BIntT0T16T(); } }	_rl__result;
 rl_m_sub__BIntT0T16T_BIntT0T16T_r_BIntT0T16T(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline BIntT0T16T::BIntT0T16T() {
 rl_m_init__BIntT0T16T(this);
}
inline union BIntT0T16T BIntT0T16T::add(union BIntT0T16T(& other)) {
 union ToReturn { union BIntT0T16T payload; ToReturn() {}; ~ToReturn() { payload.~BIntT0T16T(); } }	_rl__result;
 rl_m_add__BIntT0T16T_BIntT0T16T_r_BIntT0T16T(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline VectorTint8_tT& VectorTint8_tT::operator=(union VectorTint8_tT(& other)) {
 rl_m_assign__VectorTint8_tT_VectorTint8_tT(this, &other);
return *this;
}
inline void VectorTint8_tT::append(int8_t(& value)) {
 rl_m_append__VectorTint8_tT_int8_t(this, &value);
}
inline VectorTint8_tT::~VectorTint8_tT() {
 rl_m_drop__VectorTint8_tT(this);
}
inline int8_t VectorTint8_tT::pop() {
 union ToReturn { int8_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_pop__VectorTint8_tT_r_int8_t(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline int8_t* VectorTint8_tT::back() {
 union ToReturn { int8_t* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_back__VectorTint8_tT_r_int8_tRef(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline int8_t* VectorTint8_tT::get(int64_t(& index)) {
 union ToReturn { int8_t* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_get__VectorTint8_tT_int64_t_r_int8_tRef(&_rl__result.payload, this, &index);
 return _rl__result.payload;
}
inline int64_t VectorTint8_tT::size() {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_size__VectorTint8_tT_r_int64_t(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline VectorTint8_tT::VectorTint8_tT() {
 rl_m_init__VectorTint8_tT(this);
}
inline void VectorTint8_tT::drop_back(int64_t(& quantity)) {
 rl_m_drop_back__VectorTint8_tT_int64_t(this, &quantity);
}
inline union BIntT1T7T VectorTBIntT1T7TT::pop() {
 union ToReturn { union BIntT1T7T payload; ToReturn() {}; ~ToReturn() { payload.~BIntT1T7T(); } }	_rl__result;
 rl_m_pop__VectorTBIntT1T7TT_r_BIntT1T7T(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline VectorTBIntT1T7TT::~VectorTBIntT1T7TT() {
 rl_m_drop__VectorTBIntT1T7TT(this);
}
inline void VectorTBIntT1T7TT::append(union BIntT1T7T(& value)) {
 rl_m_append__VectorTBIntT1T7TT_BIntT1T7T(this, &value);
}
inline bool VectorTBIntT1T7TT::empty() {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_empty__VectorTBIntT1T7TT_r_bool(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline VectorTBIntT1T7TT& VectorTBIntT1T7TT::operator=(union VectorTBIntT1T7TT(& other)) {
 rl_m_assign__VectorTBIntT1T7TT_VectorTBIntT1T7TT(this, &other);
return *this;
}
inline union BIntT1T7T* VectorTBIntT1T7TT::get(int64_t(& index)) {
 union ToReturn { union BIntT1T7T* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_get__VectorTBIntT1T7TT_int64_t_r_BIntT1T7TRef(&_rl__result.payload, this, &index);
 return _rl__result.payload;
}
inline void VectorTBIntT1T7TT::clear() {
 rl_m_clear__VectorTBIntT1T7TT(this);
}
inline VectorTBIntT1T7TT::VectorTBIntT1T7TT() {
 rl_m_init__VectorTBIntT1T7TT(this);
}
inline int64_t VectorTBIntT1T7TT::size() {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_size__VectorTBIntT1T7TT_r_int64_t(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline RNG::RNG() {
 rl_m_init__RNG(this);
}
inline int64_t RNG::next() {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_next__RNG_r_int64_t(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline int64_t RNG::randint(int64_t(& min), int64_t(& max)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_randint__RNG_int64_t_int64_t_r_int64_t(&_rl__result.payload, this, &min, &max);
 return _rl__result.payload;
}
inline void RNG::set_seed(int64_t(& new_seed)) {
 rl_m_set_seed__RNG_int64_t(this, &new_seed);
}
inline RNG& RNG::operator=(union RNG(& other)) {
 rl_m_assign__RNG_RNG(this, &other);
return *this;
}
inline GameInitializeSeed& GameInitializeSeed::operator=(union GameInitializeSeed(& other)) {
 rl_m_assign__GameInitializeSeed_GameInitializeSeed(this, &other);
return *this;
}
inline GameInitializeSeed::GameInitializeSeed() {
 rl_m_init__GameInitializeSeed(this);
}
inline GameSelectMove& GameSelectMove::operator=(union GameSelectMove(& other)) {
 rl_m_assign__GameSelectMove_GameSelectMove(this, &other);
return *this;
}
inline GameSelectMove::GameSelectMove() {
 rl_m_init__GameSelectMove(this);
}
inline AnyGameAction& AnyGameAction::operator=(struct AnyGameAction(& other)) {
 rl_m_assign__AnyGameAction_AnyGameAction(this, &other);
return *this;
}
inline void AnyGameAction::operator=(union GameSelectMove(& other)) {
 rl_m_assign__AnyGameAction_GameSelectMove(this, &other);
}
inline AnyGameAction::AnyGameAction() {
 rl_m_init__AnyGameAction(this);
}
inline void AnyGameAction::operator=(union GameInitializeSeed(& other)) {
 rl_m_assign__AnyGameAction_GameInitializeSeed(this, &other);
}
inline union Player Player::opponent() {
 union ToReturn { union Player payload; ToReturn() {}; ~ToReturn() { payload.~Player(); } }	_rl__result;
 rl_m_opponent__Player_r_Player(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline bool Player::is_equal(union Player(& other)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_equal__Player_Player_r_bool(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline bool Player::is_black() {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_black__Player_r_bool(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline bool Player::is_white() {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_white__Player_r_bool(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline Player::Player() {
 rl_m_init__Player(this);
}
inline Player& Player::operator=(union Player(& other)) {
 rl_m_assign__Player_Player(this, &other);
return *this;
}
inline bool Player::is_empty() {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_empty__Player_r_bool(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline int64_t BoundedVectorTBIntT1T7TT4T::size() {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_size__BoundedVectorTBIntT1T7TT4T_r_int64_t(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline void BoundedVectorTBIntT1T7TT4T::append(union BIntT1T7T(& value)) {
 rl_m_append__BoundedVectorTBIntT1T7TT4T_BIntT1T7T(this, &value);
}
inline BoundedVectorTBIntT1T7TT4T::BoundedVectorTBIntT1T7TT4T() {
 rl_m_init__BoundedVectorTBIntT1T7TT4T(this);
}
inline void BoundedVectorTBIntT1T7TT4T::clear() {
 rl_m_clear__BoundedVectorTBIntT1T7TT4T(this);
}
inline BoundedVectorTBIntT1T7TT4T& BoundedVectorTBIntT1T7TT4T::operator=(union BoundedVectorTBIntT1T7TT4T(& other)) {
 rl_m_assign__BoundedVectorTBIntT1T7TT4T_BoundedVectorTBIntT1T7TT4T(this, &other);
return *this;
}
inline union BIntT1T7T* BoundedVectorTBIntT1T7TT4T::get(int64_t(& index)) {
 union ToReturn { union BIntT1T7T* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_get__BoundedVectorTBIntT1T7TT4T_int64_t_r_BIntT1T7TRef(&_rl__result.payload, this, &index);
 return _rl__result.payload;
}
inline BoundedVectorTBIntT1T7TT4T::~BoundedVectorTBIntT1T7TT4T() {
 rl_m_drop__BoundedVectorTBIntT1T7TT4T(this);
}
inline union BIntT1T7T BoundedVectorTBIntT1T7TT4T::pop() {
 union ToReturn { union BIntT1T7T payload; ToReturn() {}; ~ToReturn() { payload.~BIntT1T7T(); } }	_rl__result;
 rl_m_pop__BoundedVectorTBIntT1T7TT4T_r_BIntT1T7T(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline VectorTStringT::VectorTStringT() {
 rl_m_init__VectorTStringT(this);
}
inline void VectorTStringT::append(union String(& value)) {
 rl_m_append__VectorTStringT_String(this, &value);
}
inline union String* VectorTStringT::get(int64_t(& index)) {
 union ToReturn { union String* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_get__VectorTStringT_int64_t_r_StringRef(&_rl__result.payload, this, &index);
 return _rl__result.payload;
}
inline VectorTStringT& VectorTStringT::operator=(union VectorTStringT(& other)) {
 rl_m_assign__VectorTStringT_VectorTStringT(this, &other);
return *this;
}
inline VectorTStringT::~VectorTStringT() {
 rl_m_drop__VectorTStringT(this);
}
inline union String VectorTStringT::pop() {
 union ToReturn { union String payload; ToReturn() {}; ~ToReturn() { payload.~String(); } }	_rl__result;
 rl_m_pop__VectorTStringT_r_String(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline int64_t VectorTStringT::size() {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_size__VectorTStringT_r_int64_t(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline void VectorTdoubleT::resize(int64_t(& new_size)) {
 rl_m_resize__VectorTdoubleT_int64_t(this, &new_size);
}
inline VectorTdoubleT::VectorTdoubleT() {
 rl_m_init__VectorTdoubleT(this);
}
inline int64_t VectorTdoubleT::size() {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_size__VectorTdoubleT_r_int64_t(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline double VectorTdoubleT::pop() {
 union ToReturn { double payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_pop__VectorTdoubleT_r_double(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline void VectorTdoubleT::append(double(& value)) {
 rl_m_append__VectorTdoubleT_double(this, &value);
}
inline VectorTdoubleT::~VectorTdoubleT() {
 rl_m_drop__VectorTdoubleT(this);
}
inline VectorTdoubleT& VectorTdoubleT::operator=(union VectorTdoubleT(& other)) {
 rl_m_assign__VectorTdoubleT_VectorTdoubleT(this, &other);
return *this;
}
inline double* VectorTdoubleT::get(int64_t(& index)) {
 union ToReturn { double* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_get__VectorTdoubleT_int64_t_r_doubleRef(&_rl__result.payload, this, &index);
 return _rl__result.payload;
}
inline VectorTboolT::VectorTboolT() {
 rl_m_init__VectorTboolT(this);
}
inline void VectorTboolT::append(bool(& value)) {
 rl_m_append__VectorTboolT_bool(this, &value);
}
inline bool* VectorTboolT::get(int64_t(& index)) {
 union ToReturn { bool* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_get__VectorTboolT_int64_t_r_boolRef(&_rl__result.payload, this, &index);
 return _rl__result.payload;
}
inline VectorTboolT& VectorTboolT::operator=(union VectorTboolT(& other)) {
 rl_m_assign__VectorTboolT_VectorTboolT(this, &other);
return *this;
}
inline VectorTboolT::~VectorTboolT() {
 rl_m_drop__VectorTboolT(this);
}
#endif
typedef union BIntT1T7T diceRoll;
typedef union BIntT0T16T playerChips;
typedef union BoundedVectorTBIntT1T7TT4T moveVector;
typedef struct AnyGameAction AnyGameAction;
#ifdef __cplusplus
inline void init(char*(& self)) {
 rl_m_init__strlit(&self);
}
inline void assign(char*(& self), char*(& other)) {
 rl_m_assign__strlit_strlit(&self, &other);
}
inline void print(union String(& to_print)) {
 rl_print__String(&to_print);
}
inline int64_t max(int64_t(& a), int64_t(& b)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_max__int64_t_int64_t_r_int64_t(&_rl__result.payload , &a, &b);
 return _rl__result.payload;
}
inline int64_t min(int64_t(& a), int64_t(& b)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_min__int64_t_int64_t_r_int64_t(&_rl__result.payload , &a, &b);
 return _rl__result.payload;
}
inline int64_t abs(int64_t(& a)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_abs__int64_t_r_int64_t(&_rl__result.payload , &a);
 return _rl__result.payload;
}
inline bool near(double(& value), double(& target), double(& distance)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_near__double_double_double_r_bool(&_rl__result.payload , &value, &target, &distance);
 return _rl__result.payload;
}
inline bool custom_equal(int64_t(& lhs), int64_t(& rhs)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_custom_equal__int64_t_int64_t_r_bool(&_rl__result.payload , &lhs, &rhs);
 return _rl__result.payload;
}
inline bool custom_equal(bool(& lhs), bool(& rhs)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_custom_equal__bool_bool_r_bool(&_rl__result.payload , &lhs, &rhs);
 return _rl__result.payload;
}
inline bool custom_equal(int8_t(& lhs), int8_t(& rhs)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_custom_equal__int8_t_int8_t_r_bool(&_rl__result.payload , &lhs, &rhs);
 return _rl__result.payload;
}
inline bool custom_equal(double(& lhs), double(& rhs)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_custom_equal__double_double_r_bool(&_rl__result.payload , &lhs, &rhs);
 return _rl__result.payload;
}
inline void parse_and_execute(union Game(& state), struct AnyGameAction(& variant), union VectorTint8_tT(& input), int64_t(& read_bytes)) {
 rl_parse_and_execute__Game_AnyGameAction_VectorTint8_tT_int64_t(&state, &variant, &input, &read_bytes);
}
inline void parse_and_execute(union Game(& state), struct AnyGameAction(& variant), union VectorTint8_tT(& input)) {
 rl_parse_and_execute__Game_AnyGameAction_VectorTint8_tT(&state, &variant, &input);
}
inline void enumerate(bool(& b), union VectorTboolT(& output)) {
 rl_enumerate__bool_VectorTboolT(&b, &output);
}
inline void enumeration_error(int64_t(& x), union String(& out), union VectorTStringT(& context)) {
 rl_enumeration_error__int64_t_String_VectorTStringT(&x, &out, &context);
}
inline void enumeration_error(double(& x), union String(& out), union VectorTStringT(& context)) {
 rl_enumeration_error__double_String_VectorTStringT(&x, &out, &context);
}
inline void write_in_observation_tensor(int64_t(& value), int64_t(& min), int64_t(& max), union VectorTdoubleT(& output), int64_t(& index)) {
 rl_write_in_observation_tensor__int64_t_int64_t_int64_t_VectorTdoubleT_int64_t(&value, &min, &max, &output, &index);
}
inline void write_in_observation_tensor(int64_t(& obj), int64_t(& observer_id), union VectorTdoubleT(& output), int64_t(& index)) {
 rl_write_in_observation_tensor__int64_t_int64_t_VectorTdoubleT_int64_t(&obj, &observer_id, &output, &index);
}
inline int64_t size_as_observation_tensor(int64_t(& obj)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_size_as_observation_tensor__int64_t_r_int64_t(&_rl__result.payload , &obj);
 return _rl__result.payload;
}
inline void write_in_observation_tensor(double(& obj), int64_t(& observer_id), union VectorTdoubleT(& output), int64_t(& index)) {
 rl_write_in_observation_tensor__double_int64_t_VectorTdoubleT_int64_t(&obj, &observer_id, &output, &index);
}
inline bool can_write_in_observation_tensor(double(& obj), int64_t(& observer_id), union VectorTdoubleT(& output), int64_t(& index)) {
bool toReturn;
 rl_can_write_in_observation_tensor__double_int64_t_VectorTdoubleT_int64_t_r_bool(&toReturn , &obj, &observer_id, &output, &index);
 return toReturn;
}
inline int64_t size_as_observation_tensor(double(& obj)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_size_as_observation_tensor__double_r_int64_t(&_rl__result.payload , &obj);
 return _rl__result.payload;
}
inline bool can_size_as_observation_tensor(double(& obj)) {
bool toReturn;
 rl_can_size_as_observation_tensor__double_r_bool(&toReturn , &obj);
 return toReturn;
}
inline void write_in_observation_tensor(bool(& obj), int64_t(& observer_id), union VectorTdoubleT(& output), int64_t(& index)) {
 rl_write_in_observation_tensor__bool_int64_t_VectorTdoubleT_int64_t(&obj, &observer_id, &output, &index);
}
inline int64_t size_as_observation_tensor(bool(& obj)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_size_as_observation_tensor__bool_r_int64_t(&_rl__result.payload , &obj);
 return _rl__result.payload;
}
inline void write_in_observation_tensor(int8_t(& obj), int64_t(& observer_id), union VectorTdoubleT(& output), int64_t(& index)) {
 rl_write_in_observation_tensor__int8_t_int64_t_VectorTdoubleT_int64_t(&obj, &observer_id, &output, &index);
}
inline int64_t size_as_observation_tensor(int8_t(& obj)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_size_as_observation_tensor__int8_t_r_int64_t(&_rl__result.payload , &obj);
 return _rl__result.payload;
}
inline void write_tensor_warning_context(union String(& out), union VectorTStringT(& context)) {
 rl_write_tensor_warning_context__String_VectorTStringT(&out, &context);
}
inline void tensorable_warning(int64_t(& x), union String(& out), union VectorTStringT(& context)) {
 rl_tensorable_warning__int64_t_String_VectorTStringT(&x, &out, &context);
}
inline void tensorable_warning(double(& x), union String(& out), union VectorTStringT(& context)) {
 rl_tensorable_warning__double_String_VectorTStringT(&x, &out, &context);
}
inline void append_to_vector(int64_t(& to_add), union VectorTint8_tT(& output)) {
 rl_append_to_vector__int64_t_VectorTint8_tT(&to_add, &output);
}
inline void append_to_vector(double(& to_add), union VectorTint8_tT(& output)) {
 rl_append_to_vector__double_VectorTint8_tT(&to_add, &output);
}
inline void append_to_vector(bool(& to_add), union VectorTint8_tT(& output)) {
 rl_append_to_vector__bool_VectorTint8_tT(&to_add, &output);
}
inline void append_to_vector(int8_t(& to_add), union VectorTint8_tT(& output)) {
 rl_append_to_vector__int8_t_VectorTint8_tT(&to_add, &output);
}
inline bool parse_from_vector(int64_t(& result), union VectorTint8_tT(& input), int64_t(& index)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_parse_from_vector__int64_t_VectorTint8_tT_int64_t_r_bool(&_rl__result.payload , &result, &input, &index);
 return _rl__result.payload;
}
inline bool parse_from_vector(double(& result), union VectorTint8_tT(& input), int64_t(& index)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_parse_from_vector__double_VectorTint8_tT_int64_t_r_bool(&_rl__result.payload , &result, &input, &index);
 return _rl__result.payload;
}
inline bool parse_from_vector(bool(& result), union VectorTint8_tT(& input), int64_t(& index)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_parse_from_vector__bool_VectorTint8_tT_int64_t_r_bool(&_rl__result.payload , &result, &input, &index);
 return _rl__result.payload;
}
inline bool parse_from_vector(int8_t(& result), union VectorTint8_tT(& input), int64_t(& index)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_parse_from_vector__int8_t_VectorTint8_tT_int64_t_r_bool(&_rl__result.payload , &result, &input, &index);
 return _rl__result.payload;
}
inline bool parse_from_vector(union Player(& to_add), union VectorTint8_tT(& input), int64_t(& index)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_parse_from_vector__Player_VectorTint8_tT_int64_t_r_bool(&_rl__result.payload , &to_add, &input, &index);
 return _rl__result.payload;
}
inline bool from_byte_vector(int8_t(& result), union VectorTint8_tT(& input), int64_t(& read_bytes)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_from_byte_vector__int8_t_VectorTint8_tT_int64_t_r_bool(&_rl__result.payload , &result, &input, &read_bytes);
 return _rl__result.payload;
}
inline bool from_byte_vector(struct AnyGameAction(& result), union VectorTint8_tT(& input), int64_t(& read_bytes)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_from_byte_vector__AnyGameAction_VectorTint8_tT_int64_t_r_bool(&_rl__result.payload , &result, &input, &read_bytes);
 return _rl__result.payload;
}
inline union String s(char*(& literal)) {
 union ToReturn { union String payload; ToReturn() {}; ~ToReturn() { payload.~String(); } }	_rl__result;
 rl_s__strlit_r_String(&_rl__result.payload , &literal);
 return _rl__result.payload;
}
inline void append_to_string(char*(& x), union String(& output)) {
 rl_append_to_string__strlit_String(&x, &output);
}
inline void append_to_string(union String(& x), union String(& output)) {
 rl_append_to_string__String_String(&x, &output);
}
inline void append_to_string(bool(& x), union String(& output)) {
 rl_append_to_string__bool_String(&x, &output);
}
inline bool is_space(int8_t(& b)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_is_space__int8_t_r_bool(&_rl__result.payload , &b);
 return _rl__result.payload;
}
inline bool is_open_paren(int8_t(& b)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_is_open_paren__int8_t_r_bool(&_rl__result.payload , &b);
 return _rl__result.payload;
}
inline bool is_close_paren(int8_t(& b)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_is_close_paren__int8_t_r_bool(&_rl__result.payload , &b);
 return _rl__result.payload;
}
inline int64_t length(char*(& literal)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_length__strlit_r_int64_t(&_rl__result.payload , &literal);
 return _rl__result.payload;
}
inline bool parse_string(union String(& result), union String(& buffer), int64_t(& index)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_parse_string__String_String_int64_t_r_bool(&_rl__result.payload , &result, &buffer, &index);
 return _rl__result.payload;
}
inline bool parse_string(bool(& result), union String(& buffer), int64_t(& index)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_parse_string__bool_String_int64_t_r_bool(&_rl__result.payload , &result, &buffer, &index);
 return _rl__result.payload;
}
inline union RNG make_rng(int64_t(& seed)) {
 union ToReturn { union RNG payload; ToReturn() {}; ~ToReturn() { payload.~RNG(); } }	_rl__result;
 rl_make_rng__int64_t_r_RNG(&_rl__result.payload , &seed);
 return _rl__result.payload;
}
inline int64_t size_as_observation_tensor(union RNG(& obj)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_size_as_observation_tensor__RNG_r_int64_t(&_rl__result.payload , &obj);
 return _rl__result.payload;
}
inline int64_t size_as_observation_tensor(union ConfigureRNG(& obj)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_size_as_observation_tensor__ConfigureRNG_r_int64_t(&_rl__result.payload , &obj);
 return _rl__result.payload;
}
inline void write_in_observation_tensor(union RNG(& obj), int64_t(& observer_id), union VectorTdoubleT(& output), int64_t(& counter)) {
 rl_write_in_observation_tensor__RNG_int64_t_VectorTdoubleT_int64_t(&obj, &observer_id, &output, &counter);
}
inline void write_in_observation_tensor(union ConfigureRNG(& obj), int64_t(& observer_id), union VectorTdoubleT(& output), int64_t(& counter)) {
 rl_write_in_observation_tensor__ConfigureRNG_int64_t_VectorTdoubleT_int64_t(&obj, &observer_id, &output, &counter);
}
inline int64_t human_to_idx(int64_t(& point), bool(& is_black)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_human_to_idx__int64_t_bool_r_int64_t(&_rl__result.payload , &point, &is_black);
 return _rl__result.payload;
}
inline bool is_enum(union Player(& self)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_is_enum__Player_r_bool(&_rl__result.payload , &self);
 return _rl__result.payload;
}
inline int64_t max(union Player(& self)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_max__Player_r_int64_t(&_rl__result.payload , &self);
 return _rl__result.payload;
}
inline int64_t as_int(union Player(& self)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_as_int__Player_r_int64_t(&_rl__result.payload , &self);
 return _rl__result.payload;
}
inline void from_int(union Player(& self), int64_t(& new_value)) {
 rl_from_int__Player_int64_t(&self, &new_value);
}
inline char* as_string_literal(union Player(& self)) {
 union ToReturn { char* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_as_string_literal__Player_r_strlit(&_rl__result.payload , &self);
 return _rl__result.payload;
}
inline union BoundedVectorTBIntT1T7TT4T roll_dice(union RNG(& rng)) {
 union ToReturn { union BoundedVectorTBIntT1T7TT4T payload; ToReturn() {}; ~ToReturn() { payload.~BoundedVectorTBIntT1T7TT4T(); } }	_rl__result;
 rl_roll_dice__RNG_r_BoundedVectorTBIntT1T7TT4T(&_rl__result.payload , &rng);
 return _rl__result.payload;
}
inline void apply(union GameInitializeSeed(& self), union Game(& frame)) {
 rl_apply__GameInitializeSeed_Game(&self, &frame);
}
inline bool can_apply(union GameInitializeSeed(& self), union Game(& frame)) {
bool toReturn;
 rl_can_apply__GameInitializeSeed_Game_r_bool(&toReturn , &self, &frame);
 return toReturn;
}
inline char* get_type_name(union GameInitializeSeed(& self)) {
 union ToReturn { char* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_get_type_name__GameInitializeSeed_r_strlit(&_rl__result.payload , &self);
 return _rl__result.payload;
}
inline void apply(union GameSelectMove(& self), union Game(& frame)) {
 rl_apply__GameSelectMove_Game(&self, &frame);
}
inline bool can_apply(union GameSelectMove(& self), union Game(& frame)) {
bool toReturn;
 rl_can_apply__GameSelectMove_Game_r_bool(&toReturn , &self, &frame);
 return toReturn;
}
inline char* get_type_name(union GameSelectMove(& self)) {
 union ToReturn { char* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_get_type_name__GameSelectMove_r_strlit(&_rl__result.payload , &self);
 return _rl__result.payload;
}
inline void apply(struct AnyGameAction(& self), union Game(& frame)) {
 rl_apply__AnyGameAction_Game(&self, &frame);
}
inline bool can_apply(struct AnyGameAction(& self), union Game(& frame)) {
bool toReturn;
 rl_can_apply__AnyGameAction_Game_r_bool(&toReturn , &self, &frame);
 return toReturn;
}
inline void pretty_print(union Game(& game)) {
 rl_pretty_print__Game(&game);
}
inline int64_t get_current_player(union Game(& g)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_get_current_player__Game_r_int64_t(&_rl__result.payload , &g);
 return _rl__result.payload;
}
inline double score(union Game(& g), int64_t(& player_id)) {
 union ToReturn { double payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_score__Game_int64_t_r_double(&_rl__result.payload , &g, &player_id);
 return _rl__result.payload;
}
inline int64_t get_num_players() {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_get_num_players__r_int64_t(&_rl__result.payload );
 return _rl__result.payload;
}
inline void fuzz(union VectorTint8_tT(& input)) {
 rl_fuzz__VectorTint8_tT(&input);
}
inline union ConfigureRNG configure_rng() {
 union ToReturn { union ConfigureRNG payload; ToReturn() {}; ~ToReturn() { payload.~ConfigureRNG(); } }	_rl__result;
 rl_configure_rng__r_ConfigureRNG(&_rl__result.payload );
 return _rl__result.payload;
}
inline union Game play() {
 union ToReturn { union Game payload; ToReturn() {}; ~ToReturn() { payload.~Game(); } }	_rl__result;
 rl_play__r_Game(&_rl__result.payload );
 return _rl__result.payload;
}
#endif
#undef RLC_GET_TYPE_DEFS
#endif

#ifdef RLC_GODOT
#undef RLC_GODOT

class RLCVectorTint8_tT: public godot::RefCounted {
  GDCLASS(RLCVectorTint8_tT, godot::RefCounted);

public:
  using ContentType = VectorTint8_tT;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCVectorTint8_tT() {}
  ~RLCVectorTint8_tT() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCVectorTint8_tT",godot::D_METHOD("make"), &RLCVectorTint8_tT::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCVectorTint8_tT::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCVectorTint8_tT::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCVectorTint8_tT::members_count);
}
static godot::Ref<RLCVectorTint8_tT> make() {
godot::Ref<RLCVectorTint8_tT> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCVectorTint8_tT>(*to_return)->setOwning(new VectorTint8_tT);
return to_return;
}
godot::Variant get_member(int64_t index) {
return nullptr;
}
godot::Variant members_count() {
return 3;
}
void set_member(int64_t index, godot::Variant newVar) {

}
};

class RLCString: public godot::RefCounted {
  GDCLASS(RLCString, godot::RefCounted);

public:
  using ContentType = String;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCString() {}
  ~RLCString() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCString",godot::D_METHOD("make"), &RLCString::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCString::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCString::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCString::members_count);
}
static godot::Ref<RLCString> make() {
godot::Ref<RLCString> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCString>(*to_return)->setOwning(new String);
return to_return;
}
godot::Variant get_member(int64_t index) {
return nullptr;
}
godot::Variant members_count() {
return 1;
}
void set_member(int64_t index, godot::Variant newVar) {

}
};

class RLCBIntT1T7T: public godot::RefCounted {
  GDCLASS(RLCBIntT1T7T, godot::RefCounted);

public:
  using ContentType = BIntT1T7T;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCBIntT1T7T() {}
  ~RLCBIntT1T7T() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCBIntT1T7T",godot::D_METHOD("make"), &RLCBIntT1T7T::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCBIntT1T7T::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCBIntT1T7T::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCBIntT1T7T::members_count);
godot::ClassDB::bind_method(godot::D_METHOD("get_value"), &RLCBIntT1T7T::get_value);
godot::ClassDB::bind_method(godot::D_METHOD("set_value"), &RLCBIntT1T7T::set_value);
}
static godot::Ref<RLCBIntT1T7T> make() {
godot::Ref<RLCBIntT1T7T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBIntT1T7T>(*to_return)->setOwning(new BIntT1T7T);
return to_return;
}
int64_t get_value() {
return content->content.value;
}
void set_value(int64_t newVal) {
content->content.value =newVal;
}
godot::Variant get_member(int64_t index) {
if (index == 0)
return get_value();
return nullptr;
}
godot::Variant members_count() {
return 1;
}
void set_member(int64_t index, godot::Variant newVar) {
if (index == 0)
set_value((int64_t)newVar);

}
};

class RLCBIntT0T16T: public godot::RefCounted {
  GDCLASS(RLCBIntT0T16T, godot::RefCounted);

public:
  using ContentType = BIntT0T16T;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCBIntT0T16T() {}
  ~RLCBIntT0T16T() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCBIntT0T16T",godot::D_METHOD("make"), &RLCBIntT0T16T::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCBIntT0T16T::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCBIntT0T16T::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCBIntT0T16T::members_count);
godot::ClassDB::bind_method(godot::D_METHOD("get_value"), &RLCBIntT0T16T::get_value);
godot::ClassDB::bind_method(godot::D_METHOD("set_value"), &RLCBIntT0T16T::set_value);
}
static godot::Ref<RLCBIntT0T16T> make() {
godot::Ref<RLCBIntT0T16T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBIntT0T16T>(*to_return)->setOwning(new BIntT0T16T);
return to_return;
}
int64_t get_value() {
return content->content.value;
}
void set_value(int64_t newVal) {
content->content.value =newVal;
}
godot::Variant get_member(int64_t index) {
if (index == 0)
return get_value();
return nullptr;
}
godot::Variant members_count() {
return 1;
}
void set_member(int64_t index, godot::Variant newVar) {
if (index == 0)
set_value((int64_t)newVar);

}
};

class RLCVectorTdoubleT: public godot::RefCounted {
  GDCLASS(RLCVectorTdoubleT, godot::RefCounted);

public:
  using ContentType = VectorTdoubleT;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCVectorTdoubleT() {}
  ~RLCVectorTdoubleT() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCVectorTdoubleT",godot::D_METHOD("make"), &RLCVectorTdoubleT::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCVectorTdoubleT::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCVectorTdoubleT::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCVectorTdoubleT::members_count);
}
static godot::Ref<RLCVectorTdoubleT> make() {
godot::Ref<RLCVectorTdoubleT> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCVectorTdoubleT>(*to_return)->setOwning(new VectorTdoubleT);
return to_return;
}
godot::Variant get_member(int64_t index) {
return nullptr;
}
godot::Variant members_count() {
return 3;
}
void set_member(int64_t index, godot::Variant newVar) {

}
};

class RLCVectorTboolT: public godot::RefCounted {
  GDCLASS(RLCVectorTboolT, godot::RefCounted);

public:
  using ContentType = VectorTboolT;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCVectorTboolT() {}
  ~RLCVectorTboolT() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCVectorTboolT",godot::D_METHOD("make"), &RLCVectorTboolT::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCVectorTboolT::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCVectorTboolT::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCVectorTboolT::members_count);
}
static godot::Ref<RLCVectorTboolT> make() {
godot::Ref<RLCVectorTboolT> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCVectorTboolT>(*to_return)->setOwning(new VectorTboolT);
return to_return;
}
godot::Variant get_member(int64_t index) {
return nullptr;
}
godot::Variant members_count() {
return 3;
}
void set_member(int64_t index, godot::Variant newVar) {

}
};

class RLCVectorTStringT: public godot::RefCounted {
  GDCLASS(RLCVectorTStringT, godot::RefCounted);

public:
  using ContentType = VectorTStringT;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCVectorTStringT() {}
  ~RLCVectorTStringT() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCVectorTStringT",godot::D_METHOD("make"), &RLCVectorTStringT::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCVectorTStringT::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCVectorTStringT::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCVectorTStringT::members_count);
}
static godot::Ref<RLCVectorTStringT> make() {
godot::Ref<RLCVectorTStringT> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCVectorTStringT>(*to_return)->setOwning(new VectorTStringT);
return to_return;
}
godot::Variant get_member(int64_t index) {
return nullptr;
}
godot::Variant members_count() {
return 3;
}
void set_member(int64_t index, godot::Variant newVar) {

}
};

class RLCVectorTBIntT1T7TT: public godot::RefCounted {
  GDCLASS(RLCVectorTBIntT1T7TT, godot::RefCounted);

public:
  using ContentType = VectorTBIntT1T7TT;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCVectorTBIntT1T7TT() {}
  ~RLCVectorTBIntT1T7TT() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCVectorTBIntT1T7TT",godot::D_METHOD("make"), &RLCVectorTBIntT1T7TT::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCVectorTBIntT1T7TT::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCVectorTBIntT1T7TT::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCVectorTBIntT1T7TT::members_count);
}
static godot::Ref<RLCVectorTBIntT1T7TT> make() {
godot::Ref<RLCVectorTBIntT1T7TT> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*to_return)->setOwning(new VectorTBIntT1T7TT);
return to_return;
}
godot::Variant get_member(int64_t index) {
return nullptr;
}
godot::Variant members_count() {
return 3;
}
void set_member(int64_t index, godot::Variant newVar) {

}
};

class RLCBoundedVectorTBIntT1T7TT4T: public godot::RefCounted {
  GDCLASS(RLCBoundedVectorTBIntT1T7TT4T, godot::RefCounted);

public:
  using ContentType = BoundedVectorTBIntT1T7TT4T;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCBoundedVectorTBIntT1T7TT4T() {}
  ~RLCBoundedVectorTBIntT1T7TT4T() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCBoundedVectorTBIntT1T7TT4T",godot::D_METHOD("make"), &RLCBoundedVectorTBIntT1T7TT4T::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCBoundedVectorTBIntT1T7TT4T::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCBoundedVectorTBIntT1T7TT4T::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCBoundedVectorTBIntT1T7TT4T::members_count);
}
static godot::Ref<RLCBoundedVectorTBIntT1T7TT4T> make() {
godot::Ref<RLCBoundedVectorTBIntT1T7TT4T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*to_return)->setOwning(new BoundedVectorTBIntT1T7TT4T);
return to_return;
}
godot::Variant get_member(int64_t index) {
return nullptr;
}
godot::Variant members_count() {
return 1;
}
void set_member(int64_t index, godot::Variant newVar) {

}
};

class RLCRNG: public godot::RefCounted {
  GDCLASS(RLCRNG, godot::RefCounted);

public:
  using ContentType = RNG;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCRNG() {}
  ~RLCRNG() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCRNG",godot::D_METHOD("make"), &RLCRNG::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCRNG::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCRNG::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCRNG::members_count);
}
static godot::Ref<RLCRNG> make() {
godot::Ref<RLCRNG> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCRNG>(*to_return)->setOwning(new RNG);
return to_return;
}
godot::Variant get_member(int64_t index) {
return nullptr;
}
godot::Variant members_count() {
return 1;
}
void set_member(int64_t index, godot::Variant newVar) {

}
};

class RLCPlayer: public godot::RefCounted {
  GDCLASS(RLCPlayer, godot::RefCounted);

public:
  using ContentType = Player;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCPlayer() {}
  ~RLCPlayer() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCPlayer",godot::D_METHOD("make"), &RLCPlayer::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCPlayer::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCPlayer::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCPlayer::members_count);
godot::ClassDB::bind_method(godot::D_METHOD("get_value"), &RLCPlayer::get_value);
godot::ClassDB::bind_method(godot::D_METHOD("set_value"), &RLCPlayer::set_value);
}
static godot::Ref<RLCPlayer> make() {
godot::Ref<RLCPlayer> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCPlayer>(*to_return)->setOwning(new Player);
return to_return;
}
int64_t get_value() {
return content->content.value;
}
void set_value(int64_t newVal) {
content->content.value =newVal;
}
godot::Variant get_member(int64_t index) {
if (index == 0)
return get_value();
return nullptr;
}
godot::Variant members_count() {
return 1;
}
void set_member(int64_t index, godot::Variant newVar) {
if (index == 0)
set_value((int64_t)newVar);

}
};

class RLCPoint: public godot::RefCounted {
  GDCLASS(RLCPoint, godot::RefCounted);

public:
  using ContentType = Point;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCPoint() {}
  ~RLCPoint() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCPoint",godot::D_METHOD("make"), &RLCPoint::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCPoint::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCPoint::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCPoint::members_count);
godot::ClassDB::bind_method(godot::D_METHOD("get_owner"), &RLCPoint::get_owner);
godot::ClassDB::bind_method(godot::D_METHOD("get_count"), &RLCPoint::get_count);
}
static godot::Ref<RLCPoint> make() {
godot::Ref<RLCPoint> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCPoint>(*to_return)->setOwning(new Point);
return to_return;
}
godot::Ref<RLCPlayer> get_owner() {
godot::Ref<RLCPlayer> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCPlayer>(*to_return)->setNonOwning(&content->content.owner);
return to_return;
}
godot::Ref<RLCBIntT0T16T> get_count() {
godot::Ref<RLCBIntT0T16T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBIntT0T16T>(*to_return)->setNonOwning(&content->content.count);
return to_return;
}
godot::Variant get_member(int64_t index) {
if (index == 0)
return get_owner();
if (index == 1)
return get_count();
return nullptr;
}
godot::Variant members_count() {
return 2;
}
void set_member(int64_t index, godot::Variant newVar) {
if (index == 0)
content->content.owner= *(godot::Object::cast_to<RLCPlayer>(newVar)->content);
if (index == 1)
content->content.count= *(godot::Object::cast_to<RLCBIntT0T16T>(newVar)->content);

}
};

class RLCMove: public godot::RefCounted {
  GDCLASS(RLCMove, godot::RefCounted);

public:
  using ContentType = Move;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCMove() {}
  ~RLCMove() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCMove",godot::D_METHOD("make"), &RLCMove::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCMove::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCMove::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCMove::members_count);
godot::ClassDB::bind_method(godot::D_METHOD("get_player"), &RLCMove::get_player);
godot::ClassDB::bind_method(godot::D_METHOD("get_from_point"), &RLCMove::get_from_point);
godot::ClassDB::bind_method(godot::D_METHOD("set_from_point"), &RLCMove::set_from_point);
godot::ClassDB::bind_method(godot::D_METHOD("get_to_point"), &RLCMove::get_to_point);
godot::ClassDB::bind_method(godot::D_METHOD("set_to_point"), &RLCMove::set_to_point);
}
static godot::Ref<RLCMove> make() {
godot::Ref<RLCMove> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCMove>(*to_return)->setOwning(new Move);
return to_return;
}
godot::Ref<RLCPlayer> get_player() {
godot::Ref<RLCPlayer> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCPlayer>(*to_return)->setNonOwning(&content->content.player);
return to_return;
}
int64_t get_from_point() {
return content->content.from_point;
}
void set_from_point(int64_t newVal) {
content->content.from_point =newVal;
}
int64_t get_to_point() {
return content->content.to_point;
}
void set_to_point(int64_t newVal) {
content->content.to_point =newVal;
}
godot::Variant get_member(int64_t index) {
if (index == 0)
return get_player();
if (index == 1)
return get_from_point();
if (index == 2)
return get_to_point();
return nullptr;
}
godot::Variant members_count() {
return 3;
}
void set_member(int64_t index, godot::Variant newVar) {
if (index == 0)
content->content.player= *(godot::Object::cast_to<RLCPlayer>(newVar)->content);
if (index == 1)
set_from_point((int64_t)newVar);
if (index == 2)
set_to_point((int64_t)newVar);

}
};

class RLCBoard: public godot::RefCounted {
  GDCLASS(RLCBoard, godot::RefCounted);

public:
  using ContentType = Board;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCBoard() {}
  ~RLCBoard() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCBoard",godot::D_METHOD("make"), &RLCBoard::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCBoard::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCBoard::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCBoard::members_count);
godot::ClassDB::bind_method(godot::D_METHOD("get_bar_white"), &RLCBoard::get_bar_white);
godot::ClassDB::bind_method(godot::D_METHOD("get_bar_black"), &RLCBoard::get_bar_black);
godot::ClassDB::bind_method(godot::D_METHOD("get_off_white"), &RLCBoard::get_off_white);
godot::ClassDB::bind_method(godot::D_METHOD("get_off_black"), &RLCBoard::get_off_black);
godot::ClassDB::bind_method(godot::D_METHOD("get_curr_player"), &RLCBoard::get_curr_player);
godot::ClassDB::bind_method(godot::D_METHOD("get_remaining_moves"), &RLCBoard::get_remaining_moves);
}
static godot::Ref<RLCBoard> make() {
godot::Ref<RLCBoard> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBoard>(*to_return)->setOwning(new Board);
return to_return;
}
godot::Ref<RLCBIntT0T16T> get_bar_white() {
godot::Ref<RLCBIntT0T16T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBIntT0T16T>(*to_return)->setNonOwning(&content->content.bar_white);
return to_return;
}
godot::Ref<RLCBIntT0T16T> get_bar_black() {
godot::Ref<RLCBIntT0T16T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBIntT0T16T>(*to_return)->setNonOwning(&content->content.bar_black);
return to_return;
}
godot::Ref<RLCBIntT0T16T> get_off_white() {
godot::Ref<RLCBIntT0T16T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBIntT0T16T>(*to_return)->setNonOwning(&content->content.off_white);
return to_return;
}
godot::Ref<RLCBIntT0T16T> get_off_black() {
godot::Ref<RLCBIntT0T16T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBIntT0T16T>(*to_return)->setNonOwning(&content->content.off_black);
return to_return;
}
godot::Ref<RLCPlayer> get_curr_player() {
godot::Ref<RLCPlayer> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCPlayer>(*to_return)->setNonOwning(&content->content.curr_player);
return to_return;
}
godot::Ref<RLCBoundedVectorTBIntT1T7TT4T> get_remaining_moves() {
godot::Ref<RLCBoundedVectorTBIntT1T7TT4T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*to_return)->setNonOwning(&content->content.remaining_moves);
return to_return;
}
godot::Variant get_member(int64_t index) {
if (index == 1)
return get_bar_white();
if (index == 2)
return get_bar_black();
if (index == 3)
return get_off_white();
if (index == 4)
return get_off_black();
if (index == 5)
return get_curr_player();
if (index == 6)
return get_remaining_moves();
return nullptr;
}
godot::Variant members_count() {
return 7;
}
void set_member(int64_t index, godot::Variant newVar) {
if (index == 1)
content->content.bar_white= *(godot::Object::cast_to<RLCBIntT0T16T>(newVar)->content);
if (index == 2)
content->content.bar_black= *(godot::Object::cast_to<RLCBIntT0T16T>(newVar)->content);
if (index == 3)
content->content.off_white= *(godot::Object::cast_to<RLCBIntT0T16T>(newVar)->content);
if (index == 4)
content->content.off_black= *(godot::Object::cast_to<RLCBIntT0T16T>(newVar)->content);
if (index == 5)
content->content.curr_player= *(godot::Object::cast_to<RLCPlayer>(newVar)->content);
if (index == 6)
content->content.remaining_moves= *(godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(newVar)->content);

}
};

class RLCGameInitializeSeed: public godot::RefCounted {
  GDCLASS(RLCGameInitializeSeed, godot::RefCounted);

public:
  using ContentType = GameInitializeSeed;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCGameInitializeSeed() {}
  ~RLCGameInitializeSeed() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCGameInitializeSeed",godot::D_METHOD("make"), &RLCGameInitializeSeed::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCGameInitializeSeed::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCGameInitializeSeed::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCGameInitializeSeed::members_count);
godot::ClassDB::bind_method(godot::D_METHOD("get_external_seed"), &RLCGameInitializeSeed::get_external_seed);
godot::ClassDB::bind_method(godot::D_METHOD("set_external_seed"), &RLCGameInitializeSeed::set_external_seed);
}
static godot::Ref<RLCGameInitializeSeed> make() {
godot::Ref<RLCGameInitializeSeed> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCGameInitializeSeed>(*to_return)->setOwning(new GameInitializeSeed);
return to_return;
}
int64_t get_external_seed() {
return content->content.external_seed;
}
void set_external_seed(int64_t newVal) {
content->content.external_seed =newVal;
}
godot::Variant get_member(int64_t index) {
if (index == 0)
return get_external_seed();
return nullptr;
}
godot::Variant members_count() {
return 1;
}
void set_member(int64_t index, godot::Variant newVar) {
if (index == 0)
set_external_seed((int64_t)newVar);

}
};

class RLCGameSelectMove: public godot::RefCounted {
  GDCLASS(RLCGameSelectMove, godot::RefCounted);

public:
  using ContentType = GameSelectMove;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCGameSelectMove() {}
  ~RLCGameSelectMove() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCGameSelectMove",godot::D_METHOD("make"), &RLCGameSelectMove::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCGameSelectMove::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCGameSelectMove::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCGameSelectMove::members_count);
godot::ClassDB::bind_method(godot::D_METHOD("get_die_idx"), &RLCGameSelectMove::get_die_idx);
godot::ClassDB::bind_method(godot::D_METHOD("set_die_idx"), &RLCGameSelectMove::set_die_idx);
godot::ClassDB::bind_method(godot::D_METHOD("get_move"), &RLCGameSelectMove::get_move);
}
static godot::Ref<RLCGameSelectMove> make() {
godot::Ref<RLCGameSelectMove> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCGameSelectMove>(*to_return)->setOwning(new GameSelectMove);
return to_return;
}
int64_t get_die_idx() {
return content->content.die_idx;
}
void set_die_idx(int64_t newVal) {
content->content.die_idx =newVal;
}
godot::Ref<RLCMove> get_move() {
godot::Ref<RLCMove> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCMove>(*to_return)->setNonOwning(&content->content.move);
return to_return;
}
godot::Variant get_member(int64_t index) {
if (index == 0)
return get_die_idx();
if (index == 1)
return get_move();
return nullptr;
}
godot::Variant members_count() {
return 2;
}
void set_member(int64_t index, godot::Variant newVar) {
if (index == 0)
set_die_idx((int64_t)newVar);
if (index == 1)
content->content.move= *(godot::Object::cast_to<RLCMove>(newVar)->content);

}
};

class RLCConfigureRNG: public godot::RefCounted {
  GDCLASS(RLCConfigureRNG, godot::RefCounted);

public:
  using ContentType = ConfigureRNG;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCConfigureRNG() {}
  ~RLCConfigureRNG() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCConfigureRNG",godot::D_METHOD("make"), &RLCConfigureRNG::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCConfigureRNG::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCConfigureRNG::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCConfigureRNG::members_count);
godot::ClassDB::bind_method(godot::D_METHOD("get_resume_index"), &RLCConfigureRNG::get_resume_index);
godot::ClassDB::bind_method(godot::D_METHOD("set_resume_index"), &RLCConfigureRNG::set_resume_index);
godot::ClassDB::bind_method(godot::D_METHOD("get_rng"), &RLCConfigureRNG::get_rng);
godot::ClassDB::bind_method(godot::D_METHOD("get_seed"), &RLCConfigureRNG::get_seed);
godot::ClassDB::bind_method(godot::D_METHOD("set_seed"), &RLCConfigureRNG::set_seed);
godot::ClassDB::bind_method(godot::D_METHOD("get_i"), &RLCConfigureRNG::get_i);
godot::ClassDB::bind_method(godot::D_METHOD("set_i"), &RLCConfigureRNG::set_i);
godot::ClassDB::bind_method(godot::D_METHOD("get_entry"), &RLCConfigureRNG::get_entry);
godot::ClassDB::bind_method(godot::D_METHOD("set_entry"), &RLCConfigureRNG::set_entry);
}
static godot::Ref<RLCConfigureRNG> make() {
godot::Ref<RLCConfigureRNG> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCConfigureRNG>(*to_return)->setOwning(new ConfigureRNG);
return to_return;
}
int64_t get_resume_index() {
return content->content.resume_index;
}
void set_resume_index(int64_t newVal) {
content->content.resume_index =newVal;
}
godot::Ref<RLCRNG> get_rng() {
godot::Ref<RLCRNG> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCRNG>(*to_return)->setNonOwning(&content->content.rng);
return to_return;
}
int64_t get_seed() {
return content->content.seed;
}
void set_seed(int64_t newVal) {
content->content.seed =newVal;
}
int64_t get_i() {
return content->content.i;
}
void set_i(int64_t newVal) {
content->content.i =newVal;
}
int64_t get_entry() {
return content->content.entry;
}
void set_entry(int64_t newVal) {
content->content.entry =newVal;
}
godot::Variant get_member(int64_t index) {
if (index == 0)
return get_resume_index();
if (index == 1)
return get_rng();
if (index == 2)
return get_seed();
if (index == 3)
return get_i();
if (index == 4)
return get_entry();
return nullptr;
}
godot::Variant members_count() {
return 5;
}
void set_member(int64_t index, godot::Variant newVar) {
if (index == 0)
set_resume_index((int64_t)newVar);
if (index == 1)
content->content.rng= *(godot::Object::cast_to<RLCRNG>(newVar)->content);
if (index == 2)
set_seed((int64_t)newVar);
if (index == 3)
set_i((int64_t)newVar);
if (index == 4)
set_entry((int64_t)newVar);

}
};

class RLCGame: public godot::RefCounted {
  GDCLASS(RLCGame, godot::RefCounted);

public:
  using ContentType = Game;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCGame() {}
  ~RLCGame() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCGame",godot::D_METHOD("make"), &RLCGame::make);
godot::ClassDB::bind_method(godot::D_METHOD("get_member"), &RLCGame::get_member);
godot::ClassDB::bind_method(godot::D_METHOD("set_member"), &RLCGame::set_member);
godot::ClassDB::bind_method(godot::D_METHOD("members_count"), &RLCGame::members_count);
godot::ClassDB::bind_method(godot::D_METHOD("get_resume_index"), &RLCGame::get_resume_index);
godot::ClassDB::bind_method(godot::D_METHOD("set_resume_index"), &RLCGame::set_resume_index);
godot::ClassDB::bind_method(godot::D_METHOD("get_board"), &RLCGame::get_board);
godot::ClassDB::bind_method(godot::D_METHOD("get_winner"), &RLCGame::get_winner);
godot::ClassDB::bind_method(godot::D_METHOD("get_rng_agent"), &RLCGame::get_rng_agent);
godot::ClassDB::bind_method(godot::D_METHOD("get_game_seed"), &RLCGame::get_game_seed);
godot::ClassDB::bind_method(godot::D_METHOD("set_game_seed"), &RLCGame::set_game_seed);
godot::ClassDB::bind_method(godot::D_METHOD("get_external_seed"), &RLCGame::get_external_seed);
godot::ClassDB::bind_method(godot::D_METHOD("set_external_seed"), &RLCGame::set_external_seed);
godot::ClassDB::bind_method(godot::D_METHOD("get_init_roll"), &RLCGame::get_init_roll);
godot::ClassDB::bind_method(godot::D_METHOD("get_must_play_idx"), &RLCGame::get_must_play_idx);
godot::ClassDB::bind_method(godot::D_METHOD("set_must_play_idx"), &RLCGame::set_must_play_idx);
godot::ClassDB::bind_method(godot::D_METHOD("get_die_idx"), &RLCGame::get_die_idx);
godot::ClassDB::bind_method(godot::D_METHOD("set_die_idx"), &RLCGame::set_die_idx);
godot::ClassDB::bind_method(godot::D_METHOD("get_move"), &RLCGame::get_move);
}
static godot::Ref<RLCGame> make() {
godot::Ref<RLCGame> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCGame>(*to_return)->setOwning(new Game);
return to_return;
}
int64_t get_resume_index() {
return content->content.resume_index;
}
void set_resume_index(int64_t newVal) {
content->content.resume_index =newVal;
}
godot::Ref<RLCBoard> get_board() {
godot::Ref<RLCBoard> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBoard>(*to_return)->setNonOwning(&content->content.board);
return to_return;
}
godot::Ref<RLCPlayer> get_winner() {
godot::Ref<RLCPlayer> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCPlayer>(*to_return)->setNonOwning(&content->content.winner);
return to_return;
}
godot::Ref<RLCRNG> get_rng_agent() {
godot::Ref<RLCRNG> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCRNG>(*to_return)->setNonOwning(&content->content.rng_agent);
return to_return;
}
int64_t get_game_seed() {
return content->content.game_seed;
}
void set_game_seed(int64_t newVal) {
content->content.game_seed =newVal;
}
int64_t get_external_seed() {
return content->content.external_seed;
}
void set_external_seed(int64_t newVal) {
content->content.external_seed =newVal;
}
godot::Ref<RLCBoundedVectorTBIntT1T7TT4T> get_init_roll() {
godot::Ref<RLCBoundedVectorTBIntT1T7TT4T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*to_return)->setNonOwning(&content->content.init_roll);
return to_return;
}
int64_t get_must_play_idx() {
return content->content.must_play_idx;
}
void set_must_play_idx(int64_t newVal) {
content->content.must_play_idx =newVal;
}
int64_t get_die_idx() {
return content->content.die_idx;
}
void set_die_idx(int64_t newVal) {
content->content.die_idx =newVal;
}
godot::Ref<RLCMove> get_move() {
godot::Ref<RLCMove> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCMove>(*to_return)->setNonOwning(&content->content.move);
return to_return;
}
godot::Variant get_member(int64_t index) {
if (index == 0)
return get_resume_index();
if (index == 1)
return get_board();
if (index == 2)
return get_winner();
if (index == 3)
return get_rng_agent();
if (index == 4)
return get_game_seed();
if (index == 5)
return get_external_seed();
if (index == 6)
return get_init_roll();
if (index == 7)
return get_must_play_idx();
if (index == 8)
return get_die_idx();
if (index == 9)
return get_move();
return nullptr;
}
godot::Variant members_count() {
return 10;
}
void set_member(int64_t index, godot::Variant newVar) {
if (index == 0)
set_resume_index((int64_t)newVar);
if (index == 1)
content->content.board= *(godot::Object::cast_to<RLCBoard>(newVar)->content);
if (index == 2)
content->content.winner= *(godot::Object::cast_to<RLCPlayer>(newVar)->content);
if (index == 3)
content->content.rng_agent= *(godot::Object::cast_to<RLCRNG>(newVar)->content);
if (index == 4)
set_game_seed((int64_t)newVar);
if (index == 5)
set_external_seed((int64_t)newVar);
if (index == 6)
content->content.init_roll= *(godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(newVar)->content);
if (index == 7)
set_must_play_idx((int64_t)newVar);
if (index == 8)
set_die_idx((int64_t)newVar);
if (index == 9)
content->content.move= *(godot::Object::cast_to<RLCMove>(newVar)->content);

}
};

class RLCAnyGameAction: public godot::RefCounted {
  GDCLASS(RLCAnyGameAction, godot::RefCounted);

public:
  using ContentType = AnyGameAction;
  ContentType* content;
  bool isOwning;
  
  void setOwning(ContentType* newPtr) {
    isOwning = true;
    content = newPtr;
}

  void setNonOwning(ContentType* newPtr) {
    isOwning = false;
    content = newPtr;
}

  RLCAnyGameAction() {}
  ~RLCAnyGameAction() { if (isOwning) delete content; }

  static void _bind_methods() {
godot::ClassDB::bind_static_method("RLCAnyGameAction",godot::D_METHOD("make"), &RLCAnyGameAction::make);
godot::ClassDB::bind_method(godot::D_METHOD("unwrap"), &RLCAnyGameAction::unwrap);
godot::ClassDB::bind_method(godot::D_METHOD("assign"), &RLCAnyGameAction::assign);
godot::ClassDB::bind_method(godot::D_METHOD("get_GameInitializeSeed"), &RLCAnyGameAction::get_GameInitializeSeed);
godot::ClassDB::bind_method(godot::D_METHOD("get_GameSelectMove"), &RLCAnyGameAction::get_GameSelectMove);
}
static godot::Ref<RLCAnyGameAction> make() {
godot::Ref<RLCAnyGameAction> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCAnyGameAction>(*to_return)->setOwning(new AnyGameAction);
return to_return;
}
godot::Variant get_GameInitializeSeed() {
if (content->active_index != 0) return nullptr;
godot::Ref<RLCGameInitializeSeed> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCGameInitializeSeed>(*to_return)->setNonOwning(&content->content.field0);
return to_return;
}
godot::Variant get_GameSelectMove() {
if (content->active_index != 1) return nullptr;
godot::Ref<RLCGameSelectMove> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCGameSelectMove>(*to_return)->setNonOwning(&content->content.field1);
return to_return;
}
godot::Variant unwrap() {
if(auto candidate = get_GameInitializeSeed())
return candidate;
if(auto candidate = get_GameSelectMove())
return candidate;
return nullptr;
}
void assign(godot::Variant other) {
if(auto casted = godot::Object::cast_to<RLCGameInitializeSeed>(other)){
*content = *((*casted).content);
return;}
if(auto casted = godot::Object::cast_to<RLCGameSelectMove>(other)){
*content = *((*casted).content);
return;}
ERR_PRINT("could not assign, right hand side of assigment was not a member of the alternative");
}
};

class RLCLib: public godot::Object {
  GDCLASS(RLCLib, godot::Object);

public:
  static void _bind_methods() {
    godot::ClassDB::bind_method(godot::D_METHOD("_init"), &RLCLib::_init);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "fuzz", &RLCLib::RLC_fuzz);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_fuzz", &RLCLib::RLC_can_fuzz);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "select_move", &RLCLib::RLC_select_move);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_select_move", &RLCLib::RLC_can_select_move);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "get_winner", &RLCLib::RLC_get_winner);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_get_winner", &RLCLib::RLC_can_get_winner);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "human_range_ok", &RLCLib::RLC_human_range_ok);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_human_range_ok", &RLCLib::RLC_can_human_range_ok);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "get_type_name", &RLCLib::RLC_get_type_name);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_get_type_name", &RLCLib::RLC_can_get_type_name);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "custom_equal", &RLCLib::RLC_custom_equal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_custom_equal", &RLCLib::RLC_can_custom_equal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "from_int", &RLCLib::RLC_from_int);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_from_int", &RLCLib::RLC_can_from_int);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "s", &RLCLib::RLC_s);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_s", &RLCLib::RLC_can_s);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "empty", &RLCLib::RLC_empty);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_empty", &RLCLib::RLC_can_empty);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "greater", &RLCLib::RLC_greater);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_greater", &RLCLib::RLC_can_greater);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "get_current_player", &RLCLib::RLC_get_current_player);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_get_current_player", &RLCLib::RLC_can_get_current_player);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "to_indented_lines", &RLCLib::RLC_to_indented_lines);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_to_indented_lines", &RLCLib::RLC_can_to_indented_lines);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "make_rng", &RLCLib::RLC_make_rng);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_make_rng", &RLCLib::RLC_can_make_rng);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "is_done", &RLCLib::RLC_is_done);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_is_done", &RLCLib::RLC_can_is_done);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "is_open_paren", &RLCLib::RLC_is_open_paren);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_is_open_paren", &RLCLib::RLC_can_is_open_paren);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "size_as_observation_tensor", &RLCLib::RLC_size_as_observation_tensor);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_size_as_observation_tensor", &RLCLib::RLC_can_size_as_observation_tensor);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "pop", &RLCLib::RLC_pop);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_pop", &RLCLib::RLC_can_pop);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "max", &RLCLib::RLC_max);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_max", &RLCLib::RLC_can_max);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "initialize_seed", &RLCLib::RLC_initialize_seed);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_initialize_seed", &RLCLib::RLC_can_initialize_seed);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "is_close_paren", &RLCLib::RLC_is_close_paren);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_is_close_paren", &RLCLib::RLC_can_is_close_paren);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "get_num_players", &RLCLib::RLC_get_num_players);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_get_num_players", &RLCLib::RLC_can_get_num_players);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "back", &RLCLib::RLC_back);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_back", &RLCLib::RLC_can_back);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "resize", &RLCLib::RLC_resize);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_resize", &RLCLib::RLC_can_resize);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "set_seed", &RLCLib::RLC_set_seed);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_set_seed", &RLCLib::RLC_can_set_seed);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "has_on_bar", &RLCLib::RLC_has_on_bar);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_has_on_bar", &RLCLib::RLC_can_has_on_bar);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "write_in_observation_tensor", &RLCLib::RLC_write_in_observation_tensor);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_write_in_observation_tensor", &RLCLib::RLC_can_write_in_observation_tensor);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "equal", &RLCLib::RLC_equal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_equal", &RLCLib::RLC_can_equal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "has_any_legal_move", &RLCLib::RLC_has_any_legal_move);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_has_any_legal_move", &RLCLib::RLC_can_has_any_legal_move);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "parse_and_execute", &RLCLib::RLC_parse_and_execute);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_parse_and_execute", &RLCLib::RLC_can_parse_and_execute);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "is_space", &RLCLib::RLC_is_space);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_is_space", &RLCLib::RLC_can_is_space);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "is_enum", &RLCLib::RLC_is_enum);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_is_enum", &RLCLib::RLC_can_is_enum);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "roll_dice", &RLCLib::RLC_roll_dice);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_roll_dice", &RLCLib::RLC_can_roll_dice);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "checkers_home_and_off", &RLCLib::RLC_checkers_home_and_off);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_checkers_home_and_off", &RLCLib::RLC_can_checkers_home_and_off);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "write_tensor_warning_context", &RLCLib::RLC_write_tensor_warning_context);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_write_tensor_warning_context", &RLCLib::RLC_can_write_tensor_warning_context);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "bar_count", &RLCLib::RLC_bar_count);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_bar_count", &RLCLib::RLC_can_bar_count);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "init", &RLCLib::RLC_init);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_init", &RLCLib::RLC_can_init);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "apply_move", &RLCLib::RLC_apply_move);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_apply_move", &RLCLib::RLC_can_apply_move);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "drop", &RLCLib::RLC_drop);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_drop", &RLCLib::RLC_can_drop);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "parse_string", &RLCLib::RLC_parse_string);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_parse_string", &RLCLib::RLC_can_parse_string);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "length", &RLCLib::RLC_length);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_length", &RLCLib::RLC_can_length);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "append_to_vector", &RLCLib::RLC_append_to_vector);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_append_to_vector", &RLCLib::RLC_can_append_to_vector);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "off_count", &RLCLib::RLC_off_count);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_off_count", &RLCLib::RLC_can_off_count);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "size", &RLCLib::RLC_size);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_size", &RLCLib::RLC_can_size);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "print", &RLCLib::RLC_print);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_print", &RLCLib::RLC_can_print);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "from_byte_vector", &RLCLib::RLC_from_byte_vector);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_from_byte_vector", &RLCLib::RLC_can_from_byte_vector);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "append_to_string", &RLCLib::RLC_append_to_string);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_append_to_string", &RLCLib::RLC_can_append_to_string);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "next_player", &RLCLib::RLC_next_player);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_next_player", &RLCLib::RLC_can_next_player);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_bearoff_from", &RLCLib::RLC_can_bearoff_from);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_can_bearoff_from", &RLCLib::RLC_can_can_bearoff_from);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "not_equal", &RLCLib::RLC_not_equal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_not_equal", &RLCLib::RLC_can_not_equal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "parse_from_vector", &RLCLib::RLC_parse_from_vector);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_parse_from_vector", &RLCLib::RLC_can_parse_from_vector);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "is_empty", &RLCLib::RLC_is_empty);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_is_empty", &RLCLib::RLC_can_is_empty);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "is_equal", &RLCLib::RLC_is_equal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_is_equal", &RLCLib::RLC_can_is_equal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "to_string", &RLCLib::RLC_to_string);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_to_string", &RLCLib::RLC_can_to_string);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "as_int", &RLCLib::RLC_as_int);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_as_int", &RLCLib::RLC_can_as_int);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "set_rng_bit", &RLCLib::RLC_set_rng_bit);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_set_rng_bit", &RLCLib::RLC_can_set_rng_bit);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "add", &RLCLib::RLC_add);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_add", &RLCLib::RLC_can_add);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "pretty_print", &RLCLib::RLC_pretty_print);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_pretty_print", &RLCLib::RLC_can_pretty_print);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "is_white", &RLCLib::RLC_is_white);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_is_white", &RLCLib::RLC_can_is_white);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "near", &RLCLib::RLC_near);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_near", &RLCLib::RLC_can_near);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "abs", &RLCLib::RLC_abs);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_abs", &RLCLib::RLC_can_abs);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "opponent", &RLCLib::RLC_opponent);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_opponent", &RLCLib::RLC_can_opponent);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "is_valid_move_internal", &RLCLib::RLC_is_valid_move_internal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_is_valid_move_internal", &RLCLib::RLC_can_is_valid_move_internal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "play", &RLCLib::RLC_play);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_play", &RLCLib::RLC_can_play);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "to_str", &RLCLib::RLC_to_str);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_to_str", &RLCLib::RLC_can_to_str);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "is_black", &RLCLib::RLC_is_black);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_is_black", &RLCLib::RLC_can_is_black);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "score", &RLCLib::RLC_score);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_score", &RLCLib::RLC_can_score);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "assign", &RLCLib::RLC_assign);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_assign", &RLCLib::RLC_can_assign);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "configure_rng", &RLCLib::RLC_configure_rng);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_configure_rng", &RLCLib::RLC_can_configure_rng);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "reverse", &RLCLib::RLC_reverse);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_reverse", &RLCLib::RLC_can_reverse);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "enumerate", &RLCLib::RLC_enumerate);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_enumerate", &RLCLib::RLC_can_enumerate);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "get", &RLCLib::RLC_get);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_get", &RLCLib::RLC_can_get);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "apply", &RLCLib::RLC_apply);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_apply", &RLCLib::RLC_can_apply);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "tensorable_warning", &RLCLib::RLC_tensorable_warning);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_tensorable_warning", &RLCLib::RLC_can_tensorable_warning);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "append", &RLCLib::RLC_append);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_append", &RLCLib::RLC_can_append);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "next", &RLCLib::RLC_next);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_next", &RLCLib::RLC_can_next);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "get_score_multiplier", &RLCLib::RLC_get_score_multiplier);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_get_score_multiplier", &RLCLib::RLC_can_get_score_multiplier);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "min", &RLCLib::RLC_min);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_min", &RLCLib::RLC_can_min);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "human_to_idx", &RLCLib::RLC_human_to_idx);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_human_to_idx", &RLCLib::RLC_can_human_to_idx);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "randint", &RLCLib::RLC_randint);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_randint", &RLCLib::RLC_can_randint);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "is_valid_move", &RLCLib::RLC_is_valid_move);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_is_valid_move", &RLCLib::RLC_can_is_valid_move);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "to_internal", &RLCLib::RLC_to_internal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_to_internal", &RLCLib::RLC_can_to_internal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "is_game_over", &RLCLib::RLC_is_game_over);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_is_game_over", &RLCLib::RLC_can_is_game_over);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "clone", &RLCLib::RLC_clone);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_clone", &RLCLib::RLC_can_clone);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_play_sequence", &RLCLib::RLC_can_play_sequence);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_can_play_sequence", &RLCLib::RLC_can_can_play_sequence);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "point_char", &RLCLib::RLC_point_char);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_point_char", &RLCLib::RLC_can_point_char);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "append_quoted", &RLCLib::RLC_append_quoted);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_append_quoted", &RLCLib::RLC_can_append_quoted);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "is_blocked", &RLCLib::RLC_is_blocked);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_is_blocked", &RLCLib::RLC_can_is_blocked);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "substring_matches", &RLCLib::RLC_substring_matches);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_substring_matches", &RLCLib::RLC_can_substring_matches);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "apply_move_internal", &RLCLib::RLC_apply_move_internal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_apply_move_internal", &RLCLib::RLC_can_apply_move_internal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "count", &RLCLib::RLC_count);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_count", &RLCLib::RLC_can_count);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "as_string_literal", &RLCLib::RLC_as_string_literal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_as_string_literal", &RLCLib::RLC_can_as_string_literal);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "sub", &RLCLib::RLC_sub);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_sub", &RLCLib::RLC_can_sub);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "clear", &RLCLib::RLC_clear);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_clear", &RLCLib::RLC_can_clear);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "enumeration_error", &RLCLib::RLC_enumeration_error);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_enumeration_error", &RLCLib::RLC_can_enumeration_error);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "drop_back", &RLCLib::RLC_drop_back);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_drop_back", &RLCLib::RLC_can_drop_back);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "is_all_in_home", &RLCLib::RLC_is_all_in_home);
godot::ClassDB::bind_vararg_method(godot::METHOD_FLAGS_DEFAULT, "can_is_all_in_home", &RLCLib::RLC_can_is_all_in_home);

  }

  RLCLib() {}

  void _init() {}
godot::Variant RLC_fuzz(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_fuzz(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_select_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_select_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_get_winner(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_get_winner(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_human_range_ok(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_human_range_ok(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_get_type_name(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_get_type_name(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_kBearOff(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_kBearOff(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_kBlackHomeStart(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_kBlackHomeStart(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_kBarInternal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_kBarInternal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_custom_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_custom_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_from_int(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_from_int(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_s(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_s(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_kHomeEnd(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_kHomeEnd(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_empty(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_empty(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_greater(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_greater(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_get_current_player(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_get_current_player(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_to_indented_lines(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_to_indented_lines(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_make_rng(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_make_rng(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_is_done(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_is_done(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_kWhiteHomeStart(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_kWhiteHomeStart(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_is_open_paren(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_is_open_paren(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_size_as_observation_tensor(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_size_as_observation_tensor(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_pop(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_pop(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_max(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_max(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_initialize_seed(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_initialize_seed(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_is_close_paren(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_is_close_paren(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_get_num_players(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_get_num_players(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_back(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_back(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_resize(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_resize(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_set_seed(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_set_seed(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_has_on_bar(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_has_on_bar(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_write_in_observation_tensor(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_write_in_observation_tensor(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_has_any_legal_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_has_any_legal_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_parse_and_execute(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_parse_and_execute(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_is_space(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_is_space(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_is_enum(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_is_enum(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_roll_dice(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_roll_dice(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_checkers_home_and_off(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_checkers_home_and_off(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_write_tensor_warning_context(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_write_tensor_warning_context(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_bar_count(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_bar_count(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_init(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_init(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_apply_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_apply_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_drop(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_drop(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_parse_string(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_parse_string(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_length(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_length(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_append_to_vector(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_append_to_vector(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_off_count(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_off_count(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_size(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_size(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_print(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_print(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_from_byte_vector(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_from_byte_vector(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_append_to_string(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_append_to_string(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_next_player(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_next_player(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_bearoff_from(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_can_bearoff_from(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_not_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_not_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_parse_from_vector(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_parse_from_vector(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_kBoardSize(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_kBoardSize(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_is_empty(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_is_empty(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_is_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_is_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_to_string(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_to_string(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_as_int(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_as_int(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_set_rng_bit(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_set_rng_bit(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_kTotalChips(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_kTotalChips(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_add(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_add(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_pretty_print(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_pretty_print(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_kOffInternal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_kOffInternal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_is_white(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_is_white(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_near(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_near(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_abs(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_abs(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_opponent(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_opponent(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_is_valid_move_internal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_is_valid_move_internal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_play(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_play(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_to_str(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_to_str(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_is_black(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_is_black(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_score(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_score(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_assign(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_assign(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_configure_rng(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_configure_rng(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_reverse(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_reverse(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_enumerate(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_enumerate(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_get(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_get(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_apply(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_apply(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_tensorable_warning(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_tensorable_warning(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_append(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_append(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_next(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_next(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_get_score_multiplier(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_get_score_multiplier(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_min(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_min(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_human_to_idx(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_human_to_idx(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_randint(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_randint(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_is_valid_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_is_valid_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_to_internal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_to_internal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_is_game_over(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_is_game_over(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_clone(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_clone(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_play_sequence(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_can_play_sequence(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_point_char(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_point_char(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_append_quoted(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_append_quoted(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_is_blocked(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_is_blocked(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_substring_matches(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_substring_matches(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_apply_move_internal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_apply_move_internal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_count(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_count(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_kBarSrc(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_kBarSrc(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_as_string_literal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_as_string_literal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_sub(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_sub(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_clear(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_clear(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_enumeration_error(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_enumeration_error(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_drop_back(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_drop_back(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_is_all_in_home(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
godot::Variant RLC_can_is_all_in_home(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error);
};
godot::Variant RLCLib::RLC_fuzz(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))) {
rl_fuzz__VectorTint8_tT((godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_fuzz(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_select_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 3 && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[2]))))) {
auto arg1= ((int64_t)(*(args[1])));
 rl_m_select_move__Game_int64_t_Move((godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))->content), &arg1, (godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[2]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_select_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 3 && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[2]))))) {
auto arg1= ((int64_t)(*(args[1])));
 bool to_return;
rl_m_can_select_move__Game_int64_t_Move_r_bool(&to_return,(godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))->content), &arg1, (godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[2]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_get_winner(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))) {
Player* mallocated = (Player*) malloc(sizeof(Player));
godot::Ref<RLCPlayer> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCPlayer>(*to_return)->setNonOwning(mallocated);
rl_m_get_winner__Board_r_Player(mallocated,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_get_winner(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_human_range_ok(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[0])))) && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[1]))))) {
bool to_return;
rl_m_human_range_ok__Move_BIntT1T7T_r_bool(&to_return,(godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[0]))))->content), (godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[1]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_human_range_ok(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_get_type_name(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCGameSelectMove>(*((godot::Ref<RLCGameSelectMove>)(*(args[0]))))) {
char* to_return;
rl_get_type_name__GameSelectMove_r_strlit(&to_return,(godot::Object::cast_to<RLCGameSelectMove>(*((godot::Ref<RLCGameSelectMove>)(*(args[0]))))->content));
return godot::String(to_return);
}
if (arg_count == 1 && godot::Object::cast_to<RLCGameInitializeSeed>(*((godot::Ref<RLCGameInitializeSeed>)(*(args[0]))))) {
char* to_return;
rl_get_type_name__GameInitializeSeed_r_strlit(&to_return,(godot::Object::cast_to<RLCGameInitializeSeed>(*((godot::Ref<RLCGameInitializeSeed>)(*(args[0]))))->content));
return godot::String(to_return);
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_get_type_name(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_custom_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && (*(args[0])).get_type() == godot::Variant::FLOAT && (*(args[1])).get_type() == godot::Variant::FLOAT) {
auto arg0= ((double)(*(args[0])));
 auto arg1= ((double)(*(args[1])));
 bool to_return;
rl_custom_equal__double_double_r_bool(&to_return,&arg0, &arg1);
return to_return;
}
if (arg_count == 2 && (*(args[0])).get_type() == godot::Variant::INT && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg0= ((int8_t)(*(args[0])));
 auto arg1= ((int8_t)(*(args[1])));
 bool to_return;
rl_custom_equal__int8_t_int8_t_r_bool(&to_return,&arg0, &arg1);
return to_return;
}
if (arg_count == 2 && (*(args[0])).get_type() == godot::Variant::BOOL && (*(args[1])).get_type() == godot::Variant::BOOL) {
auto arg0= ((bool)(*(args[0])));
 auto arg1= ((bool)(*(args[1])));
 bool to_return;
rl_custom_equal__bool_bool_r_bool(&to_return,&arg0, &arg1);
return to_return;
}
if (arg_count == 2 && (*(args[0])).get_type() == godot::Variant::INT && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg0= ((int64_t)(*(args[0])));
 auto arg1= ((int64_t)(*(args[1])));
 bool to_return;
rl_custom_equal__int64_t_int64_t_r_bool(&to_return,&arg0, &arg1);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_custom_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_from_int(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 rl_from_int__Player_int64_t((godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))->content), &arg1);
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_from_int(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_s(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && (*(args[0])).get_type() == godot::Variant::STRING) {
auto tmp0= (*(args[0])).operator godot::String()
;auto tmp20= tmp0.utf8();
char* arg0= const_cast<char*>(tmp20.get_data());
String* mallocated = (String*) malloc(sizeof(String));
godot::Ref<RLCString> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCString>(*to_return)->setNonOwning(mallocated);
rl_s__strlit_r_String(mallocated,&arg0);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_s(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_empty(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0]))))) {
bool to_return;
rl_m_empty__VectorTBIntT1T7TT_r_bool(&to_return,(godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_empty(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_greater(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[0])))) && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[1]))))) {
bool to_return;
rl_m_greater__BIntT1T7T_BIntT1T7T_r_bool(&to_return,(godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[0]))))->content), (godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[1]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_greater(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_get_current_player(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))) {
int64_t to_return;
rl_get_current_player__Game_r_int64_t(&to_return,(godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_get_current_player(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_to_indented_lines(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))) {
String* mallocated = (String*) malloc(sizeof(String));
godot::Ref<RLCString> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCString>(*to_return)->setNonOwning(mallocated);
rl_m_to_indented_lines__String_r_String(mallocated,(godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_to_indented_lines(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_make_rng(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && (*(args[0])).get_type() == godot::Variant::INT) {
auto arg0= ((int64_t)(*(args[0])));
 RNG* mallocated = (RNG*) malloc(sizeof(RNG));
godot::Ref<RLCRNG> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCRNG>(*to_return)->setNonOwning(mallocated);
rl_make_rng__int64_t_r_RNG(mallocated,&arg0);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_make_rng(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_is_done(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))) {
bool to_return;
rl_m_is_done__Game_r_bool(&to_return,(godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))->content));
return to_return;
}
if (arg_count == 1 && godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[0]))))) {
bool to_return;
rl_m_is_done__ConfigureRNG_r_bool(&to_return,(godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_is_done(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_is_open_paren(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && (*(args[0])).get_type() == godot::Variant::INT) {
auto arg0= ((int8_t)(*(args[0])));
 bool to_return;
rl_is_open_paren__int8_t_r_bool(&to_return,&arg0);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_is_open_paren(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_size_as_observation_tensor(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[0]))))) {
int64_t to_return;
rl_size_as_observation_tensor__ConfigureRNG_r_int64_t(&to_return,(godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[0]))))->content));
return to_return;
}
if (arg_count == 1 && godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0]))))) {
int64_t to_return;
rl_size_as_observation_tensor__RNG_r_int64_t(&to_return,(godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0]))))->content));
return to_return;
}
if (arg_count == 1 && (*(args[0])).get_type() == godot::Variant::INT) {
auto arg0= ((int8_t)(*(args[0])));
 int64_t to_return;
rl_size_as_observation_tensor__int8_t_r_int64_t(&to_return,&arg0);
return to_return;
}
if (arg_count == 1 && (*(args[0])).get_type() == godot::Variant::BOOL) {
auto arg0= ((bool)(*(args[0])));
 int64_t to_return;
rl_size_as_observation_tensor__bool_r_int64_t(&to_return,&arg0);
return to_return;
}
if (arg_count == 1 && (*(args[0])).get_type() == godot::Variant::FLOAT) {
auto arg0= ((double)(*(args[0])));
 int64_t to_return;
rl_size_as_observation_tensor__double_r_int64_t(&to_return,&arg0);
return to_return;
}
if (arg_count == 1 && (*(args[0])).get_type() == godot::Variant::INT) {
auto arg0= ((int64_t)(*(args[0])));
 int64_t to_return;
rl_size_as_observation_tensor__int64_t_r_int64_t(&to_return,&arg0);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_size_as_observation_tensor(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && (*(args[0])).get_type() == godot::Variant::FLOAT) {
auto arg0= ((double)(*(args[0])));
 bool to_return;
rl_can_size_as_observation_tensor__double_r_bool(&to_return,&arg0);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_pop(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0]))))) {
BIntT1T7T* mallocated = (BIntT1T7T*) malloc(sizeof(BIntT1T7T));
godot::Ref<RLCBIntT1T7T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBIntT1T7T>(*to_return)->setNonOwning(mallocated);
rl_m_pop__BoundedVectorTBIntT1T7TT4T_r_BIntT1T7T(mallocated,(godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0]))))->content));
return to_return;
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0]))))) {
BIntT1T7T* mallocated = (BIntT1T7T*) malloc(sizeof(BIntT1T7T));
godot::Ref<RLCBIntT1T7T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBIntT1T7T>(*to_return)->setNonOwning(mallocated);
rl_m_pop__VectorTBIntT1T7TT_r_BIntT1T7T(mallocated,(godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0]))))->content));
return to_return;
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0]))))) {
double to_return;
rl_m_pop__VectorTdoubleT_r_double(&to_return,(godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0]))))->content));
return to_return;
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))) {
int8_t to_return;
rl_m_pop__VectorTint8_tT_r_int8_t(&to_return,(godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))->content));
return to_return;
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[0]))))) {
String* mallocated = (String*) malloc(sizeof(String));
godot::Ref<RLCString> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCString>(*to_return)->setNonOwning(mallocated);
rl_m_pop__VectorTStringT_r_String(mallocated,(godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_pop(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_max(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))) {
int64_t to_return;
rl_max__Player_r_int64_t(&to_return,(godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))->content));
return to_return;
}
if (arg_count == 2 && (*(args[0])).get_type() == godot::Variant::INT && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg0= ((int64_t)(*(args[0])));
 auto arg1= ((int64_t)(*(args[1])));
 int64_t to_return;
rl_max__int64_t_int64_t_r_int64_t(&to_return,&arg0, &arg1);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_max(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_initialize_seed(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 rl_m_initialize_seed__Game_int64_t((godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))->content), &arg1);
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_initialize_seed(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 bool to_return;
rl_m_can_initialize_seed__Game_int64_t_r_bool(&to_return,(godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))->content), &arg1);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_is_close_paren(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && (*(args[0])).get_type() == godot::Variant::INT) {
auto arg0= ((int8_t)(*(args[0])));
 bool to_return;
rl_is_close_paren__int8_t_r_bool(&to_return,&arg0);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_is_close_paren(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_get_num_players(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 0) {
int64_t to_return;
rl_get_num_players__r_int64_t(&to_return);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_get_num_players(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_back(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))) {
int8_t* to_return;
rl_m_back__VectorTint8_tT_r_int8_tRef(&to_return,(godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))->content));
return *to_return;
}
if (arg_count == 1 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))) {
int8_t* to_return;
rl_m_back__String_r_int8_tRef(&to_return,(godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content));
return *to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_back(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_resize(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 rl_m_resize__VectorTdoubleT_int64_t((godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0]))))->content), &arg1);
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_resize(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_set_seed(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 rl_m_set_seed__RNG_int64_t((godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0]))))->content), &arg1);
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_set_seed(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_has_on_bar(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))) {
bool to_return;
rl_m_has_on_bar__Board_Player_r_bool(&to_return,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), (godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_has_on_bar(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_write_in_observation_tensor(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 4 && godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[2])))) && (*(args[3])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 auto arg3= ((int64_t)(*(args[3])));
 rl_write_in_observation_tensor__ConfigureRNG_int64_t_VectorTdoubleT_int64_t((godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[0]))))->content), &arg1, (godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[2]))))->content), &arg3);
return godot::Variant();
}
if (arg_count == 4 && godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[2])))) && (*(args[3])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 auto arg3= ((int64_t)(*(args[3])));
 rl_write_in_observation_tensor__RNG_int64_t_VectorTdoubleT_int64_t((godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0]))))->content), &arg1, (godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[2]))))->content), &arg3);
return godot::Variant();
}
if (arg_count == 4 && (*(args[0])).get_type() == godot::Variant::INT && (*(args[1])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[2])))) && (*(args[3])).get_type() == godot::Variant::INT) {
auto arg0= ((int8_t)(*(args[0])));
 auto arg1= ((int64_t)(*(args[1])));
 auto arg3= ((int64_t)(*(args[3])));
 rl_write_in_observation_tensor__int8_t_int64_t_VectorTdoubleT_int64_t(&arg0, &arg1, (godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[2]))))->content), &arg3);
return godot::Variant();
}
if (arg_count == 4 && (*(args[0])).get_type() == godot::Variant::BOOL && (*(args[1])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[2])))) && (*(args[3])).get_type() == godot::Variant::INT) {
auto arg0= ((bool)(*(args[0])));
 auto arg1= ((int64_t)(*(args[1])));
 auto arg3= ((int64_t)(*(args[3])));
 rl_write_in_observation_tensor__bool_int64_t_VectorTdoubleT_int64_t(&arg0, &arg1, (godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[2]))))->content), &arg3);
return godot::Variant();
}
if (arg_count == 4 && (*(args[0])).get_type() == godot::Variant::FLOAT && (*(args[1])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[2])))) && (*(args[3])).get_type() == godot::Variant::INT) {
auto arg0= ((double)(*(args[0])));
 auto arg1= ((int64_t)(*(args[1])));
 auto arg3= ((int64_t)(*(args[3])));
 rl_write_in_observation_tensor__double_int64_t_VectorTdoubleT_int64_t(&arg0, &arg1, (godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[2]))))->content), &arg3);
return godot::Variant();
}
if (arg_count == 4 && (*(args[0])).get_type() == godot::Variant::INT && (*(args[1])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[2])))) && (*(args[3])).get_type() == godot::Variant::INT) {
auto arg0= ((int64_t)(*(args[0])));
 auto arg1= ((int64_t)(*(args[1])));
 auto arg3= ((int64_t)(*(args[3])));
 rl_write_in_observation_tensor__int64_t_int64_t_VectorTdoubleT_int64_t(&arg0, &arg1, (godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[2]))))->content), &arg3);
return godot::Variant();
}
if (arg_count == 5 && (*(args[0])).get_type() == godot::Variant::INT && (*(args[1])).get_type() == godot::Variant::INT && (*(args[2])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[3])))) && (*(args[4])).get_type() == godot::Variant::INT) {
auto arg0= ((int64_t)(*(args[0])));
 auto arg1= ((int64_t)(*(args[1])));
 auto arg2= ((int64_t)(*(args[2])));
 auto arg4= ((int64_t)(*(args[4])));
 rl_write_in_observation_tensor__int64_t_int64_t_int64_t_VectorTdoubleT_int64_t(&arg0, &arg1, &arg2, (godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[3]))))->content), &arg4);
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_write_in_observation_tensor(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 4 && (*(args[0])).get_type() == godot::Variant::FLOAT && (*(args[1])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[2])))) && (*(args[3])).get_type() == godot::Variant::INT) {
auto arg0= ((double)(*(args[0])));
 auto arg1= ((int64_t)(*(args[1])));
 auto arg3= ((int64_t)(*(args[3])));
 bool to_return;
rl_can_write_in_observation_tensor__double_int64_t_VectorTdoubleT_int64_t_r_bool(&to_return,&arg0, &arg1, (godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[2]))))->content), &arg3);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[0])))) && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[1]))))) {
bool to_return;
rl_m_equal__BIntT1T7T_BIntT1T7T_r_bool(&to_return,(godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[0]))))->content), (godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[1]))))->content));
return to_return;
}
if (arg_count == 2 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))) {
bool to_return;
rl_m_equal__String_String_r_bool(&to_return,(godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content));
return to_return;
}
if (arg_count == 2 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::STRING) {
auto tmp1= (*(args[1])).operator godot::String()
;auto tmp21= tmp1.utf8();
char* arg1= const_cast<char*>(tmp21.get_data());
bool to_return;
rl_m_equal__String_strlit_r_bool(&to_return,(godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), &arg1);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_has_any_legal_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 3 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1])))) && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[2]))))) {
bool to_return;
rl_m_has_any_legal_move__Board_Player_BIntT1T7T_r_bool(&to_return,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), (godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))->content), (godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[2]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_has_any_legal_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_parse_and_execute(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 3 && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0])))) && godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[1])))) && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[2]))))) {
rl_parse_and_execute__Game_AnyGameAction_VectorTint8_tT((godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))->content), (godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[1]))))->content), (godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[2]))))->content));
return godot::Variant();
}
if (arg_count == 4 && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0])))) && godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[1])))) && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[2])))) && (*(args[3])).get_type() == godot::Variant::INT) {
auto arg3= ((int64_t)(*(args[3])));
 rl_parse_and_execute__Game_AnyGameAction_VectorTint8_tT_int64_t((godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))->content), (godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[1]))))->content), (godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[2]))))->content), &arg3);
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_parse_and_execute(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_is_space(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && (*(args[0])).get_type() == godot::Variant::INT) {
auto arg0= ((int8_t)(*(args[0])));
 bool to_return;
rl_is_space__int8_t_r_bool(&to_return,&arg0);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_is_space(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_is_enum(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))) {
bool to_return;
rl_is_enum__Player_r_bool(&to_return,(godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_is_enum(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_roll_dice(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0]))))) {
BoundedVectorTBIntT1T7TT4T* mallocated = (BoundedVectorTBIntT1T7TT4T*) malloc(sizeof(BoundedVectorTBIntT1T7TT4T));
godot::Ref<RLCBoundedVectorTBIntT1T7TT4T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*to_return)->setNonOwning(mallocated);
rl_roll_dice__RNG_r_BoundedVectorTBIntT1T7TT4T(mallocated,(godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_roll_dice(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_checkers_home_and_off(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))) {
int64_t to_return;
rl_m_checkers_home_and_off__Board_Player_r_int64_t(&to_return,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), (godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_checkers_home_and_off(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_write_tensor_warning_context(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[1]))))) {
rl_write_tensor_warning_context__String_VectorTStringT((godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), (godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[1]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_write_tensor_warning_context(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_bar_count(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))) {
int64_t to_return;
rl_m_bar_count__Board_Player_r_int64_t(&to_return,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), (godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_bar_count(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_init(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))) {
rl_m_init__Board((godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 4 && godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[0])))) && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1])))) && (*(args[2])).get_type() == godot::Variant::INT && (*(args[3])).get_type() == godot::Variant::INT) {
auto arg2= ((int64_t)(*(args[2])));
 auto arg3= ((int64_t)(*(args[3])));
 rl_m_init__Move_Player_int64_t_int64_t((godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[0]))))->content), (godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))->content), &arg2, &arg3);
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTboolT>(*((godot::Ref<RLCVectorTboolT>)(*(args[0]))))) {
rl_m_init__VectorTboolT((godot::Object::cast_to<RLCVectorTboolT>(*((godot::Ref<RLCVectorTboolT>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[0]))))) {
rl_m_init__VectorTStringT((godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0]))))) {
rl_m_init__VectorTdoubleT((godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))) {
rl_m_init__VectorTint8_tT((godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0]))))) {
rl_m_init__VectorTBIntT1T7TT((godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[0]))))) {
rl_m_init__BIntT1T7T((godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[0]))))) {
rl_m_init__BIntT0T16T((godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))) {
rl_m_init__String((godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCGameInitializeSeed>(*((godot::Ref<RLCGameInitializeSeed>)(*(args[0]))))) {
rl_m_init__GameInitializeSeed((godot::Object::cast_to<RLCGameInitializeSeed>(*((godot::Ref<RLCGameInitializeSeed>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))) {
rl_m_init__Player((godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[0]))))) {
rl_m_init__Move((godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCGameSelectMove>(*((godot::Ref<RLCGameSelectMove>)(*(args[0]))))) {
rl_m_init__GameSelectMove((godot::Object::cast_to<RLCGameSelectMove>(*((godot::Ref<RLCGameSelectMove>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && (*(args[0])).get_type() == godot::Variant::STRING) {
auto tmp0= (*(args[0])).operator godot::String()
;auto tmp20= tmp0.utf8();
char* arg0= const_cast<char*>(tmp20.get_data());
rl_m_init__strlit(&arg0);
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0]))))) {
rl_m_init__RNG((godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0]))))) {
rl_m_init__BoundedVectorTBIntT1T7TT4T((godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[0]))))) {
rl_m_init__AnyGameAction((godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCPoint>(*((godot::Ref<RLCPoint>)(*(args[0]))))) {
rl_m_init__Point((godot::Object::cast_to<RLCPoint>(*((godot::Ref<RLCPoint>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[0]))))) {
rl_m_init__ConfigureRNG((godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))) {
rl_m_init__Game((godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_init(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_apply_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[1]))))) {
rl_m_apply_move__Board_Move((godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), (godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[1]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_apply_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_drop(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTboolT>(*((godot::Ref<RLCVectorTboolT>)(*(args[0]))))) {
rl_m_drop__VectorTboolT((godot::Object::cast_to<RLCVectorTboolT>(*((godot::Ref<RLCVectorTboolT>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[0]))))) {
rl_m_drop__VectorTStringT((godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0]))))) {
rl_m_drop__VectorTdoubleT((godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0]))))) {
rl_m_drop__VectorTBIntT1T7TT((godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))) {
rl_m_drop__VectorTint8_tT((godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))) {
rl_m_drop__Game((godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0]))))) {
rl_m_drop__BoundedVectorTBIntT1T7TT4T((godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))) {
rl_m_drop__Board((godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))) {
rl_m_drop__String((godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_drop(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_parse_string(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 3 && (*(args[0])).get_type() == godot::Variant::BOOL && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1])))) && (*(args[2])).get_type() == godot::Variant::INT) {
auto arg0= ((bool)(*(args[0])));
 auto arg2= ((int64_t)(*(args[2])));
 bool to_return;
rl_parse_string__bool_String_int64_t_r_bool(&to_return,&arg0, (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content), &arg2);
return to_return;
}
if (arg_count == 3 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1])))) && (*(args[2])).get_type() == godot::Variant::INT) {
auto arg2= ((int64_t)(*(args[2])));
 bool to_return;
rl_parse_string__String_String_int64_t_r_bool(&to_return,(godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content), &arg2);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_parse_string(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_length(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && (*(args[0])).get_type() == godot::Variant::STRING) {
auto tmp0= (*(args[0])).operator godot::String()
;auto tmp20= tmp0.utf8();
char* arg0= const_cast<char*>(tmp20.get_data());
int64_t to_return;
rl_length__strlit_r_int64_t(&to_return,&arg0);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_length(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_append_to_vector(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && (*(args[0])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))) {
auto arg0= ((int8_t)(*(args[0])));
 rl_append_to_vector__int8_t_VectorTint8_tT(&arg0, (godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && (*(args[0])).get_type() == godot::Variant::BOOL && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))) {
auto arg0= ((bool)(*(args[0])));
 rl_append_to_vector__bool_VectorTint8_tT(&arg0, (godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && (*(args[0])).get_type() == godot::Variant::FLOAT && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))) {
auto arg0= ((double)(*(args[0])));
 rl_append_to_vector__double_VectorTint8_tT(&arg0, (godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && (*(args[0])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))) {
auto arg0= ((int64_t)(*(args[0])));
 rl_append_to_vector__int64_t_VectorTint8_tT(&arg0, (godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_append_to_vector(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_off_count(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))) {
int64_t to_return;
rl_m_off_count__Board_Player_r_int64_t(&to_return,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), (godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_off_count(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_size(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0]))))) {
int64_t to_return;
rl_m_size__BoundedVectorTBIntT1T7TT4T_r_int64_t(&to_return,(godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0]))))->content));
return to_return;
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0]))))) {
int64_t to_return;
rl_m_size__VectorTBIntT1T7TT_r_int64_t(&to_return,(godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0]))))->content));
return to_return;
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[0]))))) {
int64_t to_return;
rl_m_size__VectorTStringT_r_int64_t(&to_return,(godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[0]))))->content));
return to_return;
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0]))))) {
int64_t to_return;
rl_m_size__VectorTdoubleT_r_int64_t(&to_return,(godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0]))))->content));
return to_return;
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))) {
int64_t to_return;
rl_m_size__VectorTint8_tT_r_int64_t(&to_return,(godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))->content));
return to_return;
}
if (arg_count == 1 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))) {
int64_t to_return;
rl_m_size__String_r_int64_t(&to_return,(godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_size(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_print(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))) {
rl_print__String((godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_print(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_from_byte_vector(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 3 && godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[0])))) && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1])))) && (*(args[2])).get_type() == godot::Variant::INT) {
auto arg2= ((int64_t)(*(args[2])));
 bool to_return;
rl_from_byte_vector__AnyGameAction_VectorTint8_tT_int64_t_r_bool(&to_return,(godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[0]))))->content), (godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))->content), &arg2);
return to_return;
}
if (arg_count == 3 && (*(args[0])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1])))) && (*(args[2])).get_type() == godot::Variant::INT) {
auto arg0= ((int8_t)(*(args[0])));
 auto arg2= ((int64_t)(*(args[2])));
 bool to_return;
rl_from_byte_vector__int8_t_VectorTint8_tT_int64_t_r_bool(&to_return,&arg0, (godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))->content), &arg2);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_from_byte_vector(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_append_to_string(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && (*(args[0])).get_type() == godot::Variant::BOOL && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))) {
auto arg0= ((bool)(*(args[0])));
 rl_append_to_string__bool_String(&arg0, (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))) {
rl_append_to_string__String_String((godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && (*(args[0])).get_type() == godot::Variant::STRING && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))) {
auto tmp0= (*(args[0])).operator godot::String()
;auto tmp20= tmp0.utf8();
char* arg0= const_cast<char*>(tmp20.get_data());
rl_append_to_string__strlit_String(&arg0, (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_append_to_string(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_next_player(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))) {
rl_m_next_player__Board((godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_next_player(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_can_bearoff_from(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 4 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[2])))) && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[3]))))) {
auto arg1= ((int64_t)(*(args[1])));
 bool to_return;
rl_m_can_bearoff_from__Board_int64_t_BIntT1T7T_Player_r_bool(&to_return,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), &arg1, (godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[2]))))->content), (godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[3]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_can_bearoff_from(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_not_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::STRING) {
auto tmp1= (*(args[1])).operator godot::String()
;auto tmp21= tmp1.utf8();
char* arg1= const_cast<char*>(tmp21.get_data());
bool to_return;
rl_m_not_equal__String_strlit_r_bool(&to_return,(godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), &arg1);
return to_return;
}
if (arg_count == 2 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))) {
bool to_return;
rl_m_not_equal__String_String_r_bool(&to_return,(godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_not_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_parse_from_vector(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 3 && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0])))) && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1])))) && (*(args[2])).get_type() == godot::Variant::INT) {
auto arg2= ((int64_t)(*(args[2])));
 bool to_return;
rl_parse_from_vector__Player_VectorTint8_tT_int64_t_r_bool(&to_return,(godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))->content), (godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))->content), &arg2);
return to_return;
}
if (arg_count == 3 && (*(args[0])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1])))) && (*(args[2])).get_type() == godot::Variant::INT) {
auto arg0= ((int8_t)(*(args[0])));
 auto arg2= ((int64_t)(*(args[2])));
 bool to_return;
rl_parse_from_vector__int8_t_VectorTint8_tT_int64_t_r_bool(&to_return,&arg0, (godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))->content), &arg2);
return to_return;
}
if (arg_count == 3 && (*(args[0])).get_type() == godot::Variant::BOOL && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1])))) && (*(args[2])).get_type() == godot::Variant::INT) {
auto arg0= ((bool)(*(args[0])));
 auto arg2= ((int64_t)(*(args[2])));
 bool to_return;
rl_parse_from_vector__bool_VectorTint8_tT_int64_t_r_bool(&to_return,&arg0, (godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))->content), &arg2);
return to_return;
}
if (arg_count == 3 && (*(args[0])).get_type() == godot::Variant::FLOAT && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1])))) && (*(args[2])).get_type() == godot::Variant::INT) {
auto arg0= ((double)(*(args[0])));
 auto arg2= ((int64_t)(*(args[2])));
 bool to_return;
rl_parse_from_vector__double_VectorTint8_tT_int64_t_r_bool(&to_return,&arg0, (godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))->content), &arg2);
return to_return;
}
if (arg_count == 3 && (*(args[0])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1])))) && (*(args[2])).get_type() == godot::Variant::INT) {
auto arg0= ((int64_t)(*(args[0])));
 auto arg2= ((int64_t)(*(args[2])));
 bool to_return;
rl_parse_from_vector__int64_t_VectorTint8_tT_int64_t_r_bool(&to_return,&arg0, (godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))->content), &arg2);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_parse_from_vector(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_is_empty(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))) {
bool to_return;
rl_m_is_empty__Player_r_bool(&to_return,(godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_is_empty(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_is_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0])))) && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))) {
bool to_return;
rl_m_is_equal__Player_Player_r_bool(&to_return,(godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))->content), (godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_is_equal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_to_string(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))) {
String* mallocated = (String*) malloc(sizeof(String));
godot::Ref<RLCString> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCString>(*to_return)->setNonOwning(mallocated);
rl_m_to_string__Board_r_String(mallocated,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_to_string(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_as_int(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))) {
int64_t to_return;
rl_as_int__Player_r_int64_t(&to_return,(godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_as_int(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_set_rng_bit(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::BOOL) {
auto arg1= ((bool)(*(args[1])));
 rl_m_set_rng_bit__ConfigureRNG_bool((godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[0]))))->content), &arg1);
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_set_rng_bit(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::BOOL) {
auto arg1= ((bool)(*(args[1])));
 bool to_return;
rl_m_can_set_rng_bit__ConfigureRNG_bool_r_bool(&to_return,(godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[0]))))->content), &arg1);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_add(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[0])))) && godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[1]))))) {
BIntT0T16T* mallocated = (BIntT0T16T*) malloc(sizeof(BIntT0T16T));
godot::Ref<RLCBIntT0T16T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBIntT0T16T>(*to_return)->setNonOwning(mallocated);
rl_m_add__BIntT0T16T_BIntT0T16T_r_BIntT0T16T(mallocated,(godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[0]))))->content), (godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[1]))))->content));
return to_return;
}
if (arg_count == 2 && godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 BIntT0T16T* mallocated = (BIntT0T16T*) malloc(sizeof(BIntT0T16T));
godot::Ref<RLCBIntT0T16T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBIntT0T16T>(*to_return)->setNonOwning(mallocated);
rl_m_add__BIntT0T16T_int64_t_r_BIntT0T16T(mallocated,(godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[0]))))->content), &arg1);
return to_return;
}
if (arg_count == 2 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))) {
String* mallocated = (String*) malloc(sizeof(String));
godot::Ref<RLCString> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCString>(*to_return)->setNonOwning(mallocated);
rl_m_add__String_String_r_String(mallocated,(godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_add(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_pretty_print(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))) {
rl_pretty_print__Game((godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_pretty_print(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_is_white(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))) {
bool to_return;
rl_m_is_white__Player_r_bool(&to_return,(godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_is_white(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_near(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 3 && (*(args[0])).get_type() == godot::Variant::FLOAT && (*(args[1])).get_type() == godot::Variant::FLOAT && (*(args[2])).get_type() == godot::Variant::FLOAT) {
auto arg0= ((double)(*(args[0])));
 auto arg1= ((double)(*(args[1])));
 auto arg2= ((double)(*(args[2])));
 bool to_return;
rl_near__double_double_double_r_bool(&to_return,&arg0, &arg1, &arg2);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_near(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_abs(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && (*(args[0])).get_type() == godot::Variant::INT) {
auto arg0= ((int64_t)(*(args[0])));
 int64_t to_return;
rl_abs__int64_t_r_int64_t(&to_return,&arg0);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_abs(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_opponent(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))) {
Player* mallocated = (Player*) malloc(sizeof(Player));
godot::Ref<RLCPlayer> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCPlayer>(*to_return)->setNonOwning(mallocated);
rl_m_opponent__Player_r_Player(mallocated,(godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_opponent(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_is_valid_move_internal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 3 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[1])))) && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[2]))))) {
bool to_return;
rl_m_is_valid_move_internal__Board_Move_BIntT1T7T_r_bool(&to_return,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), (godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[1]))))->content), (godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[2]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_is_valid_move_internal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_play(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 0) {
Game* mallocated = (Game*) malloc(sizeof(Game));
godot::Ref<RLCGame> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCGame>(*to_return)->setNonOwning(mallocated);
rl_play__r_Game(mallocated);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_play(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 0) {
bool to_return;
rl_can_play__r_bool(&to_return);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_to_str(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 String* mallocated = (String*) malloc(sizeof(String));
godot::Ref<RLCString> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCString>(*to_return)->setNonOwning(mallocated);
rl_m_to_str__Board_int64_t_r_String(mallocated,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), &arg1);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_to_str(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_is_black(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))) {
bool to_return;
rl_m_is_black__Player_r_bool(&to_return,(godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_is_black(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_score(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 double to_return;
rl_score__Game_int64_t_r_double(&to_return,(godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))->content), &arg1);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_score(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_assign(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0])))) && godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[1]))))) {
rl_m_assign__BoundedVectorTBIntT1T7TT4T_BoundedVectorTBIntT1T7TT4T((godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0]))))->content), (godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0])))) && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[1]))))) {
rl_m_assign__VectorTdoubleT_VectorTdoubleT((godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0]))))->content), (godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTboolT>(*((godot::Ref<RLCVectorTboolT>)(*(args[0])))) && godot::Object::cast_to<RLCVectorTboolT>(*((godot::Ref<RLCVectorTboolT>)(*(args[1]))))) {
rl_m_assign__VectorTboolT_VectorTboolT((godot::Object::cast_to<RLCVectorTboolT>(*((godot::Ref<RLCVectorTboolT>)(*(args[0]))))->content), (godot::Object::cast_to<RLCVectorTboolT>(*((godot::Ref<RLCVectorTboolT>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0])))) && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))) {
rl_m_assign__VectorTint8_tT_VectorTint8_tT((godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))->content), (godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[0])))) && godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[1]))))) {
rl_m_assign__VectorTStringT_VectorTStringT((godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[0]))))->content), (godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0])))) && godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[1]))))) {
rl_m_assign__VectorTBIntT1T7TT_VectorTBIntT1T7TT((godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0]))))->content), (godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 rl_m_assign__BIntT1T7T_int64_t((godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[0]))))->content), &arg1);
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 rl_m_assign__BIntT0T16T_int64_t((godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[0]))))->content), &arg1);
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))) {
rl_m_assign__String_String((godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && (*(args[0])).get_type() == godot::Variant::STRING && (*(args[1])).get_type() == godot::Variant::STRING) {
auto tmp0= (*(args[0])).operator godot::String()
;auto tmp20= tmp0.utf8();
char* arg0= const_cast<char*>(tmp20.get_data());
auto tmp1= (*(args[1])).operator godot::String()
;auto tmp21= tmp1.utf8();
char* arg1= const_cast<char*>(tmp21.get_data());
rl_m_assign__strlit_strlit(&arg0, &arg1);
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0])))) && godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[1]))))) {
rl_m_assign__RNG_RNG((godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0]))))->content), (godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0])))) && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))) {
rl_m_assign__Player_Player((godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))->content), (godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[0])))) && godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[1]))))) {
rl_m_assign__BIntT0T16T_BIntT0T16T((godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[0]))))->content), (godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[0])))) && godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[1]))))) {
rl_m_assign__Move_Move((godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[0]))))->content), (godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCPoint>(*((godot::Ref<RLCPoint>)(*(args[0])))) && godot::Object::cast_to<RLCPoint>(*((godot::Ref<RLCPoint>)(*(args[1]))))) {
rl_m_assign__Point_Point((godot::Object::cast_to<RLCPoint>(*((godot::Ref<RLCPoint>)(*(args[0]))))->content), (godot::Object::cast_to<RLCPoint>(*((godot::Ref<RLCPoint>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[0])))) && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[1]))))) {
rl_m_assign__BIntT1T7T_BIntT1T7T((godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[0]))))->content), (godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[1]))))) {
rl_m_assign__Board_Board((godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), (godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCGameInitializeSeed>(*((godot::Ref<RLCGameInitializeSeed>)(*(args[0])))) && godot::Object::cast_to<RLCGameInitializeSeed>(*((godot::Ref<RLCGameInitializeSeed>)(*(args[1]))))) {
rl_m_assign__GameInitializeSeed_GameInitializeSeed((godot::Object::cast_to<RLCGameInitializeSeed>(*((godot::Ref<RLCGameInitializeSeed>)(*(args[0]))))->content), (godot::Object::cast_to<RLCGameInitializeSeed>(*((godot::Ref<RLCGameInitializeSeed>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCGameSelectMove>(*((godot::Ref<RLCGameSelectMove>)(*(args[0])))) && godot::Object::cast_to<RLCGameSelectMove>(*((godot::Ref<RLCGameSelectMove>)(*(args[1]))))) {
rl_m_assign__GameSelectMove_GameSelectMove((godot::Object::cast_to<RLCGameSelectMove>(*((godot::Ref<RLCGameSelectMove>)(*(args[0]))))->content), (godot::Object::cast_to<RLCGameSelectMove>(*((godot::Ref<RLCGameSelectMove>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[0])))) && godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[1]))))) {
rl_m_assign__AnyGameAction_AnyGameAction((godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[0]))))->content), (godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[0])))) && godot::Object::cast_to<RLCGameSelectMove>(*((godot::Ref<RLCGameSelectMove>)(*(args[1]))))) {
rl_m_assign__AnyGameAction_GameSelectMove((godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[0]))))->content), (godot::Object::cast_to<RLCGameSelectMove>(*((godot::Ref<RLCGameSelectMove>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[0])))) && godot::Object::cast_to<RLCGameInitializeSeed>(*((godot::Ref<RLCGameInitializeSeed>)(*(args[1]))))) {
rl_m_assign__AnyGameAction_GameInitializeSeed((godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[0]))))->content), (godot::Object::cast_to<RLCGameInitializeSeed>(*((godot::Ref<RLCGameInitializeSeed>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[0])))) && godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[1]))))) {
rl_m_assign__ConfigureRNG_ConfigureRNG((godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[0]))))->content), (godot::Object::cast_to<RLCConfigureRNG>(*((godot::Ref<RLCConfigureRNG>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0])))) && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[1]))))) {
rl_m_assign__Game_Game((godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[0]))))->content), (godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[1]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_assign(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_configure_rng(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 0) {
ConfigureRNG* mallocated = (ConfigureRNG*) malloc(sizeof(ConfigureRNG));
godot::Ref<RLCConfigureRNG> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCConfigureRNG>(*to_return)->setNonOwning(mallocated);
rl_configure_rng__r_ConfigureRNG(mallocated);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_configure_rng(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 0) {
bool to_return;
rl_can_configure_rng__r_bool(&to_return);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_reverse(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))) {
rl_m_reverse__String((godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_reverse(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_enumerate(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && (*(args[0])).get_type() == godot::Variant::BOOL && godot::Object::cast_to<RLCVectorTboolT>(*((godot::Ref<RLCVectorTboolT>)(*(args[1]))))) {
auto arg0= ((bool)(*(args[0])));
 rl_enumerate__bool_VectorTboolT(&arg0, (godot::Object::cast_to<RLCVectorTboolT>(*((godot::Ref<RLCVectorTboolT>)(*(args[1]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_enumerate(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_get(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 union BIntT1T7T* to_return;
rl_m_get__BoundedVectorTBIntT1T7TT4T_int64_t_r_BIntT1T7TRef(&to_return,(godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0]))))->content), &arg1);
godot::Ref<RLCBIntT1T7T> real_return;
real_return.instantiate();
godot::Object::cast_to<RLCBIntT1T7T>(*real_return)->setNonOwning(to_return);
return real_return;
}
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTboolT>(*((godot::Ref<RLCVectorTboolT>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 bool* to_return;
rl_m_get__VectorTboolT_int64_t_r_boolRef(&to_return,(godot::Object::cast_to<RLCVectorTboolT>(*((godot::Ref<RLCVectorTboolT>)(*(args[0]))))->content), &arg1);
return *to_return;
}
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 union BIntT1T7T* to_return;
rl_m_get__VectorTBIntT1T7TT_int64_t_r_BIntT1T7TRef(&to_return,(godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0]))))->content), &arg1);
godot::Ref<RLCBIntT1T7T> real_return;
real_return.instantiate();
godot::Object::cast_to<RLCBIntT1T7T>(*real_return)->setNonOwning(to_return);
return real_return;
}
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 union String* to_return;
rl_m_get__VectorTStringT_int64_t_r_StringRef(&to_return,(godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[0]))))->content), &arg1);
godot::Ref<RLCString> real_return;
real_return.instantiate();
godot::Object::cast_to<RLCString>(*real_return)->setNonOwning(to_return);
return real_return;
}
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 double* to_return;
rl_m_get__VectorTdoubleT_int64_t_r_doubleRef(&to_return,(godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0]))))->content), &arg1);
return *to_return;
}
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 int8_t* to_return;
rl_m_get__VectorTint8_tT_int64_t_r_int8_tRef(&to_return,(godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))->content), &arg1);
return *to_return;
}
if (arg_count == 2 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 int8_t* to_return;
rl_m_get__String_int64_t_r_int8_tRef(&to_return,(godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), &arg1);
return *to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_get(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_apply(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[0])))) && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[1]))))) {
rl_apply__AnyGameAction_Game((godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[0]))))->content), (godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCGameSelectMove>(*((godot::Ref<RLCGameSelectMove>)(*(args[0])))) && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[1]))))) {
rl_apply__GameSelectMove_Game((godot::Object::cast_to<RLCGameSelectMove>(*((godot::Ref<RLCGameSelectMove>)(*(args[0]))))->content), (godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCGameInitializeSeed>(*((godot::Ref<RLCGameInitializeSeed>)(*(args[0])))) && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[1]))))) {
rl_apply__GameInitializeSeed_Game((godot::Object::cast_to<RLCGameInitializeSeed>(*((godot::Ref<RLCGameInitializeSeed>)(*(args[0]))))->content), (godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[1]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_apply(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[0])))) && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[1]))))) {
bool to_return;
rl_can_apply__AnyGameAction_Game_r_bool(&to_return,(godot::Object::cast_to<RLCAnyGameAction>(*((godot::Ref<RLCAnyGameAction>)(*(args[0]))))->content), (godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[1]))))->content));
return to_return;
}
if (arg_count == 2 && godot::Object::cast_to<RLCGameSelectMove>(*((godot::Ref<RLCGameSelectMove>)(*(args[0])))) && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[1]))))) {
bool to_return;
rl_can_apply__GameSelectMove_Game_r_bool(&to_return,(godot::Object::cast_to<RLCGameSelectMove>(*((godot::Ref<RLCGameSelectMove>)(*(args[0]))))->content), (godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[1]))))->content));
return to_return;
}
if (arg_count == 2 && godot::Object::cast_to<RLCGameInitializeSeed>(*((godot::Ref<RLCGameInitializeSeed>)(*(args[0])))) && godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[1]))))) {
bool to_return;
rl_can_apply__GameInitializeSeed_Game_r_bool(&to_return,(godot::Object::cast_to<RLCGameInitializeSeed>(*((godot::Ref<RLCGameInitializeSeed>)(*(args[0]))))->content), (godot::Object::cast_to<RLCGame>(*((godot::Ref<RLCGame>)(*(args[1]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_tensorable_warning(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 3 && (*(args[0])).get_type() == godot::Variant::FLOAT && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1])))) && godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[2]))))) {
auto arg0= ((double)(*(args[0])));
 rl_tensorable_warning__double_String_VectorTStringT(&arg0, (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content), (godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[2]))))->content));
return godot::Variant();
}
if (arg_count == 3 && (*(args[0])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1])))) && godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[2]))))) {
auto arg0= ((int64_t)(*(args[0])));
 rl_tensorable_warning__int64_t_String_VectorTStringT(&arg0, (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content), (godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[2]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_tensorable_warning(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_append(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0])))) && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[1]))))) {
rl_m_append__BoundedVectorTBIntT1T7TT4T_BIntT1T7T((godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0]))))->content), (godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0])))) && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[1]))))) {
rl_m_append__VectorTBIntT1T7TT_BIntT1T7T((godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0]))))->content), (godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::FLOAT) {
auto arg1= ((double)(*(args[1])));
 rl_m_append__VectorTdoubleT_double((godot::Object::cast_to<RLCVectorTdoubleT>(*((godot::Ref<RLCVectorTdoubleT>)(*(args[0]))))->content), &arg1);
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[0])))) && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))) {
rl_m_append__VectorTStringT_String((godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[0]))))->content), (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTboolT>(*((godot::Ref<RLCVectorTboolT>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::BOOL) {
auto arg1= ((bool)(*(args[1])));
 rl_m_append__VectorTboolT_bool((godot::Object::cast_to<RLCVectorTboolT>(*((godot::Ref<RLCVectorTboolT>)(*(args[0]))))->content), &arg1);
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int8_t)(*(args[1])));
 rl_m_append__VectorTint8_tT_int8_t((godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))->content), &arg1);
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))) {
rl_m_append__String_String((godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content));
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::STRING) {
auto tmp1= (*(args[1])).operator godot::String()
;auto tmp21= tmp1.utf8();
char* arg1= const_cast<char*>(tmp21.get_data());
rl_m_append__String_strlit((godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), &arg1);
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int8_t)(*(args[1])));
 rl_m_append__String_int8_t((godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), &arg1);
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_append(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_next(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0]))))) {
int64_t to_return;
rl_m_next__RNG_r_int64_t(&to_return,(godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_next(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_get_score_multiplier(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))) {
double to_return;
rl_m_get_score_multiplier__Board_Player_r_double(&to_return,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), (godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_get_score_multiplier(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_min(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && (*(args[0])).get_type() == godot::Variant::INT && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg0= ((int64_t)(*(args[0])));
 auto arg1= ((int64_t)(*(args[1])));
 int64_t to_return;
rl_min__int64_t_int64_t_r_int64_t(&to_return,&arg0, &arg1);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_min(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_human_to_idx(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && (*(args[0])).get_type() == godot::Variant::INT && (*(args[1])).get_type() == godot::Variant::BOOL) {
auto arg0= ((int64_t)(*(args[0])));
 auto arg1= ((bool)(*(args[1])));
 int64_t to_return;
rl_human_to_idx__int64_t_bool_r_int64_t(&to_return,&arg0, &arg1);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_human_to_idx(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_randint(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 3 && godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT && (*(args[2])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 auto arg2= ((int64_t)(*(args[2])));
 int64_t to_return;
rl_m_randint__RNG_int64_t_int64_t_r_int64_t(&to_return,(godot::Object::cast_to<RLCRNG>(*((godot::Ref<RLCRNG>)(*(args[0]))))->content), &arg1, &arg2);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_randint(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_is_valid_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 3 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[1])))) && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[2]))))) {
bool to_return;
rl_m_is_valid_move__Board_Move_BIntT1T7T_r_bool(&to_return,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), (godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[1]))))->content), (godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[2]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_is_valid_move(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_to_internal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[0]))))) {
rl_m_to_internal__Move((godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[0]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_to_internal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_is_game_over(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))) {
bool to_return;
rl_m_is_game_over__Board_r_bool(&to_return,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_is_game_over(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_clone(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))) {
Board* mallocated = (Board*) malloc(sizeof(Board));
godot::Ref<RLCBoard> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBoard>(*to_return)->setNonOwning(mallocated);
rl_m_clone__Board_r_Board(mallocated,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_clone(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_can_play_sequence(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 4 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[1])))) && godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[2])))) && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[3]))))) {
bool to_return;
rl_m_can_play_sequence__Board_BIntT1T7T_BIntT1T7T_Player_r_bool(&to_return,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), (godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[1]))))->content), (godot::Object::cast_to<RLCBIntT1T7T>(*((godot::Ref<RLCBIntT1T7T>)(*(args[2]))))->content), (godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[3]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_can_play_sequence(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_point_char(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 int8_t to_return;
rl_m_point_char__Board_int64_t_r_int8_t(&to_return,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), &arg1);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_point_char(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_append_quoted(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))) {
rl_m_append_quoted__String_String((godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_append_quoted(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_is_blocked(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 3 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[2]))))) {
auto arg1= ((int64_t)(*(args[1])));
 bool to_return;
rl_m_is_blocked__Board_int64_t_Player_r_bool(&to_return,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), &arg1, (godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[2]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_is_blocked(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_substring_matches(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 3 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::STRING && (*(args[2])).get_type() == godot::Variant::INT) {
auto tmp1= (*(args[1])).operator godot::String()
;auto tmp21= tmp1.utf8();
char* arg1= const_cast<char*>(tmp21.get_data());
auto arg2= ((int64_t)(*(args[2])));
 bool to_return;
rl_m_substring_matches__String_strlit_int64_t_r_bool(&to_return,(godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), &arg1, &arg2);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_substring_matches(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_apply_move_internal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[1]))))) {
rl_m_apply_move_internal__Board_Move((godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), (godot::Object::cast_to<RLCMove>(*((godot::Ref<RLCMove>)(*(args[1]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_apply_move_internal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_count(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int8_t)(*(args[1])));
 int64_t to_return;
rl_m_count__String_int8_t_r_int64_t(&to_return,(godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), &arg1);
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_count(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_as_string_literal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))) {
char* to_return;
rl_as_string_literal__Player_r_strlit(&to_return,(godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[0]))))->content));
return godot::String(to_return);
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_as_string_literal(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_sub(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 BIntT0T16T* mallocated = (BIntT0T16T*) malloc(sizeof(BIntT0T16T));
godot::Ref<RLCBIntT0T16T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBIntT0T16T>(*to_return)->setNonOwning(mallocated);
rl_m_sub__BIntT0T16T_int64_t_r_BIntT0T16T(mallocated,(godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[0]))))->content), &arg1);
return to_return;
}
if (arg_count == 2 && godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[0])))) && godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[1]))))) {
BIntT0T16T* mallocated = (BIntT0T16T*) malloc(sizeof(BIntT0T16T));
godot::Ref<RLCBIntT0T16T> to_return;
to_return.instantiate();
godot::Object::cast_to<RLCBIntT0T16T>(*to_return)->setNonOwning(mallocated);
rl_m_sub__BIntT0T16T_BIntT0T16T_r_BIntT0T16T(mallocated,(godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[0]))))->content), (godot::Object::cast_to<RLCBIntT0T16T>(*((godot::Ref<RLCBIntT0T16T>)(*(args[1]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_sub(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_clear(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 1 && godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0]))))) {
rl_m_clear__BoundedVectorTBIntT1T7TT4T((godot::Object::cast_to<RLCBoundedVectorTBIntT1T7TT4T>(*((godot::Ref<RLCBoundedVectorTBIntT1T7TT4T>)(*(args[0]))))->content));
return godot::Variant();
}
if (arg_count == 1 && godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0]))))) {
rl_m_clear__VectorTBIntT1T7TT((godot::Object::cast_to<RLCVectorTBIntT1T7TT>(*((godot::Ref<RLCVectorTBIntT1T7TT>)(*(args[0]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_clear(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_enumeration_error(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 3 && (*(args[0])).get_type() == godot::Variant::FLOAT && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1])))) && godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[2]))))) {
auto arg0= ((double)(*(args[0])));
 rl_enumeration_error__double_String_VectorTStringT(&arg0, (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content), (godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[2]))))->content));
return godot::Variant();
}
if (arg_count == 3 && (*(args[0])).get_type() == godot::Variant::INT && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1])))) && godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[2]))))) {
auto arg0= ((int64_t)(*(args[0])));
 rl_enumeration_error__int64_t_String_VectorTStringT(&arg0, (godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[1]))))->content), (godot::Object::cast_to<RLCVectorTStringT>(*((godot::Ref<RLCVectorTStringT>)(*(args[2]))))->content));
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_enumeration_error(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_drop_back(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 rl_m_drop_back__VectorTint8_tT_int64_t((godot::Object::cast_to<RLCVectorTint8_tT>(*((godot::Ref<RLCVectorTint8_tT>)(*(args[0]))))->content), &arg1);
return godot::Variant();
}
if (arg_count == 2 && godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0])))) && (*(args[1])).get_type() == godot::Variant::INT) {
auto arg1= ((int64_t)(*(args[1])));
 rl_m_drop_back__String_int64_t((godot::Object::cast_to<RLCString>(*((godot::Ref<RLCString>)(*(args[0]))))->content), &arg1);
return godot::Variant();
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_drop_back(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}
godot::Variant RLCLib::RLC_is_all_in_home(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
if (arg_count == 2 && godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0])))) && godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))) {
bool to_return;
rl_m_is_all_in_home__Board_Player_r_bool(&to_return,(godot::Object::cast_to<RLCBoard>(*((godot::Ref<RLCBoard>)(*(args[0]))))->content), (godot::Object::cast_to<RLCPlayer>(*((godot::Ref<RLCPlayer>)(*(args[1]))))->content));
return to_return;
}
return godot::Variant();}
godot::Variant RLCLib::RLC_can_is_all_in_home(const godot::Variant **args, GDExtensionInt arg_count, GDExtensionCallError &error){
return godot::Variant();}

/** GDNative Terminate **/
static void 
godot_gdnative_terminate() {
}

static void godot_nativescript_init() {
godot::ClassDB::register_class<RLCVectorTint8_tT>();
godot::ClassDB::register_class<RLCString>();
godot::ClassDB::register_class<RLCBIntT1T7T>();
godot::ClassDB::register_class<RLCBIntT0T16T>();
godot::ClassDB::register_class<RLCVectorTdoubleT>();
godot::ClassDB::register_class<RLCVectorTboolT>();
godot::ClassDB::register_class<RLCVectorTStringT>();
godot::ClassDB::register_class<RLCVectorTBIntT1T7TT>();
godot::ClassDB::register_class<RLCBoundedVectorTBIntT1T7TT4T>();
godot::ClassDB::register_class<RLCRNG>();
godot::ClassDB::register_class<RLCPlayer>();
godot::ClassDB::register_class<RLCPoint>();
godot::ClassDB::register_class<RLCMove>();
godot::ClassDB::register_class<RLCBoard>();
godot::ClassDB::register_class<RLCGameInitializeSeed>();
godot::ClassDB::register_class<RLCGameSelectMove>();
godot::ClassDB::register_class<RLCConfigureRNG>();
godot::ClassDB::register_class<RLCGame>();
godot::ClassDB::register_class<RLCAnyGameAction>();

  godot::ClassDB::register_class<RLCLib>();
}
#endif
