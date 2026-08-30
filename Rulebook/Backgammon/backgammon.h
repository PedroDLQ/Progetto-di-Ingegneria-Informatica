#ifdef __cplusplus
extern "C"{
#endif
#ifndef RLC_HEADER
#ifdef RLC_C_HEADER
#undef RLC_C_HEADER
#define RLC_HEADER

#include "cstdint"
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
typedef union VectorTStringT VectorTStringT;
typedef union VectorTboolT VectorTboolT;
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
int8_t pop();
VectorTint8_tT& operator=(union VectorTint8_tT(& other));
int8_t* back();
int64_t size();
VectorTint8_tT();
void drop_back(int64_t(& quantity));
~VectorTint8_tT();
void append(int8_t(& value));
int8_t* get(int64_t(& index));
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
int8_t* back();
bool not_equal(char*(& other));
int8_t* get(int64_t(& index));
bool not_equal(union String(& other));
~String();
int64_t count(int8_t(& b));
bool substring_matches(char*(& lit), int64_t(& pos));
bool operator==(union String(& other));
bool operator==(char*(& other));
int64_t size();
String& operator=(union String(& other));
void append(int8_t(& b));
void append(union String(& str));
void append(char*(& str));
void drop_back(int64_t(& quantity));
union String to_indented_lines();
union String add(union String(& other));
void reverse();
String();
void append_quoted(union String(& str));
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
BIntT1T7T();
BIntT1T7T& operator=(union BIntT1T7T(& other));
bool greater(union BIntT1T7T(& other));
void operator=(int64_t(& other));
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
void operator=(int64_t(& other));
union BIntT0T16T sub(union BIntT0T16T(& other));
BIntT0T16T();
union BIntT0T16T add(union BIntT0T16T(& other));
BIntT0T16T& operator=(union BIntT0T16T(& other));
union BIntT0T16T sub(int64_t(& val));
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
void append(double(& value));
VectorTdoubleT& operator=(union VectorTdoubleT(& other));
void resize(int64_t(& new_size));
double* get(int64_t(& index));
VectorTdoubleT();
~VectorTdoubleT();
double pop();
int64_t size();
VectorTdoubleT(const VectorTdoubleT& other) : VectorTdoubleT() {*this = const_cast<VectorTdoubleT&>(other);}
VectorTdoubleT(VectorTdoubleT&& other) = delete;
VectorTdoubleT& operator=(VectorTdoubleT&& other) = delete;
#endif
} VectorTdoubleT;
typedef union VectorTStringT {
struct _ContentVectorTStringT {
    union String* _data;
    int64_t _size;
    int64_t _capacity;
  } content;
#ifdef __cplusplus
union String* get(int64_t(& index));
~VectorTStringT();
int64_t size();
void append(union String(& value));
union String pop();
VectorTStringT& operator=(union VectorTStringT(& other));
VectorTStringT();
VectorTStringT(const VectorTStringT& other) : VectorTStringT() {*this = const_cast<VectorTStringT&>(other);}
VectorTStringT(VectorTStringT&& other) = delete;
VectorTStringT& operator=(VectorTStringT&& other) = delete;
#endif
} VectorTStringT;
typedef union VectorTboolT {
struct _ContentVectorTboolT {
    bool* _data;
    int64_t _size;
    int64_t _capacity;
  } content;
#ifdef __cplusplus
bool* get(int64_t(& index));
VectorTboolT& operator=(union VectorTboolT(& other));
void append(bool(& value));
VectorTboolT();
~VectorTboolT();
VectorTboolT(const VectorTboolT& other) : VectorTboolT() {*this = const_cast<VectorTboolT&>(other);}
VectorTboolT(VectorTboolT&& other) = delete;
VectorTboolT& operator=(VectorTboolT&& other) = delete;
#endif
} VectorTboolT;
typedef union VectorTBIntT1T7TT {
struct _ContentVectorTBIntT1T7TT {
    union BIntT1T7T* _data;
    int64_t _size;
    int64_t _capacity;
  } content;
#ifdef __cplusplus
~VectorTBIntT1T7TT();
int64_t size();
void clear();
void append(union BIntT1T7T(& value));
union BIntT1T7T pop();
union BIntT1T7T* get(int64_t(& index));
bool empty();
VectorTBIntT1T7TT& operator=(union VectorTBIntT1T7TT(& other));
VectorTBIntT1T7TT();
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
~BoundedVectorTBIntT1T7TT4T();
BoundedVectorTBIntT1T7TT4T& operator=(union BoundedVectorTBIntT1T7TT4T(& other));
BoundedVectorTBIntT1T7TT4T();
void append(union BIntT1T7T(& value));
union BIntT1T7T pop();
union BIntT1T7T* get(int64_t(& index));
int64_t size();
void clear();
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
RNG& operator=(union RNG(& other));
int64_t randint(int64_t(& min), int64_t(& max));
int64_t next();
void set_seed(int64_t(& new_seed));
RNG();
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
Player& operator=(union Player(& other));
bool is_white();
bool is_empty();
bool is_black();
bool is_equal(union Player(& other));
Player();
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
Point();
Point& operator=(union Point(& other));
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
void to_internal();
Move();
Move(union Player(& p), int64_t(& from_pt), int64_t(& to_pt));
Move& operator=(union Move(& other));
bool human_range_ok(union BIntT1T7T(& roll));
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
bool can_play_sequence(union BIntT1T7T(& d1), union BIntT1T7T(& d2), union Player(& p));
int64_t off_count(union Player(& p));
bool is_game_over();
int64_t checkers_home_and_off(union Player(& p));
bool is_all_in_home(union Player(& p));
union String to_string();
void apply_move_internal(union Move(& move));
bool is_valid_move(union Move(& move), union BIntT1T7T(& roll));
~Board();
union Board clone();
bool is_blocked(int64_t(& idx), union Player(& mover));
union String to_str(int64_t(& n));
double get_score_multiplier(union Player(& winner));
void apply_move(union Move(& move));
Board();
bool is_valid_move_internal(union Move(& move), union BIntT1T7T(& roll));
bool can_bearoff_from(int64_t(& from_idx), union BIntT1T7T(& roll), union Player(& p));
void next_player();
int64_t bar_count(union Player(& p));
bool has_any_legal_move(union Player(& p), union BIntT1T7T(& roll));
union Player get_winner();
bool has_on_bar(union Player(& p));
Board& operator=(union Board(& other));
int8_t point_char(int64_t(& idx));
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
GameInitializeSeed();
GameInitializeSeed& operator=(union GameInitializeSeed(& other));
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
bool is_done();
void set_rng_bit(bool(& bit));
bool can_set_rng_bit(bool(& bit));
ConfigureRNG& operator=(union ConfigureRNG(& other));
ConfigureRNG();
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
Game();
bool is_done();
void initialize_seed(int64_t(& external_seed));
bool can_initialize_seed(int64_t(& external_seed));
void select_move(int64_t(& die_idx), union Move(& move));
bool can_select_move(int64_t(& die_idx), union Move(& move));
Game& operator=(union Game(& other));
~Game();
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
AnyGameAction();
void operator=(union GameSelectMove(& other));
AnyGameAction& operator=(struct AnyGameAction(& other));
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
inline Game& Game::operator=(union Game(& other)) {
 rl_m_assign__Game_Game(this, &other);
return *this;
}
inline Game::~Game() {
 rl_m_drop__Game(this);
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
inline ConfigureRNG::ConfigureRNG() {
 rl_m_init__ConfigureRNG(this);
}
inline RNG& RNG::operator=(union RNG(& other)) {
 rl_m_assign__RNG_RNG(this, &other);
return *this;
}
inline int64_t RNG::randint(int64_t(& min), int64_t(& max)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_randint__RNG_int64_t_int64_t_r_int64_t(&_rl__result.payload, this, &min, &max);
 return _rl__result.payload;
}
inline int64_t RNG::next() {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_next__RNG_r_int64_t(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline void RNG::set_seed(int64_t(& new_seed)) {
 rl_m_set_seed__RNG_int64_t(this, &new_seed);
}
inline RNG::RNG() {
 rl_m_init__RNG(this);
}
inline void Move::to_internal() {
 rl_m_to_internal__Move(this);
}
inline Move::Move() {
 rl_m_init__Move(this);
}
inline Move::Move(union Player(& p), int64_t(& from_pt), int64_t(& to_pt)) {
 rl_m_init__Move_Player_int64_t_int64_t(this, &p, &from_pt, &to_pt);
}
inline Move& Move::operator=(union Move(& other)) {
 rl_m_assign__Move_Move(this, &other);
return *this;
}
inline bool Move::human_range_ok(union BIntT1T7T(& roll)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_human_range_ok__Move_BIntT1T7T_r_bool(&_rl__result.payload, this, &roll);
 return _rl__result.payload;
}
inline int8_t* String::back() {
 union ToReturn { int8_t* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_back__String_r_int8_tRef(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline bool String::not_equal(char*(& other)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_not_equal__String_strlit_r_bool(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline int8_t* String::get(int64_t(& index)) {
 union ToReturn { int8_t* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_get__String_int64_t_r_int8_tRef(&_rl__result.payload, this, &index);
 return _rl__result.payload;
}
inline bool String::not_equal(union String(& other)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_not_equal__String_String_r_bool(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline String::~String() {
 rl_m_drop__String(this);
}
inline int64_t String::count(int8_t(& b)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_count__String_int8_t_r_int64_t(&_rl__result.payload, this, &b);
 return _rl__result.payload;
}
inline bool String::substring_matches(char*(& lit), int64_t(& pos)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_substring_matches__String_strlit_int64_t_r_bool(&_rl__result.payload, this, &lit, &pos);
 return _rl__result.payload;
}
inline bool String::operator==(union String(& other)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_equal__String_String_r_bool(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline bool String::operator==(char*(& other)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_equal__String_strlit_r_bool(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline int64_t String::size() {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_size__String_r_int64_t(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline String& String::operator=(union String(& other)) {
 rl_m_assign__String_String(this, &other);
return *this;
}
inline void String::append(int8_t(& b)) {
 rl_m_append__String_int8_t(this, &b);
}
inline void String::append(union String(& str)) {
 rl_m_append__String_String(this, &str);
}
inline void String::append(char*(& str)) {
 rl_m_append__String_strlit(this, &str);
}
inline void String::drop_back(int64_t(& quantity)) {
 rl_m_drop_back__String_int64_t(this, &quantity);
}
inline union String String::to_indented_lines() {
 union ToReturn { union String payload; ToReturn() {}; ~ToReturn() { payload.~String(); } }	_rl__result;
 rl_m_to_indented_lines__String_r_String(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline union String String::add(union String(& other)) {
 union ToReturn { union String payload; ToReturn() {}; ~ToReturn() { payload.~String(); } }	_rl__result;
 rl_m_add__String_String_r_String(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline void String::reverse() {
 rl_m_reverse__String(this);
}
inline String::String() {
 rl_m_init__String(this);
}
inline void String::append_quoted(union String(& str)) {
 rl_m_append_quoted__String_String(this, &str);
}
inline Point::Point() {
 rl_m_init__Point(this);
}
inline Point& Point::operator=(union Point(& other)) {
 rl_m_assign__Point_Point(this, &other);
return *this;
}
inline bool Board::can_play_sequence(union BIntT1T7T(& d1), union BIntT1T7T(& d2), union Player(& p)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_can_play_sequence__Board_BIntT1T7T_BIntT1T7T_Player_r_bool(&_rl__result.payload, this, &d1, &d2, &p);
 return _rl__result.payload;
}
inline int64_t Board::off_count(union Player(& p)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_off_count__Board_Player_r_int64_t(&_rl__result.payload, this, &p);
 return _rl__result.payload;
}
inline bool Board::is_game_over() {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_game_over__Board_r_bool(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline int64_t Board::checkers_home_and_off(union Player(& p)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_checkers_home_and_off__Board_Player_r_int64_t(&_rl__result.payload, this, &p);
 return _rl__result.payload;
}
inline bool Board::is_all_in_home(union Player(& p)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_all_in_home__Board_Player_r_bool(&_rl__result.payload, this, &p);
 return _rl__result.payload;
}
inline union String Board::to_string() {
 union ToReturn { union String payload; ToReturn() {}; ~ToReturn() { payload.~String(); } }	_rl__result;
 rl_m_to_string__Board_r_String(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline void Board::apply_move_internal(union Move(& move)) {
 rl_m_apply_move_internal__Board_Move(this, &move);
}
inline bool Board::is_valid_move(union Move(& move), union BIntT1T7T(& roll)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_valid_move__Board_Move_BIntT1T7T_r_bool(&_rl__result.payload, this, &move, &roll);
 return _rl__result.payload;
}
inline Board::~Board() {
 rl_m_drop__Board(this);
}
inline union Board Board::clone() {
 union ToReturn { union Board payload; ToReturn() {}; ~ToReturn() { payload.~Board(); } }	_rl__result;
 rl_m_clone__Board_r_Board(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline bool Board::is_blocked(int64_t(& idx), union Player(& mover)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_blocked__Board_int64_t_Player_r_bool(&_rl__result.payload, this, &idx, &mover);
 return _rl__result.payload;
}
inline union String Board::to_str(int64_t(& n)) {
 union ToReturn { union String payload; ToReturn() {}; ~ToReturn() { payload.~String(); } }	_rl__result;
 rl_m_to_str__Board_int64_t_r_String(&_rl__result.payload, this, &n);
 return _rl__result.payload;
}
inline double Board::get_score_multiplier(union Player(& winner)) {
 union ToReturn { double payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_get_score_multiplier__Board_Player_r_double(&_rl__result.payload, this, &winner);
 return _rl__result.payload;
}
inline void Board::apply_move(union Move(& move)) {
 rl_m_apply_move__Board_Move(this, &move);
}
inline Board::Board() {
 rl_m_init__Board(this);
}
inline bool Board::is_valid_move_internal(union Move(& move), union BIntT1T7T(& roll)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_valid_move_internal__Board_Move_BIntT1T7T_r_bool(&_rl__result.payload, this, &move, &roll);
 return _rl__result.payload;
}
inline bool Board::can_bearoff_from(int64_t(& from_idx), union BIntT1T7T(& roll), union Player(& p)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_can_bearoff_from__Board_int64_t_BIntT1T7T_Player_r_bool(&_rl__result.payload, this, &from_idx, &roll, &p);
 return _rl__result.payload;
}
inline void Board::next_player() {
 rl_m_next_player__Board(this);
}
inline int64_t Board::bar_count(union Player(& p)) {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_bar_count__Board_Player_r_int64_t(&_rl__result.payload, this, &p);
 return _rl__result.payload;
}
inline bool Board::has_any_legal_move(union Player(& p), union BIntT1T7T(& roll)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_has_any_legal_move__Board_Player_BIntT1T7T_r_bool(&_rl__result.payload, this, &p, &roll);
 return _rl__result.payload;
}
inline union Player Board::get_winner() {
 union ToReturn { union Player payload; ToReturn() {}; ~ToReturn() { payload.~Player(); } }	_rl__result;
 rl_m_get_winner__Board_r_Player(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline bool Board::has_on_bar(union Player(& p)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_has_on_bar__Board_Player_r_bool(&_rl__result.payload, this, &p);
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
inline bool BIntT1T7T::operator==(union BIntT1T7T(& other)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_equal__BIntT1T7T_BIntT1T7T_r_bool(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline BIntT1T7T::BIntT1T7T() {
 rl_m_init__BIntT1T7T(this);
}
inline BIntT1T7T& BIntT1T7T::operator=(union BIntT1T7T(& other)) {
 rl_m_assign__BIntT1T7T_BIntT1T7T(this, &other);
return *this;
}
inline bool BIntT1T7T::greater(union BIntT1T7T(& other)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_greater__BIntT1T7T_BIntT1T7T_r_bool(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline void BIntT1T7T::operator=(int64_t(& other)) {
 rl_m_assign__BIntT1T7T_int64_t(this, &other);
}
inline union BIntT0T16T BIntT0T16T::add(int64_t(& val)) {
 union ToReturn { union BIntT0T16T payload; ToReturn() {}; ~ToReturn() { payload.~BIntT0T16T(); } }	_rl__result;
 rl_m_add__BIntT0T16T_int64_t_r_BIntT0T16T(&_rl__result.payload, this, &val);
 return _rl__result.payload;
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
inline BIntT0T16T& BIntT0T16T::operator=(union BIntT0T16T(& other)) {
 rl_m_assign__BIntT0T16T_BIntT0T16T(this, &other);
return *this;
}
inline union BIntT0T16T BIntT0T16T::sub(int64_t(& val)) {
 union ToReturn { union BIntT0T16T payload; ToReturn() {}; ~ToReturn() { payload.~BIntT0T16T(); } }	_rl__result;
 rl_m_sub__BIntT0T16T_int64_t_r_BIntT0T16T(&_rl__result.payload, this, &val);
 return _rl__result.payload;
}
inline int8_t VectorTint8_tT::pop() {
 union ToReturn { int8_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_pop__VectorTint8_tT_r_int8_t(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline VectorTint8_tT& VectorTint8_tT::operator=(union VectorTint8_tT(& other)) {
 rl_m_assign__VectorTint8_tT_VectorTint8_tT(this, &other);
return *this;
}
inline int8_t* VectorTint8_tT::back() {
 union ToReturn { int8_t* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_back__VectorTint8_tT_r_int8_tRef(&_rl__result.payload, this);
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
inline VectorTint8_tT::~VectorTint8_tT() {
 rl_m_drop__VectorTint8_tT(this);
}
inline void VectorTint8_tT::append(int8_t(& value)) {
 rl_m_append__VectorTint8_tT_int8_t(this, &value);
}
inline int8_t* VectorTint8_tT::get(int64_t(& index)) {
 union ToReturn { int8_t* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_get__VectorTint8_tT_int64_t_r_int8_tRef(&_rl__result.payload, this, &index);
 return _rl__result.payload;
}
inline VectorTBIntT1T7TT::~VectorTBIntT1T7TT() {
 rl_m_drop__VectorTBIntT1T7TT(this);
}
inline int64_t VectorTBIntT1T7TT::size() {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_size__VectorTBIntT1T7TT_r_int64_t(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline void VectorTBIntT1T7TT::clear() {
 rl_m_clear__VectorTBIntT1T7TT(this);
}
inline void VectorTBIntT1T7TT::append(union BIntT1T7T(& value)) {
 rl_m_append__VectorTBIntT1T7TT_BIntT1T7T(this, &value);
}
inline union BIntT1T7T VectorTBIntT1T7TT::pop() {
 union ToReturn { union BIntT1T7T payload; ToReturn() {}; ~ToReturn() { payload.~BIntT1T7T(); } }	_rl__result;
 rl_m_pop__VectorTBIntT1T7TT_r_BIntT1T7T(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline union BIntT1T7T* VectorTBIntT1T7TT::get(int64_t(& index)) {
 union ToReturn { union BIntT1T7T* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_get__VectorTBIntT1T7TT_int64_t_r_BIntT1T7TRef(&_rl__result.payload, this, &index);
 return _rl__result.payload;
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
inline VectorTBIntT1T7TT::VectorTBIntT1T7TT() {
 rl_m_init__VectorTBIntT1T7TT(this);
}
inline GameInitializeSeed::GameInitializeSeed() {
 rl_m_init__GameInitializeSeed(this);
}
inline GameInitializeSeed& GameInitializeSeed::operator=(union GameInitializeSeed(& other)) {
 rl_m_assign__GameInitializeSeed_GameInitializeSeed(this, &other);
return *this;
}
inline GameSelectMove& GameSelectMove::operator=(union GameSelectMove(& other)) {
 rl_m_assign__GameSelectMove_GameSelectMove(this, &other);
return *this;
}
inline GameSelectMove::GameSelectMove() {
 rl_m_init__GameSelectMove(this);
}
inline AnyGameAction::AnyGameAction() {
 rl_m_init__AnyGameAction(this);
}
inline void AnyGameAction::operator=(union GameSelectMove(& other)) {
 rl_m_assign__AnyGameAction_GameSelectMove(this, &other);
}
inline AnyGameAction& AnyGameAction::operator=(struct AnyGameAction(& other)) {
 rl_m_assign__AnyGameAction_AnyGameAction(this, &other);
return *this;
}
inline void AnyGameAction::operator=(union GameInitializeSeed(& other)) {
 rl_m_assign__AnyGameAction_GameInitializeSeed(this, &other);
}
inline union Player Player::opponent() {
 union ToReturn { union Player payload; ToReturn() {}; ~ToReturn() { payload.~Player(); } }	_rl__result;
 rl_m_opponent__Player_r_Player(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline Player& Player::operator=(union Player(& other)) {
 rl_m_assign__Player_Player(this, &other);
return *this;
}
inline bool Player::is_white() {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_white__Player_r_bool(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline bool Player::is_empty() {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_empty__Player_r_bool(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline bool Player::is_black() {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_black__Player_r_bool(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline bool Player::is_equal(union Player(& other)) {
 union ToReturn { bool payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_is_equal__Player_Player_r_bool(&_rl__result.payload, this, &other);
 return _rl__result.payload;
}
inline Player::Player() {
 rl_m_init__Player(this);
}
inline BoundedVectorTBIntT1T7TT4T::~BoundedVectorTBIntT1T7TT4T() {
 rl_m_drop__BoundedVectorTBIntT1T7TT4T(this);
}
inline BoundedVectorTBIntT1T7TT4T& BoundedVectorTBIntT1T7TT4T::operator=(union BoundedVectorTBIntT1T7TT4T(& other)) {
 rl_m_assign__BoundedVectorTBIntT1T7TT4T_BoundedVectorTBIntT1T7TT4T(this, &other);
return *this;
}
inline BoundedVectorTBIntT1T7TT4T::BoundedVectorTBIntT1T7TT4T() {
 rl_m_init__BoundedVectorTBIntT1T7TT4T(this);
}
inline void BoundedVectorTBIntT1T7TT4T::append(union BIntT1T7T(& value)) {
 rl_m_append__BoundedVectorTBIntT1T7TT4T_BIntT1T7T(this, &value);
}
inline union BIntT1T7T BoundedVectorTBIntT1T7TT4T::pop() {
 union ToReturn { union BIntT1T7T payload; ToReturn() {}; ~ToReturn() { payload.~BIntT1T7T(); } }	_rl__result;
 rl_m_pop__BoundedVectorTBIntT1T7TT4T_r_BIntT1T7T(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline union BIntT1T7T* BoundedVectorTBIntT1T7TT4T::get(int64_t(& index)) {
 union ToReturn { union BIntT1T7T* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_get__BoundedVectorTBIntT1T7TT4T_int64_t_r_BIntT1T7TRef(&_rl__result.payload, this, &index);
 return _rl__result.payload;
}
inline int64_t BoundedVectorTBIntT1T7TT4T::size() {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_size__BoundedVectorTBIntT1T7TT4T_r_int64_t(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline void BoundedVectorTBIntT1T7TT4T::clear() {
 rl_m_clear__BoundedVectorTBIntT1T7TT4T(this);
}
inline union String* VectorTStringT::get(int64_t(& index)) {
 union ToReturn { union String* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_get__VectorTStringT_int64_t_r_StringRef(&_rl__result.payload, this, &index);
 return _rl__result.payload;
}
inline VectorTStringT::~VectorTStringT() {
 rl_m_drop__VectorTStringT(this);
}
inline int64_t VectorTStringT::size() {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_size__VectorTStringT_r_int64_t(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline void VectorTStringT::append(union String(& value)) {
 rl_m_append__VectorTStringT_String(this, &value);
}
inline union String VectorTStringT::pop() {
 union ToReturn { union String payload; ToReturn() {}; ~ToReturn() { payload.~String(); } }	_rl__result;
 rl_m_pop__VectorTStringT_r_String(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline VectorTStringT& VectorTStringT::operator=(union VectorTStringT(& other)) {
 rl_m_assign__VectorTStringT_VectorTStringT(this, &other);
return *this;
}
inline VectorTStringT::VectorTStringT() {
 rl_m_init__VectorTStringT(this);
}
inline void VectorTdoubleT::append(double(& value)) {
 rl_m_append__VectorTdoubleT_double(this, &value);
}
inline VectorTdoubleT& VectorTdoubleT::operator=(union VectorTdoubleT(& other)) {
 rl_m_assign__VectorTdoubleT_VectorTdoubleT(this, &other);
return *this;
}
inline void VectorTdoubleT::resize(int64_t(& new_size)) {
 rl_m_resize__VectorTdoubleT_int64_t(this, &new_size);
}
inline double* VectorTdoubleT::get(int64_t(& index)) {
 union ToReturn { double* payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_get__VectorTdoubleT_int64_t_r_doubleRef(&_rl__result.payload, this, &index);
 return _rl__result.payload;
}
inline VectorTdoubleT::VectorTdoubleT() {
 rl_m_init__VectorTdoubleT(this);
}
inline VectorTdoubleT::~VectorTdoubleT() {
 rl_m_drop__VectorTdoubleT(this);
}
inline double VectorTdoubleT::pop() {
 union ToReturn { double payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_pop__VectorTdoubleT_r_double(&_rl__result.payload, this);
 return _rl__result.payload;
}
inline int64_t VectorTdoubleT::size() {
 union ToReturn { int64_t payload; ToReturn() {}; ~ToReturn() { } }	_rl__result;
 rl_m_size__VectorTdoubleT_r_int64_t(&_rl__result.payload, this);
 return _rl__result.payload;
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
inline void VectorTboolT::append(bool(& value)) {
 rl_m_append__VectorTboolT_bool(this, &value);
}
inline VectorTboolT::VectorTboolT() {
 rl_m_init__VectorTboolT(this);
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

