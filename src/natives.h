#ifndef __BIGBASEC_NATIVES_H
#define __BIGBASEC_NATIVES_H

#include "invoker.h"

inline float AI_WAYPOINT_RECORDING_GET_SPEED_AT_POINT(const char* name, int point) /* 0x005622AEBC33ACA9 */
{
	uint64_t val;

	native_init(0x005622AEBC33ACA9);

	*(const char**)(&val) = name;
	native_push(val);
	*(int*)(&val) = point;
	native_push(val);

	return *(float*)(native_call());
}

inline int AI_GET_SEQUENCE_PROGRESS(Ped ped) /* 0x00A9010CFE1E3533 */
{
	uint64_t val;

	native_init(0x00A9010CFE1E3533);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline void AI_SET_SCENARIO_GROUP_ENABLED(const char* scenarioGroup, BOOL p1) /* 0x02C8E5B49848664E */
{
	uint64_t val;

	native_init(0x02C8E5B49848664E);

	*(const char**)(&val) = scenarioGroup;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AI_SET_ANIM_RATE(Any p0, float p1, Any p2, BOOL p3) /* 0x032D49C5E359C847 */
{
	uint64_t val;

	native_init(0x032D49C5E359C847);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void AI_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(Any p0, Any p1, float p2, float p3, float p4, float p5, BOOL p6, float p7, float p8, BOOL p9, BOOL p10, Any p11) /* 0x04701832B739DCE5 */
{
	uint64_t val;

	native_init(0x04701832B739DCE5);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(BOOL*)(&val) = p9;
	native_push(val);
	*(BOOL*)(&val) = p10;
	native_push(val);
	*(Any*)(&val) = p11;
	native_push(val);

	native_call();
}

inline void AI_WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Any p0, float p1, float p2, float p3, BOOL p4, Any p5) /* 0x057A25CFCC9DB671 */
{
	uint64_t val;

	native_init(0x057A25CFCC9DB671);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);

	native_call();
}

inline void AI_SET_PARACHUTE_TASK_THRUST(Ped ped, float thrust) /* 0x0729BAC1B8C64317 */
{
	uint64_t val;

	native_init(0x0729BAC1B8C64317);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = thrust;
	native_push(val);

	native_call();
}

inline void AI_TASK_FOLLOW_WAYPOINT_RECORDING(Any p0, Any p1, Any p2, Any p3, Any p4) /* 0x0759591819534F7B */
{
	uint64_t val;

	native_init(0x0759591819534F7B);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void AI_TASK_SHOOT_AT_ENTITY(Entity entity, Entity target, int duration, Hash firingPattern) /* 0x08DA95E8298AE772 */
{
	uint64_t val;

	native_init(0x08DA95E8298AE772);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(Entity*)(&val) = target;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(Hash*)(&val) = firingPattern;
	native_push(val);

	native_call();
}

inline void AI_TASK_RAPPEL_FROM_HELI(Ped ped, int unused) /* 0x09693B0312F91649 */
{
	uint64_t val;

	native_init(0x09693B0312F91649);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = unused;
	native_push(val);

	native_call();
}

inline BOOL AI_DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(float p0, float p1, float p2, Any* p3, float p4, BOOL p5) /* 0x0A9D0C2A3BBC86C1 */
{
	uint64_t val;

	native_init(0x0A9D0C2A3BBC86C1);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_JUMP(Ped ped, BOOL unused) /* 0x0AE4086104E067B1 */
{
	uint64_t val;

	native_init(0x0AE4086104E067B1);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = unused;
	native_push(val);

	native_call();
}

inline void AI_RESET_SCENARIO_TYPES_ENABLED() /* 0x0D40EE2A7F2B2D6D */
{
	native_init(0x0D40EE2A7F2B2D6D);
	native_call();
}

inline void AI_WAYPOINT_PLAYBACK_PAUSE(Any p0, BOOL p1, BOOL p2) /* 0x0F342546AA06FED5 */
{
	uint64_t val;

	native_init(0x0F342546AA06FED5);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_PARK(Ped ped, Vehicle vehicle, float x, float y, float z, float heading, int mode, float radius, BOOL keepEngineOn) /* 0x0F3E34E968EA374E */
{
	uint64_t val;

	native_init(0x0F3E34E968EA374E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);
	*(int*)(&val) = mode;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(BOOL*)(&val) = keepEngineOn;
	native_push(val);

	native_call();
}

inline void AI_TASK_CLEAR_LOOK_AT(Ped ped) /* 0x0F804F1DB19B9689 */
{
	uint64_t val;

	native_init(0x0F804F1DB19B9689);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_ESCORT(Ped ped, Vehicle vehicle, Vehicle targetVehicle, int mode, float speed, int drivingStyle, float minDistance, int p7, float noRoadsDistance) /* 0x0FA6E4B75F302400 */
{
	uint64_t val;

	native_init(0x0FA6E4B75F302400);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(Vehicle*)(&val) = targetVehicle;
	native_push(val);
	*(int*)(&val) = mode;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(int*)(&val) = drivingStyle;
	native_push(val);
	*(float*)(&val) = minDistance;
	native_push(val);
	*(int*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = noRoadsDistance;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_SHOOT_AT_PED(Ped ped, Ped target, float flag) /* 0x10AB107B887214D8 */
{
	uint64_t val;

	native_init(0x10AB107B887214D8);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = target;
	native_push(val);
	*(float*)(&val) = flag;
	native_push(val);

	native_call();
}

inline void AI_TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Ped ped, float x, float y, float z, float aimAtX, float aimAtY, float aimAtZ, float moveSpeed, BOOL p8, float p9, float p10, BOOL p11, Any flags, BOOL p13, Hash firingPattern) /* 0x11315AB3385B8AC0 */
{
	uint64_t val;

	native_init(0x11315AB3385B8AC0);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = aimAtX;
	native_push(val);
	*(float*)(&val) = aimAtY;
	native_push(val);
	*(float*)(&val) = aimAtZ;
	native_push(val);
	*(float*)(&val) = moveSpeed;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);
	*(float*)(&val) = p10;
	native_push(val);
	*(BOOL*)(&val) = p11;
	native_push(val);
	*(Any*)(&val) = flags;
	native_push(val);
	*(BOOL*)(&val) = p13;
	native_push(val);
	*(Hash*)(&val) = firingPattern;
	native_push(val);

	native_call();
}

inline void AI_VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1) /* 0x121F0593E0A431D7 */
{
	uint64_t val;

	native_init(0x121F0593E0A431D7);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AI_TASK_SCRIPTED_ANIMATION(Ped ped, Any* p1, Any* p2, Any* p3, float p4, float p5) /* 0x126EF75F1E17ABE5 */
{
	uint64_t val;

	native_init(0x126EF75F1E17ABE5);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);

	native_call();
}

inline void AI_ASSISTED_MOVEMENT_OVERRIDE_LOAD_DISTANCE_THIS_FRAME(float dist) /* 0x13945951E16EF912 */
{
	uint64_t val;

	native_init(0x13945951E16EF912);

	*(float*)(&val) = dist;
	native_push(val);

	native_call();
}

inline void AI_TASK_START_SCENARIO_IN_PLACE(Ped ped, const char* scenarioName, int unkDelay, BOOL playEnterAnim) /* 0x142A02425FF02BD9 */
{
	uint64_t val;

	native_init(0x142A02425FF02BD9);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = scenarioName;
	native_push(val);
	*(int*)(&val) = unkDelay;
	native_push(val);
	*(BOOL*)(&val) = playEnterAnim;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int driveMode, float stopRange) /* 0x158BB33F920D360C */
{
	uint64_t val;

	native_init(0x158BB33F920D360C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(int*)(&val) = driveMode;
	native_push(val);
	*(float*)(&val) = stopRange;
	native_push(val);

	native_call();
}

inline void AI_TASK_BOAT_MISSION(Ped pedDriver, Vehicle boat, Any p2, Any p3, float x, float y, float z, Any p7, float maxSpeed, int drivingStyle, float p10, Any p11) /* 0x15C86013127CE63F */
{
	uint64_t val;

	native_init(0x15C86013127CE63F);

	*(Ped*)(&val) = pedDriver;
	native_push(val);
	*(Vehicle*)(&val) = boat;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(Any*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = maxSpeed;
	native_push(val);
	*(int*)(&val) = drivingStyle;
	native_push(val);
	*(float*)(&val) = p10;
	native_push(val);
	*(Any*)(&val) = p11;
	native_push(val);

	native_call();
}

inline void AI_TASK_FOLLOW_NAV_MESH_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float stoppingRange, BOOL persistFollowing, float unk) /* 0x15D3A79D4E44B913 */
{
	uint64_t val;

	native_init(0x15D3A79D4E44B913);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(int*)(&val) = timeout;
	native_push(val);
	*(float*)(&val) = stoppingRange;
	native_push(val);
	*(BOOL*)(&val) = persistFollowing;
	native_push(val);
	*(float*)(&val) = unk;
	native_push(val);

	native_call();
}

inline void AI_CLEAR_PED_SECONDARY_TASK(Ped ped) /* 0x176CECF6F920D707 */
{
	uint64_t val;

	native_init(0x176CECF6F920D707);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void AI_TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Ped ped, float x, float y, float z, float speed, int timeout, float unkFloat, int unkInt, float unkX, float unkY, float unkZ, float unk_40000f) /* 0x17F58B88D085DBAC */
{
	uint64_t val;

	native_init(0x17F58B88D085DBAC);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(int*)(&val) = timeout;
	native_push(val);
	*(float*)(&val) = unkFloat;
	native_push(val);
	*(int*)(&val) = unkInt;
	native_push(val);
	*(float*)(&val) = unkX;
	native_push(val);
	*(float*)(&val) = unkY;
	native_push(val);
	*(float*)(&val) = unkZ;
	native_push(val);
	*(float*)(&val) = unk_40000f;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_GOTO_NAVMESH(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int behaviorFlag, float stoppingRange) /* 0x195AEEB13CEFE2EE */
{
	uint64_t val;

	native_init(0x195AEEB13CEFE2EE);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(int*)(&val) = behaviorFlag;
	native_push(val);
	*(float*)(&val) = stoppingRange;
	native_push(val);

	native_call();
}

inline void AI_TASK_PUT_PED_DIRECTLY_INTO_MELEE(Ped ped, Ped target, float p2, float p3, float p4, float flag) /* 0x1C6CD14A876FFE39 */
{
	uint64_t val;

	native_init(0x1C6CD14A876FFE39);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = target;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = flag;
	native_push(val);

	native_call();
}

inline void AI_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(Ped ped, float x, float y, float z, float speed, Any p5, BOOL p6, int walkingStyle, float p8, Any p9, Any p10, Any p11) /* 0x1DD45F9ECFDB1BC9 */
{
	uint64_t val;

	native_init(0x1DD45F9ECFDB1BC9);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(int*)(&val) = walkingStyle;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(Any*)(&val) = p9;
	native_push(val);
	*(Any*)(&val) = p10;
	native_push(val);
	*(Any*)(&val) = p11;
	native_push(val);

	native_call();
}

inline void AI_TASK_TURN_PED_TO_FACE_COORD(Ped ped, float x, float y, float z, int duration) /* 0x1DDA930A0AC38571 */
{
	uint64_t val;

	native_init(0x1DDA930A0AC38571);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_HELI_PROTECT(Ped pilot, Vehicle vehicle, Entity entityToFollow, float targetSpeed, int p4, float radius, int altitude, int p7) /* 0x1E09C32048FEFD1C */
{
	uint64_t val;

	native_init(0x1E09C32048FEFD1C);

	*(Ped*)(&val) = pilot;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(Entity*)(&val) = entityToFollow;
	native_push(val);
	*(float*)(&val) = targetSpeed;
	native_push(val);
	*(int*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(int*)(&val) = altitude;
	native_push(val);
	*(int*)(&val) = p7;
	native_push(val);

	native_call();
}

inline void AI_TASK_EXTEND_ROUTE(float x, float y, float z) /* 0x1E7889778264843A */
{
	uint64_t val;

	native_init(0x1E7889778264843A);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void AI_SET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped, float p1) /* 0x1E982AC8716912C5 */
{
	uint64_t val;

	native_init(0x1E982AC8716912C5);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline float AI_GET_PHONE_GESTURE_ANIM_TOTAL_TIME(Ped ped) /* 0x1EE0F68A7C25DEC6 */
{
	uint64_t val;

	native_init(0x1EE0F68A7C25DEC6);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(float*)(native_call());
}

inline void AI_TASK_SWEEP_AIM_ENTITY(Ped ped, const char* animDict, const char* animName1, const char* animName2, const char* animName3, int duration, Entity entity, float p7, float p8) /* 0x2047C02158D6405A */
{
	uint64_t val;

	native_init(0x2047C02158D6405A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName1;
	native_push(val);
	*(const char**)(&val) = animName2;
	native_push(val);
	*(const char**)(&val) = animName3;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);

	native_call();
}

inline void AI_SET_ANIM_WEIGHT(Any p0, float p1, Any p2, Any p3, BOOL p4) /* 0x207F1A47C0342F48 */
{
	uint64_t val;

	native_init(0x207F1A47C0342F48);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void AI_WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Any p0, Any p1, BOOL p2) /* 0x20E330937C399D29 */
{
	uint64_t val;

	native_init(0x20E330937C399D29);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AI_TASK_SMART_FLEE_PED(Ped ped, Ped fleeTarget, float distance, Any fleeTime, BOOL p4, BOOL p5) /* 0x22B0D0E37CCB840D */
{
	uint64_t val;

	native_init(0x22B0D0E37CCB840D);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = fleeTarget;
	native_push(val);
	*(float*)(&val) = distance;
	native_push(val);
	*(Any*)(&val) = fleeTime;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline void AI_ADD_PATROL_ROUTE_LINK(Any p0, Any p1) /* 0x23083260DEC3A551 */
{
	uint64_t val;

	native_init(0x23083260DEC3A551);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AI_TASK_PLANE_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float angularDrag, float unk, float targetHeading, float maxZ, float minZ) /* 0x23703CD154E83B88 */
{
	uint64_t val;

	native_init(0x23703CD154E83B88);

	*(Ped*)(&val) = pilot;
	native_push(val);
	*(Vehicle*)(&val) = aircraft;
	native_push(val);
	*(Vehicle*)(&val) = targetVehicle;
	native_push(val);
	*(Ped*)(&val) = targetPed;
	native_push(val);
	*(float*)(&val) = destinationX;
	native_push(val);
	*(float*)(&val) = destinationY;
	native_push(val);
	*(float*)(&val) = destinationZ;
	native_push(val);
	*(int*)(&val) = missionFlag;
	native_push(val);
	*(float*)(&val) = angularDrag;
	native_push(val);
	*(float*)(&val) = unk;
	native_push(val);
	*(float*)(&val) = targetHeading;
	native_push(val);
	*(float*)(&val) = maxZ;
	native_push(val);
	*(float*)(&val) = minZ;
	native_push(val);

	native_call();
}

inline void AI_WAYPOINT_PLAYBACK_RESUME(Any p0, BOOL p1, Any p2, Any p3) /* 0x244F70C84C547D2D */
{
	uint64_t val;

	native_init(0x244F70C84C547D2D);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_MOVE_BLEND_RATIO_SPRINTING(Ped ped) /* 0x24A2AD74FA9814E2 */
{
	uint64_t val;

	native_init(0x24A2AD74FA9814E2);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int AI_GET_PED_WAYPOINT_PROGRESS(Ped ped) /* 0x2720AAA75001E094 */
{
	uint64_t val;

	native_init(0x2720AAA75001E094);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline void AI_TASK_USE_NEAREST_SCENARIO_TO_COORD(Ped ped, float x, float y, float z, float distance, int duration) /* 0x277F471BA9DB000B */
{
	uint64_t val;

	native_init(0x277F471BA9DB000B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = distance;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);

	native_call();
}

inline BOOL AI_PED_HAS_USE_SCENARIO_TASK(Ped ped) /* 0x295E3CCEC879CCD7 */
{
	uint64_t val;

	native_init(0x295E3CCEC879CCD7);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AI_IS_PED_GETTING_UP(Ped ped) /* 0x2A74E1D5F2F00EEC */
{
	uint64_t val;

	native_init(0x2A74E1D5F2F00EEC);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Ped ped, float radius, int duration, BOOL unk) /* 0x2BBA30B854534A0C */
{
	uint64_t val;

	native_init(0x2BBA30B854534A0C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(BOOL*)(&val) = unk;
	native_push(val);

	native_call();
}

inline void AI_TASK_PLANE_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) /* 0x2D2386F273FF7A25 */
{
	uint64_t val;

	native_init(0x2D2386F273FF7A25);

	*(Ped*)(&val) = pilot;
	native_push(val);
	*(Entity*)(&val) = entityToFollow;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void AI__TASK_MOVE_NETWORK(Ped ped, const char* task, float multiplier, BOOL p3, const char* animDict, int flags) /* 0x2D537BA194896636 */
{
	uint64_t val;

	native_init(0x2D537BA194896636);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = task;
	native_push(val);
	*(float*)(&val) = multiplier;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(int*)(&val) = flags;
	native_push(val);

	native_call();
}

inline void AI_TASK_DRIVE_BY(Ped driverPed, Ped targetPed, Vehicle targetVehicle, float targetX, float targetY, float targetZ, float distanceToShoot, int pedAccuracy, BOOL p8, Hash firingPattern) /* 0x2F8AF0E82773A171 */
{
	uint64_t val;

	native_init(0x2F8AF0E82773A171);

	*(Ped*)(&val) = driverPed;
	native_push(val);
	*(Ped*)(&val) = targetPed;
	native_push(val);
	*(Vehicle*)(&val) = targetVehicle;
	native_push(val);
	*(float*)(&val) = targetX;
	native_push(val);
	*(float*)(&val) = targetY;
	native_push(val);
	*(float*)(&val) = targetZ;
	native_push(val);
	*(float*)(&val) = distanceToShoot;
	native_push(val);
	*(int*)(&val) = pedAccuracy;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(Hash*)(&val) = firingPattern;
	native_push(val);

	native_call();
}

inline BOOL AI_WAYPOINT_RECORDING_GET_COORD(const char* name, int point, Vector3* coord) /* 0x2FB897405C90B361 */
{
	uint64_t val;

	native_init(0x2FB897405C90B361);

	*(const char**)(&val) = name;
	native_push(val);
	*(int*)(&val) = point;
	native_push(val);
	*(Vector3**)(&val) = coord;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Ped ped, Entity entity, float offsetX, float offsetY, float offsetZ, float movementSpeed, int timeout, float stoppingRange, BOOL persistFollowing) /* 0x304AE42E357B8C7E */
{
	uint64_t val;

	native_init(0x304AE42E357B8C7E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = offsetX;
	native_push(val);
	*(float*)(&val) = offsetY;
	native_push(val);
	*(float*)(&val) = offsetZ;
	native_push(val);
	*(float*)(&val) = movementSpeed;
	native_push(val);
	*(int*)(&val) = timeout;
	native_push(val);
	*(float*)(&val) = stoppingRange;
	native_push(val);
	*(BOOL*)(&val) = persistFollowing;
	native_push(val);

	native_call();
}

inline BOOL AI_0x30ED88D5E0C56A37(Any p0) /* 0x30ED88D5E0C56A37 */
{
	uint64_t val;

	native_init(0x30ED88D5E0C56A37);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Ped ped, Vehicle vehicle, const char* WPRecording, int p3, int p4, int p5, int p6, float p7, BOOL p8, float p9) /* 0x3123FAA6DB1CF7ED */
{
	uint64_t val;

	native_init(0x3123FAA6DB1CF7ED);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(const char**)(&val) = WPRecording;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);
	*(int*)(&val) = p4;
	native_push(val);
	*(int*)(&val) = p5;
	native_push(val);
	*(int*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);

	native_call();
}

inline void AI_TASK_GOTO_ENTITY_OFFSET_XY(Ped ped, Entity entity, int duration, float xOffset, float yOffset, float zOffset, float moveBlendRatio, BOOL useNavmesh) /* 0x338E7EF52B6095A9 */
{
	uint64_t val;

	native_init(0x338E7EF52B6095A9);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(float*)(&val) = xOffset;
	native_push(val);
	*(float*)(&val) = yOffset;
	native_push(val);
	*(float*)(&val) = zOffset;
	native_push(val);
	*(float*)(&val) = moveBlendRatio;
	native_push(val);
	*(BOOL*)(&val) = useNavmesh;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_MOVE_BLEND_RATIO_STILL(Ped ped) /* 0x349CE7B56DAFD95C */
{
	uint64_t val;

	native_init(0x349CE7B56DAFD95C);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_ASSISTED_MOVEMENT_REMOVE_ROUTE(const char* route) /* 0x3548536485DD792B */
{
	uint64_t val;

	native_init(0x3548536485DD792B);

	*(const char**)(&val) = route;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_SCENARIO_GROUP_ENABLED(const char* scenarioGroup) /* 0x367A09DED4E05B99 */
{
	uint64_t val;

	native_init(0x367A09DED4E05B99);

	*(const char**)(&val) = scenarioGroup;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any AI_CLEAR_SEQUENCE_TASK(Object* taskSequence) /* 0x3841422E9C488D8C */
{
	uint64_t val;

	native_init(0x3841422E9C488D8C);

	*(Object**)(&val) = taskSequence;
	native_push(val);

	return *(Any*)(native_call());
}

inline void AI_SET_PED_PATH_PREFER_TO_AVOID_WATER(Ped ped, BOOL avoidWater) /* 0x38FE1EC73743793C */
{
	uint64_t val;

	native_init(0x38FE1EC73743793C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = avoidWater;
	native_push(val);

	native_call();
}

inline void AI_TASK_SEEK_COVER_TO_COORDS(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, Any p7, BOOL p8) /* 0x39246A6958EF072C */
{
	uint64_t val;

	native_init(0x39246A6958EF072C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(Any*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);

	native_call();
}

inline Any AI_CLOSE_SEQUENCE_TASK(Object taskSequence) /* 0x39E72BC99E6360CB */
{
	uint64_t val;

	native_init(0x39E72BC99E6360CB);

	*(Object*)(&val) = taskSequence;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL AI_IS_SCENARIO_TYPE_ENABLED(const char* scenarioType) /* 0x3A815DB3EA088722 */
{
	uint64_t val;

	native_init(0x3A815DB3EA088722);

	*(const char**)(&val) = scenarioType;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline const char *AI_GET_CLIP_SET_FOR_SCRIPTED_GUN_TASK(int p0) /* 0x3A8CADC7D37AACC5 */
{
	uint64_t val;

	native_init(0x3A8CADC7D37AACC5);

	*(int*)(&val) = p0;
	native_push(val);

	return *(const char**)(native_call());
}

inline void AI_TASK_VEHICLE_CHASE(Ped driver, Entity targetEnt) /* 0x3C08A8E30363B353 */
{
	uint64_t val;

	native_init(0x3C08A8E30363B353);

	*(Ped*)(&val) = driver;
	native_push(val);
	*(Entity*)(&val) = targetEnt;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_PED_RUNNING_ARREST_TASK(Ped ped) /* 0x3DC52677769B4AE0 */
{
	uint64_t val;

	native_init(0x3DC52677769B4AE0);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AI_0x3E38E28A1D80DDF6(Ped ped) /* 0x3E38E28A1D80DDF6 */
{
	uint64_t val;

	native_init(0x3E38E28A1D80DDF6);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_COWER(Ped ped, int duration) /* 0x3EB1FE9E8E908E15 */
{
	uint64_t val;

	native_init(0x3EB1FE9E8E908E15);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);

	native_call();
}

inline void AI__TASK_STOP_PHONE_GESTURE_ANIMATION(Ped ped) /* 0x3FA00D4F4641BFAE */
{
	uint64_t val;

	native_init(0x3FA00D4F4641BFAE);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void AI_SET_DRIVE_TASK_MAX_CRUISE_SPEED(Any p0, float p1) /* 0x404A5AA9B9F0B746 */
{
	uint64_t val;

	native_init(0x404A5AA9B9F0B746);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Any AI_GET_VEHICLE_WAYPOINT_TARGET_POINT(Ped ped) /* 0x416B62AC8B9E5BBD */
{
	uint64_t val;

	native_init(0x416B62AC8B9E5BBD);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Any*)(native_call());
}

inline void AI_TASK_PUT_PED_DIRECTLY_INTO_COVER(Ped ped, float x, float y, float z, Any timeout, BOOL p5, float p6, BOOL p7, BOOL p8, Any p9, BOOL p10) /* 0x4172393E6BE1FECE */
{
	uint64_t val;

	native_init(0x4172393E6BE1FECE);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(Any*)(&val) = timeout;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(Any*)(&val) = p9;
	native_push(val);
	*(BOOL*)(&val) = p10;
	native_push(val);

	native_call();
}

inline void AI_RESET_EXCLUSIVE_SCENARIO_GROUP() /* 0x4202BBCB8684563D */
{
	native_init(0x4202BBCB8684563D);
	native_call();
}

inline void AI_SET_PED_PATH_AVOID_FIRE(Ped ped, BOOL avoidFire) /* 0x4455517B28441E60 */
{
	uint64_t val;

	native_init(0x4455517B28441E60);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = avoidFire;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_AIM_AT_COORD(Ped ped, float x, float y, float z) /* 0x447C1E9EF844BC0F */
{
	uint64_t val;

	native_init(0x447C1E9EF844BC0F);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void AI_TASK_SHOCKING_EVENT_REACT(Ped ped, int eventHandle) /* 0x452419CBD838065B */
{
	uint64_t val;

	native_init(0x452419CBD838065B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = eventHandle;
	native_push(val);

	native_call();
}

inline void AI_ADD_COVER_BLOCKING_AREA(float playerX, float playerY, float playerZ, float radiusX, float radiusY, float radiusZ, BOOL p6, BOOL p7, BOOL p8, BOOL p9) /* 0x45C597097DD7CB81 */
{
	uint64_t val;

	native_init(0x45C597097DD7CB81);

	*(float*)(&val) = playerX;
	native_push(val);
	*(float*)(&val) = playerY;
	native_push(val);
	*(float*)(&val) = playerZ;
	native_push(val);
	*(float*)(&val) = radiusX;
	native_push(val);
	*(float*)(&val) = radiusY;
	native_push(val);
	*(float*)(&val) = radiusZ;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(BOOL*)(&val) = p9;
	native_push(val);

	native_call();
}

inline void AI_TASK_SHOOT_AT_COORD(Ped ped, float x, float y, float z, int duration, Hash firingPattern) /* 0x46A6CC01E0826106 */
{
	uint64_t val;

	native_init(0x46A6CC01E0826106);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(Hash*)(&val) = firingPattern;
	native_push(val);

	native_call();
}

inline float AI_GET_PHONE_GESTURE_ANIM_CURRENT_TIME(Ped ped) /* 0x47619ABE8B268C60 */
{
	uint64_t val;

	native_init(0x47619ABE8B268C60);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(float*)(native_call());
}

inline void AI_WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Any p0) /* 0x47EFA040EBB8E2EA */
{
	uint64_t val;

	native_init(0x47EFA040EBB8E2EA);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_DRIVE_WANDER(Ped ped, Vehicle vehicle, float speed, int drivingStyle) /* 0x480142959D337D00 */
{
	uint64_t val;

	native_init(0x480142959D337D00);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(int*)(&val) = drivingStyle;
	native_push(val);

	native_call();
}

inline void AI_TASK_GUARD_CURRENT_POSITION(Ped p0, float p1, float p2, BOOL p3) /* 0x4A58A47A72E3FCB4 */
{
	uint64_t val;

	native_init(0x4A58A47A72E3FCB4);

	*(Ped*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void AI_TASK_COMBAT_HATED_TARGETS_IN_AREA(Ped ped, float x, float y, float z, float radius, Any p5) /* 0x4CF5F55DAC3280A0 */
{
	uint64_t val;

	native_init(0x4CF5F55DAC3280A0);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);

	native_call();
}

inline void AI_TASK_FORCE_MOTION_STATE(Ped ped, Hash state, BOOL p2) /* 0x4F056E1AFFEF17AB */
{
	uint64_t val;

	native_init(0x4F056E1AFFEF17AB);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = state;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AI_TASK_LEAVE_ANY_VEHICLE(Ped ped, int p1, int p2) /* 0x504D54DF3F6F2247 */
{
	uint64_t val;

	native_init(0x504D54DF3F6F2247);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_SHOOT_AT_COORD(Ped ped, float x, float y, float z, float p4) /* 0x5190796ED39C9B6D */
{
	uint64_t val;

	native_init(0x5190796ED39C9B6D);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);

	native_call();
}

inline BOOL AI_WAYPOINT_RECORDING_GET_NUM_POINTS(const char* name, int* points) /* 0x5343532C01A07234 */
{
	uint64_t val;

	native_init(0x5343532C01A07234);

	*(const char**)(&val) = name;
	native_push(val);
	*(int**)(&val) = points;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int AI_GET_ACTIVE_VEHICLE_MISSION_TYPE(Vehicle veh) /* 0x534AEBA6E5ED4CAB */
{
	uint64_t val;

	native_init(0x534AEBA6E5ED4CAB);

	*(Vehicle*)(&val) = veh;
	native_push(val);

	return *(int*)(native_call());
}

inline void AI_SET_EXCLUSIVE_SCENARIO_GROUP(const char* scenarioGroup) /* 0x535E97E1F7FC0C6A */
{
	uint64_t val;

	native_init(0x535E97E1F7FC0C6A);

	*(const char**)(&val) = scenarioGroup;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_PED_SPRINTING(Ped ped) /* 0x57E457CD2C0FC168 */
{
	uint64_t val;

	native_init(0x57E457CD2C0FC168);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_SET_SEQUENCE_TO_REPEAT(Object taskSequence, BOOL repeat) /* 0x58C70CF3A41E4AE7 */
{
	uint64_t val;

	native_init(0x58C70CF3A41E4AE7);

	*(Object*)(&val) = taskSequence;
	native_push(val);
	*(BOOL*)(&val) = repeat;
	native_push(val);

	native_call();
}

inline void AI_TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, Any p5) /* 0x58E2E0F23F6B76C3 */
{
	uint64_t val;

	native_init(0x58E2E0F23F6B76C3);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);

	native_call();
}

inline Vector3 AI_GET_SCRIPTED_COVER_POINT_COORDS(ScrHandle coverpoint) /* 0x594A1028FC2A3E85 */
{
	uint64_t val;

	native_init(0x594A1028FC2A3E85);

	*(ScrHandle*)(&val) = coverpoint;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline void AI_TASK_FOLLOW_POINT_ROUTE(Ped ped, float speed, int unknown) /* 0x595583281858626E */
{
	uint64_t val;

	native_init(0x595583281858626E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(int*)(&val) = unknown;
	native_push(val);

	native_call();
}

inline void AI_USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(Any* p0, BOOL p1, float p2, float p3) /* 0x5A353B8E6B1095B5 */
{
	uint64_t val;

	native_init(0x5A353B8E6B1095B5);

	*(Any**)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void AI_TASK_PED_SLIDE_TO_COORD_HDG_RATE(Ped ped, float x, float y, float z, float heading, float p5, float p6) /* 0x5A4A6A6D3DC64F52 */
{
	uint64_t val;

	native_init(0x5A4A6A6D3DC64F52);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);

	native_call();
}

inline BOOL AI_DOES_SCENARIO_EXIST_IN_AREA(float x, float y, float z, float radius, BOOL b) /* 0x5A59271FFADD33C1 */
{
	uint64_t val;

	native_init(0x5A59271FFADD33C1);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(BOOL*)(&val) = b;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any AI_TASK_PERFORM_SEQUENCE(Ped ped, Object taskSequence) /* 0x5ABA3986D90D8A3B */
{
	uint64_t val;

	native_init(0x5ABA3986D90D8A3B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Object*)(&val) = taskSequence;
	native_push(val);

	return *(Any*)(native_call());
}

inline void AI_TASK_TURN_PED_TO_FACE_ENTITY(Ped ped, Entity entity, int duration) /* 0x5AD23D40115353AC */
{
	uint64_t val;

	native_init(0x5AD23D40115353AC);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);

	native_call();
}

inline void AI_TASK_GO_TO_COORD_ANY_MEANS(Ped ped, float x, float y, float z, float speed, Any p5, BOOL p6, int walkingStyle, float p8) /* 0x5BC448CB78FA3E88 */
{
	uint64_t val;

	native_init(0x5BC448CB78FA3E88);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(int*)(&val) = walkingStyle;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);

	native_call();
}

inline void AI_SET_DRIVE_TASK_CRUISE_SPEED(Ped driver, float cruiseSpeed) /* 0x5C9B84BD7D31D908 */
{
	uint64_t val;

	native_init(0x5C9B84BD7D31D908);

	*(Ped*)(&val) = driver;
	native_push(val);
	*(float*)(&val) = cruiseSpeed;
	native_push(val);

	native_call();
}

inline void AI_VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) /* 0x5CEB25A7D2848963 */
{
	uint64_t val;

	native_init(0x5CEB25A7D2848963);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AI_ADD_VEHICLE_SUBTASK_ATTACK_COORD(Ped ped, float x, float y, float z) /* 0x5CF0D8F9BBA0DD75 */
{
	uint64_t val;

	native_init(0x5CF0D8F9BBA0DD75);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void AI_TASK_USE_MOBILE_PHONE_TIMED(Ped ped, int duration) /* 0x5EE02954A14C69DB */
{
	uint64_t val;

	native_init(0x5EE02954A14C69DB);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);

	native_call();
}

inline void AI_TASK_SKY_DIVE(Ped ped) /* 0x601736CFE536B0A0 */
{
	uint64_t val;

	native_init(0x601736CFE536B0A0);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline BOOL AI_ASSISTED_MOVEMENT_IS_ROUTE_LOADED(const char* route) /* 0x60F9A4393A21F741 */
{
	uint64_t val;

	native_init(0x60F9A4393A21F741);

	*(const char**)(&val) = route;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Entity entity1, Entity entity2, float p2, float p3, float p4, float p5, Any p6) /* 0x61E360B7E040D12E */
{
	uint64_t val;

	native_init(0x61E360B7E040D12E);

	*(Entity*)(&val) = entity1;
	native_push(val);
	*(Entity*)(&val) = entity2;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);

	native_call();
}

inline BOOL AI_0x621C6E4729388E41(Ped ped) /* 0x621C6E4729388E41 */
{
	uint64_t val;

	native_init(0x621C6E4729388E41);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_RELOAD_WEAPON(Ped ped, BOOL unused) /* 0x62D2916F56B9CD2D */
{
	uint64_t val;

	native_init(0x62D2916F56B9CD2D);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = unused;
	native_push(val);

	native_call();
}

inline int AI_GET_NAVMESH_ROUTE_RESULT(Ped ped) /* 0x632E831F382A0FA8 */
{
	uint64_t val;

	native_init(0x632E831F382A0FA8);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline void AI_SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(Ped ped, float distance) /* 0x639B642FACBE4EDD */
{
	uint64_t val;

	native_init(0x639B642FACBE4EDD);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = distance;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_MISSION(int p0, int p1, Vehicle veh, Any p3, float p4, Any p5, float p6, float p7, BOOL p8) /* 0x659427E0EF36BCDE */
{
	uint64_t val;

	native_init(0x659427E0EF36BCDE);

	*(int*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(Vehicle*)(&val) = veh;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);

	native_call();
}

inline void AI_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) /* 0x6599D834B12D0800 */
{
	uint64_t val;

	native_init(0x6599D834B12D0800);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AI_TASK_AIM_GUN_AT_COORD(Ped ped, float x, float y, float z, int time, BOOL p5, BOOL p6) /* 0x6671F3EEC681BDA1 */
{
	uint64_t val;

	native_init(0x6671F3EEC681BDA1);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = time;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);

	native_call();
}

inline void AI_UNCUFF_PED(Ped ped) /* 0x67406F2C8F87FC4F */
{
	uint64_t val;

	native_init(0x67406F2C8F87FC4F);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void AI_TASK_LOOK_AT_ENTITY(Ped ped, Entity lookAt, int duration, int unknown1, int unknown2) /* 0x69F4BE8C8CC4796C */
{
	uint64_t val;

	native_init(0x69F4BE8C8CC4796C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Entity*)(&val) = lookAt;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(int*)(&val) = unknown1;
	native_push(val);
	*(int*)(&val) = unknown2;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_PLAY_ANIM(Vehicle vehicle, const char* animation_set, const char* animation_name) /* 0x69F5C3BD0F3EBD89 */
{
	uint64_t val;

	native_init(0x69F5C3BD0F3EBD89);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(const char**)(&val) = animation_set;
	native_push(val);
	*(const char**)(&val) = animation_name;
	native_push(val);

	native_call();
}

inline void AI_TASK_GO_TO_ENTITY(Entity entity, Entity target, int duration, float distance, float speed, float p5, int p6) /* 0x6A071245EB0D1882 */
{
	uint64_t val;

	native_init(0x6A071245EB0D1882);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(Entity*)(&val) = target;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(float*)(&val) = distance;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(int*)(&val) = p6;
	native_push(val);

	native_call();
}

inline void AI_SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(float height) /* 0x6C6B148586F934F7 */
{
	uint64_t val;

	native_init(0x6C6B148586F934F7);

	*(float*)(&val) = height;
	native_push(val);

	native_call();
}

inline void AI_TASK_LOOK_AT_COORD(Entity entity, float x, float y, float z, float duration, Any p5, Any p6) /* 0x6FA46612594F7973 */
{
	uint64_t val;

	native_init(0x6FA46612594F7973);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = duration;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);

	native_call();
}

inline void AI_SET_ANIM_LOOPED(Any p0, BOOL p1, Any p2, BOOL p3) /* 0x70033C3CC29A1FF4 */
{
	uint64_t val;

	native_init(0x70033C3CC29A1FF4);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline BOOL AI_WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) /* 0x701375A7D43F01CB */
{
	uint64_t val;

	native_init(0x701375A7D43F01CB);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline const char *AI__GET_PED_NETWORK_TASK_PHASE(Ped ped) /* 0x717E4D1F2048376D */
{
	uint64_t val;

	native_init(0x717E4D1F2048376D);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(const char**)(native_call());
}

inline void AI_TASK_THROW_PROJECTILE(int ped, float x, float y, float z) /* 0x7285951DBF6B5A51 */
{
	uint64_t val;

	native_init(0x7285951DBF6B5A51);

	*(int*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void AI_TASK_REACT_AND_FLEE_PED(Ped ped, Ped fleeTarget) /* 0x72C896464915D1B1 */
{
	uint64_t val;

	native_init(0x72C896464915D1B1);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = fleeTarget;
	native_push(val);

	native_call();
}

inline void AI_PLAY_ANIM_ON_RUNNING_SCENARIO(Ped ped, const char* animDict, const char* animName) /* 0x748040460F8DF5DC */
{
	uint64_t val;

	native_init(0x748040460F8DF5DC);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_PED_CUFFED(Ped ped) /* 0x74E559B3BC910685 */
{
	uint64_t val;

	native_init(0x74E559B3BC910685);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_SEEK_COVER_FROM_POS(Ped ped, float x, float y, float z, int duration, BOOL p5) /* 0x75AC2B60386D89F2 */
{
	uint64_t val;

	native_init(0x75AC2B60386D89F2);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline void AI_DELETE_PATROL_ROUTE(const char* patrolRoute) /* 0x7767DD9D65E91319 */
{
	uint64_t val;

	native_init(0x7767DD9D65E91319);

	*(const char**)(&val) = patrolRoute;
	native_push(val);

	native_call();
}

inline void AI_PLAY_ENTITY_SCRIPTED_ANIM(Any p0, Any* p1, Any* p2, Any* p3, float p4, float p5) /* 0x77A1EEC547E7FCF1 */
{
	uint64_t val;

	native_init(0x77A1EEC547E7FCF1);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);

	native_call();
}

inline Any AI_SET_PED_PATH_CAN_USE_LADDERS(Ped ped, BOOL Toggle) /* 0x77A5B103C87F476E */
{
	uint64_t val;

	native_init(0x77A5B103C87F476E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = Toggle;
	native_push(val);

	return *(Any*)(native_call());
}

inline int AI_GET_SCRIPT_TASK_STATUS(Ped targetPed, Hash taskHash) /* 0x77F1BEB8863288D5 */
{
	uint64_t val;

	native_init(0x77F1BEB8863288D5);

	*(Ped*)(&val) = targetPed;
	native_push(val);
	*(Hash*)(&val) = taskHash;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL AI_IS_SCENARIO_OCCUPIED(float x, float y, float z, float radius, BOOL p4) /* 0x788756D73AC2E07C */
{
	uint64_t val;

	native_init(0x788756D73AC2E07C);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_EXIT_COVER(Ped ped, int p1, float posX, float posY, float posZ) /* 0x79B258E397854D29 */
{
	uint64_t val;

	native_init(0x79B258E397854D29);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);

	native_call();
}

inline void AI_TASK_AIM_GUN_SCRIPTED(Ped ped, Hash scriptTask, BOOL p2, BOOL p3) /* 0x7A192BE16D373D00 */
{
	uint64_t val;

	native_init(0x7A192BE16D373D00);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = scriptTask;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void AI_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Ped ped, Vehicle vehicle) /* 0x7AA80209BDA643EB */
{
	uint64_t val;

	native_init(0x7AA80209BDA643EB);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	native_call();
}

inline void AI_TASK_SWEEP_AIM_POSITION(Ped ped, const char* animDict, const char* animName1, const char* animName2, const char* animName3, int timeout, float X, float Y, float Z, float unk, float flag) /* 0x7AFE8FDC10BC07D2 */
{
	uint64_t val;

	native_init(0x7AFE8FDC10BC07D2);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName1;
	native_push(val);
	*(const char**)(&val) = animName2;
	native_push(val);
	*(const char**)(&val) = animName3;
	native_push(val);
	*(int*)(&val) = timeout;
	native_push(val);
	*(float*)(&val) = X;
	native_push(val);
	*(float*)(&val) = Y;
	native_push(val);
	*(float*)(&val) = Z;
	native_push(val);
	*(float*)(&val) = unk;
	native_push(val);
	*(float*)(&val) = flag;
	native_push(val);

	native_call();
}

inline void AI_TASK_COMBAT_HATED_TARGETS_AROUND_PED(Ped ped, float radius, int p2) /* 0x7BF835BB9E2698C8 */
{
	uint64_t val;

	native_init(0x7BF835BB9E2698C8);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AI_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1, BOOL p2) /* 0x7D7D2B47FA788E85 */
{
	uint64_t val;

	native_init(0x7D7D2B47FA788E85);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AI_TASK_EVERYONE_LEAVE_VEHICLE(Vehicle vehicle) /* 0x7F93691AB4B92272 */
{
	uint64_t val;

	native_init(0x7F93691AB4B92272);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	native_call();
}

inline void AI_ASSISTED_MOVEMENT_REQUEST_ROUTE(const char* route) /* 0x817268968605947A */
{
	uint64_t val;

	native_init(0x817268968605947A);

	*(const char**)(&val) = route;
	native_push(val);

	native_call();
}

inline void AI_TASK_PLAY_ANIM_ADVANCED(Ped ped, const char* animDict, const char* animName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float speed, float speedMultiplier, int duration, Any flag, float animTime, int p14, int p15) /* 0x83CDB10EA29B370B */
{
	uint64_t val;

	native_init(0x83CDB10EA29B370B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = rotX;
	native_push(val);
	*(float*)(&val) = rotY;
	native_push(val);
	*(float*)(&val) = rotZ;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(float*)(&val) = speedMultiplier;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(Any*)(&val) = flag;
	native_push(val);
	*(float*)(&val) = animTime;
	native_push(val);
	*(int*)(&val) = p14;
	native_push(val);
	*(int*)(&val) = p15;
	native_push(val);

	native_call();
}

inline void AI_TASK_FLUSH_ROUTE() /* 0x841142A1376E9006 */
{
	native_init(0x841142A1376E9006);
	native_call();
}

inline void AI_TASK_SEEK_COVER_FROM_PED(Ped ped, Ped target, int duration, BOOL p3) /* 0x84D32B3BEC531324 */
{
	uint64_t val;

	native_init(0x84D32B3BEC531324);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = target;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline float AI_GET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped) /* 0x8517D4A6CA8513ED */
{
	uint64_t val;

	native_init(0x8517D4A6CA8513ED);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(float*)(native_call());
}

inline void AI_ADD_VEHICLE_SUBTASK_ATTACK_PED(Ped ped, Ped ped2) /* 0x85F462BADC7DA47F */
{
	uint64_t val;

	native_init(0x85F462BADC7DA47F);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = ped2;
	native_push(val);

	native_call();
}

inline void AI_TASK_AIM_GUN_SCRIPTED_WITH_TARGET(Any p0, Any p1, float p2, float p3, float p4, Any p5, BOOL p6, BOOL p7) /* 0x8605AF0DE8B3A5AC */
{
	uint64_t val;

	native_init(0x8605AF0DE8B3A5AC);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) /* 0x8785E6E40C7A8818 */
{
	uint64_t val;

	native_init(0x8785E6E40C7A8818);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_0x88E32DB8C1A4AA4B(Ped ped, float p1) /* 0x88E32DB8C1A4AA4B */
{
	uint64_t val;

	native_init(0x88E32DB8C1A4AA4B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AI_TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Ped ped, Object taskSequence, int currentProgress, int progressToSetTo) /* 0x89221B16730234F0 */
{
	uint64_t val;

	native_init(0x89221B16730234F0);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Object*)(&val) = taskSequence;
	native_push(val);
	*(int*)(&val) = currentProgress;
	native_push(val);
	*(int*)(&val) = progressToSetTo;
	native_push(val);

	native_call();
}

inline void AI_WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Any p0, float p1, float p2, float p3, BOOL p4) /* 0x8968400D900ED8B3 */
{
	uint64_t val;

	native_init(0x8968400D900ED8B3);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void AI_TASK_CLIMB(Ped ped, BOOL unused) /* 0x89D9FCC2435112F1 */
{
	uint64_t val;

	native_init(0x89D9FCC2435112F1);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = unused;
	native_push(val);

	native_call();
}

inline void AI_VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Any p0) /* 0x8A4E6AC373666BC5 */
{
	uint64_t val;

	native_init(0x8A4E6AC373666BC5);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AI_TASK_CHAT_TO_PED(Ped ped, Ped target, int p2, float p3, float p4, float p5, float p6, float p7) /* 0x8C338E0263E4FD19 */
{
	uint64_t val;

	native_init(0x8C338E0263E4FD19);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = target;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);

	native_call();
}

inline void AI_SET_HIGH_FALL_TASK(Ped ped, Any p1, Any p2, Any p3) /* 0x8C825BDC7741D37C */
{
	uint64_t val;

	native_init(0x8C825BDC7741D37C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline Any AI_SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped ped, BOOL Toggle) /* 0x8E06A6FE76C9EFF4 */
{
	uint64_t val;

	native_init(0x8E06A6FE76C9EFF4);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = Toggle;
	native_push(val);

	return *(Any*)(native_call());
}

inline void AI_ADD_PATROL_ROUTE_NODE(int p0, const char* p1, float x1, float y1, float z1, float x2, float y2, float z2, int p8) /* 0x8EDF950167586B7C */
{
	uint64_t val;

	native_init(0x8EDF950167586B7C);

	*(int*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(int*)(&val) = p8;
	native_push(val);

	native_call();
}

inline void AI_TASK_PLAY_PHONE_GESTURE_ANIMATION(Ped ped, const char* animDict, const char* animation, const char* boneMaskType, float p4, float p5, BOOL p6, BOOL p7) /* 0x8FBB6758B3B3E9EC */
{
	uint64_t val;

	native_init(0x8FBB6758B3B3E9EC);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animation;
	native_push(val);
	*(const char**)(&val) = boneMaskType;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);

	native_call();
}

inline void AI_0x8FD89A6240813FD0(Ped ped, BOOL p1, BOOL p2) /* 0x8FD89A6240813FD0 */
{
	uint64_t val;

	native_init(0x8FD89A6240813FD0);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_PED_BEING_ARRESTED(Ped ped) /* 0x90A09F3A45FED688 */
{
	uint64_t val;

	native_init(0x90A09F3A45FED688);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) /* 0x90D2156198831D69 */
{
	uint64_t val;

	native_init(0x90D2156198831D69);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void AI_TASK_STAND_STILL(Ped ped, int time) /* 0x919BE13EED931959 */
{
	uint64_t val;

	native_init(0x919BE13EED931959);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = time;
	native_push(val);

	native_call();
}

inline BOOL AI__IS_TASK_MOVE_SCRIPTED_ACTIVE(Ped handle) /* 0x921CE12C489C4C41 */
{
	uint64_t val;

	native_init(0x921CE12C489C4C41);

	*(Ped*)(&val) = handle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_SET_SPHERE_DEFENSIVE_AREA(Any p0, float p1, float p2, float p3, float p4) /* 0x933C06518B52A9A4 */
{
	uint64_t val;

	native_init(0x933C06518B52A9A4);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void AI_TASK_ACHIEVE_HEADING(Ped ped, float heading, int timeout) /* 0x93B93A37987F1F3D */
{
	uint64_t val;

	native_init(0x93B93A37987F1F3D);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);
	*(int*)(&val) = timeout;
	native_push(val);

	native_call();
}

inline void AI_TASK_COMBAT_PED_TIMED(Any p0, Ped ped, int duration, Any p3) /* 0x944F30DCB7096BDE */
{
	uint64_t val;

	native_init(0x944F30DCB7096BDE);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_MISSION_PED_TARGET(Ped ped, Vehicle vehicle, Ped pedTarget, int mode, float maxSpeed, int drivingStyle, float minDistance, float p7, BOOL p8) /* 0x9454528DF15D657A */
{
	uint64_t val;

	native_init(0x9454528DF15D657A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(Ped*)(&val) = pedTarget;
	native_push(val);
	*(int*)(&val) = mode;
	native_push(val);
	*(float*)(&val) = maxSpeed;
	native_push(val);
	*(int*)(&val) = drivingStyle;
	native_push(val);
	*(float*)(&val) = minDistance;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);

	native_call();
}

inline void AI_TASK_SMART_FLEE_COORD(Ped ped, float x, float y, float z, float distance, int time, BOOL p6, BOOL p7) /* 0x94587F17E9C365D5 */
{
	uint64_t val;

	native_init(0x94587F17E9C365D5);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = distance;
	native_push(val);
	*(int*)(&val) = time;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);

	native_call();
}

inline void AI_TASK_CLEAR_DEFENSIVE_AREA(Any p0) /* 0x95A6C46A31D1917D */
{
	uint64_t val;

	native_init(0x95A6C46A31D1917D);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AI_TASK_OPEN_VEHICLE_DOOR(Ped ped, Vehicle vehicle, int timeOut, int doorIndex, float speed) /* 0x965791A9A488A062 */
{
	uint64_t val;

	native_init(0x965791A9A488A062);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(int*)(&val) = timeOut;
	native_push(val);
	*(int*)(&val) = doorIndex;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);

	native_call();
}

inline void AI_TASK_PLANT_BOMB(Ped ped, float x, float y, float z, float heading) /* 0x965FEC691D55E9BF */
{
	uint64_t val;

	native_init(0x965FEC691D55E9BF);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);

	native_call();
}

inline void AI_UPDATE_TASK_AIM_GUN_SCRIPTED_TARGET(Ped p0, Ped p1, float p2, float p3, float p4, BOOL p5) /* 0x9724FB59A3E72AD0 */
{
	uint64_t val;

	native_init(0x9724FB59A3E72AD0);

	*(Ped*)(&val) = p0;
	native_push(val);
	*(Ped*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline void AI_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Entity entityToWalkTo, Entity entityToAimAt, float speed, BOOL shootatEntity, float p5, float p6, BOOL p7, BOOL p8, Hash firingPattern) /* 0x97465886D35210E9 */
{
	uint64_t val;

	native_init(0x97465886D35210E9);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Entity*)(&val) = entityToWalkTo;
	native_push(val);
	*(Entity*)(&val) = entityToAimAt;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(BOOL*)(&val) = shootatEntity;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(Hash*)(&val) = firingPattern;
	native_push(val);

	native_call();
}

inline void AI_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Any p0, float p1, float p2, float p3, float p4, Any p5) /* 0x97A28E63F0BA5631 */
{
	uint64_t val;

	native_init(0x97A28E63F0BA5631);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);

	native_call();
}

inline void AI_STOP_ANIM_TASK(Ped ped, const char* animDictionary, const char* animationName, float p3) /* 0x97FF36A1D40EA00A */
{
	uint64_t val;

	native_init(0x97FF36A1D40EA00A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = animDictionary;
	native_push(val);
	*(const char**)(&val) = animationName;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	native_call();
}

inline int AI_GET_VEHICLE_WAYPOINT_PROGRESS(Vehicle vehicle) /* 0x9824CFF8FC66E159 */
{
	uint64_t val;

	native_init(0x9824CFF8FC66E159);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	return *(int*)(native_call());
}

inline void AI_TASK_WARP_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seat) /* 0x9A7D091411C5F684 */
{
	uint64_t val;

	native_init(0x9A7D091411C5F684);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(int*)(&val) = seat;
	native_push(val);

	native_call();
}

inline void AI_TASK_AIM_GUN_AT_ENTITY(Ped ped, Entity entity, int duration, BOOL unk) /* 0x9B53BB6E8943AF53 */
{
	uint64_t val;

	native_init(0x9B53BB6E8943AF53);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(BOOL*)(&val) = unk;
	native_push(val);

	native_call();
}

inline void AI__TASK_GET_OFF_BOAT(Ped ped, Vehicle boat) /* 0x9C00E77AF14B2DFF */
{
	uint64_t val;

	native_init(0x9C00E77AF14B2DFF);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = boat;
	native_push(val);

	native_call();
}

inline void AI_REQUEST_WAYPOINT_RECORDING(const char* name) /* 0x9EEFB62EB27B5792 */
{
	uint64_t val;

	native_init(0x9EEFB62EB27B5792);

	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline void AI_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Any p0, float p1, float p2, float p3, float p4, Any p5) /* 0x9FDA1B3D7E7028B3 */
{
	uint64_t val;

	native_init(0x9FDA1B3D7E7028B3);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);

	native_call();
}

inline void AI_TASK_SWAP_WEAPON(Ped ped, BOOL p1) /* 0xA21C51255B205245 */
{
	uint64_t val;

	native_init(0xA21C51255B205245);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) /* 0xA320EF046186FA3B */
{
	uint64_t val;

	native_init(0xA320EF046186FA3B);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_OPEN_PATROL_ROUTE(const char* patrolRoute) /* 0xA36BFB5EE89F3D82 */
{
	uint64_t val;

	native_init(0xA36BFB5EE89F3D82);

	*(const char**)(&val) = patrolRoute;
	native_push(val);

	native_call();
}

inline void AI_TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Ped pedHandle, float goToLocationX, float goToLocationY, float goToLocationZ, float focusLocationX, float focusLocationY, float focusLocationZ, float speed, BOOL shootAtEnemies, float distanceToStopAt, float noRoadsDistance, BOOL unkTrue, int unkFlag, int aimingFlag, Hash firingPattern) /* 0xA55547801EB331FC */
{
	uint64_t val;

	native_init(0xA55547801EB331FC);

	*(Ped*)(&val) = pedHandle;
	native_push(val);
	*(float*)(&val) = goToLocationX;
	native_push(val);
	*(float*)(&val) = goToLocationY;
	native_push(val);
	*(float*)(&val) = goToLocationZ;
	native_push(val);
	*(float*)(&val) = focusLocationX;
	native_push(val);
	*(float*)(&val) = focusLocationY;
	native_push(val);
	*(float*)(&val) = focusLocationZ;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(BOOL*)(&val) = shootAtEnemies;
	native_push(val);
	*(float*)(&val) = distanceToStopAt;
	native_push(val);
	*(float*)(&val) = noRoadsDistance;
	native_push(val);
	*(BOOL*)(&val) = unkTrue;
	native_push(val);
	*(int*)(&val) = unkFlag;
	native_push(val);
	*(int*)(&val) = aimingFlag;
	native_push(val);
	*(Hash*)(&val) = firingPattern;
	native_push(val);

	native_call();
}

inline float AI_GET_WAYPOINT_DISTANCE_ALONG_ROUTE(const char* p0, int p1) /* 0xA5B769058763E497 */
{
	uint64_t val;

	native_init(0xA5B769058763E497);

	*(const char**)(&val) = p0;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL AI_0xA7FFBA498E4AAF67(Ped ped, const char* p1) /* 0xA7FFBA498E4AAF67 */
{
	uint64_t val;

	native_init(0xA7FFBA498E4AAF67);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AI_DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(float x, float y, float z) /* 0xA98B8E3C088E5A31 */
{
	uint64_t val;

	native_init(0xA98B8E3C088E5A31);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_UPDATE_TASK_HANDS_UP_DURATION(Ped ped, int duration) /* 0xA98FCAFD7893C834 */
{
	uint64_t val;

	native_init(0xA98FCAFD7893C834);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);

	native_call();
}

inline void AI_TASK_GOTO_ENTITY_AIMING(Ped ped, Entity target, float distanceToStopAt, float StartAimingDist) /* 0xA9DA48FAB8A76C12 */
{
	uint64_t val;

	native_init(0xA9DA48FAB8A76C12);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Entity*)(&val) = target;
	native_push(val);
	*(float*)(&val) = distanceToStopAt;
	native_push(val);
	*(float*)(&val) = StartAimingDist;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_PED_ACTIVE_IN_SCENARIO(Ped ped) /* 0xAA135F9482C82CC3 */
{
	uint64_t val;

	native_init(0xAA135F9482C82CC3);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_STEALTH_KILL(Ped killer, Ped target, Hash actionType, float p3, Any p4) /* 0xAA5DC05579D60BD9 */
{
	uint64_t val;

	native_init(0xAA5DC05579D60BD9);

	*(Ped*)(&val) = killer;
	native_push(val);
	*(Ped*)(&val) = target;
	native_push(val);
	*(Hash*)(&val) = actionType;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void AI_CLEAR_PED_TASKS_IMMEDIATELY(Ped ped) /* 0xAAA34F8A7CB32098 */
{
	uint64_t val;

	native_init(0xAAA34F8A7CB32098);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline Any AI_0xAB13A5565480B6D9(Ped ped, const char* unk) /* 0xAB13A5565480B6D9 */
{
	uint64_t val;

	native_init(0xAB13A5565480B6D9);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = unk;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL AI_IS_PED_STILL(Ped ped) /* 0xAC29253EEF8F0180 */
{
	uint64_t val;

	native_init(0xAC29253EEF8F0180);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_HELI_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) /* 0xAC83B1DB38D0ADA0 */
{
	uint64_t val;

	native_init(0xAC83B1DB38D0ADA0);

	*(Ped*)(&val) = pilot;
	native_push(val);
	*(Entity*)(&val) = entityToFollow;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void AI_TASK_TOGGLE_DUCK(BOOL p0, BOOL p1) /* 0xAC96609B9995EDF8 */
{
	uint64_t val;

	native_init(0xAC96609B9995EDF8);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AI_TASK_STAND_GUARD(Ped ped, float x, float y, float z, float heading, const char* scenarioName) /* 0xAE032F8BBA959E90 */
{
	uint64_t val;

	native_init(0xAE032F8BBA959E90);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);
	*(const char**)(&val) = scenarioName;
	native_push(val);

	native_call();
}

inline void AI_REMOVE_COVER_POINT(ScrHandle coverpoint) /* 0xAE287C923D891715 */
{
	uint64_t val;

	native_init(0xAE287C923D891715);

	*(ScrHandle*)(&val) = coverpoint;
	native_push(val);

	native_call();
}

inline void AI_CREATE_PATROL_ROUTE() /* 0xAF8A443CCC8018DC */
{
	native_init(0xAF8A443CCC8018DC);
	native_call();
}

inline void AI_CLOSE_PATROL_ROUTE() /* 0xB043ECA801B8CBC1 */
{
	native_init(0xB043ECA801B8CBC1);
	native_call();
}

inline BOOL AI_GET_IS_TASK_ACTIVE(Ped ped, int taskNumber) /* 0xB0760331C7AA4155 */
{
	uint64_t val;

	native_init(0xB0760331C7AA4155);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = taskNumber;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI__SET_NETWORK_TASK_PARAM_BOOL(Ped ped, const char* p1, BOOL p2) /* 0xB0A6CFD2C69C1088 */
{
	uint64_t val;

	native_init(0xB0A6CFD2C69C1088);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AI_TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Any p0, float p1, float p2, float p3, Any p4, float p5, BOOL p6, float p7, float p8, BOOL p9, Any p10, BOOL p11, Any p12, Any p13) /* 0xB2A16444EAD9AE47 */
{
	uint64_t val;

	native_init(0xB2A16444EAD9AE47);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(BOOL*)(&val) = p9;
	native_push(val);
	*(Any*)(&val) = p10;
	native_push(val);
	*(BOOL*)(&val) = p11;
	native_push(val);
	*(Any*)(&val) = p12;
	native_push(val);
	*(Any*)(&val) = p13;
	native_push(val);

	native_call();
}

inline void AI_TASK_PARACHUTE_TO_TARGET(Ped ped, float x, float y, float z) /* 0xB33E291AFA6BD03A */
{
	uint64_t val;

	native_init(0xB33E291AFA6BD03A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline BOOL AI_0xB4F47213DF45A64C(Ped ped, const char* p1) /* 0xB4F47213DF45A64C */
{
	uint64_t val;

	native_init(0xB4F47213DF45A64C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AI_WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(const char* name, float x, float y, float z, int* point) /* 0xB629A298081F876F */
{
	uint64_t val;

	native_init(0xB629A298081F876F);

	*(const char**)(&val) = name;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int**)(&val) = point;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_CLIMB_LADDER(Ped ped, int p1) /* 0xB6C987F9285A3814 */
{
	uint64_t val;

	native_init(0xB6C987F9285A3814);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_PLAYING_PHONE_GESTURE_ANIM(Ped ped) /* 0xB8EBB1E9D3588C10 */
{
	uint64_t val;

	native_init(0xB8EBB1E9D3588C10);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Ped ped, float x, float y, float z, float speed, Any p5, BOOL p6, int walkingStyle, float p8, Any p9, Any p10, Any p11, Any p12) /* 0xB8ECD61F531A7B02 */
{
	uint64_t val;

	native_init(0xB8ECD61F531A7B02);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(int*)(&val) = walkingStyle;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(Any*)(&val) = p9;
	native_push(val);
	*(Any*)(&val) = p10;
	native_push(val);
	*(Any*)(&val) = p11;
	native_push(val);
	*(Any*)(&val) = p12;
	native_push(val);

	native_call();
}

inline void AI_UPDATE_TASK_SWEEP_AIM_POSITION(Ped ped, float X, float Y, float Z) /* 0xBB106883F5201FC4 */
{
	uint64_t val;

	native_init(0xBB106883F5201FC4);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = X;
	native_push(val);
	*(float*)(&val) = Y;
	native_push(val);
	*(float*)(&val) = Z;
	native_push(val);

	native_call();
}

inline void AI_TASK_WANDER_STANDARD(Ped ped, float p1, int p2) /* 0xBB9CE077274F6A1B */
{
	uint64_t val;

	native_init(0xBB9CE077274F6A1B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AI_TASK_USE_MOBILE_PHONE(Ped ped, int p1) /* 0xBD2A8EC3AF4DE7DB */
{
	uint64_t val;

	native_init(0xBD2A8EC3AF4DE7DB);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AI_TASK_PATROL(Ped ped, const char* p1, Any p2, BOOL p3, BOOL p4) /* 0xBDA5DF49D080FE4E */
{
	uint64_t val;

	native_init(0xBDA5DF49D080FE4E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void AI_TASK_PLANE_LAND(Ped pilot, Vehicle plane, float runwayStartX, float runwayStartY, float runwayStartZ, float runwayEndX, float runwayEndY, float runwayEndZ) /* 0xBF19721FA34D32C0 */
{
	uint64_t val;

	native_init(0xBF19721FA34D32C0);

	*(Ped*)(&val) = pilot;
	native_push(val);
	*(Vehicle*)(&val) = plane;
	native_push(val);
	*(float*)(&val) = runwayStartX;
	native_push(val);
	*(float*)(&val) = runwayStartY;
	native_push(val);
	*(float*)(&val) = runwayStartZ;
	native_push(val);
	*(float*)(&val) = runwayEndX;
	native_push(val);
	*(float*)(&val) = runwayEndY;
	native_push(val);
	*(float*)(&val) = runwayEndZ;
	native_push(val);

	native_call();
}

inline void AI_TASK_ENTER_VEHICLE(Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int flag, Any p6) /* 0xC20E50AA46D09CA8 */
{
	uint64_t val;

	native_init(0xC20E50AA46D09CA8);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(int*)(&val) = timeout;
	native_push(val);
	*(int*)(&val) = seat;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(int*)(&val) = flag;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);

	native_call();
}

inline void AI_SET_PARACHUTE_TASK_TARGET(Ped ped, float x, float y, float z) /* 0xC313379AF0FCEDA7 */
{
	uint64_t val;

	native_init(0xC313379AF0FCEDA7);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void AI_CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) /* 0xC35B5CDB2824CF69 */
{
	uint64_t val;

	native_init(0xC35B5CDB2824CF69);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_TEMP_ACTION(Ped driver, Vehicle vehicle, int action, int time) /* 0xC429DCEEB339E129 */
{
	uint64_t val;

	native_init(0xC429DCEEB339E129);

	*(Ped*)(&val) = driver;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(int*)(&val) = action;
	native_push(val);
	*(int*)(&val) = time;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_PED_RUNNING(Ped ped) /* 0xC5286FFC176F28A2 */
{
	uint64_t val;

	native_init(0xC5286FFC176F28A2);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int AI_GET_NAVMESH_ROUTE_DISTANCE_REMAINING(Ped ped, float* distRemaining, BOOL* isPathReady) /* 0xC6F5C0BCDC74D62D */
{
	uint64_t val;

	native_init(0xC6F5C0BCDC74D62D);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float**)(&val) = distRemaining;
	native_push(val);
	*(BOOL**)(&val) = isPathReady;
	native_push(val);

	return *(int*)(native_call());
}

inline void AI_TASK_GUARD_SPHERE_DEFENSIVE_AREA(Ped p0, float p1, float p2, float p3, float p4, float p5, Any p6, float p7, float p8, float p9, float p10) /* 0xC946FE14BE0EB5E2 */
{
	uint64_t val;

	native_init(0xC946FE14BE0EB5E2);

	*(Ped*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);
	*(float*)(&val) = p10;
	native_push(val);

	native_call();
}

inline BOOL AI_GET_IS_WAYPOINT_RECORDING_LOADED(const char* name) /* 0xCB4E8BE8A0063C5D */
{
	uint64_t val;

	native_init(0xCB4E8BE8A0063C5D);

	*(const char**)(&val) = name;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(Ped ped, int flag, BOOL set) /* 0xCC665AAC360D31E7 */
{
	uint64_t val;

	native_init(0xCC665AAC360D31E7);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = flag;
	native_push(val);
	*(BOOL*)(&val) = set;
	native_push(val);

	native_call();
}

inline void AI_SET_MOUNTED_WEAPON_TARGET(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z) /* 0xCCD892192C6D2BB9 */
{
	uint64_t val;

	native_init(0xCCD892192C6D2BB9);

	*(Ped*)(&val) = shootingPed;
	native_push(val);
	*(Ped*)(&val) = targetPed;
	native_push(val);
	*(Vehicle*)(&val) = targetVehicle;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void AI_TASK_WRITHE(Ped ped, Ped target, int time, int p3) /* 0xCDDC2B77CE54AC6E */
{
	uint64_t val;

	native_init(0xCDDC2B77CE54AC6E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = target;
	native_push(val);
	*(int*)(&val) = time;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);

	native_call();
}

inline Any AI__SET_NETWORK_TASK_ACTION(Ped ped, const char* p1) /* 0xD01015C7316AE176 */
{
	uint64_t val;

	native_init(0xD01015C7316AE176);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline void AI_TASK_PED_SLIDE_TO_COORD(Ped ped, float x, float y, float z, float heading, float duration) /* 0xD04FE6765D990A06 */
{
	uint64_t val;

	native_init(0xD04FE6765D990A06);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);
	*(float*)(&val) = duration;
	native_push(val);

	native_call();
}

inline void AI_TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Any p0, float p1, float p2, float p3, float p4, float p5, Any p6) /* 0xD2A207EEBDF9889B */
{
	uint64_t val;

	native_init(0xD2A207EEBDF9889B);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);

	native_call();
}

inline void AI_TASK_PARACHUTE(Ped ped, BOOL p1) /* 0xD2F1C53C97EE81AB */
{
	uint64_t val;

	native_init(0xD2F1C53C97EE81AB);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AI_TASK_LEAVE_VEHICLE(Ped ped, Vehicle vehicle, int flags) /* 0xD3DBCE61A490BE02 */
{
	uint64_t val;

	native_init(0xD3DBCE61A490BE02);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(int*)(&val) = flags;
	native_push(val);

	native_call();
}

inline void AI_TASK_SEEK_COVER_TO_COVER_POINT(Any p0, Any p1, float p2, float p3, float p4, Any p5, BOOL p6) /* 0xD43D95C7A869447F */
{
	uint64_t val;

	native_init(0xD43D95C7A869447F);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_MOVE_BLEND_RATIO_RUNNING(Ped ped) /* 0xD4D8636C0199A939 */
{
	uint64_t val;

	native_init(0xD4D8636C0199A939);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(const char* route, int props) /* 0xD5002D78B7162E1B */
{
	uint64_t val;

	native_init(0xD5002D78B7162E1B);

	*(const char**)(&val) = route;
	native_push(val);
	*(int*)(&val) = props;
	native_push(val);

	native_call();
}

inline void AI__TASK_MOVE_NETWORK_ADVANCED(Ped ped, const char* p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8, float p9, BOOL p10, const char* animDict, int flags) /* 0xD5B35BEA41919ACB */
{
	uint64_t val;

	native_init(0xD5B35BEA41919ACB);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(Any*)(&val) = p8;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);
	*(BOOL*)(&val) = p10;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(int*)(&val) = flags;
	native_push(val);

	native_call();
}

inline void AI__SET_NETWORK_TASK_PARAM_FLOAT(Ped ped, const char* p1, float p2) /* 0xD5BB4025AE449A4E */
{
	uint64_t val;

	native_init(0xD5BB4025AE449A4E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);

	native_call();
}

inline Any AI_ADD_COVER_POINT(float posX, float posY, float posZ, float heading, BOOL p4, int p5, BOOL p6, BOOL p7) /* 0xD5C12A75C7B9497F */
{
	uint64_t val;

	native_init(0xD5C12A75C7B9497F);

	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(int*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);

	return *(Any*)(native_call());
}

inline void AI_TASK_GO_STRAIGHT_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float targetHeading, float distanceToSlide) /* 0xD76B57B44F1E6F8B */
{
	uint64_t val;

	native_init(0xD76B57B44F1E6F8B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(int*)(&val) = timeout;
	native_push(val);
	*(float*)(&val) = targetHeading;
	native_push(val);
	*(float*)(&val) = distanceToSlide;
	native_push(val);

	native_call();
}

inline void AI_SET_DRIVE_TASK_DRIVING_STYLE(Ped ped, int drivingStyle) /* 0xDACE1BE37D88AF67 */
{
	uint64_t val;

	native_init(0xDACE1BE37D88AF67);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = drivingStyle;
	native_push(val);

	native_call();
}

inline void AI_TASK_HELI_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float maxSpeed, float landingRadius, float targetHeading, int unk1, int unk2, Hash unk3, int landingFlags) /* 0xDAD029E187A2BEB4 */
{
	uint64_t val;

	native_init(0xDAD029E187A2BEB4);

	*(Ped*)(&val) = pilot;
	native_push(val);
	*(Vehicle*)(&val) = aircraft;
	native_push(val);
	*(Vehicle*)(&val) = targetVehicle;
	native_push(val);
	*(Ped*)(&val) = targetPed;
	native_push(val);
	*(float*)(&val) = destinationX;
	native_push(val);
	*(float*)(&val) = destinationY;
	native_push(val);
	*(float*)(&val) = destinationZ;
	native_push(val);
	*(int*)(&val) = missionFlag;
	native_push(val);
	*(float*)(&val) = maxSpeed;
	native_push(val);
	*(float*)(&val) = landingRadius;
	native_push(val);
	*(float*)(&val) = targetHeading;
	native_push(val);
	*(int*)(&val) = unk1;
	native_push(val);
	*(int*)(&val) = unk2;
	native_push(val);
	*(Hash*)(&val) = unk3;
	native_push(val);
	*(int*)(&val) = landingFlags;
	native_push(val);

	native_call();
}

inline void AI_REMOVE_ALL_COVER_BLOCKING_AREAS() /* 0xDB6708C0B46F56D8 */
{
	native_init(0xDB6708C0B46F56D8);
	native_call();
}

inline void AI_VEHICLE_WAYPOINT_PLAYBACK_RESUME(Any p0) /* 0xDC04FCAA7839D492 */
{
	uint64_t val;

	native_init(0xDC04FCAA7839D492);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL AI_CONTROL_MOUNTED_WEAPON(Ped ped) /* 0xDCFE42068FE0135A */
{
	uint64_t val;

	native_init(0xDCFE42068FE0135A);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_RESET_SCENARIO_GROUPS_ENABLED() /* 0xDD902D0349AFAD3A */
{
	native_init(0xDD902D0349AFAD3A);
	native_call();
}

inline BOOL AI_IS_PED_WALKING(Ped ped) /* 0xDE4C184B2B9B071A */
{
	uint64_t val;

	native_init(0xDE4C184B2B9B071A);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AI_IS_PED_IN_WRITHE(Ped ped) /* 0xDEB6D52126E7D640 */
{
	uint64_t val;

	native_init(0xDEB6D52126E7D640);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AI_IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Any p0) /* 0xE03B3F2D3DC59B64 */
{
	uint64_t val;

	native_init(0xE03B3F2D3DC59B64);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_WANDER_IN_AREA(Ped ped, float x, float y, float z, float radius, float minimalLength, float timeBetweenWalks) /* 0xE054346CA3A0F315 */
{
	uint64_t val;

	native_init(0xE054346CA3A0F315);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(float*)(&val) = minimalLength;
	native_push(val);
	*(float*)(&val) = timeBetweenWalks;
	native_push(val);

	native_call();
}

inline void AI_CLEAR_PED_TASKS(Ped ped) /* 0xE1EF3C1216AFF2CD */
{
	uint64_t val;

	native_init(0xE1EF3C1216AFF2CD);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_DRIVE_TO_COORD(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, Any p6, Hash vehicleModel, int drivingMode, float stopRange, float p10) /* 0xE2A2AA2F659D77A7 */
{
	uint64_t val;

	native_init(0xE2A2AA2F659D77A7);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);
	*(Hash*)(&val) = vehicleModel;
	native_push(val);
	*(int*)(&val) = drivingMode;
	native_push(val);
	*(float*)(&val) = stopRange;
	native_push(val);
	*(float*)(&val) = p10;
	native_push(val);

	native_call();
}

inline void AI_SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Ped ped, BOOL Toggle) /* 0xE361C5C71C431A4F */
{
	uint64_t val;

	native_init(0xE361C5C71C431A4F);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = Toggle;
	native_push(val);

	native_call();
}

inline void AI_TASK_GOTO_ENTITY_OFFSET(Ped ped, Any p1, Any p2, float x, float y, float z, int duration) /* 0xE39B4FF4FDEBDE27 */
{
	uint64_t val;

	native_init(0xE39B4FF4FDEBDE27);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_AIM_AT_PED(Ped ped, Ped target) /* 0xE41885592B08B097 */
{
	uint64_t val;

	native_init(0xE41885592B08B097);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = target;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_PED_STRAFING(Ped ped) /* 0xE45B7F222DE47E09 */
{
	uint64_t val;

	native_init(0xE45B7F222DE47E09);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_UPDATE_TASK_SWEEP_AIM_ENTITY(Ped ped, Entity entity) /* 0xE4973DBDBE6E44B3 */
{
	uint64_t val;

	native_init(0xE4973DBDBE6E44B3);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline void AI_SET_DRIVEBY_TASK_TARGET(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z) /* 0xE5B302114D8162EE */
{
	uint64_t val;

	native_init(0xE5B302114D8162EE);

	*(Ped*)(&val) = shootingPed;
	native_push(val);
	*(Ped*)(&val) = targetPed;
	native_push(val);
	*(Vehicle*)(&val) = targetVehicle;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void AI_TASK_STAY_IN_COVER(Ped ped) /* 0xE5DA8615A6180789 */
{
	uint64_t val;

	native_init(0xE5DA8615A6180789);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline float AI_GET_PED_WAYPOINT_DISTANCE(Ped ped) /* 0xE6A877C64CAF1BC5 */
{
	uint64_t val;

	native_init(0xE6A877C64CAF1BC5);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(float*)(native_call());
}

inline void AI__WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(Any p0, Any p1, BOOL p2, Any p3) /* 0xE70BA7B90F8390DC */
{
	uint64_t val;

	native_init(0xE70BA7B90F8390DC);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void AI_TASK_PAUSE(Ped ped, int time) /* 0xE73A266DB0CA9042 */
{
	uint64_t val;

	native_init(0xE73A266DB0CA9042);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = time;
	native_push(val);

	native_call();
}

inline Any AI_OPEN_SEQUENCE_TASK(Object* taskSequence) /* 0xE8854A4326B9E12B */
{
	uint64_t val;

	native_init(0xE8854A4326B9E12B);

	*(Object**)(&val) = taskSequence;
	native_push(val);

	return *(Any*)(native_call());
}

inline void AI_TASK_PLAY_ANIM(Ped ped, const char* animDictionary, const char* animationName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, BOOL lockX, BOOL lockY, BOOL lockZ) /* 0xEA47FE3719165B94 */
{
	uint64_t val;

	native_init(0xEA47FE3719165B94);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = animDictionary;
	native_push(val);
	*(const char**)(&val) = animationName;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(float*)(&val) = speedMultiplier;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(int*)(&val) = flag;
	native_push(val);
	*(float*)(&val) = playbackRate;
	native_push(val);
	*(BOOL*)(&val) = lockX;
	native_push(val);
	*(BOOL*)(&val) = lockY;
	native_push(val);
	*(BOOL*)(&val) = lockZ;
	native_push(val);

	native_call();
}

inline void AI_SET_SCENARIO_TYPE_ENABLED(const char* scenarioType, BOOL toggle) /* 0xEB47EC4E34FB7EE1 */
{
	uint64_t val;

	native_init(0xEB47EC4E34FB7EE1);

	*(const char**)(&val) = scenarioType;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void AI_TASK_SET_DECISION_MAKER(Ped p0, Hash p1) /* 0xEB8517DDA73720DA */
{
	uint64_t val;

	native_init(0xEB8517DDA73720DA);

	*(Ped*)(&val) = p0;
	native_push(val);
	*(Hash*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Any AI_SET_PED_WAYPOINT_ROUTE_OFFSET(Ped ped, float offsetX, float offsetY, float offsetZ) /* 0xED98E10B0AFCE4B4 */
{
	uint64_t val;

	native_init(0xED98E10B0AFCE4B4);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = offsetX;
	native_push(val);
	*(float*)(&val) = offsetY;
	native_push(val);
	*(float*)(&val) = offsetZ;
	native_push(val);

	return *(Any*)(native_call());
}

inline void AI_STOP_ANIM_PLAYBACK(Ped ped, int p1, BOOL p2) /* 0xEE08C992D238C5D1 */
{
	uint64_t val;

	native_init(0xEE08C992D238C5D1);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AI_TASK_SYNCHRONIZED_SCENE(Ped ped, int scene, const char* animDictionary, const char* animationName, float speed, float speedMultiplier, int headingFlag, int flag, float playbackRate, Any p9) /* 0xEEA929141F699854 */
{
	uint64_t val;

	native_init(0xEEA929141F699854);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = scene;
	native_push(val);
	*(const char**)(&val) = animDictionary;
	native_push(val);
	*(const char**)(&val) = animationName;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(float*)(&val) = speedMultiplier;
	native_push(val);
	*(int*)(&val) = headingFlag;
	native_push(val);
	*(int*)(&val) = flag;
	native_push(val);
	*(float*)(&val) = playbackRate;
	native_push(val);
	*(Any*)(&val) = p9;
	native_push(val);

	native_call();
}

inline void AI_TASK_VEHICLE_MISSION_COORS_TARGET(Ped ped, Vehicle vehicle, float x, float y, float z, int p5, int p6, int p7, float p8, float p9, BOOL p10) /* 0xF0AF20AA7731F8C3 */
{
	uint64_t val;

	native_init(0xF0AF20AA7731F8C3);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = p5;
	native_push(val);
	*(int*)(&val) = p6;
	native_push(val);
	*(int*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);
	*(BOOL*)(&val) = p10;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_MOVE_BLEND_RATIO_WALKING(Ped ped) /* 0xF133BBBE91E1691F */
{
	uint64_t val;

	native_init(0xF133BBBE91E1691F);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_COMBAT_PED(Ped ped, Ped targetPed, int p2, int p3) /* 0xF166E48407BAC484 */
{
	uint64_t val;

	native_init(0xF166E48407BAC484);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = targetPed;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void AI_SET_NEXT_DESIRED_MOVE_STATE(float p0) /* 0xF1B9F16E89E2C93A */
{
	uint64_t val;

	native_init(0xF1B9F16E89E2C93A);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AI_TASK_HANDS_UP(Ped ped, int duration, Ped facingPed, int p3, BOOL p4) /* 0xF2EAB31979A7F910 */
{
	uint64_t val;

	native_init(0xF2EAB31979A7F910);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(Ped*)(&val) = facingPed;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void AI_SET_PED_PATHS_WIDTH_PLANT(Ped ped, BOOL mayEnterWater) /* 0xF35425A4204367EC */
{
	uint64_t val;

	native_init(0xF35425A4204367EC);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = mayEnterWater;
	native_push(val);

	native_call();
}

inline void AI_TASK_ARREST_PED(Ped ped, Ped target) /* 0xF3B9A78A178572B1 */
{
	uint64_t val;

	native_init(0xF3B9A78A178572B1);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = target;
	native_push(val);

	native_call();
}

inline BOOL AI_IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Any p0) /* 0xF5134943EA29868C */
{
	uint64_t val;

	native_init(0xF5134943EA29868C);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AI_DOES_SCENARIO_GROUP_EXIST(const char* scenarioGroup) /* 0xF9034C136C9E00D3 */
{
	uint64_t val;

	native_init(0xF9034C136C9E00D3);

	*(const char**)(&val) = scenarioGroup;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AI_TASK_START_SCENARIO_AT_POSITION(Ped ped, const char* scenarioName, float x, float y, float z, float heading, int duration, BOOL sittingScenario, BOOL teleport) /* 0xFA4EFC79F69D4F07 */
{
	uint64_t val;

	native_init(0xFA4EFC79F69D4F07);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = scenarioName;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(BOOL*)(&val) = sittingScenario;
	native_push(val);
	*(BOOL*)(&val) = teleport;
	native_push(val);

	native_call();
}

inline void AI__TASK_VEHICLE_FOLLOW(Ped driver, Vehicle vehicle, Entity targetEntity, float speed, int drivingStyle, int minDistance) /* 0xFC545A9F0626E3B6 */
{
	uint64_t val;

	native_init(0xFC545A9F0626E3B6);

	*(Ped*)(&val) = driver;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(Entity*)(&val) = targetEntity;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(int*)(&val) = drivingStyle;
	native_push(val);
	*(int*)(&val) = minDistance;
	native_push(val);

	native_call();
}

inline void AI_REMOVE_WAYPOINT_RECORDING(const char* name) /* 0xFF1B8B4AA1C25DC8 */
{
	uint64_t val;

	native_init(0xFF1B8B4AA1C25DC8);

	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline float APP_APP_GET_FLOAT(const char* property) /* 0x1514FB24C02C2322 */
{
	uint64_t val;

	native_init(0x1514FB24C02C2322);

	*(const char**)(&val) = property;
	native_push(val);

	return *(float*)(native_call());
}

inline void APP_APP_SET_FLOAT(const char* property, float value) /* 0x25D7687C68E0DAA4 */
{
	uint64_t val;

	native_init(0x25D7687C68E0DAA4);

	*(const char**)(&val) = property;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline void APP_APP_SET_BLOCK(const char* blockName) /* 0x262AB456A3D21F93 */
{
	uint64_t val;

	native_init(0x262AB456A3D21F93);

	*(const char**)(&val) = blockName;
	native_push(val);

	native_call();
}

inline void APP_APP_SET_STRING(const char* property, const char* value) /* 0x3FF2FCEC4B7721B4 */
{
	uint64_t val;

	native_init(0x3FF2FCEC4B7721B4);

	*(const char**)(&val) = property;
	native_push(val);
	*(const char**)(&val) = value;
	native_push(val);

	native_call();
}

inline BOOL APP_APP_DELETE_APP_DATA(const char* appName) /* 0x44151AEA95C8A003 */
{
	uint64_t val;

	native_init(0x44151AEA95C8A003);

	*(const char**)(&val) = appName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void APP_APP_CLEAR_BLOCK() /* 0x5FE1DF3342DB7DBA */
{
	native_init(0x5FE1DF3342DB7DBA);
	native_call();
}

inline void APP_APP_SET_INT(const char* property, int value) /* 0x607E8E3D3E4F9611 */
{
	uint64_t val;

	native_init(0x607E8E3D3E4F9611);

	*(const char**)(&val) = property;
	native_push(val);
	*(int*)(&val) = value;
	native_push(val);

	native_call();
}

inline BOOL APP_APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT() /* 0x71EEE69745088DA0 */
{
	native_init(0x71EEE69745088DA0);
	return *(BOOL*)(native_call());
}

inline const char *APP_APP_GET_STRING(const char* property) /* 0x749B023950D2311C */
{
	uint64_t val;

	native_init(0x749B023950D2311C);

	*(const char**)(&val) = property;
	native_push(val);

	return *(const char**)(native_call());
}

inline Hash APP_APP_DATA_VALID() /* 0x846AA8E7D55EE5B6 */
{
	native_init(0x846AA8E7D55EE5B6);
	return *(Hash*)(native_call());
}

inline void APP_APP_SAVE_DATA() /* 0x95C5D356CDA6E85F */
{
	native_init(0x95C5D356CDA6E85F);
	native_call();
}

inline Any APP_APP_GET_DELETED_FILE_STATUS() /* 0xC9853A2BE3DED1A6 */
{
	native_init(0xC9853A2BE3DED1A6);
	return *(Any*)(native_call());
}

inline BOOL APP_APP_HAS_SYNCED_DATA(const char* appName) /* 0xCA52279A7271517F */
{
	uint64_t val;

	native_init(0xCA52279A7271517F);

	*(const char**)(&val) = appName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void APP_APP_SET_APP(const char* appName) /* 0xCFD0406ADAF90D2B */
{
	uint64_t val;

	native_init(0xCFD0406ADAF90D2B);

	*(const char**)(&val) = appName;
	native_push(val);

	native_call();
}

inline int* APP_APP_GET_INT(ScrHandle property) /* 0xD3A58A12C77D9D4B */
{
	uint64_t val;

	native_init(0xD3A58A12C77D9D4B);

	*(ScrHandle*)(&val) = property;
	native_push(val);

	return *(int**)(native_call());
}

inline void APP_APP_CLOSE_APP() /* 0xE41C65E07A5F05FC */
{
	native_init(0xE41C65E07A5F05FC);
	native_call();
}

inline void APP_APP_CLOSE_BLOCK() /* 0xE8E3FCF72EAC0EF8 */
{
	native_init(0xE8E3FCF72EAC0EF8);
	native_call();
}

inline BOOL AUDIO_START_AUDIO_SCENE(const char* scene) /* 0x013A80FC08F6E4F2 */
{
	uint64_t val;

	native_init(0x013A80FC08F6E4F2);

	*(const char**)(&val) = scene;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_0x0150B6FF25A9E2E5() /* 0x0150B6FF25A9E2E5 */
{
	native_init(0x0150B6FF25A9E2E5);
	native_call();
}

inline void AUDIO_0x01BB4D577D38BD9E(Any p0, float p1) /* 0x01BB4D577D38BD9E */
{
	uint64_t val;

	native_init(0x01BB4D577D38BD9E);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_IS_AMBIENT_ZONE_ENABLED(const char* ambientZone) /* 0x01E2817A479A7F9B */
{
	uint64_t val;

	native_init(0x01E2817A479A7F9B);

	*(const char**)(&val) = ambientZone;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Hash AUDIO_GET_VEHICLE_DEFAULT_HORN(Vehicle vehicle) /* 0x02165D55000219AC */
{
	uint64_t val;

	native_init(0x02165D55000219AC);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	return *(Hash*)(native_call());
}

inline BOOL AUDIO_PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(int SceneID, const char* audioName) /* 0x029FE7CD1B7E2E75 */
{
	uint64_t val;

	native_init(0x029FE7CD1B7E2E75);

	*(int*)(&val) = SceneID;
	native_push(val);
	*(const char**)(&val) = audioName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_0x02E93C796ABD3A97(BOOL p0) /* 0x02E93C796ABD3A97 */
{
	uint64_t val;

	native_init(0x02E93C796ABD3A97);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AUDIO_0x031ACB6ABA18C729(const char* radioStation, const char* p1) /* 0x031ACB6ABA18C729 */
{
	uint64_t val;

	native_init(0x031ACB6ABA18C729);

	*(const char**)(&val) = radioStation;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL AUDIO__IS_VEHICLE_RADIO_LOUD(Vehicle vehicle) /* 0x032A116663A4D5AC */
{
	uint64_t val;

	native_init(0x032A116663A4D5AC);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_START_ALARM(const char* alarmName, BOOL p2) /* 0x0355EF116C4C97B2 */
{
	uint64_t val;

	native_init(0x0355EF116C4C97B2);

	*(const char**)(&val) = alarmName;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AUDIO_0x044DBAD7A7FA2BE5(const char* p0, const char* p1) /* 0x044DBAD7A7FA2BE5 */
{
	uint64_t val;

	native_init(0x044DBAD7A7FA2BE5);

	*(const char**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_IS_PED_IN_CURRENT_CONVERSATION(Ped ped) /* 0x049E937F18F4020C */
{
	uint64_t val;

	native_init(0x049E937F18F4020C);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AUDIO_0x0626A247D2405330() /* 0x0626A247D2405330 */
{
	native_init(0x0626A247D2405330);
	return *(BOOL*)(native_call());
}

inline void AUDIO_0x062D5EAD4DA2FA6A() /* 0x062D5EAD4DA2FA6A */
{
	native_init(0x062D5EAD4DA2FA6A);
	native_call();
}

inline void AUDIO_0x06C0023BED16DD6B(Any p0, BOOL p1) /* 0x06C0023BED16DD6B */
{
	uint64_t val;

	native_init(0x06C0023BED16DD6B);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_0x0B568201DD99F0EB(BOOL p0) /* 0x0B568201DD99F0EB */
{
	uint64_t val;

	native_init(0x0B568201DD99F0EB);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AUDIO_RELEASE_MISSION_AUDIO_BANK() /* 0x0EC92A1BF0857187 */
{
	native_init(0x0EC92A1BF0857187);
	native_call();
}

inline BOOL AUDIO_0x109697E2FFBAC8A1() /* 0x109697E2FFBAC8A1 */
{
	native_init(0x109697E2FFBAC8A1);
	return *(BOOL*)(native_call());
}

inline void AUDIO_SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(BOOL Toggle) /* 0x1098355A16064BB3 */
{
	uint64_t val;

	native_init(0x1098355A16064BB3);

	*(BOOL*)(&val) = Toggle;
	native_push(val);

	native_call();
}

inline void AUDIO_CLEAR_AMBIENT_ZONE_LIST_STATE(Any* p0, BOOL p1) /* 0x120C48C614909FA4 */
{
	uint64_t val;

	native_init(0x120C48C614909FA4);

	*(Any**)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_0x12561FCBB62D5B9C(int p0) /* 0x12561FCBB62D5B9C */
{
	uint64_t val;

	native_init(0x12561FCBB62D5B9C);

	*(int*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AUDIO_OVERRIDE_TREVOR_RAGE(const char* p0) /* 0x13AD665062541A7E */
{
	uint64_t val;

	native_init(0x13AD665062541A7E);

	*(const char**)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AUDIO_0x149AEE66F0CB3A99(float p0, float p1) /* 0x149AEE66F0CB3A99 */
{
	uint64_t val;

	native_init(0x149AEE66F0CB3A99);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO__DYNAMIC_MIXER_RELATED_FN(Entity p0, const char* p1, float p2) /* 0x153973AB99FE8980 */
{
	uint64_t val;

	native_init(0x153973AB99FE8980);

	*(Entity*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AUDIO_0x1654F24A88A8E3FE(const char* radioStation) /* 0x1654F24A88A8E3FE */
{
	uint64_t val;

	native_init(0x1654F24A88A8E3FE);

	*(const char**)(&val) = radioStation;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_IS_SCRIPTED_CONVERSATION_ONGOING() /* 0x16754C556D2EDE3D */
{
	native_init(0x16754C556D2EDE3D);
	return *(BOOL*)(native_call());
}

inline void AUDIO_0x18EB48CFC41F2EA0(Any p0, float p1) /* 0x18EB48CFC41F2EA0 */
{
	uint64_t val;

	native_init(0x18EB48CFC41F2EA0);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_IS_MISSION_COMPLETE_PLAYING() /* 0x19A30C23F5827F8A */
{
	native_init(0x19A30C23F5827F8A);
	return *(BOOL*)(native_call());
}

inline void AUDIO_0x19AF7ED9B9D23058() /* 0x19AF7ED9B9D23058 */
{
	native_init(0x19AF7ED9B9D23058);
	native_call();
}

inline void AUDIO_SET_USER_RADIO_CONTROL_ENABLED(BOOL toggle) /* 0x19F21E63AE6EAE4E */
{
	uint64_t val;

	native_init(0x19F21E63AE6EAE4E);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void AUDIO_BLIP_SIREN(Vehicle vehicle) /* 0x1B9025BDA76822B6 */
{
	uint64_t val;

	native_init(0x1B9025BDA76822B6);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_VEH_RADIO_STATION(Vehicle vehicle, const char* radioStation) /* 0x1B9C0099CB942AC6 */
{
	uint64_t val;

	native_init(0x1B9C0099CB942AC6);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(const char**)(&val) = radioStation;
	native_push(val);

	native_call();
}

inline void AUDIO_0x1C073274E065C6D2(Any p0, BOOL p1) /* 0x1C073274E065C6D2 */
{
	uint64_t val;

	native_init(0x1C073274E065C6D2);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_AMBIENT_ZONE_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) /* 0x1D6650420CEC9D3B */
{
	uint64_t val;

	native_init(0x1D6650420CEC9D3B);

	*(const char**)(&val) = ambientZone;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_PREPARE_MUSIC_EVENT(const char* eventName) /* 0x1E5185B72EF5158A */
{
	uint64_t val;

	native_init(0x1E5185B72EF5158A);

	*(const char**)(&val) = eventName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AUDIO_IS_PED_RINGTONE_PLAYING(Ped ped) /* 0x1E8E5E20937E3137 */
{
	uint64_t val;

	native_init(0x1E8E5E20937E3137);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AUDIO_LOAD_STREAM(const char* streamName, const char* soundSet) /* 0x1F1F957154EC51DF */
{
	uint64_t val;

	native_init(0x1F1F957154EC51DF);

	*(const char**)(&val) = streamName;
	native_push(val);
	*(const char**)(&val) = soundSet;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_SET_SIREN_WITH_NO_DRIVER(Vehicle vehicle, BOOL toggle) /* 0x1FEF0683B96EBCF2 */
{
	uint64_t val;

	native_init(0x1FEF0683B96EBCF2);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void AUDIO_SPECIAL_FRONTEND_EQUAL(float x, float y, float z) /* 0x21442F412E8DE56B */
{
	uint64_t val;

	native_init(0x21442F412E8DE56B);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void AUDIO_CLEAR_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1) /* 0x218DD44AAAC964FF */
{
	uint64_t val;

	native_init(0x218DD44AAAC964FF);

	*(const char**)(&val) = zoneName;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_IS_ALARM_PLAYING(const char* alarmName) /* 0x226435CB96CCFC8C */
{
	uint64_t val;

	native_init(0x226435CB96CCFC8C);

	*(const char**)(&val) = alarmName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_START_PRELOADED_CONVERSATION() /* 0x23641AFE870AF385 */
{
	native_init(0x23641AFE870AF385);
	native_call();
}

inline void AUDIO_START_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) /* 0x252E5F915EABB675 */
{
	uint64_t val;

	native_init(0x252E5F915EABB675);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_0x2BE4BC731D039D5A(Any p0, BOOL p1) /* 0x2BE4BC731D039D5A */
{
	uint64_t val;

	native_init(0x2BE4BC731D039D5A);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_0x2C96CDB04FCA358E(float p0) /* 0x2C96CDB04FCA358E */
{
	uint64_t val;

	native_init(0x2C96CDB04FCA358E);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int AUDIO_GET_NETWORK_ID_FROM_SOUND_ID(int soundId) /* 0x2DE3F0A134FFBC0D */
{
	uint64_t val;

	native_init(0x2DE3F0A134FFBC0D);

	*(int*)(&val) = soundId;
	native_push(val);

	return *(int*)(native_call());
}

inline void AUDIO_STOP_ALL_ALARMS(BOOL stop) /* 0x2F794A877ADD4C92 */
{
	uint64_t val;

	native_init(0x2F794A877ADD4C92);

	*(BOOL*)(&val) = stop;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_REQUEST_SCRIPT_AUDIO_BANK(const char* p0, BOOL p1) /* 0x2F844A8B08D76685 */
{
	uint64_t val;

	native_init(0x2F844A8B08D76685);

	*(const char**)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_SET_VARIABLE_ON_STREAM(const char* p0, float p1) /* 0x2F9D3834AEB9EF79 */
{
	uint64_t val;

	native_init(0x2F9D3834AEB9EF79);

	*(const char**)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_0x33E3C6C6F2F0B506(Any p0, float p1, float p2, float p3) /* 0x33E3C6C6F2F0B506 */
{
	uint64_t val;

	native_init(0x33E3C6C6F2F0B506);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void AUDIO_FREEZE_RADIO_STATION(const char* radioStation) /* 0x344F393B027E38C3 */
{
	uint64_t val;

	native_init(0x344F393B027E38C3);

	*(const char**)(&val) = radioStation;
	native_push(val);

	native_call();
}

inline void AUDIO__PLAY_AMBIENT_SPEECH_WITH_VOICE(Ped p0, const char* speechName, const char* voiceName, const char* speechParam, BOOL p4) /* 0x3523634255FC3318 */
{
	uint64_t val;

	native_init(0x3523634255FC3318);

	*(Ped*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = speechName;
	native_push(val);
	*(const char**)(&val) = voiceName;
	native_push(val);
	*(const char**)(&val) = speechParam;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void AUDIO_RELEASE_SOUND_ID(int soundId) /* 0x353FC880830B88FA */
{
	uint64_t val;

	native_init(0x353FC880830B88FA);

	*(int*)(&val) = soundId;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_AGGRESSIVE_HORNS(BOOL toggle) /* 0x395BF71085D1B1D9 */
{
	uint64_t val;

	native_init(0x395BF71085D1B1D9);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_STATIC_EMITTER_ENABLED(const char* emitterName, BOOL toggle) /* 0x399D2D3B33F1B8EB */
{
	uint64_t val;

	native_init(0x399D2D3B33F1B8EB);

	*(const char**)(&val) = emitterName;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_0x3A48AB4445D499BE() /* 0x3A48AB4445D499BE */
{
	native_init(0x3A48AB4445D499BE);
	return *(BOOL*)(native_call());
}

inline void AUDIO_PLAY_VEHICLE_DOOR_OPEN_SOUND(Vehicle vehicle, int p1) /* 0x3A539D52857EA82D */
{
	uint64_t val;

	native_init(0x3A539D52857EA82D);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_PRELOAD_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) /* 0x3B3CAD6166916D87 */
{
	uint64_t val;

	native_init(0x3B3CAD6166916D87);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_CUTSCENE_AUDIO_OVERRIDE(const char* p0) /* 0x3B4BF5F0859204D9 */
{
	uint64_t val;

	native_init(0x3B4BF5F0859204D9);

	*(const char**)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_VEHICLE_RADIO_ENABLED(Vehicle vehicle, BOOL toggle) /* 0x3B988190C0AA6C0B */
{
	uint64_t val;

	native_init(0x3B988190C0AA6C0B);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_GPS_ACTIVE(BOOL active) /* 0x3BD3F52BA9B1E4E8 */
{
	uint64_t val;

	native_init(0x3BD3F52BA9B1E4E8);

	*(BOOL*)(&val) = active;
	native_push(val);

	native_call();
}

inline void AUDIO_OVERRIDE_VEH_HORN(Vehicle vehicle, BOOL mute, int p2) /* 0x3CDC1E622CCE0356 */
{
	uint64_t val;

	native_init(0x3CDC1E622CCE0356);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(BOOL*)(&val) = mute;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AUDIO__RESET_AMBIENT_VOICE(Ped ped) /* 0x40CF0D12D142A9E8 */
{
	uint64_t val;

	native_init(0x40CF0D12D142A9E8);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline int AUDIO_GET_SOUND_ID() /* 0x430386FE9BF80B45 */
{
	native_init(0x430386FE9BF80B45);
	return *(int*)(native_call());
}

inline void AUDIO_0x43FA0DFC5DF87815(Vehicle vehicle, BOOL p1) /* 0x43FA0DFC5DF87815 */
{
	uint64_t val;

	native_init(0x43FA0DFC5DF87815);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Any AUDIO_GET_CURRENT_SCRIPTED_CONVERSATION_LINE() /* 0x480357EE890C295A */
{
	native_init(0x480357EE890C295A);
	return *(Any*)(native_call());
}

inline BOOL AUDIO__CAN_PED_SPEAK(Ped ped, const char* speechName, BOOL unk) /* 0x49B99BF3FDA89A7A */
{
	uint64_t val;

	native_init(0x49B99BF3FDA89A7A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = speechName;
	native_push(val);
	*(BOOL*)(&val) = unk;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_SET_VEHICLE_BOOST_ACTIVE(Vehicle vehicle, BOOL toggle) /* 0x4A04DE7CAB2739A1 */
{
	uint64_t val;

	native_init(0x4A04DE7CAB2739A1);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void AUDIO__SET_PED_TALK(Ped ped) /* 0x4ADA3F19BE4A6047 */
{
	uint64_t val;

	native_init(0x4ADA3F19BE4A6047);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void AUDIO_0x4E404A9361F75BB2(const char* radioStation, const char* p1, BOOL p2) /* 0x4E404A9361F75BB2 */
{
	uint64_t val;

	native_init(0x4E404A9361F75BB2);

	*(const char**)(&val) = radioStation;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline int AUDIO_GET_STREAM_PLAY_TIME() /* 0x4E72BBDBCA58A3DB */
{
	native_init(0x4E72BBDBCA58A3DB);
	return *(int*)(native_call());
}

inline void AUDIO__FORCE_VEHICLE_ENGINE_AUDIO(Vehicle vehicle, const char* audioName) /* 0x4F0C413926060B38 */
{
	uint64_t val;

	native_init(0x4F0C413926060B38);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(const char**)(&val) = audioName;
	native_push(val);

	native_call();
}

inline int AUDIO_GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() /* 0x50B196FC9ED6545B */
{
	native_init(0x50B196FC9ED6545B);
	return *(int*)(native_call());
}

inline BOOL AUDIO_0x544810ED9DB6BBE6() /* 0x544810ED9DB6BBE6 */
{
	native_init(0x544810ED9DB6BBE6);
	return *(BOOL*)(native_call());
}

inline void AUDIO__FORCE_AMBIENT_SIREN(BOOL value) /* 0x552369F549563AD5 */
{
	uint64_t val;

	native_init(0x552369F549563AD5);

	*(BOOL*)(&val) = value;
	native_push(val);

	native_call();
}

inline void AUDIO_0x58BB377BEC7CD5F4(BOOL p0, BOOL p1) /* 0x58BB377BEC7CD5F4 */
{
	uint64_t val;

	native_init(0x58BB377BEC7CD5F4);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_PLAY_STREAM_FRONTEND() /* 0x58FCE43488F9F5F4 */
{
	native_init(0x58FCE43488F9F5F4);
	native_call();
}

inline BOOL AUDIO_LOAD_STREAM_WITH_START_OFFSET(const char* streamName, int startOffset, const char* soundSet) /* 0x59C16B79F53B3712 */
{
	uint64_t val;

	native_init(0x59C16B79F53B3712);

	*(const char**)(&val) = streamName;
	native_push(val);
	*(int*)(&val) = startOffset;
	native_push(val);
	*(const char**)(&val) = soundSet;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_0x59E7B488451F4D3A(Any p0, float p1) /* 0x59E7B488451F4D3A */
{
	uint64_t val;

	native_init(0x59E7B488451F4D3A);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_CANCEL_MUSIC_EVENT(const char* eventName) /* 0x5B17A90291133DA5 */
{
	uint64_t val;

	native_init(0x5B17A90291133DA5);

	*(const char**)(&val) = eventName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AUDIO_0x5B50ABB1FE3746F4() /* 0x5B50ABB1FE3746F4 */
{
	native_init(0x5B50ABB1FE3746F4);
	return *(BOOL*)(native_call());
}

inline BOOL AUDIO_0x5DB8010EE71FDEF2(Vehicle vehicle) /* 0x5DB8010EE71FDEF2 */
{
	uint64_t val;

	native_init(0x5DB8010EE71FDEF2);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AUDIO__IS_PLAYER_VEHICLE_RADIO_ENABLED() /* 0x5F43D83FD6738741 */
{
	native_init(0x5F43D83FD6738741);
	return *(BOOL*)(native_call());
}

inline void AUDIO_PRELOAD_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) /* 0x6004BCB0E226AAEA */
{
	uint64_t val;

	native_init(0x6004BCB0E226AAEA);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_0x61631F5DF50D1C34(BOOL p0) /* 0x61631F5DF50D1C34 */
{
	uint64_t val;

	native_init(0x61631F5DF50D1C34);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AUDIO_PLAY_VEHICLE_DOOR_CLOSE_SOUND(Vehicle vehicle, int p1) /* 0x62A456AA4769EF34 */
{
	uint64_t val;

	native_init(0x62A456AA4769EF34);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_RELEASE_AMBIENT_AUDIO_BANK() /* 0x65475A218FFAA93D */
{
	native_init(0x65475A218FFAA93D);
	native_call();
}

inline int AUDIO_GET_NUMBER_OF_PASSENGER_VOICE_VARIATIONS(Any p0) /* 0x66E49BF55B4B1874 */
{
	uint64_t val;

	native_init(0x66E49BF55B4B1874);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline void AUDIO_PLAY_SOUND_FRONTEND(int soundId, const char* audioName, const char* audioRef, BOOL p3) /* 0x67C540AA08E4A6F5 */
{
	uint64_t val;

	native_init(0x67C540AA08E4A6F5);

	*(int*)(&val) = soundId;
	native_push(val);
	*(const char**)(&val) = audioName;
	native_push(val);
	*(const char**)(&val) = audioRef;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void AUDIO_START_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) /* 0x6B17C62C9635D2DC */
{
	uint64_t val;

	native_init(0x6B17C62C9635D2DC);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void AUDIO_STOP_PED_RINGTONE(Ped ped) /* 0x6C5AE23EFA885092 */
{
	uint64_t val;

	native_init(0x6C5AE23EFA885092);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_AMBIENT_VOICE_NAME(Ped ped, const char* name) /* 0x6C8065A3B780185B */
{
	uint64_t val;

	native_init(0x6C8065A3B780185B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_IS_GAME_IN_CONTROL_OF_MUSIC() /* 0x6D28DC1671E334FD */
{
	native_init(0x6D28DC1671E334FD);
	return *(BOOL*)(native_call());
}

inline void AUDIO_SKIP_RADIO_FORWARD() /* 0x6DDBBDD98E2E9C25 */
{
	native_init(0x6DDBBDD98E2E9C25);
	native_call();
}

inline BOOL AUDIO_0x6F259F82D873B8B8() /* 0x6F259F82D873B8B8 */
{
	native_init(0x6F259F82D873B8B8);
	return *(BOOL*)(native_call());
}

inline void AUDIO_0x6FDDAD856E36988A(Any p0, BOOL p1) /* 0x6FDDAD856E36988A */
{
	uint64_t val;

	native_init(0x6FDDAD856E36988A);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_TRIGGER_MUSIC_EVENT(const char* eventName) /* 0x706D57B0F50DA710 */
{
	uint64_t val;

	native_init(0x706D57B0F50DA710);

	*(const char**)(&val) = eventName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_0x70B8EC8FC108A634(BOOL p0, Any p1) /* 0x70B8EC8FC108A634 */
{
	uint64_t val;

	native_init(0x70B8EC8FC108A634);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_IS_ANY_SPEECH_PLAYING(Ped ped) /* 0x729072355FA39EC9 */
{
	uint64_t val;

	native_init(0x729072355FA39EC9);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_0x733ADF241531E5C2(const char* name, float p1) /* 0x733ADF241531E5C2 */
{
	uint64_t val;

	native_init(0x733ADF241531E5C2);

	*(const char**)(&val) = name;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_REQUEST_MISSION_AUDIO_BANK(const char* p0, BOOL p1) /* 0x7345BDD95E62E0F2 */
{
	uint64_t val;

	native_init(0x7345BDD95E62E0F2);

	*(const char**)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AUDIO_IS_MOBILE_PHONE_CALL_ONGOING() /* 0x7497D2CE2C30D24C */
{
	native_init(0x7497D2CE2C30D24C);
	return *(BOOL*)(native_call());
}

inline int AUDIO_GET_SOUND_ID_FROM_NETWORK_ID(int netId) /* 0x75262FD12D0A1C84 */
{
	uint64_t val;

	native_init(0x75262FD12D0A1C84);

	*(int*)(&val) = netId;
	native_push(val);

	return *(int*)(native_call());
}

inline void AUDIO_0x75773E11BA459E90(Any p0, BOOL p1) /* 0x75773E11BA459E90 */
{
	uint64_t val;

	native_init(0x75773E11BA459E90);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_HORN_ENABLED(Vehicle vehicle, BOOL toggle) /* 0x76D683C108594D0E */
{
	uint64_t val;

	native_init(0x76D683C108594D0E);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void AUDIO_0x774BD811F656A122(const char* radioStation, BOOL p1) /* 0x774BD811F656A122 */
{
	uint64_t val;

	native_init(0x774BD811F656A122);

	*(const char**)(&val) = radioStation;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_RELEASE_NAMED_SCRIPT_AUDIO_BANK(const char* audioBank) /* 0x77ED170667F50170 */
{
	uint64_t val;

	native_init(0x77ED170667F50170);

	*(const char**)(&val) = audioBank;
	native_push(val);

	native_call();
}

inline void AUDIO_RELEASE_SCRIPT_AUDIO_BANK() /* 0x7A2D8AD0A9EB9C3F */
{
	native_init(0x7A2D8AD0A9EB9C3F);
	native_call();
}

inline void AUDIO__SET_PED_MUTE(Ped ped) /* 0x7A73D05A607734C7 */
{
	uint64_t val;

	native_init(0x7A73D05A607734C7);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void AUDIO_0x7CDC8C3B89F661B3(Ped playerPed, Hash p1) /* 0x7CDC8C3B89F661B3 */
{
	uint64_t val;

	native_init(0x7CDC8C3B89F661B3);

	*(Ped*)(&val) = playerPed;
	native_push(val);
	*(Hash*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_PLAY_SOUND(Player soundId, const char* audioName, const char* audioRef, BOOL p3, Any p4, BOOL p5) /* 0x7FF4944CC209192D */
{
	uint64_t val;

	native_init(0x7FF4944CC209192D);

	*(Player*)(&val) = soundId;
	native_push(val);
	*(const char**)(&val) = audioName;
	native_push(val);
	*(const char**)(&val) = audioRef;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline void AUDIO_0x806058BBDC136E06() /* 0x806058BBDC136E06 */
{
	native_init(0x806058BBDC136E06);
	native_call();
}

inline BOOL AUDIO_AUDIO_IS_SCRIPTED_MUSIC_PLAYING() /* 0x845FFC3A4FEEFA3E */
{
	native_init(0x845FFC3A4FEEFA3E);
	return *(BOOL*)(native_call());
}

inline void AUDIO_PAUSE_SCRIPTED_CONVERSATION(BOOL p0) /* 0x8530AD776CD72B12 */
{
	uint64_t val;

	native_init(0x8530AD776CD72B12);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_INITIAL_PLAYER_STATION(const char* radioStation) /* 0x88795F13FACDA88D */
{
	uint64_t val;

	native_init(0x88795F13FACDA88D);

	*(const char**)(&val) = radioStation;
	native_push(val);

	native_call();
}

inline void AUDIO_PLAY_STREAM_FROM_PED(Ped ped) /* 0x89049DD63C08B5D1 */
{
	uint64_t val;

	native_init(0x89049DD63C08B5D1);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void AUDIO_0x892B6AB8F33606F5(Any p0, Any p1) /* 0x892B6AB8F33606F5 */
{
	uint64_t val;

	native_init(0x892B6AB8F33606F5);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_0x8A694D7A68F8DC38(Ped p0, const char* p1, const char* p2) /* 0x8A694D7A68F8DC38 */
{
	uint64_t val;

	native_init(0x8A694D7A68F8DC38);

	*(Ped*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_PLAY_SYNCHRONIZED_AUDIO_EVENT(int SceneID) /* 0x8B2FD4560E55DD2D */
{
	uint64_t val;

	native_init(0x8B2FD4560E55DD2D);

	*(int*)(&val) = SceneID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_0x8BF907833BE275DE(float p0, float p1) /* 0x8BF907833BE275DE */
{
	uint64_t val;

	native_init(0x8BF907833BE275DE);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline int AUDIO_FIND_RADIO_STATION_INDEX(int station) /* 0x8D67489793FF428B */
{
	uint64_t val;

	native_init(0x8D67489793FF428B);

	*(int*)(&val) = station;
	native_push(val);

	return *(int*)(native_call());
}

inline void AUDIO_PLAY_SOUND_FROM_COORD(int soundId, const char* audioName, float x, float y, float z, const char* audioRef, BOOL p6, int range, BOOL p8) /* 0x8D8686B622B88120 */
{
	uint64_t val;

	native_init(0x8D8686B622B88120);

	*(int*)(&val) = soundId;
	native_push(val);
	*(const char**)(&val) = audioName;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(const char**)(&val) = audioRef;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(int*)(&val) = range;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);

	native_call();
}

inline void AUDIO__PLAY_AMBIENT_SPEECH1(Ped ped, const char* speechName, const char* speechParam) /* 0x8E04FEDD28D42462 */
{
	uint64_t val;

	native_init(0x8E04FEDD28D42462);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = speechName;
	native_push(val);
	*(const char**)(&val) = speechParam;
	native_push(val);

	native_call();
}

inline Any AUDIO_HINT_AMBIENT_AUDIO_BANK(Any p0, Any p1) /* 0x8F8C0E370AE62F5C */
{
	uint64_t val;

	native_init(0x8F8C0E370AE62F5C);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL AUDIO_IS_AMBIENT_SPEECH_PLAYING(Ped p0) /* 0x9072C8B49907BFAD */
{
	uint64_t val;

	native_init(0x9072C8B49907BFAD);

	*(Ped*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AUDIO_STOP_SYNCHRONIZED_AUDIO_EVENT(int SceneID) /* 0x92D6A88E64A94430 */
{
	uint64_t val;

	native_init(0x92D6A88E64A94430);

	*(int*)(&val) = SceneID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AUDIO_IS_AMBIENT_SPEECH_DISABLED(Ped ped) /* 0x932C2D096A2C3FFF */
{
	uint64_t val;

	native_init(0x932C2D096A2C3FFF);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO__SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME(const char* p0, Entity p1) /* 0x950A154B8DAB6185 */
{
	uint64_t val;

	native_init(0x950A154B8DAB6185);

	*(const char**)(&val) = p0;
	native_push(val);
	*(Entity*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_PED_IS_DRUNK(Ped ped, BOOL toggle) /* 0x95D2D383D5396B8A */
{
	uint64_t val;

	native_init(0x95D2D383D5396B8A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void AUDIO_ADD_PED_TO_CONVERSATION(int pedIndex, Ped ped, const char* name) /* 0x95D9F4BC443956E7 */
{
	uint64_t val;

	native_init(0x95D9F4BC443956E7);

	*(int*)(&val) = pedIndex;
	native_push(val);
	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline void AUDIO_SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() /* 0x9663FE6B7A61EB00 */
{
	native_init(0x9663FE6B7A61EB00);
	native_call();
}

inline void AUDIO_SET_AMBIENT_ZONE_LIST_STATE(const char* p0, BOOL p1, BOOL p2) /* 0x9748FA4DE50CCE3E */
{
	uint64_t val;

	native_init(0x9748FA4DE50CCE3E);

	*(const char**)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AUDIO_0x9AC92EED5E4793AB() /* 0x9AC92EED5E4793AB */
{
	native_init(0x9AC92EED5E4793AB);
	native_call();
}

inline void AUDIO_RESTART_SCRIPTED_CONVERSATION() /* 0x9AEB285D1818C9AC */
{
	native_init(0x9AEB285D1818C9AC);
	native_call();
}

inline void AUDIO__SOUND_VEHICLE_HORN_THIS_FRAME(Vehicle vehicle) /* 0x9C11908013EA4715 */
{
	uint64_t val;

	native_init(0x9C11908013EA4715);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	native_call();
}

inline void AUDIO_0x9D3AF56E94C9AE98(Any p0, float p1) /* 0x9D3AF56E94C9AE98 */
{
	uint64_t val;

	native_init(0x9D3AF56E94C9AE98);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_STOP_PED_SPEAKING(Ped ped, BOOL speaking) /* 0x9D64D7405520E3D3 */
{
	uint64_t val;

	native_init(0x9D64D7405520E3D3);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = speaking;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_IS_HORN_ACTIVE(Vehicle vehicle) /* 0x9D6BFC12B05C6121 */
{
	uint64_t val;

	native_init(0x9D6BFC12B05C6121);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AUDIO_PREPARE_ALARM(const char* alarmName) /* 0x9D74AE343DB65533 */
{
	uint64_t val;

	native_init(0x9D74AE343DB65533);

	*(const char**)(&val) = alarmName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_INTERRUPT_CONVERSATION(Any p0, Any* p1, Any* p2) /* 0xA018A12E5C5C2FA6 */
{
	uint64_t val;

	native_init(0xA018A12E5C5C2FA6);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);

	native_call();
}

inline Any AUDIO_0xA097AB275061FB21() /* 0xA097AB275061FB21 */
{
	native_init(0xA097AB275061FB21);
	return *(Any*)(native_call());
}

inline BOOL AUDIO_IS_RADIO_RETUNING() /* 0xA151A7394A214E65 */
{
	native_init(0xA151A7394A214E65);
	return *(BOOL*)(native_call());
}

inline void AUDIO_STOP_ALARM(const char* alarmName, BOOL toggle) /* 0xA1CADDCD98415A41 */
{
	uint64_t val;

	native_init(0xA1CADDCD98415A41);

	*(const char**)(&val) = alarmName;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void AUDIO_STOP_SOUND(int soundId) /* 0xA3B0C41BA5CC0BB5 */
{
	uint64_t val;

	native_init(0xA3B0C41BA5CC0BB5);

	*(int*)(&val) = soundId;
	native_push(val);

	native_call();
}

inline void AUDIO_STOP_STREAM() /* 0xA4718A1419D18151 */
{
	native_init(0xA4718A1419D18151);
	native_call();
}

inline void AUDIO_0xA5342D390CDA41D6(Any p0, BOOL p1) /* 0xA5342D390CDA41D6 */
{
	uint64_t val;

	native_init(0xA5342D390CDA41D6);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Any AUDIO_GET_PLAYER_RADIO_STATION_GENRE() /* 0xA571991A7FE6CCEB */
{
	native_init(0xA571991A7FE6CCEB);
	return *(Any*)(native_call());
}

inline void AUDIO_0xA5F377B175A699C5(Any p0) /* 0xA5F377B175A699C5 */
{
	uint64_t val;

	native_init(0xA5F377B175A699C5);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_RADIO_TO_STATION_INDEX(int radioStation) /* 0xA619B168B8A8570F */
{
	uint64_t val;

	native_init(0xA619B168B8A8570F);

	*(int*)(&val) = radioStation;
	native_push(val);

	native_call();
}

inline void AUDIO_UNREGISTER_SCRIPT_WITH_AUDIO() /* 0xA8638BE228D4751A */
{
	native_init(0xA8638BE228D4751A);
	native_call();
}

inline void AUDIO_DISABLE_PED_PAIN_AUDIO(Ped ped, BOOL toggle) /* 0xA9A41C1E940FB0E8 */
{
	uint64_t val;

	native_init(0xA9A41C1E940FB0E8);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Any AUDIO_0xAA19F5572C38B564(Any* p0) /* 0xAA19F5572C38B564 */
{
	uint64_t val;

	native_init(0xAA19F5572C38B564);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline Hash AUDIO__GET_VEHICLE_HORN_HASH(Vehicle vehicle) /* 0xACB5DCCA1EC76840 */
{
	uint64_t val;

	native_init(0xACB5DCCA1EC76840);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	return *(Hash*)(native_call());
}

inline void AUDIO_SET_EMITTER_RADIO_STATION(const char* emitterName, const char* radioStation) /* 0xACF57305B12AF907 */
{
	uint64_t val;

	native_init(0xACF57305B12AF907);

	*(const char**)(&val) = emitterName;
	native_push(val);
	*(const char**)(&val) = radioStation;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_VARIABLE_ON_SOUND(int soundId, const char* variableName, float value) /* 0xAD6B3148A78AE9B6 */
{
	uint64_t val;

	native_init(0xAD6B3148A78AE9B6);

	*(int*)(&val) = soundId;
	native_push(val);
	*(const char**)(&val) = variableName;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline void AUDIO_PLAY_MISSION_COMPLETE_AUDIO(const char* audioName) /* 0xB138AAB8A70D3C69 */
{
	uint64_t val;

	native_init(0xB138AAB8A70D3C69);

	*(const char**)(&val) = audioName;
	native_push(val);

	native_call();
}

inline void AUDIO_UNLOCK_MISSION_NEWS_STORY(int newsStory) /* 0xB165AB7C248B2DC1 */
{
	uint64_t val;

	native_init(0xB165AB7C248B2DC1);

	*(int*)(&val) = newsStory;
	native_push(val);

	native_call();
}

inline const char *AUDIO_GET_RADIO_STATION_NAME(int radioStation) /* 0xB28ECA15046CA8B9 */
{
	uint64_t val;

	native_init(0xB28ECA15046CA8B9);

	*(int*)(&val) = radioStation;
	native_push(val);

	return *(const char**)(native_call());
}

inline void AUDIO_CLEAR_ALL_BROKEN_GLASS() /* 0xB32209EFFDC04913 */
{
	native_init(0xB32209EFFDC04913);
	native_call();
}

inline BOOL AUDIO_IS_MOBILE_PHONE_RADIO_ACTIVE() /* 0xB35CE999E8EF317E */
{
	native_init(0xB35CE999E8EF317E);
	return *(BOOL*)(native_call());
}

inline void AUDIO_SET_RADIO_TRACK(const char* radioStation, const char* radioTrack) /* 0xB39786F201FEE30B */
{
	uint64_t val;

	native_init(0xB39786F201FEE30B);

	*(const char**)(&val) = radioStation;
	native_push(val);
	*(const char**)(&val) = radioTrack;
	native_push(val);

	native_call();
}

inline void AUDIO_0xB4BBFD9CD8B3922B(const char* p0) /* 0xB4BBFD9CD8B3922B */
{
	uint64_t val;

	native_init(0xB4BBFD9CD8B3922B);

	*(const char**)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AUDIO__DISABLE_POLICE_REPORTS() /* 0xB4F90FAF7670B16F */
{
	native_init(0xB4F90FAF7670B16F);
	native_call();
}

inline void AUDIO_0xB542DE8C3D1CB210(BOOL p0) /* 0xB542DE8C3D1CB210 */
{
	uint64_t val;

	native_init(0xB542DE8C3D1CB210);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_IS_AUDIO_SCENE_ACTIVE(const char* scene) /* 0xB65B60556E2A9225 */
{
	uint64_t val;

	native_init(0xB65B60556E2A9225);

	*(const char**)(&val) = scene;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_SET_MICROPHONE_POSITION(BOOL p0, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) /* 0xB6AE90EDDE95C762 */
{
	uint64_t val;

	native_init(0xB6AE90EDDE95C762);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(float*)(&val) = x3;
	native_push(val);
	*(float*)(&val) = y3;
	native_push(val);
	*(float*)(&val) = z3;
	native_push(val);

	native_call();
}

inline void AUDIO_PLAY_STREAM_FROM_VEHICLE(Vehicle vehicle) /* 0xB70374A758007DFA */
{
	uint64_t val;

	native_init(0xB70374A758007DFA);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	native_call();
}

inline void AUDIO_STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Ped ped) /* 0xB8BEC0CA6F0EDB0F */
{
	uint64_t val;

	native_init(0xB8BEC0CA6F0EDB0F);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_AUDIO_FLAG(const char* flagName, BOOL toggle) /* 0xB9EFD5C25018725A */
{
	uint64_t val;

	native_init(0xB9EFD5C25018725A);

	*(const char**)(&val) = flagName;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void AUDIO_STOP_AUDIO_SCENES() /* 0xBAC7FC81A75EC1A1 */
{
	native_init(0xBAC7FC81A75EC1A1);
	native_call();
}

inline void AUDIO_SET_VEHICLE_RADIO_LOUD(Vehicle vehicle, BOOL toggle) /* 0xBB6F1CAEC68B0BCE */
{
	uint64_t val;

	native_init(0xBB6F1CAEC68B0BCE);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void AUDIO_PLAY_PAIN(Ped ped, int painID, float p1) /* 0xBC9AE166038A5CEC */
{
	uint64_t val;

	native_init(0xBC9AE166038A5CEC);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = painID;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_GET_PLAYER_HEADSET_SOUND_ALTERNATE(const char* p0, float p1) /* 0xBCC29F935ED07688 */
{
	uint64_t val;

	native_init(0xBCC29F935ED07688);

	*(const char**)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_AMBIENT_ZONE_STATE(Any* p0, BOOL p1, BOOL p2) /* 0xBDA07E5950085E46 */
{
	uint64_t val;

	native_init(0xBDA07E5950085E46);

	*(Any**)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AUDIO_0xBEF34B1D9624D5DD(BOOL p0) /* 0xBEF34B1D9624D5DD */
{
	uint64_t val;

	native_init(0xBEF34B1D9624D5DD);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_MOBILE_PHONE_RADIO_STATE(BOOL state) /* 0xBF286C554784F3DF */
{
	uint64_t val;

	native_init(0xBF286C554784F3DF);

	*(BOOL*)(&val) = state;
	native_push(val);

	native_call();
}

inline void AUDIO_0xBF4DC1784BE94DFA(Any p0, BOOL p1, Any p2) /* 0xBF4DC1784BE94DFA */
{
	uint64_t val;

	native_init(0xBF4DC1784BE94DFA);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AUDIO_0xC15907D667F7CFB2(Vehicle vehicle, BOOL toggle) /* 0xC15907D667F7CFB2 */
{
	uint64_t val;

	native_init(0xC15907D667F7CFB2);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void AUDIO__SET_VEHICLE_AS_AMBIENT_EMMITTER(Vehicle vehicle) /* 0xC1805D05E6D4FE10 */
{
	uint64_t val;

	native_init(0xC1805D05E6D4FE10);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_RADIO_AUTO_UNFREEZE(BOOL toggle) /* 0xC1AA9F53CE982990 */
{
	uint64_t val;

	native_init(0xC1AA9F53CE982990);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_0xC265DF9FB44A9FBD(Any p0) /* 0xC265DF9FB44A9FBD */
{
	uint64_t val;

	native_init(0xC265DF9FB44A9FBD);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_ADD_LINE_TO_CONVERSATION(int p0, const char* p1, const char* p2, int p3, int p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, int p9, BOOL p10, BOOL p11, BOOL p12) /* 0xC5EF963405593646 */
{
	uint64_t val;

	native_init(0xC5EF963405593646);

	*(int*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = p2;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);
	*(int*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(int*)(&val) = p9;
	native_push(val);
	*(BOOL*)(&val) = p10;
	native_push(val);
	*(BOOL*)(&val) = p11;
	native_push(val);
	*(BOOL*)(&val) = p12;
	native_push(val);

	native_call();
}

inline void AUDIO__PLAY_AMBIENT_SPEECH2(Ped ped, const char* speechName, const char* speechParam) /* 0xC6941B4A3A8FBBB9 */
{
	uint64_t val;

	native_init(0xC6941B4A3A8FBBB9);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = speechName;
	native_push(val);
	*(const char**)(&val) = speechParam;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_RADIO_TO_STATION_NAME(const char* stationName) /* 0xC69EDA28699D5107 */
{
	uint64_t val;

	native_init(0xC69EDA28699D5107);

	*(const char**)(&val) = stationName;
	native_push(val);

	native_call();
}

inline void AUDIO_REGISTER_SCRIPT_WITH_AUDIO(int p0) /* 0xC6ED9D5092438D91 */
{
	uint64_t val;

	native_init(0xC6ED9D5092438D91);

	*(int*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any AUDIO_PREPARE_SYNCHRONIZED_AUDIO_EVENT(const char* audioName, BOOL unk) /* 0xC7ABCACA4985A766 */
{
	uint64_t val;

	native_init(0xC7ABCACA4985A766);

	*(const char**)(&val) = audioName;
	native_push(val);
	*(BOOL*)(&val) = unk;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL AUDIO_0xC8B1B2425604CDD0() /* 0xC8B1B2425604CDD0 */
{
	native_init(0xC8B1B2425604CDD0);
	return *(BOOL*)(native_call());
}

inline void AUDIO_0xC8EDE9BDBCCBA6D4(Any* p0, float p1, float p2, float p3) /* 0xC8EDE9BDBCCBA6D4 */
{
	uint64_t val;

	native_init(0xC8EDE9BDBCCBA6D4);

	*(Any**)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void AUDIO_0xCADA5A0D0702381E(const char* p0, const char* soundset) /* 0xCADA5A0D0702381E */
{
	uint64_t val;

	native_init(0xCADA5A0D0702381E);

	*(const char**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = soundset;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_ANIMAL_MOOD(Ped animal, int mood) /* 0xCC97B29285B1DC3B */
{
	uint64_t val;

	native_init(0xCC97B29285B1DC3B);

	*(Ped*)(&val) = animal;
	native_push(val);
	*(int*)(&val) = mood;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_IS_SCRIPTED_SPEECH_PLAYING(Any p0) /* 0xCC9AA18DCC7084F4 */
{
	uint64_t val;

	native_init(0xCC9AA18DCC7084F4);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_PLAY_END_CREDITS_MUSIC(BOOL play) /* 0xCD536C4D33DCC900 */
{
	uint64_t val;

	native_init(0xCD536C4D33DCC900);

	*(BOOL*)(&val) = play;
	native_push(val);

	native_call();
}

inline void AUDIO_0xD01005D2BA2EB778(const char* p0) /* 0xD01005D2BA2EB778 */
{
	uint64_t val;

	native_init(0xD01005D2BA2EB778);

	*(const char**)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_IS_STREAM_PLAYING() /* 0xD11FA52EB849D978 */
{
	native_init(0xD11FA52EB849D978);
	return *(BOOL*)(native_call());
}

inline void AUDIO_CREATE_NEW_SCRIPTED_CONVERSATION() /* 0xD2C91A0B572AAE56 */
{
	native_init(0xD2C91A0B572AAE56);
	native_call();
}

inline void AUDIO_0xD2CC78CD3D0B50F9(Any p0, BOOL p1) /* 0xD2CC78CD3D0B50F9 */
{
	uint64_t val;

	native_init(0xD2CC78CD3D0B50F9);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_0xD2DCCD8E16E20997(Any p0) /* 0xD2DCCD8E16E20997 */
{
	uint64_t val;

	native_init(0xD2DCCD8E16E20997);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void AUDIO_0xD57AAAE0E2214D11() /* 0xD57AAAE0E2214D11 */
{
	native_init(0xD57AAAE0E2214D11);
	native_call();
}

inline Any AUDIO_STOP_SCRIPTED_CONVERSATION(BOOL p0) /* 0xD79DEEFB53455EBA */
{
	uint64_t val;

	native_init(0xD79DEEFB53455EBA);

	*(BOOL*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void AUDIO_0xDD6BCF9E94425DF9() /* 0xDD6BCF9E94425DF9 */
{
	native_init(0xDD6BCF9E94425DF9);
	native_call();
}

inline void AUDIO_0xDDC635D5B3262C56(const char* p0) /* 0xDDC635D5B3262C56 */
{
	uint64_t val;

	native_init(0xDDC635D5B3262C56);

	*(const char**)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_IS_SCRIPTED_CONVERSATION_LOADED() /* 0xDF0D54BE7A776737 */
{
	native_init(0xDF0D54BE7A776737);
	return *(BOOL*)(native_call());
}

inline void AUDIO_STOP_AUDIO_SCENE(const char* scene) /* 0xDFE8422B3B94E688 */
{
	uint64_t val;

	native_init(0xDFE8422B3B94E688);

	*(const char**)(&val) = scene;
	native_push(val);

	native_call();
}

inline Any AUDIO_PLAY_POLICE_REPORT(const char* name, float p1) /* 0xDFEBD56D9BD1EB16 */
{
	uint64_t val;

	native_init(0xDFEBD56D9BD1EB16);

	*(const char**)(&val) = name;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline void AUDIO_0xE4E6DD5566D28C82() /* 0xE4E6DD5566D28C82 */
{
	native_init(0xE4E6DD5566D28C82);
	native_call();
}

inline void AUDIO_SET_AUDIO_VEHICLE_PRIORITY(Vehicle vehicle, Any p1) /* 0xE5564483E407F914 */
{
	uint64_t val;

	native_init(0xE5564483E407F914);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_PLAY_SOUND_FROM_ENTITY(int soundId, const char* audioName, Entity entity, const char* audioRef, BOOL p4, Any p5) /* 0xE65F427EB70AB1ED */
{
	uint64_t val;

	native_init(0xE65F427EB70AB1ED);

	*(int*)(&val) = soundId;
	native_push(val);
	*(const char**)(&val) = audioName;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = audioRef;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_0xE73364DB90778FFA() /* 0xE73364DB90778FFA */
{
	native_init(0xE73364DB90778FFA);
	return *(BOOL*)(native_call());
}

inline void AUDIO_RESET_TREVOR_RAGE() /* 0xE78503B10C4314E0 */
{
	native_init(0xE78503B10C4314E0);
	native_call();
}

inline Any AUDIO_GET_MUSIC_PLAYTIME() /* 0xE7A0D23DC414507B */
{
	native_init(0xE7A0D23DC414507B);
	return *(Any*)(native_call());
}

inline int AUDIO_GET_PLAYER_RADIO_STATION_INDEX() /* 0xE8AF77C4C06ADC93 */
{
	native_init(0xE8AF77C4C06ADC93);
	return *(int*)(native_call());
}

inline void AUDIO_SET_PLAYER_ANGRY(Ped playerPed, BOOL value) /* 0xEA241BB04110F091 */
{
	uint64_t val;

	native_init(0xEA241BB04110F091);

	*(Ped*)(&val) = playerPed;
	native_push(val);
	*(BOOL*)(&val) = value;
	native_push(val);

	native_call();
}

inline void AUDIO_PLAY_STREAM_FROM_OBJECT(Object object) /* 0xEBAA9B64D76356FD */
{
	uint64_t val;

	native_init(0xEBAA9B64D76356FD);

	*(Object*)(&val) = object;
	native_push(val);

	native_call();
}

inline void AUDIO__PLAY_AMBIENT_SPEECH_AT_COORDS(const char* speechName, const char* voiceName, float x, float y, float z, const char* speechParam) /* 0xED640017ED337E45 */
{
	uint64_t val;

	native_init(0xED640017ED337E45);

	*(const char**)(&val) = speechName;
	native_push(val);
	*(const char**)(&val) = voiceName;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(const char**)(&val) = speechParam;
	native_push(val);

	native_call();
}

inline void AUDIO_0xEE066C7006C49C0A(Entity entity, int unk, const char* speech) /* 0xEE066C7006C49C0A */
{
	uint64_t val;

	native_init(0xEE066C7006C49C0A);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = unk;
	native_push(val);
	*(const char**)(&val) = speech;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_AUDIO_SCENE_VARIABLE(const char* scene, const char* variable, float value) /* 0xEF21A9EF089A2668 */
{
	uint64_t val;

	native_init(0xEF21A9EF089A2668);

	*(const char**)(&val) = scene;
	native_push(val);
	*(const char**)(&val) = variable;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline void AUDIO_0xF154B8D1775B2DEC(BOOL p0) /* 0xF154B8D1775B2DEC */
{
	uint64_t val;

	native_init(0xF154B8D1775B2DEC);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int AUDIO__MAX_RADIO_STATION_INDEX() /* 0xF1620ECB50E01DE7 */
{
	native_init(0xF1620ECB50E01DE7);
	return *(int*)(native_call());
}

inline void AUDIO_0xF1F8157B8C3F171C(Any p0, const char* p1, const char* p2) /* 0xF1F8157B8C3F171C */
{
	uint64_t val;

	native_init(0xF1F8157B8C3F171C);

	*(Any*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AUDIO_OVERRIDE_UNDERWATER_STREAM(Any* p0, BOOL p1) /* 0xF2A9CDABCEA04BD6 */
{
	uint64_t val;

	native_init(0xF2A9CDABCEA04BD6);

	*(Any**)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_0xF3365489E0DD50F9(Any p0, BOOL p1) /* 0xF3365489E0DD50F9 */
{
	uint64_t val;

	native_init(0xF3365489E0DD50F9);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void AUDIO_SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) /* 0xF3638DAE8C4045E1 */
{
	uint64_t val;

	native_init(0xF3638DAE8C4045E1);

	*(const char**)(&val) = ambientZone;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AUDIO_RESET_PED_AUDIO_FLAGS(Ped ped) /* 0xF54BB7B61036F335 */
{
	uint64_t val;

	native_init(0xF54BB7B61036F335);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline const char *AUDIO_GET_PLAYER_RADIO_STATION_NAME() /* 0xF6D733C32076AD03 */
{
	native_init(0xF6D733C32076AD03);
	return *(const char**)(native_call());
}

inline void AUDIO_SET_FRONTEND_RADIO_ACTIVE(BOOL active) /* 0xF7F26C6E9CC9EBB8 */
{
	uint64_t val;

	native_init(0xF7F26C6E9CC9EBB8);

	*(BOOL*)(&val) = active;
	native_push(val);

	native_call();
}

inline void AUDIO_PLAY_PED_RINGTONE(const char* ringtoneName, Ped ped, BOOL p2) /* 0xF9E56683CA8E11A5 */
{
	uint64_t val;

	native_init(0xF9E56683CA8E11A5);

	*(const char**)(&val) = ringtoneName;
	native_push(val);
	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void AUDIO_USE_SIREN_AS_HORN(Vehicle vehicle, BOOL toggle) /* 0xFA932DE350266EF8 */
{
	uint64_t val;

	native_init(0xFA932DE350266EF8);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Any AUDIO_HINT_SCRIPT_AUDIO_BANK(Any p0, Any p1) /* 0xFB380A29641EC31A */
{
	uint64_t val;

	native_init(0xFB380A29641EC31A);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline void AUDIO_0xFBE20329593DEC9D(Any p0, Any p1, Any p2, Any p3) /* 0xFBE20329593DEC9D */
{
	uint64_t val;

	native_init(0xFBE20329593DEC9D);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void AUDIO_UNFREEZE_RADIO_STATION(const char* radioStation) /* 0xFC00454CF60B91DD */
{
	uint64_t val;

	native_init(0xFC00454CF60B91DD);

	*(const char**)(&val) = radioStation;
	native_push(val);

	native_call();
}

inline BOOL AUDIO_HAS_SOUND_FINISHED(int soundId) /* 0xFCBDCE714A7C88E5 */
{
	uint64_t val;

	native_init(0xFCBDCE714A7C88E5);

	*(int*)(&val) = soundId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL AUDIO_REQUEST_AMBIENT_AUDIO_BANK(const char* p0, BOOL p1) /* 0xFE02FFBED8CA9D99 */
{
	uint64_t val;

	native_init(0xFE02FFBED8CA9D99);

	*(const char**)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void AUDIO_0xFF266D1D0EB1195D() /* 0xFF266D1D0EB1195D */
{
	native_init(0xFF266D1D0EB1195D);
	native_call();
}

inline void BRAIN_0x0B40ED49D7D6FF84() /* 0x0B40ED49D7D6FF84 */
{
	native_init(0x0B40ED49D7D6FF84);
	native_call();
}

inline void BRAIN_REGISTER_OBJECT_SCRIPT_BRAIN(const char* scriptName, Hash objectName, int p2, float p3, int p4, int p5) /* 0x0BE84C318BA6EC22 */
{
	uint64_t val;

	native_init(0x0BE84C318BA6EC22);

	*(const char**)(&val) = scriptName;
	native_push(val);
	*(Hash*)(&val) = objectName;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(int*)(&val) = p4;
	native_push(val);
	*(int*)(&val) = p5;
	native_push(val);

	native_call();
}

inline void BRAIN_DISABLE_SCRIPT_BRAIN_SET(int brainSet) /* 0x14D8518E9760F08F */
{
	uint64_t val;

	native_init(0x14D8518E9760F08F);

	*(int*)(&val) = brainSet;
	native_push(val);

	native_call();
}

inline void BRAIN_REGISTER_WORLD_POINT_SCRIPT_BRAIN(Any* p0, float p1, Any p2) /* 0x3CDC7136613284BD */
{
	uint64_t val;

	native_init(0x3CDC7136613284BD);

	*(Any**)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void BRAIN_0x4D953DF78EBF8158() /* 0x4D953DF78EBF8158 */
{
	native_init(0x4D953DF78EBF8158);
	native_call();
}

inline void BRAIN_ADD_SCRIPT_TO_RANDOM_PED(const char* name, Hash model, float p2, float p3) /* 0x4EE5367468A65CCC */
{
	uint64_t val;

	native_init(0x4EE5367468A65CCC);

	*(const char**)(&val) = name;
	native_push(val);
	*(Hash*)(&val) = model;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void BRAIN_ENABLE_SCRIPT_BRAIN_SET(int brainSet) /* 0x67AA4D73F0CFA86B */
{
	uint64_t val;

	native_init(0x67AA4D73F0CFA86B);

	*(int*)(&val) = brainSet;
	native_push(val);

	native_call();
}

inline void BRAIN_0x6D6840CEE8845831(const char* action) /* 0x6D6840CEE8845831 */
{
	uint64_t val;

	native_init(0x6D6840CEE8845831);

	*(const char**)(&val) = action;
	native_push(val);

	native_call();
}

inline void BRAIN_0x6E91B04E08773030(const char* action) /* 0x6E91B04E08773030 */
{
	uint64_t val;

	native_init(0x6E91B04E08773030);

	*(const char**)(&val) = action;
	native_push(val);

	native_call();
}

inline BOOL BRAIN_IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() /* 0xC5042CC6F5E3D450 */
{
	native_init(0xC5042CC6F5E3D450);
	return *(BOOL*)(native_call());
}

inline BOOL BRAIN_IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Object object) /* 0xCCBA154209823057 */
{
	uint64_t val;

	native_init(0xCCBA154209823057);

	*(Object*)(&val) = object;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CAM_IS_GAMEPLAY_CAM_SHAKING() /* 0x016C090630DF1F89 */
{
	native_init(0x016C090630DF1F89);
	return *(BOOL*)(native_call());
}

inline void CAM_0x0225778816FDC28C(float p0) /* 0x0225778816FDC28C */
{
	uint64_t val;

	native_init(0x0225778816FDC28C);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM_SET_CAM_ACTIVE(Cam cam, BOOL active) /* 0x026FB97D0A425F84 */
{
	uint64_t val;

	native_init(0x026FB97D0A425F84);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(BOOL*)(&val) = active;
	native_push(val);

	native_call();
}

inline BOOL CAM_IS_CAM_SPLINE_PAUSED(Any p0) /* 0x0290F35C0AD97864 */
{
	uint64_t val;

	native_init(0x0290F35C0AD97864);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CAM_IS_CAM_RENDERING(Cam cam) /* 0x02EC0AF5C5A49B7A */
{
	uint64_t val;

	native_init(0x02EC0AF5C5A49B7A);

	*(Cam*)(&val) = cam;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CAM_IS_CAM_INTERPOLATING(Cam cam) /* 0x036F97C908C2B52C */
{
	uint64_t val;

	native_init(0x036F97C908C2B52C);

	*(Cam*)(&val) = cam;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void CAM_RENDER_SCRIPT_CAMS(BOOL render, BOOL ease, int easeTime, BOOL p3, BOOL p4) /* 0x07E5B515DB0636FC */
{
	uint64_t val;

	native_init(0x07E5B515DB0636FC);

	*(BOOL*)(&val) = render;
	native_push(val);
	*(BOOL*)(&val) = ease;
	native_push(val);
	*(int*)(&val) = easeTime;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void CAM_0x0A9F2A468B328E74(Any p0, Any p1, Any p2, Any p3) /* 0x0A9F2A468B328E74 */
{
	uint64_t val;

	native_init(0x0A9F2A468B328E74);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void CAM__SET_FIRST_PERSON_CAM_NEAR_CLIP(float distance) /* 0x0AF7B437918103B3 */
{
	uint64_t val;

	native_init(0x0AF7B437918103B3);

	*(float*)(&val) = distance;
	native_push(val);

	native_call();
}

inline void CAM_STOP_GAMEPLAY_CAM_SHAKING(BOOL p0) /* 0x0EF93E9F3D08C178 */
{
	uint64_t val;

	native_init(0x0EF93E9F3D08C178);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM_0x0FB82563989CF4FB(Any p0, Any p1, Any p2, Any p3) /* 0x0FB82563989CF4FB */
{
	uint64_t val;

	native_init(0x0FB82563989CF4FB);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void CAM__SET_GAMEPLAY_CAM_RAW_YAW(float yaw) /* 0x103991D4A307D472 */
{
	uint64_t val;

	native_init(0x103991D4A307D472);

	*(float*)(&val) = yaw;
	native_push(val);

	native_call();
}

inline void CAM_0x11FA5D3479C7DD47(Any p0) /* 0x11FA5D3479C7DD47 */
{
	uint64_t val;

	native_init(0x11FA5D3479C7DD47);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM_0x12DED8CA53D47EA5(float p0) /* 0x12DED8CA53D47EA5 */
{
	uint64_t val;

	native_init(0x12DED8CA53D47EA5);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM_SET_CAM_SPLINE_DURATION(int cam, int timeDuration) /* 0x1381539FEE034CDA */
{
	uint64_t val;

	native_init(0x1381539FEE034CDA);

	*(int*)(&val) = cam;
	native_push(val);
	*(int*)(&val) = timeDuration;
	native_push(val);

	native_call();
}

inline Vector3 CAM_GET_GAMEPLAY_CAM_COORD() /* 0x14D6F5678D8F1B37 */
{
	native_init(0x14D6F5678D8F1B37);
	return *(Vector3*)(native_call());
}

inline float CAM_0x162F9D995753DC19() /* 0x162F9D995753DC19 */
{
	native_init(0x162F9D995753DC19);
	return *(float*)(native_call());
}

inline void CAM_SET_CAM_USE_SHALLOW_DOF_MODE(Cam cam, BOOL toggle) /* 0x16A96863A17552BB */
{
	uint64_t val;

	native_init(0x16A96863A17552BB);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Any CAM_0x17FCA7199A530203() /* 0x17FCA7199A530203 */
{
	native_init(0x17FCA7199A530203);
	return *(Any*)(native_call());
}

inline void CAM_SET_GAMEPLAY_ENTITY_HINT(Entity entity, float xOffset, float yOffset, float zOffset, BOOL p4, int duration, int fadeInTime, int fadeOutTime, int flags) /* 0x189E955A8313E298 */
{
	uint64_t val;

	native_init(0x189E955A8313E298);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = xOffset;
	native_push(val);
	*(float*)(&val) = yOffset;
	native_push(val);
	*(float*)(&val) = zOffset;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(int*)(&val) = fadeInTime;
	native_push(val);
	*(int*)(&val) = fadeOutTime;
	native_push(val);
	*(int*)(&val) = flags;
	native_push(val);

	native_call();
}

inline void CAM_SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(int zoomLevel) /* 0x19464CB6E4078C8A */
{
	uint64_t val;

	native_init(0x19464CB6E4078C8A);

	*(int*)(&val) = zoomLevel;
	native_push(val);

	native_call();
}

inline Any CAM_0x19CAFA3C87F7C2FF() /* 0x19CAFA3C87F7C2FF */
{
	native_init(0x19CAFA3C87F7C2FF);
	return *(Any*)(native_call());
}

inline void CAM_DISABLE_AIM_CAM_THIS_UPDATE() /* 0x1A31FE0049E542F6 */
{
	native_init(0x1A31FE0049E542F6);
	native_call();
}

inline void CAM_SET_CAM_DEBUG_NAME(Cam camera, const char* name) /* 0x1B93E0107865DD40 */
{
	uint64_t val;

	native_init(0x1B93E0107865DD40);

	*(Cam*)(&val) = camera;
	native_push(val);
	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline void CAM_STOP_SCRIPT_GLOBAL_SHAKING(BOOL p0) /* 0x1C9D7949FA533490 */
{
	uint64_t val;

	native_init(0x1C9D7949FA533490);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any CAM_0x1F2300CB7FA7B7F6() /* 0x1F2300CB7FA7B7F6 */
{
	native_init(0x1F2300CB7FA7B7F6);
	return *(Any*)(native_call());
}

inline void CAM_0x21E253A7F8DA5DFB(const char* vehicleName) /* 0x21E253A7F8DA5DFB */
{
	uint64_t val;

	native_init(0x21E253A7F8DA5DFB);

	*(const char**)(&val) = vehicleName;
	native_push(val);

	native_call();
}

inline void CAM_STOP_CINEMATIC_CAM_SHAKING(BOOL p0) /* 0x2238E588E588A6D7 */
{
	uint64_t val;

	native_init(0x2238E588E588A6D7);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM_SET_CAM_SPLINE_PHASE(Cam cam, float p1) /* 0x242B5874F0A4E052 */
{
	uint64_t val;

	native_init(0x242B5874F0A4E052);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void CAM_0x247ACBC4ABBC9D1C(BOOL p0) /* 0x247ACBC4ABBC9D1C */
{
	uint64_t val;

	native_init(0x247ACBC4ABBC9D1C);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline float CAM_GET_CAM_FAR_DOF(Cam cam) /* 0x255F8DAFD540D397 */
{
	uint64_t val;

	native_init(0x255F8DAFD540D397);

	*(Cam*)(&val) = cam;
	native_push(val);

	return *(float*)(native_call());
}

inline int CAM_0x26903D9CD1175F2C(Any p0, Any p1) /* 0x26903D9CD1175F2C */
{
	uint64_t val;

	native_init(0x26903D9CD1175F2C);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(int*)(native_call());
}

inline void CAM_0x271017B9BA825366(Any p0, BOOL p1) /* 0x271017B9BA825366 */
{
	uint64_t val;

	native_init(0x271017B9BA825366);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void CAM_0x271401846BD26E92(BOOL p0, BOOL p1) /* 0x271401846BD26E92 */
{
	uint64_t val;

	native_init(0x271401846BD26E92);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void CAM_0x2A2173E46DAECD12(Any p0, Any p1) /* 0x2A2173E46DAECD12 */
{
	uint64_t val;

	native_init(0x2A2173E46DAECD12);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void CAM_0x2AED6301F67007D5(Entity entity) /* 0x2AED6301F67007D5 */
{
	uint64_t val;

	native_init(0x2AED6301F67007D5);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline void CAM_SET_GAMEPLAY_PED_HINT(Ped p0, float x1, float y1, float z1, BOOL p4, Any p5, Any p6, Any p7) /* 0x2B486269ACD548D3 */
{
	uint64_t val;

	native_init(0x2B486269ACD548D3);

	*(Ped*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);
	*(Any*)(&val) = p7;
	native_push(val);

	native_call();
}

inline void CAM__SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(Cam camera, float p1) /* 0x2C654B4943BDDF7C */
{
	uint64_t val;

	native_init(0x2C654B4943BDDF7C);

	*(Cam*)(&val) = camera;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void CAM_0x2F7F2B26DD3F18EE(float p0, float p1) /* 0x2F7F2B26DD3F18EE */
{
	uint64_t val;

	native_init(0x2F7F2B26DD3F18EE);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL CAM_0x3044240D2E0FA842() /* 0x3044240D2E0FA842 */
{
	native_init(0x3044240D2E0FA842);
	return *(BOOL*)(native_call());
}

inline int CAM_GET_FOLLOW_PED_CAM_ZOOM_LEVEL() /* 0x33E6C8EFD0CD93E9 */
{
	native_init(0x33E6C8EFD0CD93E9);
	return *(int*)(native_call());
}

inline BOOL CAM_IS_GAMEPLAY_CAM_RENDERING() /* 0x39B5D1B10383F0C8 */
{
	native_init(0x39B5D1B10383F0C8);
	return *(BOOL*)(native_call());
}

inline float CAM_GET_GAMEPLAY_CAM_RELATIVE_PITCH() /* 0x3A6867B4845BEDA2 */
{
	native_init(0x3A6867B4845BEDA2);
	return *(float*)(native_call());
}

inline void CAM_SET_CAM_DOF_PLANES(Cam cam, float p1, float p2, float p3, float p4) /* 0x3CF48F6F96E749DC */
{
	uint64_t val;

	native_init(0x3CF48F6F96E749DC);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void CAM_SET_CAM_NEAR_DOF(Cam cam, float nearDOF) /* 0x3FA4BF0A7AB7DE2C */
{
	uint64_t val;

	native_init(0x3FA4BF0A7AB7DE2C);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = nearDOF;
	native_push(val);

	native_call();
}

inline void CAM_0x4008EDF7D6E48175(BOOL p0) /* 0x4008EDF7D6E48175 */
{
	uint64_t val;

	native_init(0x4008EDF7D6E48175);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM_OVERRIDE_CAM_SPLINE_VELOCITY(Cam cam, int p1, float p2, float p3) /* 0x40B62FA033EB0346 */
{
	uint64_t val;

	native_init(0x40B62FA033EB0346);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void CAM_SET_CAM_ANIM_CURRENT_PHASE(Cam cam, float phase) /* 0x4145A4C44FF3B5A6 */
{
	uint64_t val;

	native_init(0x4145A4C44FF3B5A6);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = phase;
	native_push(val);

	native_call();
}

inline void CAM__SET_THIRD_PERSON_AIM_CAM_NEAR_CLIP(float distance) /* 0x42156508606DE65E */
{
	uint64_t val;

	native_init(0x42156508606DE65E);

	*(float*)(&val) = distance;
	native_push(val);

	native_call();
}

inline BOOL CAM_SET_FOLLOW_PED_CAM_CUTSCENE_CHAT(const char* p0, int p1) /* 0x44A113DD6FFC48D1 */
{
	uint64_t val;

	native_init(0x44A113DD6FFC48D1);

	*(const char**)(&val) = p0;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void CAM_SET_CAM_INHERIT_ROLL_VEHICLE(Cam cam, BOOL p1) /* 0x45F1DE9C34B93AE6 */
{
	uint64_t val;

	native_init(0x45F1DE9C34B93AE6);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void CAM_0x469F2ECDEC046337(BOOL p0) /* 0x469F2ECDEC046337 */
{
	uint64_t val;

	native_init(0x469F2ECDEC046337);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM_CUSTOM_MENU_COORDINATES(float p0) /* 0x487A82C650EB7799 */
{
	uint64_t val;

	native_init(0x487A82C650EB7799);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM_0x49482F9FCD825AAA(Entity entity) /* 0x49482F9FCD825AAA */
{
	uint64_t val;

	native_init(0x49482F9FCD825AAA);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline void CAM_SET_CAM_COORD(Cam cam, float posX, float posY, float posZ) /* 0x4D41783FB745E42E */
{
	uint64_t val;

	native_init(0x4D41783FB745E42E);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);

	native_call();
}

inline BOOL CAM__IS_IN_VEHICLE_CAM_DISABLED() /* 0x4F32C0D5A90A9B40 */
{
	native_init(0x4F32C0D5A90A9B40);
	return *(BOOL*)(native_call());
}

inline void CAM_0x503F5920162365B2(Any p0, float p1, float p2, float p3) /* 0x503F5920162365B2 */
{
	uint64_t val;

	native_init(0x503F5920162365B2);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void CAM_SET_GAMEPLAY_HINT_FOV(float FOV) /* 0x513403FB9C56211F */
{
	uint64_t val;

	native_init(0x513403FB9C56211F);

	*(float*)(&val) = FOV;
	native_push(val);

	native_call();
}

inline void CAM_SET_CINEMATIC_BUTTON_ACTIVE(BOOL p0) /* 0x51669F7D1FB53D9F */
{
	uint64_t val;

	native_init(0x51669F7D1FB53D9F);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Cam CAM_GET_RENDERING_CAM() /* 0x5234F9F10919EABA */
{
	native_init(0x5234F9F10919EABA);
	return *(Cam*)(native_call());
}

inline void CAM_POINT_CAM_AT_ENTITY(Cam cam, Entity entity, float p2, float p3, float p4, BOOL p5) /* 0x5640BFF86B16E8DC */
{
	uint64_t val;

	native_init(0x5640BFF86B16E8DC);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline void CAM_0x59424BD75174C9B1() /* 0x59424BD75174C9B1 */
{
	native_init(0x59424BD75174C9B1);
	native_call();
}

inline void CAM_0x5A43C76F7FC7BA5F() /* 0x5A43C76F7FC7BA5F */
{
	native_init(0x5A43C76F7FC7BA5F);
	native_call();
}

inline void CAM_SET_FOLLOW_PED_CAM_VIEW_MODE(int viewMode) /* 0x5A4F9EDF1673F704 */
{
	uint64_t val;

	native_init(0x5A4F9EDF1673F704);

	*(int*)(&val) = viewMode;
	native_push(val);

	native_call();
}

inline BOOL CAM_IS_SCREEN_FADED_IN() /* 0x5A859503B0C08678 */
{
	native_init(0x5A859503B0C08678);
	return *(BOOL*)(native_call());
}

inline Vector3 CAM__GET_GAMEPLAY_CAM_ROT(int rotationOrder) /* 0x5B4E4C817FCC2DFB */
{
	uint64_t val;

	native_init(0x5B4E4C817FCC2DFB);

	*(int*)(&val) = rotationOrder;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline void CAM_0x5C41E6BABC9E2112(Any p0) /* 0x5C41E6BABC9E2112 */
{
	uint64_t val;

	native_init(0x5C41E6BABC9E2112);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL CAM_0x5C48A1D6E3B33179(Any p0) /* 0x5C48A1D6E3B33179 */
{
	uint64_t val;

	native_init(0x5C48A1D6E3B33179);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CAM_IS_SCREEN_FADING_IN() /* 0x5C544BC6C57AC575 */
{
	native_init(0x5C544BC6C57AC575);
	return *(BOOL*)(native_call());
}

inline void CAM_0x5D7B620DAE436138(float p0) /* 0x5D7B620DAE436138 */
{
	uint64_t val;

	native_init(0x5D7B620DAE436138);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL CAM_IS_FIRST_PERSON_AIM_CAM_ACTIVE() /* 0x5E346D934122613F */
{
	native_init(0x5E346D934122613F);
	return *(BOOL*)(native_call());
}

inline Cam CAM_CREATE_CAMERA(Hash camHash, BOOL p1) /* 0x5E3CF89C6BCCA67D */
{
	uint64_t val;

	native_init(0x5E3CF89C6BCCA67D);

	*(Hash*)(&val) = camHash;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	return *(Cam*)(native_call());
}

inline void CAM_SET_CAM_DOF_STRENGTH(Cam cam, float dofStrength) /* 0x5EE29B4D7D5DF897 */
{
	uint64_t val;

	native_init(0x5EE29B4D7D5DF897);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = dofStrength;
	native_push(val);

	native_call();
}

inline float CAM_0x5F35F6732C3FBBA0(Any p0) /* 0x5F35F6732C3FBBA0 */
{
	uint64_t val;

	native_init(0x5F35F6732C3FBBA0);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(float*)(native_call());
}

inline void CAM_0x609278246A29CA34(Any p0, Any p1, Any p2) /* 0x609278246A29CA34 */
{
	uint64_t val;

	native_init(0x609278246A29CA34);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void CAM_ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL heading) /* 0x61A3DBA14AB7F411 */
{
	uint64_t val;

	native_init(0x61A3DBA14AB7F411);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = boneIndex;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = heading;
	native_push(val);

	native_call();
}

inline void CAM_0x62ECFCFDEE7885D6() /* 0x62ECFCFDEE7885D6 */
{
	native_init(0x62ECFCFDEE7885D6);
	native_call();
}

inline float CAM_GET_GAMEPLAY_CAM_FOV() /* 0x65019750A0324133 */
{
	native_init(0x65019750A0324133);
	return *(float*)(native_call());
}

inline void CAM_0x661B5C8654ADD825(Any p0, BOOL p1) /* 0x661B5C8654ADD825 */
{
	uint64_t val;

	native_init(0x661B5C8654ADD825);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void CAM_POINT_CAM_AT_PED_BONE(Cam cam, int ped, int boneIndex, float x, float y, float z, BOOL p6) /* 0x68B2B5F33BA63C41 */
{
	uint64_t val;

	native_init(0x68B2B5F33BA63C41);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(int*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = boneIndex;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);

	native_call();
}

inline BOOL CAM_IS_AIM_CAM_ACTIVE() /* 0x68EDDA28A5976D07 */
{
	native_init(0x68EDDA28A5976D07);
	return *(BOOL*)(native_call());
}

inline void CAM_SHAKE_CAM(Cam cam, const char* type, float amplitude) /* 0x6A25241C340D3822 */
{
	uint64_t val;

	native_init(0x6A25241C340D3822);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(const char**)(&val) = type;
	native_push(val);
	*(float*)(&val) = amplitude;
	native_push(val);

	native_call();
}

inline Cam CAM_CREATE_CAMERA_WITH_PARAMS(Hash camHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, Any p9) /* 0x6ABFA3E16460F22D */
{
	uint64_t val;

	native_init(0x6ABFA3E16460F22D);

	*(Hash*)(&val) = camHash;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = rotX;
	native_push(val);
	*(float*)(&val) = rotY;
	native_push(val);
	*(float*)(&val) = rotZ;
	native_push(val);
	*(float*)(&val) = fov;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(Any*)(&val) = p9;
	native_push(val);

	return *(Cam*)(native_call());
}

inline BOOL CAM_IS_CAM_SHAKING(Cam cam) /* 0x6B24BFE83A2BE47B */
{
	uint64_t val;

	native_init(0x6B24BFE83A2BE47B);

	*(Cam*)(&val) = cam;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void CAM_SET_GAMEPLAY_CAM_RELATIVE_PITCH(float x, float Value2) /* 0x6D0858B8EDFD2B7D */
{
	uint64_t val;

	native_init(0x6D0858B8EDFD2B7D);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = Value2;
	native_push(val);

	native_call();
}

inline void CAM_SET_CAM_MOTION_BLUR_STRENGTH(Cam cam, float strength) /* 0x6F0F77FBA9A8F2E6 */
{
	uint64_t val;

	native_init(0x6F0F77FBA9A8F2E6);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = strength;
	native_push(val);

	native_call();
}

inline BOOL CAM_0x705A276EBFF3133D() /* 0x705A276EBFF3133D */
{
	native_init(0x705A276EBFF3133D);
	return *(BOOL*)(native_call());
}

inline Any CAM_0x70894BD0915C5BCA(float p0) /* 0x70894BD0915C5BCA */
{
	uint64_t val;

	native_init(0x70894BD0915C5BCA);

	*(float*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL CAM_IS_GAMEPLAY_CAM_LOOKING_BEHIND() /* 0x70FDA869F3317EA9 */
{
	native_init(0x70FDA869F3317EA9);
	return *(BOOL*)(native_call());
}

inline void CAM_CREATE_CINEMATIC_SHOT(Any p0, int p1, Any p2, Entity entity) /* 0x741B0129D4560F31 */
{
	uint64_t val;

	native_init(0x741B0129D4560F31);

	*(Any*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline float CAM_GET_GAMEPLAY_CAM_RELATIVE_HEADING() /* 0x743607648ADD4587 */
{
	native_init(0x743607648ADD4587);
	return *(float*)(native_call());
}

inline BOOL CAM_0x74BD83EA840F6BC9() /* 0x74BD83EA840F6BC9 */
{
	native_init(0x74BD83EA840F6BC9);
	return *(BOOL*)(native_call());
}

inline void CAM__SET_GAMEPLAY_CAM_RAW_PITCH(float pitch) /* 0x759E13EBC1C15C5A */
{
	uint64_t val;

	native_init(0x759E13EBC1C15C5A);

	*(float*)(&val) = pitch;
	native_push(val);

	native_call();
}

inline void CAM_STOP_CINEMATIC_SHOT(Any p0) /* 0x7660C6E75D3A078E */
{
	uint64_t val;

	native_init(0x7660C6E75D3A078E);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL CAM_IS_SCREEN_FADING_OUT() /* 0x797AC7CB535BA28F */
{
	native_init(0x797AC7CB535BA28F);
	return *(BOOL*)(native_call());
}

inline void CAM_0x7BF1A54AE67AC070(Any p0, Any p1, Any p2) /* 0x7BF1A54AE67AC070 */
{
	uint64_t val;

	native_init(0x7BF1A54AE67AC070);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	native_call();
}

inline Vector3 CAM_GET_CAM_ROT(Cam cam, int rotationOrder) /* 0x7D304C1C955E3E12 */
{
	uint64_t val;

	native_init(0x7D304C1C955E3E12);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(int*)(&val) = rotationOrder;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline void CAM_OVERRIDE_CAM_SPLINE_MOTION_BLUR(Cam cam, int p1, float p2, float p3) /* 0x7DCF7C708D292D55 */
{
	uint64_t val;

	native_init(0x7DCF7C708D292D55);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void CAM__SET_CAM_DOF_FNUMBER_OF_LENS(Cam camera, float p1) /* 0x7DD234D6F3914C5B */
{
	uint64_t val;

	native_init(0x7DD234D6F3914C5B);

	*(Cam*)(&val) = camera;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline float CAM__GET_GAMEPLAY_CAM_ZOOM() /* 0x7EC52CC40597D170 */
{
	native_init(0x7EC52CC40597D170);
	return *(float*)(native_call());
}

inline void CAM__SET_CAM_EFFECT(int p0) /* 0x80C8B1846639BB19 */
{
	uint64_t val;

	native_init(0x80C8B1846639BB19);

	*(int*)(&val) = p0;
	native_push(val);

	native_call();
}

inline float CAM_0x80EC114669DAEFF4() /* 0x80EC114669DAEFF4 */
{
	native_init(0x80EC114669DAEFF4);
	return *(float*)(native_call());
}

inline Vector3 CAM_GET_GAMEPLAY_CAM_ROT(int rotationOrder) /* 0x837765A25378F0BB */
{
	uint64_t val;

	native_init(0x837765A25378F0BB);

	*(int*)(&val) = rotationOrder;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline void CAM_0x83B8201ED82A9A2D(Any p0, Any p1, Any p2, float p3) /* 0x83B8201ED82A9A2D */
{
	uint64_t val;

	native_init(0x83B8201ED82A9A2D);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void CAM_SET_GAMEPLAY_OBJECT_HINT(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7) /* 0x83E87508A2CA2AC6 */
{
	uint64_t val;

	native_init(0x83E87508A2CA2AC6);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);
	*(Any*)(&val) = p7;
	native_push(val);

	native_call();
}

inline void CAM_SET_CAM_ROT(Cam cam, float pitch, float roll, float yaw, int rotationOrder) /* 0x85973643155D0B07 */
{
	uint64_t val;

	native_init(0x85973643155D0B07);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = pitch;
	native_push(val);
	*(float*)(&val) = roll;
	native_push(val);
	*(float*)(&val) = yaw;
	native_push(val);
	*(int*)(&val) = rotationOrder;
	native_push(val);

	native_call();
}

inline void CAM_ADD_CAM_SPLINE_NODE(Cam camera, float x, float y, float z, float xRot, float yRot, float zRot, int length, int p8, int transitionType) /* 0x8609C75EC438FB3B */
{
	uint64_t val;

	native_init(0x8609C75EC438FB3B);

	*(Cam*)(&val) = camera;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(int*)(&val) = length;
	native_push(val);
	*(int*)(&val) = p8;
	native_push(val);
	*(int*)(&val) = transitionType;
	native_push(val);

	native_call();
}

inline void CAM_DESTROY_CAM(Cam cam, BOOL thisScriptCheck) /* 0x865908C81A2C22E9 */
{
	uint64_t val;

	native_init(0x865908C81A2C22E9);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(BOOL*)(&val) = thisScriptCheck;
	native_push(val);

	native_call();
}

inline void CAM_DO_SCREEN_FADE_OUT(int duration) /* 0x891B5B39AC6302AF */
{
	uint64_t val;

	native_init(0x891B5B39AC6302AF);

	*(int*)(&val) = duration;
	native_push(val);

	native_call();
}

inline Entity CAM_0x89215EC747DF244A(float p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7, int p8) /* 0x89215EC747DF244A */
{
	uint64_t val;

	native_init(0x89215EC747DF244A);

	*(float*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(int*)(&val) = p7;
	native_push(val);
	*(int*)(&val) = p8;
	native_push(val);

	return *(Entity*)(native_call());
}

inline void CAM_0x8BBACBF51DA047A8(Any p0) /* 0x8BBACBF51DA047A8 */
{
	uint64_t val;

	native_init(0x8BBACBF51DA047A8);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline float CAM__GET_REPLAY_FREE_CAM_MAX_RANGE() /* 0x8BFCEB5EA1B161B6 */
{
	native_init(0x8BFCEB5EA1B161B6);
	return *(float*)(native_call());
}

inline void CAM_SET_CAM_AFFECTS_AIMING(Cam cam, BOOL toggle) /* 0x8C1DC7770C51DC8D */
{
	uint64_t val;

	native_init(0x8C1DC7770C51DC8D);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int CAM_GET_FOLLOW_PED_CAM_VIEW_MODE() /* 0x8D4D46230B2C353A */
{
	native_init(0x8D4D46230B2C353A);
	return *(int*)(native_call());
}

inline void CAM_DESTROY_ALL_CAMS(BOOL thisScriptCheck) /* 0x8E5FB15663F79120 */
{
	uint64_t val;

	native_init(0x8E5FB15663F79120);

	*(BOOL*)(&val) = thisScriptCheck;
	native_push(val);

	native_call();
}

inline Any CAM__CLAMP_GAMEPLAY_CAM_YAW(float minimum, float maximum) /* 0x8F993D26E0CA5E8E */
{
	uint64_t val;

	native_init(0x8F993D26E0CA5E8E);

	*(float*)(&val) = minimum;
	native_push(val);
	*(float*)(&val) = maximum;
	native_push(val);

	return *(Any*)(native_call());
}

inline void CAM_0x91EF6EE6419E5B97(BOOL p0) /* 0x91EF6EE6419E5B97 */
{
	uint64_t val;

	native_init(0x91EF6EE6419E5B97);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline float CAM__GET_GAMEPLAY_CAM_FAR_DOF() /* 0x9780F32BCAF72431 */
{
	native_init(0x9780F32BCAF72431);
	return *(float*)(native_call());
}

inline BOOL CAM_PLAY_CAM_ANIM(Cam cam, const char* animName, const char* animDictionary, float x, float y, float z, float xRot, float yRot, float zRot, BOOL p9, int p10) /* 0x9A2D0FB2E7852392 */
{
	uint64_t val;

	native_init(0x9A2D0FB2E7852392);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(const char**)(&val) = animDictionary;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(BOOL*)(&val) = p9;
	native_push(val);
	*(int*)(&val) = p10;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void CAM_SET_TIME_IDLE_DROP(BOOL p0, BOOL p1) /* 0x9DFE13ECDC1EC196 */
{
	uint64_t val;

	native_init(0x9DFE13ECDC1EC196);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void CAM_0x9E4CFFF989258472() /* 0x9E4CFFF989258472 */
{
	native_init(0x9E4CFFF989258472);
	native_call();
}

inline void CAM_SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, int easeLocation, int easeRotation) /* 0x9FBDA379383A52A4 */
{
	uint64_t val;

	native_init(0x9FBDA379383A52A4);

	*(Cam*)(&val) = camTo;
	native_push(val);
	*(Cam*)(&val) = camFrom;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(int*)(&val) = easeLocation;
	native_push(val);
	*(int*)(&val) = easeRotation;
	native_push(val);

	native_call();
}

inline float CAM__GET_GAMEPLAY_CAM_NEAR_DOF() /* 0xA03502FC581F7D9B */
{
	native_init(0xA03502FC581F7D9B);
	return *(float*)(native_call());
}

inline float CAM_GET_CAM_ANIM_CURRENT_PHASE(Cam cam) /* 0xA10B2DB49E92A6B0 */
{
	uint64_t val;

	native_init(0xA10B2DB49E92A6B0);

	*(Cam*)(&val) = cam;
	native_push(val);

	return *(float*)(native_call());
}

inline void CAM_SET_USE_HI_DOF() /* 0xA13B0222F3D94A94 */
{
	native_init(0xA13B0222F3D94A94);
	native_call();
}

inline Vector3 CAM__GET_GAMEPLAY_CAM_COORDS() /* 0xA200EB1EE790F448 */
{
	native_init(0xA200EB1EE790F448);
	return *(Vector3*)(native_call());
}

inline void CAM_SET_GAMEPLAY_VEHICLE_HINT(Vehicle p0, float xOffset, float yOffset, float zOffset, BOOL p4, int duration, int easeInDuration, int easeOutDuration) /* 0xA2297E18F3E71C2E */
{
	uint64_t val;

	native_init(0xA2297E18F3E71C2E);

	*(Vehicle*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = xOffset;
	native_push(val);
	*(float*)(&val) = yOffset;
	native_push(val);
	*(float*)(&val) = zOffset;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(int*)(&val) = easeInDuration;
	native_push(val);
	*(int*)(&val) = easeOutDuration;
	native_push(val);

	native_call();
}

inline void CAM_ANIMATED_SHAKE_CAM(Cam cam, const char* p1, const char* p2, const char* p3, float amplitude) /* 0xA2746EEAE3E577CD */
{
	uint64_t val;

	native_init(0xA2746EEAE3E577CD);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = p2;
	native_push(val);
	*(const char**)(&val) = p3;
	native_push(val);
	*(float*)(&val) = amplitude;
	native_push(val);

	native_call();
}

inline void CAM_0xA2767257A320FC82(Any p0, BOOL p1) /* 0xA2767257A320FC82 */
{
	uint64_t val;

	native_init(0xA2767257A320FC82);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void CAM_DETACH_CAM(Cam cam) /* 0xA2FABBE87F4BAD82 */
{
	uint64_t val;

	native_init(0xA2FABBE87F4BAD82);

	*(Cam*)(&val) = cam;
	native_push(val);

	native_call();
}

inline void CAM_0xA41BCD7213805AAC(BOOL p0) /* 0xA41BCD7213805AAC */
{
	uint64_t val;

	native_init(0xA41BCD7213805AAC);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int CAM_GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() /* 0xA4FF579AC0E3AAAE */
{
	native_init(0xA4FF579AC0E3AAAE);
	return *(int*)(native_call());
}

inline Any CAM__CLAMP_GAMEPLAY_CAM_PITCH(float minimum, float maximum) /* 0xA516C198B7DCA1E1 */
{
	uint64_t val;

	native_init(0xA516C198B7DCA1E1);

	*(float*)(&val) = minimum;
	native_push(val);
	*(float*)(&val) = maximum;
	native_push(val);

	return *(Any*)(native_call());
}

inline void CAM_0xA6385DEB180F319F(Any p0, Any p1, float p2) /* 0xA6385DEB180F319F */
{
	uint64_t val;

	native_init(0xA6385DEB180F319F);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL CAM_DOES_CAM_EXIST(Cam cam) /* 0xA7A932170592B50E */
{
	uint64_t val;

	native_init(0xA7A932170592B50E);

	*(Cam*)(&val) = cam;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void CAM_SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float amplitude) /* 0xA87E00932DB4D85D */
{
	uint64_t val;

	native_init(0xA87E00932DB4D85D);

	*(float*)(&val) = amplitude;
	native_push(val);

	native_call();
}

inline void CAM_SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(int viewMode) /* 0xAC253D7842768F48 */
{
	uint64_t val;

	native_init(0xAC253D7842768F48);

	*(int*)(&val) = viewMode;
	native_push(val);

	native_call();
}

inline void CAM__DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME() /* 0xADFF1B2A555F5FBA */
{
	native_init(0xADFF1B2A555F5FBA);
	native_call();
}

inline void CAM_SET_CAM_FAR_CLIP(Cam cam, float farClip) /* 0xAE306F2A904BF86E */
{
	uint64_t val;

	native_init(0xAE306F2A904BF86E);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = farClip;
	native_push(val);

	native_call();
}

inline void CAM_SET_CAM_FOV(Cam cam, float fieldOfView) /* 0xB13C14F66A00D047 */
{
	uint64_t val;

	native_init(0xB13C14F66A00D047);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = fieldOfView;
	native_push(val);

	native_call();
}

inline BOOL CAM_IS_CINEMATIC_CAM_RENDERING() /* 0xB15162CB5826E9E8 */
{
	native_init(0xB15162CB5826E9E8);
	return *(BOOL*)(native_call());
}

inline BOOL CAM_IS_SCREEN_FADED_OUT() /* 0xB16FCE9DDC7BA182 */
{
	native_init(0xB16FCE9DDC7BA182);
	return *(BOOL*)(native_call());
}

inline int CAM_GET_CAM_SPLINE_NODE_INDEX(Cam cam) /* 0xB22B17DF858716A6 */
{
	uint64_t val;

	native_init(0xB22B17DF858716A6);

	*(Cam*)(&val) = cam;
	native_push(val);

	return *(int*)(native_call());
}

inline void CAM_SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading) /* 0xB4EC2312F4E5B1F1 */
{
	uint64_t val;

	native_init(0xB4EC2312F4E5B1F1);

	*(float*)(&val) = heading;
	native_push(val);

	native_call();
}

inline Cam CAM_CREATE_CAM_WITH_PARAMS(const char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9) /* 0xB51194800B257161 */
{
	uint64_t val;

	native_init(0xB51194800B257161);

	*(const char**)(&val) = camName;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = rotX;
	native_push(val);
	*(float*)(&val) = rotY;
	native_push(val);
	*(float*)(&val) = rotZ;
	native_push(val);
	*(float*)(&val) = fov;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(int*)(&val) = p9;
	native_push(val);

	return *(Cam*)(native_call());
}

inline float CAM_GET_CAM_SPLINE_PHASE(Cam cam) /* 0xB5349E36C546509A */
{
	uint64_t val;

	native_init(0xB5349E36C546509A);

	*(Cam*)(&val) = cam;
	native_push(val);

	return *(float*)(native_call());
}

inline float CAM_GET_CAM_FAR_CLIP(Cam cam) /* 0xB60A9CFEB21CA6AA */
{
	uint64_t val;

	native_init(0xB60A9CFEB21CA6AA);

	*(Cam*)(&val) = cam;
	native_push(val);

	return *(float*)(native_call());
}

inline Vector3 CAM_GET_CAM_COORD(Cam cam) /* 0xBAC038F7459AE5AE */
{
	uint64_t val;

	native_init(0xBAC038F7459AE5AE);

	*(Cam*)(&val) = cam;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline BOOL CAM_IS_CINEMATIC_CAM_SHAKING() /* 0xBBC08F6B4CB8FF0A */
{
	native_init(0xBBC08F6B4CB8FF0A);
	return *(BOOL*)(native_call());
}

inline void CAM__SET_FIRST_PERSON_CAM_PITCH_RANGE(float minAngle, float maxAngle) /* 0xBCFC632DB7673BF0 */
{
	uint64_t val;

	native_init(0xBCFC632DB7673BF0);

	*(float*)(&val) = minAngle;
	native_push(val);
	*(float*)(&val) = maxAngle;
	native_push(val);

	native_call();
}

inline void CAM_STOP_CAM_SHAKING(Cam cam, BOOL p1) /* 0xBDECF64367884AC3 */
{
	uint64_t val;

	native_init(0xBDECF64367884AC3);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Any CAM_0xBF72910D0F26F025() /* 0xBF72910D0F26F025 */
{
	native_init(0xBF72910D0F26F025);
	return *(Any*)(native_call());
}

inline void CAM_SET_CAM_PARAMS(Cam cam, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fieldOfView, Any p8, int p9, int p10, int p11) /* 0xBFD8727AEA3CCEBA */
{
	uint64_t val;

	native_init(0xBFD8727AEA3CCEBA);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = rotX;
	native_push(val);
	*(float*)(&val) = rotY;
	native_push(val);
	*(float*)(&val) = rotZ;
	native_push(val);
	*(float*)(&val) = fieldOfView;
	native_push(val);
	*(Any*)(&val) = p8;
	native_push(val);
	*(int*)(&val) = p9;
	native_push(val);
	*(int*)(&val) = p10;
	native_push(val);
	*(int*)(&val) = p11;
	native_push(val);

	native_call();
}

inline void CAM_0xC2EAE3FB8CDBED31(const char* p0, const char* p1, const char* p2, float p3) /* 0xC2EAE3FB8CDBED31 */
{
	uint64_t val;

	native_init(0xC2EAE3FB8CDBED31);

	*(const char**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	native_call();
}

inline float CAM_GET_CAM_FOV(Cam cam) /* 0xC3330A45CCCDB26A */
{
	uint64_t val;

	native_init(0xC3330A45CCCDB26A);

	*(Cam*)(&val) = cam;
	native_push(val);

	return *(float*)(native_call());
}

inline void CAM__SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE(Cam camera, float p1) /* 0xC3654A441402562D */
{
	uint64_t val;

	native_init(0xC3654A441402562D);

	*(Cam*)(&val) = camera;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Cam CAM_CREATE_CAM(const char* camName, BOOL unk) /* 0xC3981DCE61D9E13F */
{
	uint64_t val;

	native_init(0xC3981DCE61D9E13F);

	*(const char**)(&val) = camName;
	native_push(val);
	*(BOOL*)(&val) = unk;
	native_push(val);

	return *(Cam*)(native_call());
}

inline float CAM_GET_CAM_NEAR_CLIP(Cam cam) /* 0xC520A34DAFBF24B1 */
{
	uint64_t val;

	native_init(0xC520A34DAFBF24B1);

	*(Cam*)(&val) = cam;
	native_push(val);

	return *(float*)(native_call());
}

inline void CAM__SET_CAM_DOF_FOCUS_DISTANCE_BIAS(Cam camera, float p1) /* 0xC669EEA5D031B7DE */
{
	uint64_t val;

	native_init(0xC669EEA5D031B7DE);

	*(Cam*)(&val) = camera;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL CAM_IS_FOLLOW_PED_CAM_ACTIVE() /* 0xC6D3D26810C8E0F9 */
{
	native_init(0xC6D3D26810C8E0F9);
	return *(BOOL*)(native_call());
}

inline void CAM_SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(float p0) /* 0xC724C701C30B2FE7 */
{
	uint64_t val;

	native_init(0xC724C701C30B2FE7);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM_SET_CAM_NEAR_CLIP(Cam cam, float nearClip) /* 0xC7848EFCCC545182 */
{
	uint64_t val;

	native_init(0xC7848EFCCC545182);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = nearClip;
	native_push(val);

	native_call();
}

inline void CAM__RENDER_FIRST_PERSON_CAM(BOOL render, float p1, int p2) /* 0xC819F3CBB62BF692 */
{
	uint64_t val;

	native_init(0xC819F3CBB62BF692);

	*(BOOL*)(&val) = render;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void CAM_0xC8391C309684595A() /* 0xC8391C309684595A */
{
	native_init(0xC8391C309684595A);
	native_call();
}

inline void CAM_0xC8B5C4A79CC18B94(Cam p0) /* 0xC8B5C4A79CC18B94 */
{
	uint64_t val;

	native_init(0xC8B5C4A79CC18B94);

	*(Cam*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL CAM_IS_CAM_PLAYING_ANIM(Cam cam, const char* animName, const char* animDictionary) /* 0xC90621D8A0CEECF2 */
{
	uint64_t val;

	native_init(0xC90621D8A0CEECF2);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(const char**)(&val) = animDictionary;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CAM_IS_SCRIPT_GLOBAL_SHAKING() /* 0xC912AF078AF19212 */
{
	native_init(0xC912AF078AF19212);
	return *(BOOL*)(native_call());
}

inline void CAM_0xC91C6C55199308CA(Any p0, float p1, float p2, float p3) /* 0xC91C6C55199308CA */
{
	uint64_t val;

	native_init(0xC91C6C55199308CA);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void CAM_0xC92717EF615B6704(float p0) /* 0xC92717EF615B6704 */
{
	uint64_t val;

	native_init(0xC92717EF615B6704);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL CAM_0xCA9D2AA3E326D720() /* 0xCA9D2AA3E326D720 */
{
	native_init(0xCA9D2AA3E326D720);
	return *(BOOL*)(native_call());
}

inline BOOL CAM_IS_FOLLOW_VEHICLE_CAM_ACTIVE() /* 0xCBBDE6D335D6D496 */
{
	native_init(0xCBBDE6D335D6D496);
	return *(BOOL*)(native_call());
}

inline BOOL CAM_IS_CINEMATIC_SHOT_ACTIVE(Any p0) /* 0xCC9F3371A7C28BC9 */
{
	uint64_t val;

	native_init(0xCC9F3371A7C28BC9);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void CAM_0xCCD078C2665D2973(BOOL p0) /* 0xCCD078C2665D2973 */
{
	uint64_t val;

	native_init(0xCCD078C2665D2973);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM_0xCED08CBE8EBB97C7(float p0, float p1) /* 0xCED08CBE8EBB97C7 */
{
	uint64_t val;

	native_init(0xCED08CBE8EBB97C7);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline float CAM_0xD0082607100D7193() /* 0xD0082607100D7193 */
{
	native_init(0xD0082607100D7193);
	return *(float*)(native_call());
}

inline void CAM_0xD1B0F412F109EA5D(Any p0, Any p1) /* 0xD1B0F412F109EA5D */
{
	uint64_t val;

	native_init(0xD1B0F412F109EA5D);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void CAM_0xD1F8363DFAD03848(float p0) /* 0xD1F8363DFAD03848 */
{
	uint64_t val;

	native_init(0xD1F8363DFAD03848);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM_DO_SCREEN_FADE_IN(int duration) /* 0xD4E8E24955024033 */
{
	uint64_t val;

	native_init(0xD4E8E24955024033);

	*(int*)(&val) = duration;
	native_push(val);

	native_call();
}

inline void CAM_SET_GAMEPLAY_COORD_HINT(float x, float y, float z, int duration, int blendOutDuration, int blendInDuration, int unk) /* 0xD51ADCD2D8BC0FB3 */
{
	uint64_t val;

	native_init(0xD51ADCD2D8BC0FB3);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(int*)(&val) = blendOutDuration;
	native_push(val);
	*(int*)(&val) = blendInDuration;
	native_push(val);
	*(int*)(&val) = unk;
	native_push(val);

	native_call();
}

inline void CAM_SET_CAM_SHAKE_AMPLITUDE(Cam cam, float amplitude) /* 0xD93DB43B82BC0D00 */
{
	uint64_t val;

	native_init(0xD93DB43B82BC0D00);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = amplitude;
	native_push(val);

	native_call();
}

inline float CAM_GET_CAM_SPLINE_NODE_PHASE(Cam cam) /* 0xD9D0E694C8282C96 */
{
	uint64_t val;

	native_init(0xD9D0E694C8282C96);

	*(Cam*)(&val) = cam;
	native_push(val);

	return *(float*)(native_call());
}

inline void CAM_STOP_CUTSCENE_CAM_SHAKING() /* 0xDB629FFD9285FA06 */
{
	native_init(0xDB629FFD9285FA06);
	native_call();
}

inline void CAM_0xDB90C6CCA48940F1(BOOL p0) /* 0xDB90C6CCA48940F1 */
{
	uint64_t val;

	native_init(0xDB90C6CCA48940F1);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM_0xDC9DA9E8789F5246() /* 0xDC9DA9E8789F5246 */
{
	native_init(0xDC9DA9E8789F5246);
	native_call();
}

inline void CAM_SET_WIDESCREEN_BORDERS(BOOL toggle, int duration) /* 0xDCD4EA924F42D01A */
{
	uint64_t val;

	native_init(0xDCD4EA924F42D01A);

	*(BOOL*)(&val) = toggle;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);

	native_call();
}

inline void CAM_SHAKE_CINEMATIC_CAM(const char* p0, float p1) /* 0xDCE214D9ED58F3CF */
{
	uint64_t val;

	native_init(0xDCE214D9ED58F3CF);

	*(const char**)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void CAM_SET_CINEMATIC_MODE_ACTIVE(BOOL p0) /* 0xDCF0754AC3D6FD4E */
{
	uint64_t val;

	native_init(0xDCF0754AC3D6FD4E);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM_0xDD79DF9F4D26E1C9() /* 0xDD79DF9F4D26E1C9 */
{
	native_init(0xDD79DF9F4D26E1C9);
	native_call();
}

inline void CAM__DISABLE_FIRST_PERSON_CAM_THIS_FRAME() /* 0xDE2EF5DA284CC8DF */
{
	native_init(0xDE2EF5DA284CC8DF);
	native_call();
}

inline void CAM__ANIMATE_GAMEPLAY_CAM_ZOOM(float p0, float distance) /* 0xDF2E1F7742402E81 */
{
	uint64_t val;

	native_init(0xDF2E1F7742402E81);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = distance;
	native_push(val);

	native_call();
}

inline BOOL CAM_IS_CAM_ACTIVE(Cam cam) /* 0xDFB2B516207D3534 */
{
	uint64_t val;

	native_init(0xDFB2B516207D3534);

	*(Cam*)(&val) = cam;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline float CAM__GET_GAMEPLAY_CAM_FAR_CLIP() /* 0xDFC8CBC606FDB0FC */
{
	native_init(0xDFC8CBC606FDB0FC);
	return *(float*)(native_call());
}

inline void CAM_0xE111A7C0D200CBC5(Any p0, float p1) /* 0xE111A7C0D200CBC5 */
{
	uint64_t val;

	native_init(0xE111A7C0D200CBC5);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL CAM_PLAY_SYNCHRONIZED_CAM_ANIM(Cam camera, int SceneID, const char* animName, const char* animDictionary) /* 0xE32EFE9AB4A9AA0C */
{
	uint64_t val;

	native_init(0xE32EFE9AB4A9AA0C);

	*(Cam*)(&val) = camera;
	native_push(val);
	*(int*)(&val) = SceneID;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(const char**)(&val) = animDictionary;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CAM_IS_SPHERE_VISIBLE(float x, float y, float z, float radius) /* 0xE33D59DA70B58FDF */
{
	uint64_t val;

	native_init(0xE33D59DA70B58FDF);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void CAM_GET_IS_MULTIPLAYER_BRIEF(BOOL p0) /* 0xE3433EADAAF7EE40 */
{
	uint64_t val;

	native_init(0xE3433EADAAF7EE40);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL CAM_IS_GAMEPLAY_HINT_ACTIVE() /* 0xE520FF1AD2785B40 */
{
	native_init(0xE520FF1AD2785B40);
	return *(BOOL*)(native_call());
}

inline Any CAM_0xE9EA16D6E54CDCA4(Vehicle p0, int p1) /* 0xE9EA16D6E54CDCA4 */
{
	uint64_t val;

	native_init(0xE9EA16D6E54CDCA4);

	*(Vehicle*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline void CAM__ENABLE_CROSSHAIR_THIS_FRAME() /* 0xEA7F0AD7E9BA676F */
{
	native_init(0xEA7F0AD7E9BA676F);
	native_call();
}

inline Any CAM_0xEAF0FA793D05C592() /* 0xEAF0FA793D05C592 */
{
	native_init(0xEAF0FA793D05C592);
	return *(Any*)(native_call());
}

inline void CAM_SET_CAM_FAR_DOF(Cam cam, float farDOF) /* 0xEDD91296CD01AEE0 */
{
	uint64_t val;

	native_init(0xEDD91296CD01AEE0);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = farDOF;
	native_push(val);

	native_call();
}

inline Any CAM_0xEE778F8C7E1142E2(Any p0) /* 0xEE778F8C7E1142E2 */
{
	uint64_t val;

	native_init(0xEE778F8C7E1142E2);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline int CAM_GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() /* 0xEE82280AB767B690 */
{
	native_init(0xEE82280AB767B690);
	return *(int*)(native_call());
}

inline void CAM_STOP_CAM_POINTING(Cam cam) /* 0xF33AB75780BA57DE */
{
	uint64_t val;

	native_init(0xF33AB75780BA57DE);

	*(Cam*)(&val) = cam;
	native_push(val);

	native_call();
}

inline void CAM_STOP_GAMEPLAY_HINT(BOOL p0) /* 0xF46C581C61718916 */
{
	uint64_t val;

	native_init(0xF46C581C61718916);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM_0xF4C8CF9E353AFECA(const char* p0, float p1) /* 0xF4C8CF9E353AFECA */
{
	uint64_t val;

	native_init(0xF4C8CF9E353AFECA);

	*(const char**)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void CAM__F4F2C0D4EE209E20() /* 0xF4F2C0D4EE209E20 */
{
	native_init(0xF4F2C0D4EE209E20);
	native_call();
}

inline void CAM_0xF55E4046F6F831DC(Any p0, float p1) /* 0xF55E4046F6F831DC */
{
	uint64_t val;

	native_init(0xF55E4046F6F831DC);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void CAM_POINT_CAM_AT_COORD(Cam cam, float x, float y, float z) /* 0xF75497BB865F0803 */
{
	uint64_t val;

	native_init(0xF75497BB865F0803);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void CAM_0xF8BDBF3D573049A1(float p0) /* 0xF8BDBF3D573049A1 */
{
	uint64_t val;

	native_init(0xF8BDBF3D573049A1);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM__SET_CAMERA_RANGE(Cam cam, float range) /* 0xF9D02130ECDD1D77 */
{
	uint64_t val;

	native_init(0xF9D02130ECDD1D77);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(float*)(&val) = range;
	native_push(val);

	native_call();
}

inline void CAM_0xFD3151CD37EA2245(Any p0) /* 0xFD3151CD37EA2245 */
{
	uint64_t val;

	native_init(0xFD3151CD37EA2245);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CAM_SHAKE_GAMEPLAY_CAM(const char* shakeName, float intensity) /* 0xFD55E49555E017CF */
{
	uint64_t val;

	native_init(0xFD55E49555E017CF);

	*(const char**)(&val) = shakeName;
	native_push(val);
	*(float*)(&val) = intensity;
	native_push(val);

	native_call();
}

inline void CAM_ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xOffset, float yOffset, float zOffset, BOOL isRelative) /* 0xFEDB7D269E8C60E3 */
{
	uint64_t val;

	native_init(0xFEDB7D269E8C60E3);

	*(Cam*)(&val) = cam;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = xOffset;
	native_push(val);
	*(float*)(&val) = yOffset;
	native_push(val);
	*(float*)(&val) = zOffset;
	native_push(val);
	*(BOOL*)(&val) = isRelative;
	native_push(val);

	native_call();
}

inline const char *CONTROLS_GET_CONTROL_INSTRUCTIONAL_BUTTON(int inputGroup, int control, Player p2) /* 0x0499D7B09FC9B407 */
{
	uint64_t val;

	native_init(0x0499D7B09FC9B407);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);
	*(Player*)(&val) = p2;
	native_push(val);

	return *(const char**)(native_call());
}

inline BOOL CONTROLS_0x0F70731BACCFBB96() /* 0x0F70731BACCFBB96 */
{
	native_init(0x0F70731BACCFBB96);
	return *(BOOL*)(native_call());
}

inline float CONTROLS_GET_DISABLED_CONTROL_NORMAL(int inputGroup, int control) /* 0x11E65974A982637C */
{
	uint64_t val;

	native_init(0x11E65974A982637C);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL CONTROLS__IS_INPUT_JUST_DISABLED(int inputGroup) /* 0x13337B38DB572509 */
{
	uint64_t val;

	native_init(0x13337B38DB572509);

	*(int*)(&val) = inputGroup;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void CONTROLS_0x14D29BB12D47F68C(Any p0, Any p1, Any p2, Any p3, Any p4) /* 0x14D29BB12D47F68C */
{
	uint64_t val;

	native_init(0x14D29BB12D47F68C);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	native_call();
}

inline BOOL CONTROLS_IS_CONTROL_ENABLED(int inputGroup, int control) /* 0x1CEA6BFDF248E5D9 */
{
	uint64_t val;

	native_init(0x1CEA6BFDF248E5D9);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CONTROLS_0x23F09EADC01449D6(BOOL p0) /* 0x23F09EADC01449D6 */
{
	uint64_t val;

	native_init(0x23F09EADC01449D6);

	*(BOOL*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CONTROLS_IS_DISABLED_CONTROL_JUST_RELEASED(int inputGroup, int control) /* 0x305C8DCD79DA8B0F */
{
	uint64_t val;

	native_init(0x305C8DCD79DA8B0F);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void CONTROLS_ENABLE_CONTROL_ACTION(int inputGroup, int control, BOOL enable) /* 0x351220255D64C155 */
{
	uint64_t val;

	native_init(0x351220255D64C155);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);
	*(BOOL*)(&val) = enable;
	native_push(val);

	native_call();
}

inline void CONTROLS_STOP_PAD_SHAKE(Any p0) /* 0x38C16A305E8CDC8D */
{
	uint64_t val;

	native_init(0x38C16A305E8CDC8D);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL CONTROLS_0x3D42B92563939375(const char* p0) /* 0x3D42B92563939375 */
{
	uint64_t val;

	native_init(0x3D42B92563939375);

	*(const char**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CONTROLS_0x4683149ED1DDE7A1(const char* p0) /* 0x4683149ED1DDE7A1 */
{
	uint64_t val;

	native_init(0x4683149ED1DDE7A1);

	*(const char**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void CONTROLS_SET_PAD_SHAKE(int p0, int duration, int frequency) /* 0x48B3886C1358D0D5 */
{
	uint64_t val;

	native_init(0x48B3886C1358D0D5);

	*(int*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(int*)(&val) = frequency;
	native_push(val);

	native_call();
}

inline float CONTROLS_0x4F8A26A890FD62FB(int inputGroup, int control) /* 0x4F8A26A890FD62FB */
{
	uint64_t val;

	native_init(0x4F8A26A890FD62FB);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL CONTROLS_IS_CONTROL_JUST_RELEASED(int inputGroup, int control) /* 0x50F940259D3841E6 */
{
	uint64_t val;

	native_init(0x50F940259D3841E6);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CONTROLS_IS_CONTROL_JUST_PRESSED(int inputGroup, int control) /* 0x580417101DDB492F */
{
	uint64_t val;

	native_init(0x580417101DDB492F);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any CONTROLS_0x59B9A7AF4C95133C() /* 0x59B9A7AF4C95133C */
{
	native_init(0x59B9A7AF4C95133C);
	return *(Any*)(native_call());
}

inline void CONTROLS_0x5B73C77D9EB66E24(BOOL p0) /* 0x5B73C77D9EB66E24 */
{
	uint64_t val;

	native_init(0x5B73C77D9EB66E24);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline float CONTROLS_0x5B84D09CEC5209C5(int inputGroup, int control) /* 0x5B84D09CEC5209C5 */
{
	uint64_t val;

	native_init(0x5B84D09CEC5209C5);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);

	return *(float*)(native_call());
}

inline void CONTROLS_DISABLE_ALL_CONTROL_ACTIONS(int inputGroup) /* 0x5F4B6931816E599B */
{
	uint64_t val;

	native_init(0x5F4B6931816E599B);

	*(int*)(&val) = inputGroup;
	native_push(val);

	native_call();
}

inline void CONTROLS_0x643ED62D5EA3BEBD() /* 0x643ED62D5EA3BEBD */
{
	native_init(0x643ED62D5EA3BEBD);
	native_call();
}

inline BOOL CONTROLS_IS_CONTROL_RELEASED(int inputGroup, int control) /* 0x648EE3E7F38877DD */
{
	uint64_t val;

	native_init(0x648EE3E7F38877DD);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CONTROLS_0x6CD79468A1E595C6(int inputGroup) /* 0x6CD79468A1E595C6 */
{
	uint64_t val;

	native_init(0x6CD79468A1E595C6);

	*(int*)(&val) = inputGroup;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CONTROLS_IS_LOOK_INVERTED() /* 0x77B612531280010D */
{
	native_init(0x77B612531280010D);
	return *(BOOL*)(native_call());
}

inline void CONTROLS_SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(BOOL toggle) /* 0x798FDEB5B1575088 */
{
	uint64_t val;

	native_init(0x798FDEB5B1575088);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void CONTROLS__DISABLE_INPUT_GROUP(int inputGroup) /* 0x7F4724035FDCA1DD */
{
	uint64_t val;

	native_init(0x7F4724035FDCA1DD);

	*(int*)(&val) = inputGroup;
	native_push(val);

	native_call();
}

inline const char *CONTROLS_0x80C2FD58D720C801(int inputGroup, int control, BOOL p2) /* 0x80C2FD58D720C801 */
{
	uint64_t val;

	native_init(0x80C2FD58D720C801);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	return *(const char**)(native_call());
}

inline void CONTROLS_0x8290252FFF36ACB5(int p0, int red, int green, int blue) /* 0x8290252FFF36ACB5 */
{
	uint64_t val;

	native_init(0x8290252FFF36ACB5);

	*(int*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);

	native_call();
}

inline BOOL CONTROLS_IS_DISABLED_CONTROL_JUST_PRESSED(int inputGroup, int control) /* 0x91AEF906BCA88877 */
{
	uint64_t val;

	native_init(0x91AEF906BCA88877);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void CONTROLS_0xA0CEFCEA390AAB9B(Any p0) /* 0xA0CEFCEA390AAB9B */
{
	uint64_t val;

	native_init(0xA0CEFCEA390AAB9B);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL CONTROLS__IS_INPUT_DISABLED(int inputGroup) /* 0xA571D46727E2B718 */
{
	uint64_t val;

	native_init(0xA571D46727E2B718);

	*(int*)(&val) = inputGroup;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void CONTROLS_ENABLE_ALL_CONTROL_ACTIONS(int inputGroup) /* 0xA5FFE9B05F199DE7 */
{
	uint64_t val;

	native_init(0xA5FFE9B05F199DE7);

	*(int*)(&val) = inputGroup;
	native_push(val);

	native_call();
}

inline int CONTROLS_GET_LOCAL_PLAYER_AIM_STATE() /* 0xBB41AFBBBC0A0287 */
{
	native_init(0xBB41AFBBBC0A0287);
	return *(int*)(native_call());
}

inline void CONTROLS_0xCB0360EFEFB2580D(Any p0) /* 0xCB0360EFEFB2580D */
{
	uint64_t val;

	native_init(0xCB0360EFEFB2580D);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int CONTROLS_0xD7D22F5592AED8BA(int p0) /* 0xD7D22F5592AED8BA */
{
	uint64_t val;

	native_init(0xD7D22F5592AED8BA);

	*(int*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline int CONTROLS_GET_CONTROL_VALUE(int inputGroup, int control) /* 0xD95E79E8686D2C27 */
{
	uint64_t val;

	native_init(0xD95E79E8686D2C27);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL CONTROLS_0xE1615EC03B3BB4FD() /* 0xE1615EC03B3BB4FD */
{
	native_init(0xE1615EC03B3BB4FD);
	return *(BOOL*)(native_call());
}

inline BOOL CONTROLS_IS_DISABLED_CONTROL_PRESSED(int inputGroup, int control) /* 0xE2587F8CBBD87B1D */
{
	uint64_t val;

	native_init(0xE2587F8CBBD87B1D);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CONTROLS__SET_CONTROL_NORMAL(int inputGroup, int control, float amount) /* 0xE8A25867FBA3B05E */
{
	uint64_t val;

	native_init(0xE8A25867FBA3B05E);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);
	*(float*)(&val) = amount;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline float CONTROLS_GET_CONTROL_NORMAL(int inputGroup, int control) /* 0xEC3C9B8D5327B563 */
{
	uint64_t val;

	native_init(0xEC3C9B8D5327B563);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);

	return *(float*)(native_call());
}

inline void CONTROLS_SET_INPUT_EXCLUSIVE(int inputGroup, int control) /* 0xEDE476E5EE29EDB1 */
{
	uint64_t val;

	native_init(0xEDE476E5EE29EDB1);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);

	native_call();
}

inline void CONTROLS_0xF239400E16C23E08(Any p0, Any p1) /* 0xF239400E16C23E08 */
{
	uint64_t val;

	native_init(0xF239400E16C23E08);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL CONTROLS_IS_CONTROL_PRESSED(int inputGroup, int contorl) /* 0xF3A21BCD95725A4A */
{
	uint64_t val;

	native_init(0xF3A21BCD95725A4A);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = contorl;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CONTROLS__SET_CURSOR_LOCATION(float x, float y) /* 0xFC695459D4D0E219 */
{
	uint64_t val;

	native_init(0xFC695459D4D0E219);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CONTROLS_0xFC859E2374407556() /* 0xFC859E2374407556 */
{
	native_init(0xFC859E2374407556);
	return *(BOOL*)(native_call());
}

inline void CONTROLS_DISABLE_CONTROL_ACTION(int inputGroup, int control, BOOL disable) /* 0xFE99B66D079CF6BC */
{
	uint64_t val;

	native_init(0xFE99B66D079CF6BC);

	*(int*)(&val) = inputGroup;
	native_push(val);
	*(int*)(&val) = control;
	native_push(val);
	*(BOOL*)(&val) = disable;
	native_push(val);

	native_call();
}

inline void CUTSCENE_0x011883F41211432A(float x1, float y1, float z1, float x2, float y2, float z2, int p6) /* 0x011883F41211432A */
{
	uint64_t val;

	native_init(0x011883F41211432A);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(int*)(&val) = p6;
	native_push(val);

	native_call();
}

inline void CUTSCENE_SET_CUTSCENE_PED_PROP_VARIATION(const char* cutsceneEntName, int p1, int p2, int p3, Hash modelHash) /* 0x0546524ADE2E9723 */
{
	uint64_t val;

	native_init(0x0546524ADE2E9723);

	*(const char**)(&val) = cutsceneEntName;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	native_call();
}

inline void CUTSCENE_0x06A3524161C502BA(Any* p0) /* 0x06A3524161C502BA */
{
	uint64_t val;

	native_init(0x06A3524161C502BA);

	*(Any**)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CUTSCENE_0x06EE9048FD080382(BOOL p0) /* 0x06EE9048FD080382 */
{
	uint64_t val;

	native_init(0x06EE9048FD080382);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Entity CUTSCENE_GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(const char* cutsceneEntName, Hash modelHash) /* 0x0A2E9FDB9A8C62F6 */
{
	uint64_t val;

	native_init(0x0A2E9FDB9A8C62F6);

	*(const char**)(&val) = cutsceneEntName;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	return *(Entity*)(native_call());
}

inline Any CUTSCENE_0x0ABC54DE641DC0FC(Any* p0) /* 0x0ABC54DE641DC0FC */
{
	uint64_t val;

	native_init(0x0ABC54DE641DC0FC);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void CUTSCENE_START_CUTSCENE(int p0) /* 0x186D5CB5E7B0FF7B */
{
	uint64_t val;

	native_init(0x186D5CB5E7B0FF7B);

	*(int*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CUTSCENE_START_CUTSCENE_AT_COORDS(float x, float y, float z, int p3) /* 0x1C9ADDA3244A1FBF */
{
	uint64_t val;

	native_init(0x1C9ADDA3244A1FBF);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void CUTSCENE_0x20746F7B1032A3C7(BOOL p0, BOOL p1, BOOL p2, BOOL p3) /* 0x20746F7B1032A3C7 */
{
	uint64_t val;

	native_init(0x20746F7B1032A3C7);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void CUTSCENE_REGISTER_SYNCHRONISED_SCRIPT_SPEECH() /* 0x2131046957F31B04 */
{
	native_init(0x2131046957F31B04);
	native_call();
}

inline BOOL CUTSCENE_HAS_THIS_CUTSCENE_LOADED(const char* cutsceneName) /* 0x228D3D94F8A11C3C */
{
	uint64_t val;

	native_init(0x228D3D94F8A11C3C);

	*(const char**)(&val) = cutsceneName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void CUTSCENE_0x2A56C06EBEF2B0D9(const char* cutsceneEntName, Ped ped, Hash modelHash) /* 0x2A56C06EBEF2B0D9 */
{
	uint64_t val;

	native_init(0x2A56C06EBEF2B0D9);

	*(const char**)(&val) = cutsceneEntName;
	native_push(val);
	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	native_call();
}

inline void CUTSCENE_0x2F137B508DE238F2(BOOL p0) /* 0x2F137B508DE238F2 */
{
	uint64_t val;

	native_init(0x2F137B508DE238F2);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL CUTSCENE_WAS_CUTSCENE_SKIPPED() /* 0x40C8656EDAEDD569 */
{
	native_init(0x40C8656EDAEDD569);
	return *(BOOL*)(native_call());
}

inline void CUTSCENE_0x41FAA8FB2ECE8720(BOOL p0) /* 0x41FAA8FB2ECE8720 */
{
	uint64_t val;

	native_init(0x41FAA8FB2ECE8720);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CUTSCENE_REMOVE_CUTSCENE() /* 0x440AF51A3462B86F */
{
	native_init(0x440AF51A3462B86F);
	native_call();
}

inline int CUTSCENE_GET_CUTSCENE_SECTION_PLAYING() /* 0x49010A6A396553D8 */
{
	native_init(0x49010A6A396553D8);
	return *(int*)(native_call());
}

inline BOOL CUTSCENE_DOES_CUTSCENE_ENTITY_EXIST(const char* cutsceneEntName, Hash modelHash) /* 0x499EF20C5DB25C59 */
{
	uint64_t val;

	native_init(0x499EF20C5DB25C59);

	*(const char**)(&val) = cutsceneEntName;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void CUTSCENE_0x4C61C75BEE8184C2(const char* p0, Any p1, Any p2) /* 0x4C61C75BEE8184C2 */
{
	uint64_t val;

	native_init(0x4C61C75BEE8184C2);

	*(const char**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL CUTSCENE_CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) /* 0x4C6A6451C79E4662 */
{
	uint64_t val;

	native_init(0x4C6A6451C79E4662);

	*(const char**)(&val) = cutsceneEntName;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CUTSCENE_0x4CEBC1ED31E8925E(const char* cutsceneName) /* 0x4CEBC1ED31E8925E */
{
	uint64_t val;

	native_init(0x4CEBC1ED31E8925E);

	*(const char**)(&val) = cutsceneName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int CUTSCENE_0x583DF8E3D4AFBD98() /* 0x583DF8E3D4AFBD98 */
{
	native_init(0x583DF8E3D4AFBD98);
	return *(int*)(native_call());
}

inline BOOL CUTSCENE_0x5EDEF0CF8C1DAB3C() /* 0x5EDEF0CF8C1DAB3C */
{
	native_init(0x5EDEF0CF8C1DAB3C);
	return *(BOOL*)(native_call());
}

inline BOOL CUTSCENE_CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) /* 0x645D0B458D8E17B5 */
{
	uint64_t val;

	native_init(0x645D0B458D8E17B5);

	*(const char**)(&val) = cutsceneEntName;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CUTSCENE_0x708BDD8CD795B043() /* 0x708BDD8CD795B043 */
{
	native_init(0x708BDD8CD795B043);
	return *(BOOL*)(native_call());
}

inline BOOL CUTSCENE_0x71B74D2AE19338D0(int p0) /* 0x71B74D2AE19338D0 */
{
	uint64_t val;

	native_init(0x71B74D2AE19338D0);

	*(int*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void CUTSCENE_REQUEST_CUTSCENE(const char* cutsceneName, int p1) /* 0x7A86743F475D9E09 */
{
	uint64_t val;

	native_init(0x7A86743F475D9E09);

	*(const char**)(&val) = cutsceneName;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL CUTSCENE_HAS_CUTSCENE_FINISHED() /* 0x7C0A893088881D57 */
{
	native_init(0x7C0A893088881D57);
	return *(BOOL*)(native_call());
}

inline void CUTSCENE_0x7F96F23FA9B73327(Hash modelHash) /* 0x7F96F23FA9B73327 */
{
	uint64_t val;

	native_init(0x7F96F23FA9B73327);

	*(Hash*)(&val) = modelHash;
	native_push(val);

	native_call();
}

inline void CUTSCENE_SET_CUTSCENE_FADE_VALUES(BOOL p0, BOOL p1, BOOL p2, BOOL p3) /* 0x8093F23ABACCC7D4 */
{
	uint64_t val;

	native_init(0x8093F23ABACCC7D4);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void CUTSCENE_0x8D9DF6ECA8768583(int p0) /* 0x8D9DF6ECA8768583 */
{
	uint64_t val;

	native_init(0x8D9DF6ECA8768583);

	*(int*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CUTSCENE_SET_CUTSCENE_TRIGGER_AREA(float p0, float p1, float p2, float p3, float p4, float p5) /* 0x9896CE4721BE84BA */
{
	uint64_t val;

	native_init(0x9896CE4721BE84BA);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);

	native_call();
}

inline BOOL CUTSCENE_IS_CUTSCENE_ACTIVE() /* 0x991251AFC3981F84 */
{
	native_init(0x991251AFC3981F84);
	return *(BOOL*)(native_call());
}

inline int CUTSCENE_0xA0FE76168A189DDB() /* 0xA0FE76168A189DDB */
{
	native_init(0xA0FE76168A189DDB);
	return *(int*)(native_call());
}

inline BOOL CUTSCENE_0xA1C996C2A744262E(Any* p0) /* 0xA1C996C2A744262E */
{
	uint64_t val;

	native_init(0xA1C996C2A744262E);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CUTSCENE_CAN_SET_EXIT_STATE_FOR_CAMERA(BOOL p0) /* 0xB2CBCD0930DFB420 */
{
	uint64_t val;

	native_init(0xB2CBCD0930DFB420);

	*(BOOL*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL CUTSCENE_0xB56BBBCC2955D9CB() /* 0xB56BBBCC2955D9CB */
{
	native_init(0xB56BBBCC2955D9CB);
	return *(BOOL*)(native_call());
}

inline void CUTSCENE_SET_CUTSCENE_ORIGIN(float x, float y, float z, float p3, int p4) /* 0xB812B3FD1C01CF27 */
{
	uint64_t val;

	native_init(0xB812B3FD1C01CF27);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(int*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void CUTSCENE_SET_CUTSCENE_PED_COMPONENT_VARIATION(const char* cutsceneEntName, int p1, int p2, int p3, Hash modelHash) /* 0xBA01E7B6DEEFBBC9 */
{
	uint64_t val;

	native_init(0xBA01E7B6DEEFBBC9);

	*(const char**)(&val) = cutsceneEntName;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	native_call();
}

inline Entity CUTSCENE_GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) /* 0xC0741A26499654CD */
{
	uint64_t val;

	native_init(0xC0741A26499654CD);

	*(const char**)(&val) = cutsceneEntName;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	return *(Entity*)(native_call());
}

inline void CUTSCENE__REQUEST_CUTSCENE_EX(const char* cutsceneName, int p1, int p2) /* 0xC23DE0E91C30B58C */
{
	uint64_t val;

	native_init(0xC23DE0E91C30B58C);

	*(const char**)(&val) = cutsceneName;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL CUTSCENE_HAS_CUTSCENE_LOADED() /* 0xC59F528E9AB9F339 */
{
	native_init(0xC59F528E9AB9F339);
	return *(BOOL*)(native_call());
}

inline void CUTSCENE_0xC61B86C9F61EB404(BOOL toggle) /* 0xC61B86C9F61EB404 */
{
	uint64_t val;

	native_init(0xC61B86C9F61EB404);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void CUTSCENE_STOP_CUTSCENE(BOOL p0) /* 0xC7272775B4DC786E */
{
	uint64_t val;

	native_init(0xC7272775B4DC786E);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CUTSCENE_0xD00D76A7DFC9D852(Any* p0) /* 0xD00D76A7DFC9D852 */
{
	uint64_t val;

	native_init(0xD00D76A7DFC9D852);

	*(Any**)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CUTSCENE_STOP_CUTSCENE_IMMEDIATELY() /* 0xD220BDD222AC4A1E */
{
	native_init(0xD220BDD222AC4A1E);
	native_call();
}

inline BOOL CUTSCENE_IS_CUTSCENE_PLAYING() /* 0xD3C2E180A40F031E */
{
	native_init(0xD3C2E180A40F031E);
	return *(BOOL*)(native_call());
}

inline void CUTSCENE_0xE36A98D8AB3D3C66(BOOL p0) /* 0xE36A98D8AB3D3C66 */
{
	uint64_t val;

	native_init(0xE36A98D8AB3D3C66);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void CUTSCENE_REGISTER_ENTITY_FOR_CUTSCENE(Ped cutscenePed, const char* cutsceneEntName, int p2, Hash modelHash, int p4) /* 0xE40C1C56DF95C2E8 */
{
	uint64_t val;

	native_init(0xE40C1C56DF95C2E8);

	*(Ped*)(&val) = cutscenePed;
	native_push(val);
	*(const char**)(&val) = cutsceneEntName;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);
	*(int*)(&val) = p4;
	native_push(val);

	native_call();
}

inline int CUTSCENE_GET_CUTSCENE_TIME() /* 0xE625BEABBAFFDAB9 */
{
	native_init(0xE625BEABBAFFDAB9);
	return *(int*)(native_call());
}

inline int CUTSCENE_GET_CUTSCENE_TOTAL_DURATION() /* 0xEE53B14A19E480D4 */
{
	native_init(0xEE53B14A19E480D4);
	return *(int*)(native_call());
}

inline BOOL DATAFILE_0x01095C95CD46B624(int p0) /* 0x01095C95CD46B624 */
{
	uint64_t val;

	native_init(0x01095C95CD46B624);

	*(int*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int DATAFILE__OBJECT_VALUE_GET_TYPE(Any* objectData, const char* key) /* 0x031C55ED33227371 */
{
	uint64_t val;

	native_init(0x031C55ED33227371);

	*(Any**)(&val) = objectData;
	native_push(val);
	*(const char**)(&val) = key;
	native_push(val);

	return *(int*)(native_call());
}

inline int DATAFILE__ARRAY_VALUE_GET_SIZE(Any* arrayData) /* 0x065DB281590CEA2D */
{
	uint64_t val;

	native_init(0x065DB281590CEA2D);

	*(Any**)(&val) = arrayData;
	native_push(val);

	return *(int*)(native_call());
}

inline float DATAFILE__OBJECT_VALUE_GET_FLOAT(Any* objectData, const char* key) /* 0x06610343E73B9727 */
{
	uint64_t val;

	native_init(0x06610343E73B9727);

	*(Any**)(&val) = objectData;
	native_push(val);
	*(const char**)(&val) = key;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL DATAFILE__OBJECT_VALUE_GET_BOOLEAN(Any* objectData, const char* key) /* 0x1186940ED72FFEEC */
{
	uint64_t val;

	native_init(0x1186940ED72FFEEC);

	*(Any**)(&val) = objectData;
	native_push(val);
	*(const char**)(&val) = key;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DATAFILE_0x15FF52B809DB2353(Any p0) /* 0x15FF52B809DB2353 */
{
	uint64_t val;

	native_init(0x15FF52B809DB2353);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DATAFILE_0x22DA66936E0FFF37(Any p0) /* 0x22DA66936E0FFF37 */
{
	uint64_t val;

	native_init(0x22DA66936E0FFF37);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void DATAFILE_0x2ED61456317B8178() /* 0x2ED61456317B8178 */
{
	native_init(0x2ED61456317B8178);
	native_call();
}

inline void DATAFILE__ARRAY_VALUE_ADD_STRING(Any* arrayData, const char* value) /* 0x2F0661C155AEEEAA */
{
	uint64_t val;

	native_init(0x2F0661C155AEEEAA);

	*(Any**)(&val) = arrayData;
	native_push(val);
	*(const char**)(&val) = value;
	native_push(val);

	native_call();
}

inline void DATAFILE__OBJECT_VALUE_ADD_BOOLEAN(Any* objectData, const char* key, BOOL value) /* 0x35124302A556A325 */
{
	uint64_t val;

	native_init(0x35124302A556A325);

	*(Any**)(&val) = objectData;
	native_push(val);
	*(const char**)(&val) = key;
	native_push(val);
	*(BOOL*)(&val) = value;
	native_push(val);

	native_call();
}

inline int DATAFILE__ARRAY_VALUE_GET_TYPE(Any* arrayData, int arrayIndex) /* 0x3A0014ADB172A3C5 */
{
	uint64_t val;

	native_init(0x3A0014ADB172A3C5);

	*(Any**)(&val) = arrayData;
	native_push(val);
	*(int*)(&val) = arrayIndex;
	native_push(val);

	return *(int*)(native_call());
}

inline const char *DATAFILE__OBJECT_VALUE_GET_STRING(Any* objectData, const char* key) /* 0x3D2FD9E763B24472 */
{
	uint64_t val;

	native_init(0x3D2FD9E763B24472);

	*(Any**)(&val) = objectData;
	native_push(val);
	*(const char**)(&val) = key;
	native_push(val);

	return *(const char**)(native_call());
}

inline int DATAFILE__ARRAY_VALUE_GET_INTEGER(Any* arrayData, int arrayIndex) /* 0x3E5AE19425CD74BE */
{
	uint64_t val;

	native_init(0x3E5AE19425CD74BE);

	*(Any**)(&val) = arrayData;
	native_push(val);
	*(int*)(&val) = arrayIndex;
	native_push(val);

	return *(int*)(native_call());
}

inline void DATAFILE__ARRAY_VALUE_ADD_VECTOR3(Any* arrayData, float valueX, float valueY, float valueZ) /* 0x407F8D034F70F0C2 */
{
	uint64_t val;

	native_init(0x407F8D034F70F0C2);

	*(Any**)(&val) = arrayData;
	native_push(val);
	*(float*)(&val) = valueX;
	native_push(val);
	*(float*)(&val) = valueY;
	native_push(val);
	*(float*)(&val) = valueZ;
	native_push(val);

	native_call();
}

inline BOOL DATAFILE_0x4645DE9980999E93(const char* p0, const char* p1, const char* p2, const char* p3, const char* type) /* 0x4645DE9980999E93 */
{
	uint64_t val;

	native_init(0x4645DE9980999E93);

	*(const char**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = p2;
	native_push(val);
	*(const char**)(&val) = p3;
	native_push(val);
	*(const char**)(&val) = type;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Vector3 DATAFILE__OBJECT_VALUE_GET_VECTOR3(Any* objectData, const char* key) /* 0x46CD3CB66E0825CC */
{
	uint64_t val;

	native_init(0x46CD3CB66E0825CC);

	*(Any**)(&val) = objectData;
	native_push(val);
	*(const char**)(&val) = key;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline void DATAFILE__OBJECT_VALUE_ADD_VECTOR3(Any* objectData, const char* key, float valueX, float valueY, float valueZ) /* 0x4CD49B76338C7DEE */
{
	uint64_t val;

	native_init(0x4CD49B76338C7DEE);

	*(Any**)(&val) = objectData;
	native_push(val);
	*(const char**)(&val) = key;
	native_push(val);
	*(float*)(&val) = valueX;
	native_push(val);
	*(float*)(&val) = valueY;
	native_push(val);
	*(float*)(&val) = valueZ;
	native_push(val);

	native_call();
}

inline BOOL DATAFILE_0x4DFDD9EB705F8140(BOOL* p0) /* 0x4DFDD9EB705F8140 */
{
	uint64_t val;

	native_init(0x4DFDD9EB705F8140);

	*(BOOL**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DATAFILE__ARRAY_VALUE_GET_BOOLEAN(Any* arrayData, int arrayIndex) /* 0x50C1B2874E50C114 */
{
	uint64_t val;

	native_init(0x50C1B2874E50C114);

	*(Any**)(&val) = arrayData;
	native_push(val);
	*(int*)(&val) = arrayIndex;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DATAFILE_0x52818819057F2B40(int p0) /* 0x52818819057F2B40 */
{
	uint64_t val;

	native_init(0x52818819057F2B40);

	*(int*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void DATAFILE__ARRAY_VALUE_ADD_FLOAT(Any* arrayData, float value) /* 0x57A995FD75D37F56 */
{
	uint64_t val;

	native_init(0x57A995FD75D37F56);

	*(Any**)(&val) = arrayData;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline Any* DATAFILE__OBJECT_VALUE_ADD_ARRAY(Any* objectData, const char* key) /* 0x5B11728527CA6E5F */
{
	uint64_t val;

	native_init(0x5B11728527CA6E5F);

	*(Any**)(&val) = objectData;
	native_push(val);
	*(const char**)(&val) = key;
	native_push(val);

	return *(Any**)(native_call());
}

inline BOOL DATAFILE_0x648E7A5434AF7969(const char* p0, Any* p1, BOOL p2, Any* p3, Any* p4, Any* p5, const char* type) /* 0x648E7A5434AF7969 */
{
	uint64_t val;

	native_init(0x648E7A5434AF7969);

	*(const char**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);
	*(Any**)(&val) = p4;
	native_push(val);
	*(Any**)(&val) = p5;
	native_push(val);
	*(const char**)(&val) = type;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any* DATAFILE__ARRAY_VALUE_ADD_OBJECT(Any* arrayData) /* 0x6889498B3E19C797 */
{
	uint64_t val;

	native_init(0x6889498B3E19C797);

	*(Any**)(&val) = arrayData;
	native_push(val);

	return *(Any**)(native_call());
}

inline BOOL DATAFILE_0x692D808C34A82143(const char* p0, float p1, const char* type) /* 0x692D808C34A82143 */
{
	uint64_t val;

	native_init(0x692D808C34A82143);

	*(const char**)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = type;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void DATAFILE_0x6CC86E78358D5119() /* 0x6CC86E78358D5119 */
{
	native_init(0x6CC86E78358D5119);
	native_call();
}

inline int DATAFILE__OBJECT_VALUE_GET_INTEGER(Any* objectData, const char* key) /* 0x78F06F6B1FB5A80C */
{
	uint64_t val;

	native_init(0x78F06F6B1FB5A80C);

	*(Any**)(&val) = objectData;
	native_push(val);
	*(const char**)(&val) = key;
	native_push(val);

	return *(int*)(native_call());
}

inline Any* DATAFILE__OBJECT_VALUE_GET_ARRAY(Any* objectData, const char* key) /* 0x7A983AA9DA2659ED */
{
	uint64_t val;

	native_init(0x7A983AA9DA2659ED);

	*(Any**)(&val) = objectData;
	native_push(val);
	*(const char**)(&val) = key;
	native_push(val);

	return *(Any**)(native_call());
}

inline BOOL DATAFILE_0x83BCCE3224735F05(const char* filename) /* 0x83BCCE3224735F05 */
{
	uint64_t val;

	native_init(0x83BCCE3224735F05);

	*(const char**)(&val) = filename;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any* DATAFILE__ARRAY_VALUE_GET_OBJECT(Any* arrayData, int arrayIndex) /* 0x8B5FADCC4E3A145F */
{
	uint64_t val;

	native_init(0x8B5FADCC4E3A145F);

	*(Any**)(&val) = arrayData;
	native_push(val);
	*(int*)(&val) = arrayIndex;
	native_push(val);

	return *(Any**)(native_call());
}

inline Vector3 DATAFILE__ARRAY_VALUE_GET_VECTOR3(Any* arrayData, int arrayIndex) /* 0x8D2064E5B64A628A */
{
	uint64_t val;

	native_init(0x8D2064E5B64A628A);

	*(Any**)(&val) = arrayData;
	native_push(val);
	*(int*)(&val) = arrayIndex;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline BOOL DATAFILE_0x8F5EA1C01D65A100(Any p0) /* 0x8F5EA1C01D65A100 */
{
	uint64_t val;

	native_init(0x8F5EA1C01D65A100);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void DATAFILE__OBJECT_VALUE_ADD_STRING(Any* objectData, const char* key, const char* value) /* 0x8FF3847DADD8E30C */
{
	uint64_t val;

	native_init(0x8FF3847DADD8E30C);

	*(Any**)(&val) = objectData;
	native_push(val);
	*(const char**)(&val) = key;
	native_push(val);
	*(const char**)(&val) = value;
	native_push(val);

	native_call();
}

inline const char *DATAFILE_DATAFILE_GET_FILE_DICT() /* 0x906B778CA1DC72B6 */
{
	native_init(0x906B778CA1DC72B6);
	return *(const char**)(native_call());
}

inline void DATAFILE_DATAFILE_DELETE() /* 0x9AB9C1CFC8862DFB */
{
	native_init(0x9AB9C1CFC8862DFB);
	native_call();
}

inline BOOL DATAFILE_0x9CB0BFA7A9342C3D(int p0, BOOL p1) /* 0x9CB0BFA7A9342C3D */
{
	uint64_t val;

	native_init(0x9CB0BFA7A9342C3D);

	*(int*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any* DATAFILE__OBJECT_VALUE_ADD_OBJECT(Any* objectData, const char* key) /* 0xA358F56F10732EE1 */
{
	uint64_t val;

	native_init(0xA358F56F10732EE1);

	*(Any**)(&val) = objectData;
	native_push(val);
	*(const char**)(&val) = key;
	native_push(val);

	return *(Any**)(native_call());
}

inline BOOL DATAFILE_0xA5EFC3E847D60507(const char* p0, const char* p1, const char* p2, const char* p3, BOOL p4) /* 0xA5EFC3E847D60507 */
{
	uint64_t val;

	native_init(0xA5EFC3E847D60507);

	*(const char**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = p2;
	native_push(val);
	*(const char**)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DATAFILE_0xA69AC4ADE82B57A4(int p0) /* 0xA69AC4ADE82B57A4 */
{
	uint64_t val;

	native_init(0xA69AC4ADE82B57A4);

	*(int*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void DATAFILE_0xAD6875BBC0FC899C(Blip x) /* 0xAD6875BBC0FC899C */
{
	uint64_t val;

	native_init(0xAD6875BBC0FC899C);

	*(Blip*)(&val) = x;
	native_push(val);

	native_call();
}

inline Any* DATAFILE__OBJECT_VALUE_GET_OBJECT(Any* sCloudFile, const char* key) /* 0xB6B9DDC412FCEEE2 */
{
	uint64_t val;

	native_init(0xB6B9DDC412FCEEE2);

	*(Any**)(&val) = sCloudFile;
	native_push(val);
	*(const char**)(&val) = key;
	native_push(val);

	return *(Any**)(native_call());
}

inline BOOL DATAFILE_DATAFILE_IS_SAVE_PENDING() /* 0xBEDB96A7584AA8CF */
{
	native_init(0xBEDB96A7584AA8CF);
	return *(BOOL*)(native_call());
}

inline float DATAFILE__ARRAY_VALUE_GET_FLOAT(Any* arrayData, int arrayIndex) /* 0xC0C527B525D7CFB5 */
{
	uint64_t val;

	native_init(0xC0C527B525D7CFB5);

	*(Any**)(&val) = arrayData;
	native_push(val);
	*(int*)(&val) = arrayIndex;
	native_push(val);

	return *(float*)(native_call());
}

inline void DATAFILE__OBJECT_VALUE_ADD_FLOAT(Any* objectData, const char* key, float value) /* 0xC27E1CC2D795105E */
{
	uint64_t val;

	native_init(0xC27E1CC2D795105E);

	*(Any**)(&val) = objectData;
	native_push(val);
	*(const char**)(&val) = key;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline BOOL DATAFILE__LOAD_UGC_FILE(const char* filename) /* 0xC5238C011AF405E4 */
{
	uint64_t val;

	native_init(0xC5238C011AF405E4);

	*(const char**)(&val) = filename;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void DATAFILE_0xC55854C7D7274882() /* 0xC55854C7D7274882 */
{
	native_init(0xC55854C7D7274882);
	native_call();
}

inline BOOL DATAFILE_0xC84527E235FCA219(const char* p0, BOOL p1, const char* p2, Any* p3, Any* p4, const char* type, BOOL p6) /* 0xC84527E235FCA219 */
{
	uint64_t val;

	native_init(0xC84527E235FCA219);

	*(const char**)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);
	*(Any**)(&val) = p4;
	native_push(val);
	*(const char**)(&val) = type;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void DATAFILE__ARRAY_VALUE_ADD_INTEGER(Any* arrayData, int value) /* 0xCABDB751D86FE93B */
{
	uint64_t val;

	native_init(0xCABDB751D86FE93B);

	*(Any**)(&val) = arrayData;
	native_push(val);
	*(int*)(&val) = value;
	native_push(val);

	native_call();
}

inline void DATAFILE_DATAFILE_CREATE() /* 0xD27058A1CA2B13EE */
{
	native_init(0xD27058A1CA2B13EE);
	native_call();
}

inline const char *DATAFILE__ARRAY_VALUE_GET_STRING(Any* arrayData, int arrayIndex) /* 0xD3F2FFEB8D836F52 */
{
	uint64_t val;

	native_init(0xD3F2FFEB8D836F52);

	*(Any**)(&val) = arrayData;
	native_push(val);
	*(int*)(&val) = arrayIndex;
	native_push(val);

	return *(const char**)(native_call());
}

inline void DATAFILE__OBJECT_VALUE_ADD_INTEGER(Any* objectData, const char* key, int value) /* 0xE7E035450A7948D5 */
{
	uint64_t val;

	native_init(0xE7E035450A7948D5);

	*(Any**)(&val) = objectData;
	native_push(val);
	*(const char**)(&val) = key;
	native_push(val);
	*(int*)(&val) = value;
	native_push(val);

	native_call();
}

inline void DATAFILE__ARRAY_VALUE_ADD_BOOLEAN(Any* arrayData, BOOL value) /* 0xF8B0F5A43E928C76 */
{
	uint64_t val;

	native_init(0xF8B0F5A43E928C76);

	*(Any**)(&val) = arrayData;
	native_push(val);
	*(BOOL*)(&val) = value;
	native_push(val);

	native_call();
}

inline BOOL DATAFILE_0xF8CC1EBE0B62E29F(Any p0) /* 0xF8CC1EBE0B62E29F */
{
	uint64_t val;

	native_init(0xF8CC1EBE0B62E29F);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DATAFILE_0xFCCAE5B92A830878(Any p0) /* 0xFCCAE5B92A830878 */
{
	uint64_t val;

	native_init(0xFCCAE5B92A830878);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DECISIONEVENT_IS_SHOCKING_EVENT_IN_SPHERE(int type, float x, float y, float z, float radius) /* 0x1374ABB7C15BAB92 */
{
	uint64_t val;

	native_init(0x1374ABB7C15BAB92);

	*(int*)(&val) = type;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DECISIONEVENT_REMOVE_SHOCKING_EVENT(ScrHandle event) /* 0x2CDA538C44C6CCE5 */
{
	uint64_t val;

	native_init(0x2CDA538C44C6CCE5);

	*(ScrHandle*)(&val) = event;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void DECISIONEVENT_SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() /* 0x2F9A292AD0A3BD89 */
{
	native_init(0x2F9A292AD0A3BD89);
	native_call();
}

inline void DECISIONEVENT_REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() /* 0x340F1415B68AEADE */
{
	native_init(0x340F1415B68AEADE);
	native_call();
}

inline void DECISIONEVENT_SUPPRESS_SHOCKING_EVENT_TYPE_NEXT_FRAME(int type) /* 0x3FD2EC8BF1F1CF30 */
{
	uint64_t val;

	native_init(0x3FD2EC8BF1F1CF30);

	*(int*)(&val) = type;
	native_push(val);

	native_call();
}

inline void DECISIONEVENT_CLEAR_DECISION_MAKER_EVENT_RESPONSE(Hash name, int type) /* 0x4FC9381A7AEE8968 */
{
	uint64_t val;

	native_init(0x4FC9381A7AEE8968);

	*(Hash*)(&val) = name;
	native_push(val);
	*(int*)(&val) = type;
	native_push(val);

	native_call();
}

inline void DECISIONEVENT_SUPPRESS_AGITATION_EVENTS_NEXT_FRAME() /* 0x5F3B7749C112D552 */
{
	native_init(0x5F3B7749C112D552);
	native_call();
}

inline ScrHandle DECISIONEVENT_ADD_SHOCKING_EVENT_FOR_ENTITY(int type, Entity entity, float duration) /* 0x7FD8F3BE76F89422 */
{
	uint64_t val;

	native_init(0x7FD8F3BE76F89422);

	*(int*)(&val) = type;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = duration;
	native_push(val);

	return *(ScrHandle*)(native_call());
}

inline void DECISIONEVENT_SET_DECISION_MAKER(Ped ped, Hash name) /* 0xB604A2942ADED0EE */
{
	uint64_t val;

	native_init(0xB604A2942ADED0EE);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = name;
	native_push(val);

	native_call();
}

inline void DECISIONEVENT_UNBLOCK_DECISION_MAKER_EVENT(Hash name, int type) /* 0xD7CD9CF34F2C99E8 */
{
	uint64_t val;

	native_init(0xD7CD9CF34F2C99E8);

	*(Hash*)(&val) = name;
	native_push(val);
	*(int*)(&val) = type;
	native_push(val);

	native_call();
}

inline ScrHandle DECISIONEVENT_ADD_SHOCKING_EVENT_AT_POSITION(int type, float x, float y, float z, float duration) /* 0xD9F8455409B525E9 */
{
	uint64_t val;

	native_init(0xD9F8455409B525E9);

	*(int*)(&val) = type;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = duration;
	native_push(val);

	return *(ScrHandle*)(native_call());
}

inline void DECISIONEVENT_BLOCK_DECISION_MAKER_EVENT(Hash name, int type) /* 0xE42FCDFD0E4196F7 */
{
	uint64_t val;

	native_init(0xE42FCDFD0E4196F7);

	*(Hash*)(&val) = name;
	native_push(val);
	*(int*)(&val) = type;
	native_push(val);

	native_call();
}

inline void DECISIONEVENT_REMOVE_ALL_SHOCKING_EVENTS(BOOL p0) /* 0xEAABE8FDFA21274C */
{
	uint64_t val;

	native_init(0xEAABE8FDFA21274C);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL DECORATOR_DECOR_REMOVE(Entity entity, const char* propertyName) /* 0x00EE9F297C738720 */
{
	uint64_t val;

	native_init(0x00EE9F297C738720);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = propertyName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DECORATOR_DECOR_EXIST_ON(Entity entity, const char* propertyName) /* 0x05661B80A8C9165F */
{
	uint64_t val;

	native_init(0x05661B80A8C9165F);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = propertyName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DECORATOR_DECOR_SET_INT(Entity entity, const char* propertyName, int value) /* 0x0CE3AA5E1CA19E10 */
{
	uint64_t val;

	native_init(0x0CE3AA5E1CA19E10);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = propertyName;
	native_push(val);
	*(int*)(&val) = value;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DECORATOR__DECOR_SET_FLOAT(Entity entity, const char* propertyName, float value) /* 0x211AB1DD8D0F363A */
{
	uint64_t val;

	native_init(0x211AB1DD8D0F363A);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = propertyName;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DECORATOR_0x241FCA5B1AA14F75() /* 0x241FCA5B1AA14F75 */
{
	native_init(0x241FCA5B1AA14F75);
	return *(BOOL*)(native_call());
}

inline BOOL DECORATOR_DECOR_IS_REGISTERED_AS_TYPE(const char* propertyName, int type) /* 0x4F14F9F870D6FBC8 */
{
	uint64_t val;

	native_init(0x4F14F9F870D6FBC8);

	*(const char**)(&val) = propertyName;
	native_push(val);
	*(int*)(&val) = type;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline float DECORATOR__DECOR_GET_FLOAT(Entity entity, const char* propertyName) /* 0x6524A2F114706F43 */
{
	uint64_t val;

	native_init(0x6524A2F114706F43);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = propertyName;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL DECORATOR_DECOR_SET_BOOL(Entity entity, const char* propertyName, BOOL value) /* 0x6B1E8E2ED1335B71 */
{
	uint64_t val;

	native_init(0x6B1E8E2ED1335B71);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = propertyName;
	native_push(val);
	*(BOOL*)(&val) = value;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DECORATOR_DECOR_SET_TIME(Entity entity, const char* propertyName, int timestamp) /* 0x95AED7B8E39ECAA4 */
{
	uint64_t val;

	native_init(0x95AED7B8E39ECAA4);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = propertyName;
	native_push(val);
	*(int*)(&val) = timestamp;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void DECORATOR_DECOR_REGISTER(const char* propertyName, int type) /* 0x9FD90732F56403CE */
{
	uint64_t val;

	native_init(0x9FD90732F56403CE);

	*(const char**)(&val) = propertyName;
	native_push(val);
	*(int*)(&val) = type;
	native_push(val);

	native_call();
}

inline int DECORATOR_DECOR_GET_INT(Entity entity, const char* propertyName) /* 0xA06C969B02A97298 */
{
	uint64_t val;

	native_init(0xA06C969B02A97298);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = propertyName;
	native_push(val);

	return *(int*)(native_call());
}

inline void DECORATOR_DECOR_REGISTER_LOCK() /* 0xA9D14EEA259F9248 */
{
	native_init(0xA9D14EEA259F9248);
	native_call();
}

inline BOOL DECORATOR_DECOR_GET_BOOL(Entity entity, const char* propertyName) /* 0xDACE671663F2F5DB */
{
	uint64_t val;

	native_init(0xDACE671663F2F5DB);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = propertyName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any DLC1__GET_FORCED_COMPONENT(Any p0) /* 0x017568A8182D98A6 */
{
	uint64_t val;

	native_init(0x017568A8182D98A6);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline Hash DLC1_GET_HASH_NAME_FOR_COMPONENT(Entity entity, int componentId, int drawableVariant, int textureVariant) /* 0x0368B3A838070348 */
{
	uint64_t val;

	native_init(0x0368B3A838070348);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = componentId;
	native_push(val);
	*(int*)(&val) = drawableVariant;
	native_push(val);
	*(int*)(&val) = textureVariant;
	native_push(val);

	return *(Hash*)(native_call());
}

inline BOOL DLC1_IS_DLC_VEHICLE_MOD(Any modData) /* 0x0564B9FF9631B82C */
{
	uint64_t val;

	native_init(0x0564B9FF9631B82C);

	*(Any*)(&val) = modData;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any DLC1_GET_SHOP_PED_OUTFIT_LOCATE(Any p0) /* 0x073CA26B079F956E */
{
	uint64_t val;

	native_init(0x073CA26B079F956E);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL DLC1_GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Any outfitStruct, int slot, Any* componentStruct) /* 0x19F2A026EDF0013F */
{
	uint64_t val;

	native_init(0x19F2A026EDF0013F);

	*(Any*)(&val) = outfitStruct;
	native_push(val);
	*(int*)(&val) = slot;
	native_push(val);
	*(Any**)(&val) = componentStruct;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void DLC1_INIT_SHOP_PED_COMPONENT(int* outComponent) /* 0x1E8C308FD312C036 */
{
	uint64_t val;

	native_init(0x1E8C308FD312C036);

	*(int**)(&val) = outComponent;
	native_push(val);

	native_call();
}

inline void DLC1_GET_SHOP_PED_QUERY_COMPONENT(int componentId, int* outComponent) /* 0x249E310B2D920699 */
{
	uint64_t val;

	native_init(0x249E310B2D920699);

	*(int*)(&val) = componentId;
	native_push(val);
	*(int**)(&val) = outComponent;
	native_push(val);

	native_call();
}

inline int DLC1__GET_NUM_DECORATIONS(int character) /* 0x278F76C3B0A8F109 */
{
	uint64_t val;

	native_init(0x278F76C3B0A8F109);

	*(int*)(&val) = character;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL DLC1_GET_DLC_VEHICLE_DATA(int dlcVehicleIndex, int* outData) /* 0x33468EDC08E371F6 */
{
	uint64_t val;

	native_init(0x33468EDC08E371F6);

	*(int*)(&val) = dlcVehicleIndex;
	native_push(val);
	*(int**)(&val) = outData;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DLC1__IS_TAG_RESTRICTED(Hash componentHash, Hash restrictionTag, int componentId) /* 0x341DE7ED1D2A1BFD */
{
	uint64_t val;

	native_init(0x341DE7ED1D2A1BFD);

	*(Hash*)(&val) = componentHash;
	native_push(val);
	*(Hash*)(&val) = restrictionTag;
	native_push(val);
	*(int*)(&val) = componentId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int DLC1_GET_NUM_DLC_WEAPON_COMPONENTS(int dlcWeaponIndex) /* 0x405425358A7D61FE */
{
	uint64_t val;

	native_init(0x405425358A7D61FE);

	*(int*)(&val) = dlcWeaponIndex;
	native_push(val);

	return *(int*)(native_call());
}

inline int DLC1_0x50F457823CE6EB5F(int p0, int p1, int p2, int p3) /* 0x50F457823CE6EB5F */
{
	uint64_t val;

	native_init(0x50F457823CE6EB5F);

	*(int*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);

	return *(int*)(native_call());
}

inline int DLC1_GET_DLC_VEHICLE_FLAGS(int dlcVehicleIndex) /* 0x5549EE11FA22FCF2 */
{
	uint64_t val;

	native_init(0x5549EE11FA22FCF2);

	*(int*)(&val) = dlcVehicleIndex;
	native_push(val);

	return *(int*)(native_call());
}

inline void DLC1_0x5D5CAFF661DDF6FC(Any p0, Any* p1) /* 0x5D5CAFF661DDF6FC */
{
	uint64_t val;

	native_init(0x5D5CAFF661DDF6FC);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	native_call();
}

inline Hash DLC1_GET_HASH_NAME_FOR_PROP(Entity entity, int componentId, int propIndex, int propTextureIndex) /* 0x5D6160275CAEC8DD */
{
	uint64_t val;

	native_init(0x5D6160275CAEC8DD);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = componentId;
	native_push(val);
	*(int*)(&val) = propIndex;
	native_push(val);
	*(int*)(&val) = propTextureIndex;
	native_push(val);

	return *(Hash*)(native_call());
}

inline void DLC1_GET_FORCED_COMPONENT(Hash componentHash, int componentId, Any* p2, Any* p3, Any* p4) /* 0x6C93ED8C2F74859B */
{
	uint64_t val;

	native_init(0x6C93ED8C2F74859B);

	*(Hash*)(&val) = componentHash;
	native_push(val);
	*(int*)(&val) = componentId;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);
	*(Any**)(&val) = p4;
	native_push(val);

	native_call();
}

inline BOOL DLC1_GET_DLC_WEAPON_COMPONENT_DATA(int dlcWeaponIndex, int dlcWeapCompIndex, Any* ComponentDataPtr) /* 0x6CF598A2957C2BF8 */
{
	uint64_t val;

	native_init(0x6CF598A2957C2BF8);

	*(int*)(&val) = dlcWeaponIndex;
	native_push(val);
	*(int*)(&val) = dlcWeapCompIndex;
	native_push(val);
	*(Any**)(&val) = ComponentDataPtr;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void DLC1_GET_SHOP_PED_QUERY_OUTFIT(Any p0, Any* outfit) /* 0x6D793F03A631FE56 */
{
	uint64_t val;

	native_init(0x6D793F03A631FE56);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = outfit;
	native_push(val);

	native_call();
}

inline void DLC1_GET_VARIANT_COMPONENT(Hash componentHash, int componentId, Any* p2, Any* p3, Any* p4) /* 0x6E11F282F11863B6 */
{
	uint64_t val;

	native_init(0x6E11F282F11863B6);

	*(Hash*)(&val) = componentHash;
	native_push(val);
	*(int*)(&val) = componentId;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);
	*(Any**)(&val) = p4;
	native_push(val);

	native_call();
}

inline void DLC1_GET_SHOP_PED_COMPONENT(Hash p0, Any* p1) /* 0x74C0E2A57EC66760 */
{
	uint64_t val;

	native_init(0x74C0E2A57EC66760);

	*(Hash*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL DLC1_GET_DLC_WEAPON_DATA(int dlcWeaponIndex, int* outData) /* 0x79923CD21BECE14E */
{
	uint64_t val;

	native_init(0x79923CD21BECE14E);

	*(int*)(&val) = dlcWeaponIndex;
	native_push(val);
	*(int**)(&val) = outData;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int DLC1__GET_NUM_PROPS_FROM_OUTFIT(int character, int p1, int p2, BOOL p3, int p4, int componentId) /* 0x9BDF59818B1E38C1 */
{
	uint64_t val;

	native_init(0x9BDF59818B1E38C1);

	*(int*)(&val) = character;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(int*)(&val) = p4;
	native_push(val);
	*(int*)(&val) = componentId;
	native_push(val);

	return *(int*)(native_call());
}

inline int DLC1_GET_NUM_DLC_VEHICLES() /* 0xA7A866D21CD2329B */
{
	native_init(0xA7A866D21CD2329B);
	return *(int*)(native_call());
}

inline BOOL DLC1_GET_SHOP_PED_OUTFIT_PROP_VARIANT(Any outfitStruct, int slot, Any* propStruct) /* 0xA9F9C2E0FDE11CBB */
{
	uint64_t val;

	native_init(0xA9F9C2E0FDE11CBB);

	*(Any*)(&val) = outfitStruct;
	native_push(val);
	*(int*)(&val) = slot;
	native_push(val);
	*(Any**)(&val) = propStruct;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void DLC1_GET_SHOP_PED_OUTFIT(Any p0, Any* p1) /* 0xB7952076E444979D */
{
	uint64_t val;

	native_init(0xB7952076E444979D);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	native_call();
}

inline int DLC1_0xC098810437312FFF(int modData) /* 0xC098810437312FFF */
{
	uint64_t val;

	native_init(0xC098810437312FFF);

	*(int*)(&val) = modData;
	native_push(val);

	return *(int*)(native_call());
}

inline int DLC1__GET_VARIANTS_FOR_COMPONENT_COUNT(Hash componentHash) /* 0xC17AD0E5752BECDA */
{
	uint64_t val;

	native_init(0xC17AD0E5752BECDA);

	*(Hash*)(&val) = componentHash;
	native_push(val);

	return *(int*)(native_call());
}

inline int DLC1__GET_NUM_FORCED_COMPONENTS(Hash componentHash) /* 0xC6B9DB42C04DD8C3 */
{
	uint64_t val;

	native_init(0xC6B9DB42C04DD8C3);

	*(Hash*)(&val) = componentHash;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL DLC1__IS_DLC_DATA_EMPTY(Any* dlcData) /* 0xD4D7B033C3AA243C */
{
	uint64_t val;

	native_init(0xD4D7B033C3AA243C);

	*(Any**)(&val) = dlcData;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void DLC1_GET_SHOP_PED_QUERY_PROP(Any p0, Any* p1) /* 0xDE44A00999B2837D */
{
	uint64_t val;

	native_init(0xDE44A00999B2837D);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	native_call();
}

inline void DLC1_0xE1CA84EBF72E691D(Any p0, Any p1, Any* p2, Any* p3, Any* p4) /* 0xE1CA84EBF72E691D */
{
	uint64_t val;

	native_init(0xE1CA84EBF72E691D);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);
	*(Any**)(&val) = p4;
	native_push(val);

	native_call();
}

inline void DLC1_INIT_SHOP_PED_PROP(int* outProp) /* 0xEB0A2B758F7B850F */
{
	uint64_t val;

	native_init(0xEB0A2B758F7B850F);

	*(int**)(&val) = outProp;
	native_push(val);

	native_call();
}

inline Hash DLC1_GET_DLC_VEHICLE_MODEL(int dlcVehicleIndex) /* 0xECC01B7C5763333C */
{
	uint64_t val;

	native_init(0xECC01B7C5763333C);

	*(int*)(&val) = dlcVehicleIndex;
	native_push(val);

	return *(Hash*)(native_call());
}

inline int DLC1_GET_NUM_DLC_WEAPONS() /* 0xEE47635F352DA367 */
{
	native_init(0xEE47635F352DA367);
	return *(int*)(native_call());
}

inline int DLC1__GET_CHARACTER_OUTFITS_COUNT(int character, BOOL p1) /* 0xF3FBE2D50A6A8C28 */
{
	uint64_t val;

	native_init(0xF3FBE2D50A6A8C28);

	*(int*)(&val) = character;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL DLC1_0xFF56381874F82086(int character, int p1, int* outComponent) /* 0xFF56381874F82086 */
{
	uint64_t val;

	native_init(0xFF56381874F82086);

	*(int*)(&val) = character;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(int**)(&val) = outComponent;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void DLC2__LOAD_MP_DLC_MAPS() /* 0x0888C3502DBBEEF5 */
{
	native_init(0x0888C3502DBBEEF5);
	native_call();
}

inline BOOL DLC2_GET_IS_LOADING_SCREEN_ACTIVE() /* 0x10D0A8F259E93EC9 */
{
	native_init(0x10D0A8F259E93EC9);
	return *(BOOL*)(native_call());
}

inline BOOL DLC2__NULLIFY(Any* variable, Any unused) /* 0x46E2B844905BC5F0 */
{
	uint64_t val;

	native_init(0x46E2B844905BC5F0);

	*(Any**)(&val) = variable;
	native_push(val);
	*(Any*)(&val) = unused;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DLC2_IS_DLC_PRESENT(Hash dlcHash) /* 0x812595A0644CE1DE */
{
	uint64_t val;

	native_init(0x812595A0644CE1DE);

	*(Hash*)(&val) = dlcHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL DLC2_0x8D30F648014A92B5() /* 0x8D30F648014A92B5 */
{
	native_init(0x8D30F648014A92B5);
	return *(BOOL*)(native_call());
}

inline Any DLC2_0x9489659372A81585() /* 0x9489659372A81585 */
{
	native_init(0x9489659372A81585);
	return *(Any*)(native_call());
}

inline Any DLC2_0xA213B11DFF526300() /* 0xA213B11DFF526300 */
{
	native_init(0xA213B11DFF526300);
	return *(Any*)(native_call());
}

inline void DLC2__UNLOAD_MP_DLC_MAPS() /* 0xD7C10C4A637992C9 */
{
	native_init(0xD7C10C4A637992C9);
	native_call();
}

inline BOOL DLC2_0xF2E07819EF1A5289() /* 0xF2E07819EF1A5289 */
{
	native_init(0xF2E07819EF1A5289);
	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity entity1, Entity entity2) /* 0x0267D00AF114F17A */
{
	uint64_t val;

	native_init(0x0267D00AF114F17A);

	*(Entity*)(&val) = entity1;
	native_push(val);
	*(Entity*)(&val) = entity2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_REMOVE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) /* 0x033C0F9A64E229AE */
{
	uint64_t val;

	native_init(0x033C0F9A64E229AE);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(Hash*)(&val) = originalModel;
	native_push(val);
	*(Hash*)(&val) = newModel;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);

	native_call();
}

inline Ped ENTITY_GET_PED_INDEX_FROM_ENTITY_INDEX(Entity entity) /* 0x04A2A40C73395041 */
{
	uint64_t val;

	native_init(0x04A2A40C73395041);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(Ped*)(native_call());
}

inline BOOL ENTITY_DOES_ENTITY_HAVE_DRAWABLE(Entity entity) /* 0x060D6E96F8B8E48D */
{
	uint64_t val;

	native_init(0x060D6E96F8B8E48D);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_SET_ENTITY_COORDS(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) /* 0x06843DA7060A026B */
{
	uint64_t val;

	native_init(0x06843DA7060A026B);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = xPos;
	native_push(val);
	*(float*)(&val) = yPos;
	native_push(val);
	*(float*)(&val) = zPos;
	native_push(val);
	*(BOOL*)(&val) = xAxis;
	native_push(val);
	*(BOOL*)(&val) = yAxis;
	native_push(val);
	*(BOOL*)(&val) = zAxis;
	native_push(val);
	*(BOOL*)(&val) = clearArea;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_FIND_ANIM_EVENT_PHASE(const char* animDictionary, const char* animName, const char* p2, Any* p3, Any* p4) /* 0x07F1BE2BCCAA27A7 */
{
	uint64_t val;

	native_init(0x07F1BE2BCCAA27A7);

	*(const char**)(&val) = animDictionary;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(const char**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);
	*(Any**)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_SET_ENTITY_RECORDS_COLLISIONS(Entity entity, BOOL toggle) /* 0x0A50A1EEDAD01E65 */
{
	uint64_t val;

	native_init(0x0A50A1EEDAD01E65);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Vector3 ENTITY_GET_ENTITY_FORWARD_VECTOR(Entity entity) /* 0x0A794A5A57F8DF91 */
{
	uint64_t val;

	native_init(0x0A794A5A57F8DF91);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_A_MISSION_ENTITY(Entity entity) /* 0x0A7B270912999B3C */
{
	uint64_t val;

	native_init(0x0A7B270912999B3C);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_SET_ENTITY_LOAD_COLLISION_FLAG(Entity entity, BOOL toggle) /* 0x0DC7CABAB1E9B67E */
{
	uint64_t val;

	native_init(0x0DC7CABAB1E9B67E);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_ENTITY_MAX_SPEED(Entity entity, float speed) /* 0x0E46A3FCBDE2A1B1 */
{
	uint64_t val;

	native_init(0x0E46A3FCBDE2A1B1);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_IS_ENTITY_TOUCHING_MODEL(Entity entity, Hash modelHash) /* 0x0F42323798A58C8C */
{
	uint64_t val;

	native_init(0x0F42323798A58C8C);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(float posX, float posY, float posZ, float radius, Object object, float playbackRate) /* 0x11E79CAB7183B6F5 */
{
	uint64_t val;

	native_init(0x11E79CAB7183B6F5);

	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(Object*)(&val) = object;
	native_push(val);
	*(float*)(&val) = playbackRate;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_STATIC(Entity entity) /* 0x1218E6886D3D8327 */
{
	uint64_t val;

	native_init(0x1218E6886D3D8327);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_CREATE_FORCED_OBJECT(float x, float y, float z, Any p3, Hash modelHash, BOOL p5) /* 0x150E808B375A385A */
{
	uint64_t val;

	native_init(0x150E808B375A385A);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline int ENTITY_GET_ENTITY_MAX_HEALTH(Entity entity) /* 0x15D757606D170C3C */
{
	uint64_t val;

	native_init(0x15D757606D170C3C);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(int*)(native_call());
}

inline void ENTITY_SET_ENTITY_MAX_HEALTH(Entity entity, int value) /* 0x166E7CF68597D8B5 */
{
	uint64_t val;

	native_init(0x166E7CF68597D8B5);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = value;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_ENTITY_DYNAMIC(Entity entity, BOOL toggle) /* 0x1718DE8E3F2823CA */
{
	uint64_t val;

	native_init(0x1718DE8E3F2823CA);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_ENTITY_CAN_BE_DAMAGED(Entity entity, BOOL toggle) /* 0x1760FFA8AB074D66 */
{
	uint64_t val;

	native_init(0x1760FFA8AB074D66);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_IS_ENTITY_TOUCHING_ENTITY(Entity entity, Entity targetEntity) /* 0x17FFC1B2BA35A494 */
{
	uint64_t val;

	native_init(0x17FFC1B2BA35A494);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(Entity*)(&val) = targetEntity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Vector3 ENTITY_GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity entity, float offsetX, float offsetY, float offsetZ) /* 0x1899F328B0E12848 */
{
	uint64_t val;

	native_init(0x1899F328B0E12848);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = offsetX;
	native_push(val);
	*(float*)(&val) = offsetY;
	native_push(val);
	*(float*)(&val) = offsetZ;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline void ENTITY_APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity entity, int forceType, float x, float y, float z, BOOL p5, BOOL isDirectionRel, BOOL isForceRel, BOOL p8) /* 0x18FF00FC7EFF559E */
{
	uint64_t val;

	native_init(0x18FF00FC7EFF559E);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = forceType;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = isDirectionRel;
	native_push(val);
	*(BOOL*)(&val) = isForceRel;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);

	native_call();
}

inline void ENTITY_0x1A092BB0C3808B96(Entity entity, BOOL p1) /* 0x1A092BB0C3808B96 */
{
	uint64_t val;

	native_init(0x1A092BB0C3808B96);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_ENTITY_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) /* 0x1A9205C1B9EE827F */
{
	uint64_t val;

	native_init(0x1A9205C1B9EE827F);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);
	*(BOOL*)(&val) = keepPhysics;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_ENTITY_VELOCITY(Entity entity, float x, float y, float z) /* 0x1C99BB7B6E96D16F */
{
	uint64_t val;

	native_init(0x1C99BB7B6E96D16F);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_IS_ENTITY_UPSIDEDOWN(Entity entity) /* 0x1DBD58820FA61D71 */
{
	uint64_t val;

	native_init(0x1DBD58820FA61D71);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline float ENTITY_GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity entity) /* 0x1DD55701034110E5 */
{
	uint64_t val;

	native_init(0x1DD55701034110E5);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_PLAYING_ANIM(Entity entity, const char* animDict, const char* animName, int taskFlag) /* 0x1F0B79228E461EC9 */
{
	uint64_t val;

	native_init(0x1F0B79228E461EC9);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(int*)(&val) = taskFlag;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_AT_COORD(Entity entity, float xPos, float yPos, float zPos, float xSize, float ySize, float zSize, BOOL p7, BOOL p8, int p9) /* 0x20B60995556D004F */
{
	uint64_t val;

	native_init(0x20B60995556D004F);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = xPos;
	native_push(val);
	*(float*)(&val) = yPos;
	native_push(val);
	*(float*)(&val) = zPos;
	native_push(val);
	*(float*)(&val) = xSize;
	native_push(val);
	*(float*)(&val) = ySize;
	native_push(val);
	*(float*)(&val) = zSize;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(int*)(&val) = p9;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_HAS_ENTITY_ANIM_FINISHED(Entity entity, const char* animDict, const char* animName, int p3) /* 0x20B711662962B472 */
{
	uint64_t val;

	native_init(0x20B711662962B472);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Vector3 ENTITY_GET_ENTITY_ROTATION_VELOCITY(Entity entity) /* 0x213B91045D09B983 */
{
	uint64_t val;

	native_init(0x213B91045D09B983);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline Vector3 ENTITY_GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity entity, float posX, float posY, float posZ) /* 0x2274BC1C4885E333 */
{
	uint64_t val;

	native_init(0x2274BC1C4885E333);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline void ENTITY_SET_ENTITY_COORDS_NO_OFFSET(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis) /* 0x239A3351AC1DA385 */
{
	uint64_t val;

	native_init(0x239A3351AC1DA385);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = xPos;
	native_push(val);
	*(float*)(&val) = yPos;
	native_push(val);
	*(float*)(&val) = zPos;
	native_push(val);
	*(BOOL*)(&val) = xAxis;
	native_push(val);
	*(BOOL*)(&val) = yAxis;
	native_push(val);
	*(BOOL*)(&val) = zAxis;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_PED_AS_NO_LONGER_NEEDED(Ped* ped) /* 0x2595DD4236549CE3 */
{
	uint64_t val;

	native_init(0x2595DD4236549CE3);

	*(Ped**)(&val) = ped;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity entity) /* 0x26AA915AD89BFB4B */
{
	uint64_t val;

	native_init(0x26AA915AD89BFB4B);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any ENTITY_STOP_ENTITY_ANIM(Entity entity, const char* animation, const char* animGroup, float p3) /* 0x28004F88151E03E0 */
{
	uint64_t val;

	native_init(0x28004F88151E03E0);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = animation;
	native_push(val);
	*(const char**)(&val) = animGroup;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	return *(Any*)(native_call());
}

inline void ENTITY_SET_ENTITY_ANIM_SPEED(Entity entity, const char* animDictionary, const char* animName, float speedMultiplier) /* 0x28D1A16553C51776 */
{
	uint64_t val;

	native_init(0x28D1A16553C51776);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = animDictionary;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(float*)(&val) = speedMultiplier;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_ENTITY_MOTION_BLUR(Entity entity, BOOL toggle) /* 0x295D82A8559F9150 */
{
	uint64_t val;

	native_init(0x295D82A8559F9150);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void ENTITY_0x2C2E3DC128F44309(Entity entity, BOOL p1) /* 0x2C2E3DC128F44309 */
{
	uint64_t val;

	native_init(0x2C2E3DC128F44309);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline float ENTITY_GET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDict, const char* animName) /* 0x346D81500D088F42 */
{
	uint64_t val;

	native_init(0x346D81500D088F42);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);

	return *(float*)(native_call());
}

inline void ENTITY_SET_ENTITY_INVINCIBLE(Entity entity, BOOL toggle) /* 0x3882114BDE571AD4 */
{
	uint64_t val;

	native_init(0x3882114BDE571AD4);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void ENTITY__SET_ENTITY_SOMETHING(Entity entity, BOOL toggle) /* 0x3910051CCECDB00C */
{
	uint64_t val;

	native_init(0x3910051CCECDB00C);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void ENTITY_CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float x, float y, float z, float radius, Hash model, BOOL p5) /* 0x3A52AE588830BF7F */
{
	uint64_t val;

	native_init(0x3A52AE588830BF7F);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(Hash*)(&val) = model;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_OBJECT_AS_NO_LONGER_NEEDED(Object* object) /* 0x3AE22DEB5BA5A3E6 */
{
	uint64_t val;

	native_init(0x3AE22DEB5BA5A3E6);

	*(Object**)(&val) = object;
	native_push(val);

	native_call();
}

inline Vector3 ENTITY_GET_ENTITY_COORDS(Entity entity, BOOL alive) /* 0x3FEF770D40960D5A */
{
	uint64_t val;

	native_init(0x3FEF770D40960D5A);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = alive;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline void ENTITY_FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity entity) /* 0x40FDEDB72F8293B2 */
{
	uint64_t val;

	native_init(0x40FDEDB72F8293B2);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline int ENTITY_GET_ENTITY_LOD_DIST(Entity entity) /* 0x4159C2762B5791D6 */
{
	uint64_t val;

	native_init(0x4159C2762B5791D6);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(int*)(native_call());
}

inline void ENTITY_FREEZE_ENTITY_POSITION(Entity entity, BOOL toggle) /* 0x428CA6DBD1094446 */
{
	uint64_t val;

	native_init(0x428CA6DBD1094446);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_STOP_SYNCHRONIZED_ENTITY_ANIM(Entity entity, float p1, BOOL p2) /* 0x43D3807C077261E3 */
{
	uint64_t val;

	native_init(0x43D3807C077261E3);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_SET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDictionary, const char* animName, float time) /* 0x4487C259F0F70977 */
{
	uint64_t val;

	native_init(0x4487C259F0F70977);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = animDictionary;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(float*)(&val) = time;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_ENTITY_ALPHA(Entity entity, int alphaLevel, BOOL unk) /* 0x44A0870B7E92D7C0 */
{
	uint64_t val;

	native_init(0x44A0870B7E92D7C0);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = alphaLevel;
	native_push(val);
	*(BOOL*)(&val) = unk;
	native_push(val);

	native_call();
}

inline Vector3 ENTITY_GET_WORLD_POSITION_OF_ENTITY_BONE(Entity entity, int boneIndex) /* 0x44A8FCB8ED227738 */
{
	uint64_t val;

	native_init(0x44A8FCB8ED227738);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = boneIndex;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_VISIBLE(Entity entity) /* 0x47D6F43D77935C75 */
{
	uint64_t val;

	native_init(0x47D6F43D77935C75);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Vector3 ENTITY_GET_ENTITY_VELOCITY(Entity entity) /* 0x4805D2B1D8CF94A9 */
{
	uint64_t val;

	native_init(0x4805D2B1D8CF94A9);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline Entity ENTITY_GET_ENTITY_ATTACHED_TO(Entity entity) /* 0x48C2BED9180FE123 */
{
	uint64_t val;

	native_init(0x48C2BED9180FE123);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(Entity*)(native_call());
}

inline void ENTITY_SET_ENTITY_HAS_GRAVITY(Entity entity, BOOL toggle) /* 0x4A4722448F18EEF5 */
{
	uint64_t val;

	native_init(0x4A4722448F18EEF5);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Vehicle ENTITY_GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity entity) /* 0x4B53F92932ADFAC0 */
{
	uint64_t val;

	native_init(0x4B53F92932ADFAC0);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(Vehicle*)(native_call());
}

inline Player ENTITY_GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(Entity entity, int team) /* 0x4DC9A62F844D9337 */
{
	uint64_t val;

	native_init(0x4DC9A62F844D9337);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = team;
	native_push(val);

	return *(Player*)(native_call());
}

inline float ENTITY_GET_ENTITY_ANIM_TOTAL_TIME(Entity entity, const char* animDict, const char* animName) /* 0x50BD2730B191E360 */
{
	uint64_t val;

	native_init(0x50BD2730B191E360);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_IN_ANGLED_AREA(Entity entity, float originX, float originY, float originZ, float edgeX, float edgeY, float edgeZ, float angle, BOOL p8, BOOL p9, Any p10) /* 0x51210CED3DA1C78A */
{
	uint64_t val;

	native_init(0x51210CED3DA1C78A);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = originX;
	native_push(val);
	*(float*)(&val) = originY;
	native_push(val);
	*(float*)(&val) = originZ;
	native_push(val);
	*(float*)(&val) = edgeX;
	native_push(val);
	*(float*)(&val) = edgeY;
	native_push(val);
	*(float*)(&val) = edgeZ;
	native_push(val);
	*(float*)(&val) = angle;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(BOOL*)(&val) = p9;
	native_push(val);
	*(Any*)(&val) = p10;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_A_PED(Entity entity) /* 0x524AC5ECEA15343E */
{
	uint64_t val;

	native_init(0x524AC5ECEA15343E);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_UPRIGHT(Entity entity, float angle) /* 0x5333F526F6AB19AA */
{
	uint64_t val;

	native_init(0x5333F526F6AB19AA);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = angle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_IN_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8, Any p9) /* 0x54736AA40E271165 */
{
	uint64_t val;

	native_init(0x54736AA40E271165);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(Any*)(&val) = p9;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_SET_ENTITY_TRAFFICLIGHT_OVERRIDE(Entity entity, int state) /* 0x57C5DB656185EAC4 */
{
	uint64_t val;

	native_init(0x57C5DB656185EAC4);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = state;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_ENTITY_LOD_DIST(Entity entity, int value) /* 0x5927F96A78577363 */
{
	uint64_t val;

	native_init(0x5927F96A78577363);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = value;
	native_push(val);

	native_call();
}

inline int ENTITY_GET_ENTITY_ALPHA(Entity entity) /* 0x5A47B3B5E63E94C6 */
{
	uint64_t val;

	native_init(0x5A47B3B5E63E94C6);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(int*)(native_call());
}

inline float ENTITY_GET_ENTITY_HEIGHT(Entity entity, float X, float Y, float Z, BOOL atTop, BOOL inWorldCoords) /* 0x5A504562485944DD */
{
	uint64_t val;

	native_init(0x5A504562485944DD);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = X;
	native_push(val);
	*(float*)(&val) = Y;
	native_push(val);
	*(float*)(&val) = Z;
	native_push(val);
	*(BOOL*)(&val) = atTop;
	native_push(val);
	*(BOOL*)(&val) = inWorldCoords;
	native_push(val);

	return *(float*)(native_call());
}

inline void ENTITY_0x5C3B791D580E0BC2(Entity entity, float p1) /* 0x5C3B791D580E0BC2 */
{
	uint64_t val;

	native_init(0x5C3B791D580E0BC2);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Hash ENTITY_GET_LAST_MATERIAL_HIT_BY_ENTITY(Entity entity) /* 0x5C3D0A935F535C4C */
{
	uint64_t val;

	native_init(0x5C3D0A935F535C4C);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(Hash*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_DEAD(Entity entity) /* 0x5F9532F3B5CC2551 */
{
	uint64_t val;

	native_init(0x5F9532F3B5CC2551);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity entity) /* 0x605F5A140F202491 */
{
	uint64_t val;

	native_init(0x605F5A140F202491);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_REMOVE_FORCED_OBJECT(float posX, float posY, float posZ, float unk, Hash modelHash) /* 0x61B6775E83C0DB6F */
{
	uint64_t val;

	native_init(0x61B6775E83C0DB6F);

	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = unk;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	native_call();
}

inline void ENTITY__SET_ENTITY_COORDS_2(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) /* 0x621873ECE1178967 */
{
	uint64_t val;

	native_init(0x621873ECE1178967);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = xPos;
	native_push(val);
	*(float*)(&val) = yPos;
	native_push(val);
	*(float*)(&val) = zPos;
	native_push(val);
	*(BOOL*)(&val) = xAxis;
	native_push(val);
	*(BOOL*)(&val) = yAxis;
	native_push(val);
	*(BOOL*)(&val) = zAxis;
	native_push(val);
	*(BOOL*)(&val) = clearArea;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* vehicle) /* 0x629BFA74418D6239 */
{
	uint64_t val;

	native_init(0x629BFA74418D6239);

	*(Vehicle**)(&val) = vehicle;
	native_push(val);

	native_call();
}

inline void ENTITY__SET_USED_BY_PLAYER(Entity entity, BOOL toggle) /* 0x694E00132F2823ED */
{
	uint64_t val;

	native_init(0x694E00132F2823ED);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_IS_ENTITY_A_VEHICLE(Entity entity) /* 0x6AC7003FA6E5575E */
{
	uint64_t val;

	native_init(0x6AC7003FA6E5575E);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_SET_ENTITY_HEALTH(Entity entity, int health) /* 0x6B76DC1F3AE6E6A3 */
{
	uint64_t val;

	native_init(0x6B76DC1F3AE6E6A3);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = health;
	native_push(val);

	native_call();
}

inline void ENTITY_ATTACH_ENTITY_TO_ENTITY(Entity entity1, Entity entity2, int boneIndex, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, BOOL p9, BOOL useSoftPinning, BOOL collision, BOOL isPed, int vertexIndex, BOOL fixedRot) /* 0x6B9BBD38AB0796DF */
{
	uint64_t val;

	native_init(0x6B9BBD38AB0796DF);

	*(Entity*)(&val) = entity1;
	native_push(val);
	*(Entity*)(&val) = entity2;
	native_push(val);
	*(int*)(&val) = boneIndex;
	native_push(val);
	*(float*)(&val) = xPos;
	native_push(val);
	*(float*)(&val) = yPos;
	native_push(val);
	*(float*)(&val) = zPos;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(BOOL*)(&val) = p9;
	native_push(val);
	*(BOOL*)(&val) = useSoftPinning;
	native_push(val);
	*(BOOL*)(&val) = collision;
	native_push(val);
	*(BOOL*)(&val) = isPed;
	native_push(val);
	*(int*)(&val) = vertexIndex;
	native_push(val);
	*(BOOL*)(&val) = fixedRot;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL p1, Hash relationshipHash) /* 0x7022BD828FA0B082 */
{
	uint64_t val;

	native_init(0x7022BD828FA0B082);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(Hash*)(&val) = relationshipHash;
	native_push(val);

	native_call();
}

inline Player ENTITY_GET_NEAREST_PLAYER_TO_ENTITY(Entity entity) /* 0x7196842CB375CDB3 */
{
	uint64_t val;

	native_init(0x7196842CB375CDB3);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(Player*)(native_call());
}

inline BOOL ENTITY_DOES_ENTITY_EXIST(Entity entity) /* 0x7239B21A38F536BA */
{
	uint64_t val;

	native_init(0x7239B21A38F536BA);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_SET_ENTITY_RENDER_SCORCHED(Entity entity, BOOL toggle) /* 0x730F5F8D3F0F2050 */
{
	uint64_t val;

	native_init(0x730F5F8D3F0F2050);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_IS_AN_ENTITY(int handle) /* 0x731EC8A916BD11A1 */
{
	uint64_t val;

	native_init(0x731EC8A916BD11A1);

	*(int*)(&val) = handle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_AT_ENTITY(Entity entity1, Entity entity2, float xSize, float ySize, float zSize, BOOL p5, BOOL p6, int p7) /* 0x751B70C3D034E187 */
{
	uint64_t val;

	native_init(0x751B70C3D034E187);

	*(Entity*)(&val) = entity1;
	native_push(val);
	*(Entity*)(&val) = entity2;
	native_push(val);
	*(float*)(&val) = xSize;
	native_push(val);
	*(float*)(&val) = ySize;
	native_push(val);
	*(float*)(&val) = zSize;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(int*)(&val) = p7;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_SET_ENTITY_QUATERNION(Entity entity, float x, float y, float z, float w) /* 0x77B21BE7AC540F07 */
{
	uint64_t val;

	native_init(0x77B21BE7AC540F07);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = w;
	native_push(val);

	native_call();
}

inline void ENTITY_0x78E8E3A640178255(Entity entity) /* 0x78E8E3A640178255 */
{
	uint64_t val;

	native_init(0x78E8E3A640178255);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity entity, BOOL toggle) /* 0x79F020FF9EDC0748 */
{
	uint64_t val;

	native_init(0x79F020FF9EDC0748);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void ENTITY_GET_ENTITY_QUATERNION(Entity entity, float* x, float* y, float* z, float* w) /* 0x7B3703D2D32DFA18 */
{
	uint64_t val;

	native_init(0x7B3703D2D32DFA18);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float**)(&val) = x;
	native_push(val);
	*(float**)(&val) = y;
	native_push(val);
	*(float**)(&val) = z;
	native_push(val);
	*(float**)(&val) = w;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_ENTITY_LIGHTS(Entity entity, BOOL toggle) /* 0x7CFBA6A80BDF3874 */
{
	uint64_t val;

	native_init(0x7CFBA6A80BDF3874);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_PLAY_ENTITY_ANIM(Entity entity, const char* animName, const char* animDict, float p3, BOOL loop, BOOL stayInAnim, BOOL p6, float delta, Any bitset) /* 0x7FB218262B810701 */
{
	uint64_t val;

	native_init(0x7FB218262B810701);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = loop;
	native_push(val);
	*(BOOL*)(&val) = stayInAnim;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = delta;
	native_push(val);
	*(Any*)(&val) = bitset;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline float ENTITY_GET_ENTITY_ROLL(Entity entity) /* 0x831E0242595560DF */
{
	uint64_t val;

	native_init(0x831E0242595560DF);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(float*)(native_call());
}

inline float ENTITY__GET_ENTITY_PHYSICS_HEADING(Entity entity) /* 0x846BF6291198A71E */
{
	uint64_t val;

	native_init(0x846BF6291198A71E);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(float*)(native_call());
}

inline void ENTITY_SET_ENTITY_ROTATION(Entity entity, float pitch, float roll, float yaw, int rotationOrder, BOOL p5) /* 0x8524A8B0171D5E07 */
{
	uint64_t val;

	native_init(0x8524A8B0171D5E07);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = pitch;
	native_push(val);
	*(float*)(&val) = roll;
	native_push(val);
	*(float*)(&val) = yaw;
	native_push(val);
	*(int*)(&val) = rotationOrder;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline float ENTITY_GET_ENTITY_FORWARD_Y(Entity entity) /* 0x866A4A5FAE349510 */
{
	uint64_t val;

	native_init(0x866A4A5FAE349510);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_IN_AIR(Entity entity) /* 0x886E37EC497200B6 */
{
	uint64_t val;

	native_init(0x886E37EC497200B6);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_CREATE_MODEL_HIDE(float x, float y, float z, float radius, Hash model, BOOL p5) /* 0x8A97BCA30A0CE478 */
{
	uint64_t val;

	native_init(0x8A97BCA30A0CE478);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(Hash*)(&val) = model;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline int ENTITY_GET_ENTITY_TYPE(Entity entity) /* 0x8ACD366038D14505 */
{
	uint64_t val;

	native_init(0x8ACD366038D14505);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL ENTITY_HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity entity) /* 0x8BAD02F0368D9E14 */
{
	uint64_t val;

	native_init(0x8BAD02F0368D9E14);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline float ENTITY_GET_ENTITY_FORWARD_X(Entity entity) /* 0x8BB4EF4214E0E6D5 */
{
	uint64_t val;

	native_init(0x8BB4EF4214E0E6D5);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_AN_OBJECT(Player* entity) /* 0x8D68C8FD0FACA94E */
{
	uint64_t val;

	native_init(0x8D68C8FD0FACA94E);

	*(Player**)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_SET_ENTITY_HEADING(Entity entity, float heading) /* 0x8E2530AA8ADA980E */
{
	uint64_t val;

	native_init(0x8E2530AA8ADA980E);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);

	native_call();
}

inline void ENTITY_CREATE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) /* 0x92C47782FDA8B2A3 */
{
	uint64_t val;

	native_init(0x92C47782FDA8B2A3);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(Hash*)(&val) = originalModel;
	native_push(val);
	*(Hash*)(&val) = newModel;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity entity) /* 0x95EB9964FF5C5C65 */
{
	uint64_t val;

	native_init(0x95EB9964FF5C5C65);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline float ENTITY_GET_ENTITY_UPRIGHT_VALUE(Entity entity) /* 0x95EED5A694951F9F */
{
	uint64_t val;

	native_init(0x95EED5A694951F9F);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(float*)(native_call());
}

inline void ENTITY_DETACH_ENTITY(Entity entity, BOOL p1, BOOL collision) /* 0x961AC54BF0613F5D */
{
	uint64_t val;

	native_init(0x961AC54BF0613F5D);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = collision;
	native_push(val);

	native_call();
}

inline Vector3 ENTITY_GET_ENTITY_SPEED_VECTOR(Entity entity, BOOL relative) /* 0x9A8D700A51CB7B0D */
{
	uint64_t val;

	native_init(0x9A8D700A51CB7B0D);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = relative;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline Any ENTITY_RESET_ENTITY_ALPHA(Entity entity) /* 0x9B1E824FFBB7027A */
{
	uint64_t val;

	native_init(0x9B1E824FFBB7027A);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(Any*)(native_call());
}

inline void ENTITY__SET_ENTITY_COLLISION_2(Entity entity, BOOL p1, BOOL p2) /* 0x9EBC85ED0FFFE51C */
{
	uint64_t val;

	native_init(0x9EBC85ED0FFFE51C);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline Hash ENTITY_GET_ENTITY_MODEL(Entity entity) /* 0x9F47B058362C84B5 */
{
	uint64_t val;

	native_init(0x9F47B058362C84B5);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(Hash*)(native_call());
}

inline void ENTITY_SET_ENTITY_NO_COLLISION_ENTITY(Entity entity1, Entity entity2, BOOL unknown) /* 0xA53ED5520C07654A */
{
	uint64_t val;

	native_init(0xA53ED5520C07654A);

	*(Entity*)(&val) = entity1;
	native_push(val);
	*(Entity*)(&val) = entity2;
	native_push(val);
	*(BOOL*)(&val) = unknown;
	native_push(val);

	native_call();
}

inline const char *ENTITY_GET_ENTITY_SCRIPT(Entity entity, ScrHandle* script) /* 0xA6E9C38DB51D7748 */
{
	uint64_t val;

	native_init(0xA6E9C38DB51D7748);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(ScrHandle**)(&val) = script;
	native_push(val);

	return *(const char**)(native_call());
}

inline Any ENTITY_CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity entity) /* 0xA72CD9CA74A5ECBA */
{
	uint64_t val;

	native_init(0xA72CD9CA74A5ECBA);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(Any*)(native_call());
}

inline void ENTITY_0xA80AE305E0A3044F(Entity entity, BOOL p1) /* 0xA80AE305E0A3044F */
{
	uint64_t val;

	native_init(0xA80AE305E0A3044F);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_ENTITY_ALWAYS_PRERENDER(Entity entity, BOOL toggle) /* 0xACAD101E1FB66689 */
{
	uint64_t val;

	native_init(0xACAD101E1FB66689);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_ENTITY_AS_MISSION_ENTITY(Entity entity, BOOL p1, BOOL p2) /* 0xAD738C3085FE7E11 */
{
	uint64_t val;

	native_init(0xAD738C3085FE7E11);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void ENTITY_DELETE_ENTITY(Entity* entity) /* 0xAE3CBE5BF394C9C9 */
{
	uint64_t val;

	native_init(0xAE3CBE5BF394C9C9);

	*(Entity**)(&val) = entity;
	native_push(val);

	native_call();
}

inline Vector3 ENTITY_GET_ENTITY_ROTATION(Entity entity, int rotationOrder) /* 0xAFBD61CC738D9EB9 */
{
	uint64_t val;

	native_init(0xAFBD61CC738D9EB9);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = rotationOrder;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_ATTACHED_TO_ANY_PED(Entity entity) /* 0xB1632E9A5F988D11 */
{
	uint64_t val;

	native_init(0xB1632E9A5F988D11);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_ATTACHED(Entity entity) /* 0xB346476EF1A64897 */
{
	uint64_t val;

	native_init(0xB346476EF1A64897);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_IN_ZONE(Entity entity, const char* zone) /* 0xB6463CF6AF527071 */
{
	uint64_t val;

	native_init(0xB6463CF6AF527071);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = zone;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* entity) /* 0xB736A491E64A32CF */
{
	uint64_t val;

	native_init(0xB736A491E64A32CF);

	*(Entity**)(&val) = entity;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(float posX, float posY, float posZ, float radius, Object prop, int sceneID, const char* animName, const char* animDict, float playbackRate, float unkFlag, BOOL unkBool, float unkFlag2) /* 0xB9C54555ED30FBC4 */
{
	uint64_t val;

	native_init(0xB9C54555ED30FBC4);

	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(Object*)(&val) = prop;
	native_push(val);
	*(int*)(&val) = sceneID;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(float*)(&val) = playbackRate;
	native_push(val);
	*(float*)(&val) = unkFlag;
	native_push(val);
	*(BOOL*)(&val) = unkBool;
	native_push(val);
	*(float*)(&val) = unkFlag2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, float xPos1, float yPos1, float zPos1, float xPos2, float yPos2, float zPos2, float xRot, float yRot, float zRot, float breakForce, BOOL fixedRot, BOOL p15, BOOL collision, BOOL teleport, int p18) /* 0xC3675780C92F90F9 */
{
	uint64_t val;

	native_init(0xC3675780C92F90F9);

	*(Entity*)(&val) = entity1;
	native_push(val);
	*(Entity*)(&val) = entity2;
	native_push(val);
	*(int*)(&val) = boneIndex1;
	native_push(val);
	*(int*)(&val) = boneIndex2;
	native_push(val);
	*(float*)(&val) = xPos1;
	native_push(val);
	*(float*)(&val) = yPos1;
	native_push(val);
	*(float*)(&val) = zPos1;
	native_push(val);
	*(float*)(&val) = xPos2;
	native_push(val);
	*(float*)(&val) = yPos2;
	native_push(val);
	*(float*)(&val) = zPos2;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(float*)(&val) = breakForce;
	native_push(val);
	*(BOOL*)(&val) = fixedRot;
	native_push(val);
	*(BOOL*)(&val) = p15;
	native_push(val);
	*(BOOL*)(&val) = collision;
	native_push(val);
	*(BOOL*)(&val) = teleport;
	native_push(val);
	*(int*)(&val) = p18;
	native_push(val);

	native_call();
}

inline void ENTITY_APPLY_FORCE_TO_ENTITY(Entity entity, int forceFlags, float x, float y, float z, float offX, float offY, float offZ, int boneIndex, BOOL isDirectionRel, BOOL ignoreUpVec, BOOL isForceRel, BOOL p12, BOOL p13) /* 0xC5F68BE9613E2D18 */
{
	uint64_t val;

	native_init(0xC5F68BE9613E2D18);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = forceFlags;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = offX;
	native_push(val);
	*(float*)(&val) = offY;
	native_push(val);
	*(float*)(&val) = offZ;
	native_push(val);
	*(int*)(&val) = boneIndex;
	native_push(val);
	*(BOOL*)(&val) = isDirectionRel;
	native_push(val);
	*(BOOL*)(&val) = ignoreUpVec;
	native_push(val);
	*(BOOL*)(&val) = isForceRel;
	native_push(val);
	*(BOOL*)(&val) = p12;
	native_push(val);
	*(BOOL*)(&val) = p13;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_PLAY_SYNCHRONIZED_ENTITY_ANIM(Entity entity, int SceneID, const char* animName, const char* animDict, float speed, float speedMult, int flag, float flag2) /* 0xC77720A12FE14A86 */
{
	uint64_t val;

	native_init(0xC77720A12FE14A86);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = SceneID;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(float*)(&val) = speedMult;
	native_push(val);
	*(int*)(&val) = flag;
	native_push(val);
	*(float*)(&val) = flag2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2, BOOL p2) /* 0xC86D67D52A707CF8 */
{
	uint64_t val;

	native_init(0xC86D67D52A707CF8);

	*(Entity*)(&val) = entity1;
	native_push(val);
	*(Entity*)(&val) = entity2;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY__GET_ENTITY_COLLISON_DISABLED(Entity entity) /* 0xCCF1E97BEFDAE480 */
{
	uint64_t val;

	native_init(0xCCF1E97BEFDAE480);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity entity) /* 0xCF511840CEEDE0CC */
{
	uint64_t val;

	native_init(0xCF511840CEEDE0CC);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_IN_WATER(Entity entity) /* 0xCFB0A0D8EDD145A3 */
{
	uint64_t val;

	native_init(0xCFB0A0D8EDD145A3);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity entity) /* 0xD05BFF0C0A12C68F */
{
	uint64_t val;

	native_init(0xD05BFF0C0A12C68F);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Entity entity, BOOL toggle) /* 0xD3997889736FD899 */
{
	uint64_t val;

	native_init(0xD3997889736FD899);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline float ENTITY_GET_ENTITY_PITCH(Entity entity) /* 0xD45DC2893621E1FE */
{
	uint64_t val;

	native_init(0xD45DC2893621E1FE);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(float*)(native_call());
}

inline float ENTITY_GET_ENTITY_SPEED(Entity entity) /* 0xD5037BA82E12416F */
{
	uint64_t val;

	native_init(0xD5037BA82E12416F);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_VISIBLE_TO_SCRIPT(Entity entity) /* 0xD796CB5BA8F20E32 */
{
	uint64_t val;

	native_init(0xD796CB5BA8F20E32);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Object ENTITY_GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity entity) /* 0xD7E3B9735C0F89D6 */
{
	uint64_t val;

	native_init(0xD7E3B9735C0F89D6);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(Object*)(native_call());
}

inline void ENTITY_REMOVE_MODEL_HIDE(float x, float y, float z, float radius, Hash model, BOOL p5) /* 0xD9E3006FB3CBD765 */
{
	uint64_t val;

	native_init(0xD9E3006FB3CBD765);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(Hash*)(&val) = model;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_DOES_ENTITY_HAVE_PHYSICS(Entity entity) /* 0xDA95EA3317CC5064 */
{
	uint64_t val;

	native_init(0xDA95EA3317CC5064);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_0xDC6F8601FAF2E893(Entity entity, BOOL p1) /* 0xDC6F8601FAF2E893 */
{
	uint64_t val;

	native_init(0xDC6F8601FAF2E893);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity entity, BOOL p2) /* 0xDDE6DF5AE89981D2 */
{
	uint64_t val;

	native_init(0xDDE6DF5AE89981D2);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL ENTITY_HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity entity) /* 0xDFD5033FDBA0A9C8 */
{
	uint64_t val;

	native_init(0xDFD5033FDBA0A9C8);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_0xE12ABE5E3A389A6C(Entity entity, BOOL p1) /* 0xE12ABE5E3A389A6C */
{
	uint64_t val;

	native_init(0xE12ABE5E3A389A6C);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL bCanBeDamaged, int relGroup) /* 0xE22D8FDE858B8119 */
{
	uint64_t val;

	native_init(0xE22D8FDE858B8119);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = bCanBeDamaged;
	native_push(val);
	*(int*)(&val) = relGroup;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_IS_ENTITY_OCCLUDED(Entity entity) /* 0xE31C2C72B8692B64 */
{
	uint64_t val;

	native_init(0xE31C2C72B8692B64);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Vector3 ENTITY_GET_COLLISION_NORMAL_OF_LAST_HIT_FOR_ENTITY(Entity entity) /* 0xE465D4AB7CA6AE72 */
{
	uint64_t val;

	native_init(0xE465D4AB7CA6AE72);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_ON_SCREEN(Entity entity) /* 0xE659E47AF827484B */
{
	uint64_t val;

	native_init(0xE659E47AF827484B);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline float ENTITY_GET_ENTITY_SUBMERGED_LEVEL(Entity entity) /* 0xE81AFC1BC4CC41CE */
{
	uint64_t val;

	native_init(0xE81AFC1BC4CC41CE);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(float*)(native_call());
}

inline float ENTITY_GET_ENTITY_HEADING(Entity entity) /* 0xE83D4F9BA2A38914 */
{
	uint64_t val;

	native_init(0xE83D4F9BA2A38914);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL ENTITY_HAS_COLLISION_LOADED_AROUND_ENTITY(Entity entity) /* 0xE9676F61BC0B3321 */
{
	uint64_t val;

	native_init(0xE9676F61BC0B3321);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_SET_ENTITY_IS_TARGET_PRIORITY(Entity entity, BOOL p1, float p2) /* 0xEA02E132F5C68722 */
{
	uint64_t val;

	native_init(0xEA02E132F5C68722);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void ENTITY_SET_ENTITY_VISIBLE(Entity entity, BOOL toggle, BOOL unk) /* 0xEA1C610A04DB6BBB */
{
	uint64_t val;

	native_init(0xEA1C610A04DB6BBB);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);
	*(BOOL*)(&val) = unk;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_HAS_ANIM_EVENT_FIRED(Entity entity, Hash actionHash) /* 0xEAF4CD9EA3E7E922 */
{
	uint64_t val;

	native_init(0xEAF4CD9EA3E7E922);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(Hash*)(&val) = actionHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_GET_ENTITY_MATRIX(Entity entity, Vector3* rightVector, Vector3* forwardVector, Vector3* upVector, Vector3* position) /* 0xECB2FC7235A7D137 */
{
	uint64_t val;

	native_init(0xECB2FC7235A7D137);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(Vector3**)(&val) = rightVector;
	native_push(val);
	*(Vector3**)(&val) = forwardVector;
	native_push(val);
	*(Vector3**)(&val) = upVector;
	native_push(val);
	*(Vector3**)(&val) = position;
	native_push(val);

	native_call();
}

inline BOOL ENTITY_WOULD_ENTITY_BE_OCCLUDED(Hash entityModelHash, float x, float y, float z, BOOL p4) /* 0xEE5D2A122E09EC42 */
{
	uint64_t val;

	native_init(0xEE5D2A122E09EC42);

	*(Hash*)(&val) = entityModelHash;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int ENTITY_GET_ENTITY_HEALTH(Entity entity) /* 0xEEF059FAD016D209 */
{
	uint64_t val;

	native_init(0xEEF059FAD016D209);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL ENTITY_IS_ENTITY_ATTACHED_TO_ENTITY(Entity from, Entity to) /* 0xEFBE71898A993728 */
{
	uint64_t val;

	native_init(0xEFBE71898A993728);

	*(Entity*)(&val) = from;
	native_push(val);
	*(Entity*)(&val) = to;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ENTITY_PROCESS_ENTITY_ATTACHMENTS(Entity entity) /* 0xF4080490ADC51C6F */
{
	uint64_t val;

	native_init(0xF4080490ADC51C6F);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline int ENTITY__GET_ENTITY_POPULATION_TYPE(Entity entity) /* 0xF6F5161F4534EDFF */
{
	uint64_t val;

	native_init(0xF6F5161F4534EDFF);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(int*)(native_call());
}

inline void ENTITY_SET_ENTITY_PROOFS(Entity entity, BOOL bulletProof, BOOL fireProof, BOOL explosionProof, BOOL collisionProof, BOOL meleeProof, BOOL steamProof, BOOL smokeProof, BOOL drownProof) /* 0xFAEE099C6F890BB8 */
{
	uint64_t val;

	native_init(0xFAEE099C6F890BB8);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = bulletProof;
	native_push(val);
	*(BOOL*)(&val) = fireProof;
	native_push(val);
	*(BOOL*)(&val) = explosionProof;
	native_push(val);
	*(BOOL*)(&val) = collisionProof;
	native_push(val);
	*(BOOL*)(&val) = meleeProof;
	native_push(val);
	*(BOOL*)(&val) = steamProof;
	native_push(val);
	*(BOOL*)(&val) = smokeProof;
	native_push(val);
	*(BOOL*)(&val) = drownProof;
	native_push(val);

	native_call();
}

inline int ENTITY_GET_ENTITY_BONE_INDEX_BY_NAME(Entity entity, const char* boneName) /* 0xFB71170B7E76ACBA */
{
	uint64_t val;

	native_init(0xFB71170B7E76ACBA);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = boneName;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL ENTITY_HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity entity1, Entity entity2, int traceType) /* 0xFCDFF7B72D23A1AC */
{
	uint64_t val;

	native_init(0xFCDFF7B72D23A1AC);

	*(Entity*)(&val) = entity1;
	native_push(val);
	*(Entity*)(&val) = entity2;
	native_push(val);
	*(int*)(&val) = traceType;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline float ENTITY__GET_ANIM_DURATION(const char* animDict, const char* animName) /* 0xFEDDF04D62B8D790 */
{
	uint64_t val;

	native_init(0xFEDDF04D62B8D790);

	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);

	return *(float*)(native_call());
}

inline void FIRE_STOP_FIRE_IN_RANGE(float x, float y, float z, float radius) /* 0x056A8A219B8E829F */
{
	uint64_t val;

	native_init(0x056A8A219B8E829F);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);

	native_call();
}

inline Entity FIRE__GET_PED_INSIDE_EXPLOSION_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float radius) /* 0x14BA4BA137AF6CEC */
{
	uint64_t val;

	native_init(0x14BA4BA137AF6CEC);

	*(int*)(&val) = explosionType;
	native_push(val);
	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);

	return *(Entity*)(native_call());
}

inline void FIRE_ADD_OWNED_EXPLOSION(Ped ped, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) /* 0x172AA1B624FA1013 */
{
	uint64_t val;

	native_init(0x172AA1B624FA1013);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = explosionType;
	native_push(val);
	*(float*)(&val) = damageScale;
	native_push(val);
	*(BOOL*)(&val) = isAudible;
	native_push(val);
	*(BOOL*)(&val) = isInvisible;
	native_push(val);
	*(float*)(&val) = cameraShake;
	native_push(val);

	native_call();
}

inline BOOL FIRE_IS_ENTITY_ON_FIRE(Entity entity) /* 0x28D3FED7190D3A0B */
{
	uint64_t val;

	native_init(0x28D3FED7190D3A0B);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL FIRE_IS_EXPLOSION_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) /* 0x2E2EBA0EE7CED0E0 */
{
	uint64_t val;

	native_init(0x2E2EBA0EE7CED0E0);

	*(int*)(&val) = explosionType;
	native_push(val);
	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL FIRE_GET_CLOSEST_FIRE_POS(Vector3* outPosition, float x, float y, float z) /* 0x352A9F6BCF90081F */
{
	uint64_t val;

	native_init(0x352A9F6BCF90081F);

	*(Vector3**)(&val) = outPosition;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void FIRE_ADD_EXPLOSION_WITH_USER_VFX(Entity x, Entity y, Entity z, int explosionType, Hash explosionFx, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) /* 0x36DD3FE58B5E5212 */
{
	uint64_t val;

	native_init(0x36DD3FE58B5E5212);

	*(Entity*)(&val) = x;
	native_push(val);
	*(Entity*)(&val) = y;
	native_push(val);
	*(Entity*)(&val) = z;
	native_push(val);
	*(int*)(&val) = explosionType;
	native_push(val);
	*(Hash*)(&val) = explosionFx;
	native_push(val);
	*(float*)(&val) = damageScale;
	native_push(val);
	*(BOOL*)(&val) = isAudible;
	native_push(val);
	*(BOOL*)(&val) = isInvisible;
	native_push(val);
	*(float*)(&val) = cameraShake;
	native_push(val);

	native_call();
}

inline int FIRE_GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius) /* 0x50CAD495A460B305 */
{
	uint64_t val;

	native_init(0x50CAD495A460B305);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);

	return *(int*)(native_call());
}

inline int FIRE_0x6070104B699B2EF4(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) /* 0x6070104B699B2EF4 */
{
	uint64_t val;

	native_init(0x6070104B699B2EF4);

	*(int*)(&val) = explosionType;
	native_push(val);
	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);

	return *(int*)(native_call());
}

inline Hash FIRE_START_SCRIPT_FIRE(float X, float Y, float Z, int maxChildren, BOOL isGasFire) /* 0x6B83617E04503888 */
{
	uint64_t val;

	native_init(0x6B83617E04503888);

	*(float*)(&val) = X;
	native_push(val);
	*(float*)(&val) = Y;
	native_push(val);
	*(float*)(&val) = Z;
	native_push(val);
	*(int*)(&val) = maxChildren;
	native_push(val);
	*(BOOL*)(&val) = isGasFire;
	native_push(val);

	return *(Hash*)(native_call());
}

inline void FIRE_STOP_ENTITY_FIRE(Entity entity) /* 0x7F0DD2EBBB651AFF */
{
	uint64_t val;

	native_init(0x7F0DD2EBBB651AFF);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline void FIRE_REMOVE_SCRIPT_FIRE(int fireHandle) /* 0x7FF548385680673F */
{
	uint64_t val;

	native_init(0x7FF548385680673F);

	*(int*)(&val) = fireHandle;
	native_push(val);

	native_call();
}

inline BOOL FIRE_IS_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float angle) /* 0xA079A6C51525DC4B */
{
	uint64_t val;

	native_init(0xA079A6C51525DC4B);

	*(int*)(&val) = explosionType;
	native_push(val);
	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(float*)(&val) = angle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL FIRE_IS_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) /* 0xAB0F816885B0E483 */
{
	uint64_t val;

	native_init(0xAB0F816885B0E483);

	*(int*)(&val) = explosionType;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void FIRE_ADD_EXPLOSION(float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) /* 0xE3AD2BDBAEE269AC */
{
	uint64_t val;

	native_init(0xE3AD2BDBAEE269AC);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = explosionType;
	native_push(val);
	*(float*)(&val) = damageScale;
	native_push(val);
	*(BOOL*)(&val) = isAudible;
	native_push(val);
	*(BOOL*)(&val) = isInvisible;
	native_push(val);
	*(float*)(&val) = cameraShake;
	native_push(val);

	native_call();
}

inline Ped FIRE_START_ENTITY_FIRE(Ped entity) /* 0xF6A9D9708F6F23DF */
{
	uint64_t val;

	native_init(0xF6A9D9708F6F23DF);

	*(Ped*)(&val) = entity;
	native_push(val);

	return *(Ped*)(native_call());
}

inline void GAMEPLAY_DISPLAY_ONSCREEN_KEYBOARD(int p0, const char* windowTitle, const char* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, int maxInputLength) /* 0x00DC833F2568DBF6 */
{
	uint64_t val;

	native_init(0x00DC833F2568DBF6);

	*(int*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = windowTitle;
	native_push(val);
	*(const char**)(&val) = p2;
	native_push(val);
	*(const char**)(&val) = defaultText;
	native_push(val);
	*(const char**)(&val) = defaultConcat1;
	native_push(val);
	*(const char**)(&val) = defaultConcat2;
	native_push(val);
	*(const char**)(&val) = defaultConcat3;
	native_push(val);
	*(int*)(&val) = maxInputLength;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_CLEAR_AREA_OF_VEHICLES(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8) /* 0x01C7B9B38428AEB6 */
{
	uint64_t val;

	native_init(0x01C7B9B38428AEB6);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0x02DEAAC8F8EA7FE7(const char* p0) /* 0x02DEAAC8F8EA7FE7 */
{
	uint64_t val;

	native_init(0x02DEAAC8F8EA7FE7);

	*(const char**)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_GET_MODEL_DIMENSIONS(Hash modelHash, Vector3* minimum, Vector3* maximum) /* 0x03E8D3D5F549087A */
{
	uint64_t val;

	native_init(0x03E8D3D5F549087A);

	*(Hash*)(&val) = modelHash;
	native_push(val);
	*(Vector3**)(&val) = minimum;
	native_push(val);
	*(Vector3**)(&val) = maximum;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_STOP_SAVE_ARRAY() /* 0x04456F95153C6BE4 */
{
	native_init(0x04456F95153C6BE4);
	native_call();
}

inline void GAMEPLAY_CLEAR_AREA_OF_COPS(float x, float y, float z, float radius, int flags) /* 0x04F8FC8FCF58F88D */
{
	uint64_t val;

	native_init(0x04F8FC8FCF58F88D);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(int*)(&val) = flags;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_CREATE_INCIDENT_WITH_ENTITY(int incidentType, Ped ped, int amountOfPeople, float radius, int* outIncidentID) /* 0x05983472F0494E60 */
{
	uint64_t val;

	native_init(0x05983472F0494E60);

	*(int*)(&val) = incidentType;
	native_push(val);
	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = amountOfPeople;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(int**)(&val) = outIncidentID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0x06462A961E94B67C() /* 0x06462A961E94B67C */
{
	native_init(0x06462A961E94B67C);
	native_call();
}

inline BOOL GAMEPLAY__HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(Hash hash, int amount) /* 0x071E2A839DE82D90 */
{
	uint64_t val;

	native_init(0x071E2A839DE82D90);

	*(Hash*)(&val) = hash;
	native_push(val);
	*(int*)(&val) = amount;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL GAMEPLAY_HAVE_CREDITS_REACHED_END() /* 0x075F1D57402C93BA */
{
	native_init(0x075F1D57402C93BA);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_CLEAR_AREA_OF_PROJECTILES(float x, float y, float z, float radius, BOOL isNetworkGame) /* 0x0A1CB9094635D1A6 */
{
	uint64_t val;

	native_init(0x0A1CB9094635D1A6);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(BOOL*)(&val) = isNetworkGame;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0x0A60017F841A54F2(Any p0, Any p1, Any p2, Any p3) /* 0x0A60017F841A54F2 */
{
	uint64_t val;

	native_init(0x0A60017F841A54F2);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_ARE_STRINGS_EQUAL(const char* string1, const char* string2) /* 0x0C515FAB3FF9EA92 */
{
	uint64_t val;

	native_init(0x0C515FAB3FF9EA92);

	*(const char**)(&val) = string1;
	native_push(val);
	*(const char**)(&val) = string2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int GAMEPLAY_UPDATE_ONSCREEN_KEYBOARD() /* 0x0CF2B696BBF945AE */
{
	native_init(0x0CF2B696BBF945AE);
	return *(int*)(native_call());
}

inline void GAMEPLAY_REGISTER_ENUM_TO_SAVE(Any* p0, const char* name) /* 0x10C2FA78D0E128A1 */
{
	uint64_t val;

	native_init(0x10C2FA78D0E128A1);

	*(Any**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_OVERRIDE_SAVE_HOUSE(BOOL p0, float p1, float p2, float p3, float p4, BOOL p5, float p6, float p7) /* 0x1162EA8AE9D24EEA */
{
	uint64_t val;

	native_init(0x1162EA8AE9D24EEA);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_SET_FIRE_AMMO_THIS_FRAME(Player player) /* 0x11879CDD803D30F4 */
{
	uint64_t val;

	native_init(0x11879CDD803D30F4);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_PRELOAD_CLOUD_HAT(const char* name) /* 0x11B56FBBF7224868 */
{
	uint64_t val;

	native_init(0x11B56FBBF7224868);

	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_CLEAR_ANGLED_AREA_OF_VEHICLES(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, BOOL p11) /* 0x11DB3500F042A8AA */
{
	uint64_t val;

	native_init(0x11DB3500F042A8AA);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(BOOL*)(&val) = p9;
	native_push(val);
	*(BOOL*)(&val) = p10;
	native_push(val);
	*(BOOL*)(&val) = p11;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_0x1327E2FE9746BAEE(Any p0) /* 0x1327E2FE9746BAEE */
{
	uint64_t val;

	native_init(0x1327E2FE9746BAEE);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_SET_FAKE_WANTED_LEVEL(int fakeWantedLevel) /* 0x1454F2448DE30163 */
{
	uint64_t val;

	native_init(0x1454F2448DE30163);

	*(int*)(&val) = fakeWantedLevel;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY__HAS_ALL_CHUNKS_ON_HDD() /* 0x14832BF2ABA53FC5 */
{
	native_init(0x14832BF2ABA53FC5);
	return *(BOOL*)(native_call());
}

inline float GAMEPLAY_GET_FRAME_TIME() /* 0x15C40837039FFAF7 */
{
	native_init(0x15C40837039FFAF7);
	return *(float*)(native_call());
}

inline BOOL GAMEPLAY_0x17DF68D720AA77F8(Any p0) /* 0x17DF68D720AA77F8 */
{
	uint64_t val;

	native_init(0x17DF68D720AA77F8);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline float GAMEPLAY_GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2) /* 0x186FC4BE848E1C92 */
{
	uint64_t val;

	native_init(0x186FC4BE848E1C92);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL GAMEPLAY_0x19BFED045C647C49(Any p0) /* 0x19BFED045C647C49 */
{
	uint64_t val;

	native_init(0x19BFED045C647C49);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_SET_MINIGAME_IN_PROGRESS(BOOL toggle) /* 0x19E00D7322C6F85B */
{
	uint64_t val;

	native_init(0x19E00D7322C6F85B);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_IS_BULLET_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7) /* 0x1A8B5F3C01E2B477 */
{
	uint64_t val;

	native_init(0x1A8B5F3C01E2B477);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int GAMEPLAY_ADD_STUNT_JUMP(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, Any p15, Any p16) /* 0x1A992DA297A4630C */
{
	uint64_t val;

	native_init(0x1A992DA297A4630C);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);
	*(float*)(&val) = p10;
	native_push(val);
	*(float*)(&val) = p11;
	native_push(val);
	*(float*)(&val) = p12;
	native_push(val);
	*(float*)(&val) = p13;
	native_push(val);
	*(float*)(&val) = p14;
	native_push(val);
	*(Any*)(&val) = p15;
	native_push(val);
	*(Any*)(&val) = p16;
	native_push(val);

	return *(int*)(native_call());
}

inline void GAMEPLAY_CLEAR_REPLAY_STATS() /* 0x1B1AB132A16FDA55 */
{
	native_init(0x1B1AB132A16FDA55);
	native_call();
}

inline Any GAMEPLAY_0x1B2366C3F2A5C8DF() /* 0x1B2366C3F2A5C8DF */
{
	native_init(0x1B2366C3F2A5C8DF);
	return *(Any*)(native_call());
}

inline void GAMEPLAY_0x1BB299305C3E8C13(Any p0, Any p1, Any p2, Any p3) /* 0x1BB299305C3E8C13 */
{
	uint64_t val;

	native_init(0x1BB299305C3E8C13);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline float GAMEPLAY_ACOS(float p0) /* 0x1D08B970013C34B6 */
{
	uint64_t val;

	native_init(0x1D08B970013C34B6);

	*(float*)(&val) = p0;
	native_push(val);

	return *(float*)(native_call());
}

inline void GAMEPLAY_SET_TIME_SCALE(float time) /* 0x1D408577D440E81E */
{
	uint64_t val;

	native_init(0x1D408577D440E81E);

	*(float*)(&val) = time;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_SET_FADE_OUT_AFTER_ARREST(BOOL toggle) /* 0x1E0B4DC0D990A4E7 */
{
	uint64_t val;

	native_init(0x1E0B4DC0D990A4E7);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int GAMEPLAY_COMPARE_STRINGS(const char* str1, const char* str2, BOOL matchCase, int maxLength) /* 0x1E34710ECD4AB0EB */
{
	uint64_t val;

	native_init(0x1E34710ECD4AB0EB);

	*(const char**)(&val) = str1;
	native_push(val);
	*(const char**)(&val) = str2;
	native_push(val);
	*(BOOL*)(&val) = matchCase;
	native_push(val);
	*(int*)(&val) = maxLength;
	native_push(val);

	return *(int*)(native_call());
}

inline void GAMEPLAY_0x1EAE0A6E978894A2(int p0, BOOL p1) /* 0x1EAE0A6E978894A2 */
{
	uint64_t val;

	native_init(0x1EAE0A6E978894A2);

	*(int*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Vector3 GAMEPLAY_GET_WIND_DIRECTION() /* 0x1F400FEF721170DA */
{
	native_init(0x1F400FEF721170DA);
	return *(Vector3*)(native_call());
}

inline int GAMEPLAY_ADD_HOSPITAL_RESTART(float x, float y, float z, float p3, Any p4) /* 0x1F464EF988465A81 */
{
	uint64_t val;

	native_init(0x1F464EF988465A81);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	return *(int*)(native_call());
}

inline void GAMEPLAY_0x1FF6BF9A63E5757F() /* 0x1FF6BF9A63E5757F */
{
	native_init(0x1FF6BF9A63E5757F);
	native_call();
}

inline float GAMEPLAY__GET_CLOUD_HAT_OPACITY() /* 0x20AC25E781AE4A84 */
{
	native_init(0x20AC25E781AE4A84);
	return *(float*)(native_call());
}

inline Any GAMEPLAY_0x2107A3773771186D() /* 0x2107A3773771186D */
{
	native_init(0x2107A3773771186D);
	return *(Any*)(native_call());
}

inline Vector3 GAMEPLAY_0x21C235BC64831E5A(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) /* 0x21C235BC64831E5A */
{
	uint64_t val;

	native_init(0x21C235BC64831E5A);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(BOOL*)(&val) = p9;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline void GAMEPLAY_IGNORE_NEXT_RESTART(BOOL toggle) /* 0x21FFB63D8C615361 */
{
	uint64_t val;

	native_init(0x21FFB63D8C615361);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_IS_STUNT_JUMP_MESSAGE_SHOWING() /* 0x2272B0A1343129F4 */
{
	native_init(0x2272B0A1343129F4);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0x23227DF0B2115469() /* 0x23227DF0B2115469 */
{
	native_init(0x23227DF0B2115469);
	native_call();
}

inline void GAMEPLAY_DISABLE_POLICE_RESTART(int policeIndex, BOOL toggle) /* 0x23285DED6EBD7EA3 */
{
	uint64_t val;

	native_init(0x23285DED6EBD7EA3);

	*(int*)(&val) = policeIndex;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline const char *GAMEPLAY__GET_GLOBAL_CHAR_BUFFER() /* 0x24DA7D7667FD7B09 */
{
	native_init(0x24DA7D7667FD7B09);
	return *(const char**)(native_call());
}

inline void GAMEPLAY_0x2587A48BC88DFADF(BOOL p0) /* 0x2587A48BC88DFADF */
{
	uint64_t val;

	native_init(0x2587A48BC88DFADF);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(Any p0) /* 0x264AC28B01B353A5 */
{
	uint64_t val;

	native_init(0x264AC28B01B353A5);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_ENABLE_TENNIS_MODE(Ped ped, BOOL toggle, BOOL p2) /* 0x28A04B411933F8A6 */
{
	uint64_t val;

	native_init(0x28A04B411933F8A6);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_SET_WEATHER_TYPE_NOW(const char* weatherType) /* 0x29B487C359E19889 */
{
	uint64_t val;

	native_init(0x29B487C359E19889);

	*(const char**)(&val) = weatherType;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_IS_MINIGAME_IN_PROGRESS() /* 0x2B4A15E44DE0F478 */
{
	native_init(0x2B4A15E44DE0F478);
	return *(BOOL*)(native_call());
}

inline Any GAMEPLAY_0x2B5E102E4A42F2BF() /* 0x2B5E102E4A42F2BF */
{
	native_init(0x2B5E102E4A42F2BF);
	return *(Any*)(native_call());
}

inline Any GAMEPLAY_0x2B626A0150E4D449() /* 0x2B626A0150E4D449 */
{
	native_init(0x2B626A0150E4D449);
	return *(Any*)(native_call());
}

inline void GAMEPLAY__DISABLE_AUTOMATIC_RESPAWN(BOOL disableRespawn) /* 0x2C2B3493FBF51C71 */
{
	uint64_t val;

	native_init(0x2C2B3493FBF51C71);

	*(BOOL*)(&val) = disableRespawn;
	native_push(val);

	native_call();
}

inline Any GAMEPLAY_0x2D4259F1FEB81DA9(float p0, float p1, float p2, float p3) /* 0x2D4259F1FEB81DA9 */
{
	uint64_t val;

	native_init(0x2D4259F1FEB81DA9);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL GAMEPLAY_IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, int type, BOOL p7) /* 0x2E0DC353342C4A6D */
{
	uint64_t val;

	native_init(0x2E0DC353342C4A6D);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(int*)(&val) = type;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL GAMEPLAY_IS_NEXT_WEATHER_TYPE(const char* weatherType) /* 0x2FAA3A30BEC0F25D */
{
	uint64_t val;

	native_init(0x2FAA3A30BEC0F25D);

	*(const char**)(&val) = weatherType;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline float GAMEPLAY_GET_HEADING_FROM_VECTOR_2D(float dx, float dy) /* 0x2FFB6B224F4B2926 */
{
	uint64_t val;

	native_init(0x2FFB6B224F4B2926);

	*(float*)(&val) = dx;
	native_push(val);
	*(float*)(&val) = dy;
	native_push(val);

	return *(float*)(native_call());
}

inline void GAMEPLAY_0x31125FD509D9043F(Any* p0) /* 0x31125FD509D9043F */
{
	uint64_t val;

	native_init(0x31125FD509D9043F);

	*(Any**)(&val) = p0;
	native_push(val);

	native_call();
}

inline float GAMEPLAY_GET_RANDOM_FLOAT_IN_RANGE(float startRange, float endRange) /* 0x313CE5879CEB6FCD */
{
	uint64_t val;

	native_init(0x313CE5879CEB6FCD);

	*(float*)(&val) = startRange;
	native_push(val);
	*(float*)(&val) = endRange;
	native_push(val);

	return *(float*)(native_call());
}

inline void GAMEPLAY_0x31727907B2C43C55(float p0) /* 0x31727907B2C43C55 */
{
	uint64_t val;

	native_init(0x31727907B2C43C55);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any GAMEPLAY_0x32C7A7E8C43A1F80(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) /* 0x32C7A7E8C43A1F80 */
{
	uint64_t val;

	native_init(0x32C7A7E8C43A1F80);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);

	return *(Any*)(native_call());
}

inline void GAMEPLAY_CLEAR_OVERRIDE_WEATHER() /* 0x338D2E3477711050 */
{
	native_init(0x338D2E3477711050);
	native_call();
}

inline BOOL GAMEPLAY_IS_PROJECTILE_TYPE_WITHIN_DISTANCE(float x, float y, float z, Hash projHash, float radius, BOOL ownedByPlayer) /* 0x34318593248C8FB2 */
{
	uint64_t val;

	native_init(0x34318593248C8FB2);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(Hash*)(&val) = projHash;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(BOOL*)(&val) = ownedByPlayer;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_REGISTER_INT_TO_SAVE(Any* p0, const char* name) /* 0x34C9EE5986258415 */
{
	uint64_t val;

	native_init(0x34C9EE5986258415);

	*(Any**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0x37DEB0AA183FB6D8() /* 0x37DEB0AA183FB6D8 */
{
	native_init(0x37DEB0AA183FB6D8);
	native_call();
}

inline int GAMEPLAY_0x397BAA01068BAA96() /* 0x397BAA01068BAA96 */
{
	native_init(0x397BAA01068BAA96);
	return *(int*)(native_call());
}

inline Any GAMEPLAY_0x3BBBD13E5041A79E() /* 0x3BBBD13E5041A79E */
{
	native_init(0x3BBBD13E5041A79E);
	return *(Any*)(native_call());
}

inline void GAMEPLAY_0x3ED1438C1F5C6612(int p0) /* 0x3ED1438C1F5C6612 */
{
	uint64_t val;

	native_init(0x3ED1438C1F5C6612);

	*(int*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_IS_BULLET_IN_AREA(float p0, float p1, float p2, float p3, BOOL p4) /* 0x3F2023999AD51C1F */
{
	uint64_t val;

	native_init(0x3F2023999AD51C1F);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL GAMEPLAY_CREATE_INCIDENT(int incidentType, float x, float y, float z, int p5, float radius, int* outIncidentID) /* 0x3F892CAF67444AE7 */
{
	uint64_t val;

	native_init(0x3F892CAF67444AE7);

	*(int*)(&val) = incidentType;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(int**)(&val) = outIncidentID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0x405591EC8FD9096D(float p0) /* 0x405591EC8FD9096D */
{
	uint64_t val;

	native_init(0x405591EC8FD9096D);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0x437138B6A830166A() /* 0x437138B6A830166A */
{
	native_init(0x437138B6A830166A);
	native_call();
}

inline void GAMEPLAY_SET_RANDOM_SEED(int time) /* 0x444D98F98C11F3EC */
{
	uint64_t val;

	native_init(0x444D98F98C11F3EC);

	*(int*)(&val) = time;
	native_push(val);

	native_call();
}

inline Any GAMEPLAY_0x44A0BDC559B35F6E() /* 0x44A0BDC559B35F6E */
{
	native_init(0x44A0BDC559B35F6E);
	return *(Any*)(native_call());
}

inline BOOL GAMEPLAY_IS_PREV_WEATHER_TYPE(const char* weatherType) /* 0x44F28F86433B10A9 */
{
	uint64_t val;

	native_init(0x44F28F86433B10A9);

	*(const char**)(&val) = weatherType;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0, float p1) /* 0x44F7CBC1BEB3327D */
{
	uint64_t val;

	native_init(0x44F7CBC1BEB3327D);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Any GAMEPLAY_ADD_POLICE_RESTART(float p0, float p1, float p2, float p3, Any p4) /* 0x452736765B31FC4B */
{
	uint64_t val;

	native_init(0x452736765B31FC4B);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any GAMEPLAY_0x4750FC27570311EC() /* 0x4750FC27570311EC */
{
	native_init(0x4750FC27570311EC);
	return *(Any*)(native_call());
}

inline void GAMEPLAY_SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(Any p0, float p1) /* 0x48838ED9937A15D1 */
{
	uint64_t val;

	native_init(0x48838ED9937A15D1);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_IS_PC_VERSION() /* 0x48AF36444B965238 */
{
	native_init(0x48AF36444B965238);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0x48F069265A0E4BEC(Any* p0, const char* name) /* 0x48F069265A0E4BEC */
{
	uint64_t val;

	native_init(0x48F069265A0E4BEC);

	*(Any**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_SET_FADE_OUT_AFTER_DEATH(BOOL toggle) /* 0x4A18E01DF2C87B86 */
{
	uint64_t val;

	native_init(0x4A18E01DF2C87B86);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int GAMEPLAY_GET_FAKE_WANTED_LEVEL() /* 0x4C9296CBCD1B971E */
{
	native_init(0x4C9296CBCD1B971E);
	return *(int*)(native_call());
}

inline BOOL GAMEPLAY_IS_DURANGO_VERSION() /* 0x4D982ADB1978442D */
{
	native_init(0x4D982ADB1978442D);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0x4DCDF92BF64236CD(const char* p0, const char* p1) /* 0x4DCDF92BF64236CD */
{
	uint64_t val;

	native_init(0x4DCDF92BF64236CD);

	*(const char**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);

	native_call();
}

inline void GAMEPLAY__SET_SHOW_PED_IN_PAUSE_MENU(BOOL toggle) /* 0x4EBB7E87AA0DBED4 */
{
	uint64_t val;

	native_init(0x4EBB7E87AA0DBED4);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_SET_SAVE_HOUSE(int index, BOOL p1, BOOL p2) /* 0x4F548CABEAE553BC */
{
	uint64_t val;

	native_init(0x4F548CABEAE553BC);

	*(int*)(&val) = index;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_DO_AUTO_SAVE() /* 0x50EEAAD86232EE55 */
{
	native_init(0x50EEAAD86232EE55);
	native_call();
}

inline BOOL GAMEPLAY_IS_PROJECTILE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer) /* 0x5270A8FBC098C3F8 */
{
	uint64_t val;

	native_init(0x5270A8FBC098C3F8);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(BOOL*)(&val) = ownedByPlayer;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int GAMEPLAY_GET_BITS_IN_RANGE(int var, int rangeStart, int rangeEnd) /* 0x53158863FCC0893A */
{
	uint64_t val;

	native_init(0x53158863FCC0893A);

	*(int*)(&val) = var;
	native_push(val);
	*(int*)(&val) = rangeStart;
	native_push(val);
	*(int*)(&val) = rangeEnd;
	native_push(val);

	return *(int*)(native_call());
}

inline void GAMEPLAY_0x54F157E0336A3822(Any p0, const char* p1, float p2) /* 0x54F157E0336A3822 */
{
	uint64_t val;

	native_init(0x54F157E0336A3822);

	*(Any*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_DELETE_INCIDENT(int incidentId) /* 0x556C1AA270D5A207 */
{
	uint64_t val;

	native_init(0x556C1AA270D5A207);

	*(int*)(&val) = incidentId;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY__HAS_CHEAT_STRING_JUST_BEEN_ENTERED(Hash hash) /* 0x557E43C447E700A8 */
{
	uint64_t val;

	native_init(0x557E43C447E700A8);

	*(Hash*)(&val) = hash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Hash GAMEPLAY_GET_PREV_WEATHER_TYPE_HASH_NAME() /* 0x564B884A05EC45A3 */
{
	native_init(0x564B884A05EC45A3);
	return *(Hash*)(native_call());
}

inline void GAMEPLAY_SET_GAME_PAUSED(BOOL toggle) /* 0x577D1284D6873711 */
{
	uint64_t val;

	native_init(0x577D1284D6873711);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GAMEPLAY__SET_WEATHER_TYPE_TRANSITION(Hash weatherType1, Hash weatherType2, float percentWeather2) /* 0x578C752848ECFA0C */
{
	uint64_t val;

	native_init(0x578C752848ECFA0C);

	*(Hash*)(&val) = weatherType1;
	native_push(val);
	*(Hash*)(&val) = weatherType2;
	native_push(val);
	*(float*)(&val) = percentWeather2;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_SET_SUPER_JUMP_THIS_FRAME(Player player) /* 0x57FFF03E423A4C0B */
{
	uint64_t val;

	native_init(0x57FFF03E423A4C0B);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_STRING_TO_INT(const char* string, int* outInteger) /* 0x5A5F40FE637EB584 */
{
	uint64_t val;

	native_init(0x5A5F40FE637EB584);

	*(const char**)(&val) = string;
	native_push(val);
	*(int**)(&val) = outInteger;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any GAMEPLAY_0x5AA3BEFA29F03AD4() /* 0x5AA3BEFA29F03AD4 */
{
	native_init(0x5AA3BEFA29F03AD4);
	return *(Any*)(native_call());
}

inline Any GAMEPLAY_0x5B1F2E327B6B6FE1() /* 0x5B1F2E327B6B6FE1 */
{
	native_init(0x5B1F2E327B6B6FE1);
	return *(Any*)(native_call());
}

inline BOOL GAMEPLAY_IS_TENNIS_MODE(Ped ped) /* 0x5D5479D115290C3F */
{
	uint64_t val;

	native_init(0x5D5479D115290C3F);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY__START_SAVE_ARRAY(Any* p0, int p1, const char* arrayName) /* 0x60FE567DF1B1AF9D */
{
	uint64_t val;

	native_init(0x60FE567DF1B1AF9D);

	*(Any**)(&val) = p0;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = arrayName;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_IS_SNIPER_INVERTED() /* 0x61A23B7EDA9BDA24 */
{
	native_init(0x61A23B7EDA9BDA24);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0x6216B116083A7CB4(float p0) /* 0x6216B116083A7CB4 */
{
	uint64_t val;

	native_init(0x6216B116083A7CB4);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline float GAMEPLAY_TAN(float p0) /* 0x632106CC96E82E91 */
{
	uint64_t val;

	native_init(0x632106CC96E82E91);

	*(float*)(&val) = p0;
	native_push(val);

	return *(float*)(native_call());
}

inline void GAMEPLAY__SET_RAIN_FX_INTENSITY(float intensity) /* 0x643E26EA6E024D92 */
{
	uint64_t val;

	native_init(0x643E26EA6E024D92);

	*(float*)(&val) = intensity;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0x65D2EBB47E1CEC21(BOOL p0) /* 0x65D2EBB47E1CEC21 */
{
	uint64_t val;

	native_init(0x65D2EBB47E1CEC21);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any GAMEPLAY_0x67F6413D3220E18D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) /* 0x67F6413D3220E18D */
{
	uint64_t val;

	native_init(0x67F6413D3220E18D);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);
	*(Any*)(&val) = p7;
	native_push(val);
	*(Any*)(&val) = p8;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL GAMEPLAY_0x684A41975F077262() /* 0x684A41975F077262 */
{
	native_init(0x684A41975F077262);
	return *(BOOL*)(native_call());
}

inline int GAMEPLAY_0x6856EC3D35C81EA4() /* 0x6856EC3D35C81EA4 */
{
	native_init(0x6856EC3D35C81EA4);
	return *(int*)(native_call());
}

inline BOOL GAMEPLAY_FIND_SPAWN_POINT_IN_DIRECTION(float x1, float y1, float z1, float x2, float y2, float z2, float distance, Vector3* spawnPoint) /* 0x6874E2190B0C1972 */
{
	uint64_t val;

	native_init(0x6874E2190B0C1972);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(float*)(&val) = distance;
	native_push(val);
	*(Vector3**)(&val) = spawnPoint;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL GAMEPLAY_IS_AUTO_SAVE_IN_PROGRESS() /* 0x69240733738C19A0 */
{
	native_init(0x69240733738C19A0);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_ADD_REPLAY_STAT_VALUE(Any value) /* 0x69FE6DC87BD2A5E9 */
{
	uint64_t val;

	native_init(0x69FE6DC87BD2A5E9);

	*(Any*)(&val) = value;
	native_push(val);

	native_call();
}

inline Any GAMEPLAY_0x6E04F06094C87047() /* 0x6E04F06094C87047 */
{
	native_init(0x6E04F06094C87047);
	return *(Any*)(native_call());
}

inline void GAMEPLAY_0x6F2135B6129620C1(BOOL p0) /* 0x6F2135B6129620C1 */
{
	uint64_t val;

	native_init(0x6F2135B6129620C1);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0x6F7794F28C6B2535(Any* p0, const char* name) /* 0x6F7794F28C6B2535 */
{
	uint64_t val;

	native_init(0x6F7794F28C6B2535);

	*(Any**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_0x6FDDF453C0C756EC() /* 0x6FDDF453C0C756EC */
{
	native_init(0x6FDDF453C0C756EC);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float p0) /* 0x6FE601A64180D423 */
{
	uint64_t val;

	native_init(0x6FE601A64180D423);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0x703CC7F60CBB2B57(Any p0) /* 0x703CC7F60CBB2B57 */
{
	uint64_t val;

	native_init(0x703CC7F60CBB2B57);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_SET_WEATHER_TYPE_PERSIST(const char* weatherType) /* 0x704983DF373B198F */
{
	uint64_t val;

	native_init(0x704983DF373B198F);

	*(const char**)(&val) = weatherType;
	native_push(val);

	native_call();
}

inline void GAMEPLAY__SET_CUSTOM_RESPAWN_POSITION(float x, float y, float z, float heading) /* 0x706B5EDCAA7FA663 */
{
	uint64_t val;

	native_init(0x706B5EDCAA7FA663);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);

	native_call();
}

inline Hash GAMEPLAY_GET_NEXT_WEATHER_TYPE_HASH_NAME() /* 0x711327CD09C8F162 */
{
	native_init(0x711327CD09C8F162);
	return *(Hash*)(native_call());
}

inline Any GAMEPLAY_0x72DE52178C291CB5() /* 0x72DE52178C291CB5 */
{
	native_init(0x72DE52178C291CB5);
	return *(Any*)(native_call());
}

inline float GAMEPLAY_ABSF(float value) /* 0x73D57CFFDD12C355 */
{
	uint64_t val;

	native_init(0x73D57CFFDD12C355);

	*(float*)(&val) = value;
	native_push(val);

	return *(float*)(native_call());
}

inline void GAMEPLAY_SET_GRAVITY_LEVEL(int level) /* 0x740E14FAD5842351 */
{
	uint64_t val;

	native_init(0x740E14FAD5842351);

	*(int*)(&val) = level;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_POPULATE_NOW() /* 0x7472BB270D7B4F3E */
{
	native_init(0x7472BB270D7B4F3E);
	native_call();
}

inline void GAMEPLAY_STOP_SAVE_DATA() /* 0x74E20C9145FB66FD */
{
	native_init(0x74E20C9145FB66FD);
	native_call();
}

inline void GAMEPLAY_RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() /* 0x77A84429DD9F0A15 */
{
	native_init(0x77A84429DD9F0A15);
	native_call();
}

inline BOOL GAMEPLAY_IS_STUNT_JUMP_IN_PROGRESS() /* 0x7A3F19700A4D0525 */
{
	native_init(0x7A3F19700A4D0525);
	return *(BOOL*)(native_call());
}

inline BOOL GAMEPLAY_IS_THIS_A_MINIGAME_SCRIPT() /* 0x7B30F65D7B710098 */
{
	native_init(0x7B30F65D7B710098);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0x7C9C0B1EEB1F9072(float p0) /* 0x7C9C0B1EEB1F9072 */
{
	uint64_t val;

	native_init(0x7C9C0B1EEB1F9072);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_REGISTER_FLOAT_TO_SAVE(Any* p0, const char* name) /* 0x7CAEC29ECB5DFEBB */
{
	uint64_t val;

	native_init(0x7CAEC29ECB5DFEBB);

	*(Any**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_IS_FRONTEND_FADING() /* 0x7EA2B6AF97ECA6ED */
{
	native_init(0x7EA2B6AF97ECA6ED);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0x7EC6F9A478A6A512() /* 0x7EC6F9A478A6A512 */
{
	native_init(0x7EC6F9A478A6A512);
	native_call();
}

inline float GAMEPLAY_0x7F8F6405F4777AF6(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) /* 0x7F8F6405F4777AF6 */
{
	uint64_t val;

	native_init(0x7F8F6405F4777AF6);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(BOOL*)(&val) = p9;
	native_push(val);

	return *(float*)(native_call());
}

inline Any GAMEPLAY_0x8098C8D6597AAE18(Any p0) /* 0x8098C8D6597AAE18 */
{
	uint64_t val;

	native_init(0x8098C8D6597AAE18);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void GAMEPLAY_0x8269816F6CFD40F8(Any* p0, const char* name) /* 0x8269816F6CFD40F8 */
{
	uint64_t val;

	native_init(0x8269816F6CFD40F8);

	*(Any**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY__GET_PROJECTILE_NEAR_PED(Ped ped, Hash projHash, float radius, Vector3* projPos, Entity* projEnt, BOOL ownedByPlayer) /* 0x82FDE6A57EE4EE44 */
{
	uint64_t val;

	native_init(0x82FDE6A57EE4EE44);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = projHash;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(Vector3**)(&val) = projPos;
	native_push(val);
	*(Entity**)(&val) = projEnt;
	native_push(val);
	*(BOOL*)(&val) = ownedByPlayer;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline const char *GAMEPLAY_GET_ONSCREEN_KEYBOARD_RESULT() /* 0x8362B09B91893647 */
{
	native_init(0x8362B09B91893647);
	return *(const char**)(native_call());
}

inline void GAMEPLAY_SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed) /* 0x867654CBC7606F2C */
{
	uint64_t val;

	native_init(0x867654CBC7606F2C);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(int*)(&val) = damage;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(Hash*)(&val) = weaponHash;
	native_push(val);
	*(Ped*)(&val) = ownerPed;
	native_push(val);
	*(BOOL*)(&val) = isAudible;
	native_push(val);
	*(BOOL*)(&val) = isInvisible;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);

	native_call();
}

inline float GAMEPLAY_ATAN2(float p0, float p1) /* 0x8927CBF9D22261A4 */
{
	uint64_t val;

	native_init(0x8927CBF9D22261A4);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	return *(float*)(native_call());
}

inline void GAMEPLAY_0x8951EB9C6906D3C8() /* 0x8951EB9C6906D3C8 */
{
	native_init(0x8951EB9C6906D3C8);
	native_call();
}

inline BOOL GAMEPLAY_IS_MEMORY_CARD_IN_USE() /* 0x8A75CE2956274ADD */
{
	native_init(0x8A75CE2956274ADD);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_SET_RANDOM_WEATHER_TYPE() /* 0x8B05F884CF7E8020 */
{
	native_init(0x8B05F884CF7E8020);
	native_call();
}

inline int GAMEPLAY_GET_ALLOCATED_STACK_SIZE() /* 0x8B3CA62B1EF19B62 */
{
	native_init(0x8B3CA62B1EF19B62);
	return *(int*)(native_call());
}

inline BOOL GAMEPLAY__GET_GROUND_Z_COORD_WITH_OFFSETS(float x, float y, float z, float* groundZ, Vector3* offsets) /* 0x8BDC7BFC57A81E76 */
{
	uint64_t val;

	native_init(0x8BDC7BFC57A81E76);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float**)(&val) = groundZ;
	native_push(val);
	*(Vector3**)(&val) = offsets;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0x8D74E26F54B4E5C3(const char* p0) /* 0x8D74E26F54B4E5C3 */
{
	uint64_t val;

	native_init(0x8D74E26F54B4E5C3);

	*(const char**)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY__GET_IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Hash projHash, Vector3* projPos, BOOL ownedByPlayer) /* 0x8D7A43EC6A5FEA45 */
{
	uint64_t val;

	native_init(0x8D7A43EC6A5FEA45);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(Hash*)(&val) = projHash;
	native_push(val);
	*(Vector3**)(&val) = projPos;
	native_push(val);
	*(BOOL*)(&val) = ownedByPlayer;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_SET_BITS_IN_RANGE(int* var, int rangeStart, int rangeEnd, int p3) /* 0x8EF07E15701D61ED */
{
	uint64_t val;

	native_init(0x8EF07E15701D61ED);

	*(int**)(&val) = var;
	native_push(val);
	*(int*)(&val) = rangeStart;
	native_push(val);
	*(int*)(&val) = rangeEnd;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_0x8EF5573A1F801A5C(Any p0, Any* p1, Any* p2) /* 0x8EF5573A1F801A5C */
{
	uint64_t val;

	native_init(0x8EF5573A1F801A5C);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0x8FA9C42FC5D7C64B(Any p0, Any p1, float p2, float p3, float p4, BOOL p5) /* 0x8FA9C42FC5D7C64B */
{
	uint64_t val;

	native_init(0x8FA9C42FC5D7C64B);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline Any GAMEPLAY_0x918C7B2D2FF3928B(float p0, float p1, float p2, float p3, float p4, float p5, float p6) /* 0x918C7B2D2FF3928B */
{
	uint64_t val;

	native_init(0x918C7B2D2FF3928B);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);

	return *(Any*)(native_call());
}

inline void GAMEPLAY_NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() /* 0x9243BAC96D64C050 */
{
	native_init(0x9243BAC96D64C050);
	native_call();
}

inline void GAMEPLAY_0x92790862E36C2ADA() /* 0x92790862E36C2ADA */
{
	native_init(0x92790862E36C2ADA);
	native_call();
}

inline void GAMEPLAY_SET_BIT(int* address, int offset) /* 0x933D6A9EEC1BACD0 */
{
	uint64_t val;

	native_init(0x933D6A9EEC1BACD0);

	*(int**)(&val) = address;
	native_push(val);
	*(int*)(&val) = offset;
	native_push(val);

	native_call();
}

inline void GAMEPLAY__CLEAR_AREA_OF_EVERYTHING(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7) /* 0x957838AAF91BD12D */
{
	uint64_t val;

	native_init(0x957838AAF91BD12D);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);

	native_call();
}

inline void GAMEPLAY__CLEAR_CLOUD_HAT() /* 0x957E790EA1727B64 */
{
	native_init(0x957E790EA1727B64);
	native_call();
}

inline float GAMEPLAY_GET_RAIN_LEVEL() /* 0x96695E368AD855F3 */
{
	native_init(0x96695E368AD855F3);
	return *(float*)(native_call());
}

inline BOOL GAMEPLAY__GET_SHOW_PED_IN_PAUSE_MENU() /* 0x9689123E3F213AA5 */
{
	native_init(0x9689123E3F213AA5);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_SET_RANDOM_EVENT_FLAG(BOOL p0) /* 0x971927086CFD2158 */
{
	uint64_t val;

	native_init(0x971927086CFD2158);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0x97E7E2C04245115B(Any p0) /* 0x97E7E2C04245115B */
{
	uint64_t val;

	native_init(0x97E7E2C04245115B);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_HAS_BULLET_IMPACTED_IN_AREA(float x, float y, float z, float p3, BOOL p4, BOOL p5) /* 0x9870ACFB89A90995 */
{
	uint64_t val;

	native_init(0x9870ACFB89A90995);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int GAMEPLAY_0x996DD1E1E02F1008() /* 0x996DD1E1E02F1008 */
{
	native_init(0x996DD1E1E02F1008);
	return *(int*)(native_call());
}

inline void GAMEPLAY_0x9B2BD3773123EA2F(int type, BOOL toggle) /* 0x9B2BD3773123EA2F */
{
	uint64_t val;

	native_init(0x9B2BD3773123EA2F);

	*(int*)(&val) = type;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GAMEPLAY__USE_FREEMODE_MAP_BEHAVIOR(BOOL toggle) /* 0x9BAE5AD2508DF078 */
{
	uint64_t val;

	native_init(0x9BAE5AD2508DF078);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int GAMEPLAY_GET_GAME_TIMER() /* 0x9CD27B0045628463 */
{
	native_init(0x9CD27B0045628463);
	return *(int*)(native_call());
}

inline void GAMEPLAY_0x9D8D44ADBBA61EF2(BOOL p0) /* 0x9D8D44ADBBA61EF2 */
{
	uint64_t val;

	native_init(0x9D8D44ADBBA61EF2);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(const char* scriptName) /* 0x9DC711BC69C548DF */
{
	uint64_t val;

	native_init(0x9DC711BC69C548DF);

	*(const char**)(&val) = scriptName;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_IS_AUSSIE_VERSION() /* 0x9F1935CA1F724008 */
{
	native_init(0x9F1935CA1F724008);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0x9F5E6BB6B34540DA(float p0) /* 0x9F5E6BB6B34540DA */
{
	uint64_t val;

	native_init(0x9F5E6BB6B34540DA);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_0xA049A5BE0F04F2F8() /* 0xA049A5BE0F04F2F8 */
{
	native_init(0xA049A5BE0F04F2F8);
	return *(BOOL*)(native_call());
}

inline int GAMEPLAY_0xA09F896CE912481F(BOOL p0) /* 0xA09F896CE912481F */
{
	uint64_t val;

	native_init(0xA09F896CE912481F);

	*(BOOL*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline void GAMEPLAY_END_REPLAY_STATS() /* 0xA23E821FBDF8A5F2 */
{
	native_init(0xA23E821FBDF8A5F2);
	native_call();
}

inline void GAMEPLAY__SET_NEXT_RESPAWN_TO_CUSTOM() /* 0xA2716D40842EAF79 */
{
	native_init(0xA2716D40842EAF79);
	native_call();
}

inline BOOL GAMEPLAY_GET_MISSION_FLAG() /* 0xA33CDCCDA663159E */
{
	native_init(0xA33CDCCDA663159E);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_SET_OVERRIDE_WEATHER(const char* weatherType) /* 0xA43D5C6FE51ADBEF */
{
	uint64_t val;

	native_init(0xA43D5C6FE51ADBEF);

	*(const char**)(&val) = weatherType;
	native_push(val);

	native_call();
}

inline Any GAMEPLAY_0xA4A0065E39C9F25C(Any p0, Any p1, Any p2, Any p3) /* 0xA4A0065E39C9F25C */
{
	uint64_t val;

	native_init(0xA4A0065E39C9F25C);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	return *(Any*)(native_call());
}

inline void GAMEPLAY_DISABLE_STUNT_JUMP_SET(int p0) /* 0xA5272EBEDD4747F6 */
{
	uint64_t val;

	native_init(0xA5272EBEDD4747F6);

	*(int*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_CLEAR_AREA(float X, float Y, float Z, float radius, BOOL p4, BOOL ignoreCopCars, BOOL ignoreObjects, BOOL p7) /* 0xA56F01F3765B93A0 */
{
	uint64_t val;

	native_init(0xA56F01F3765B93A0);

	*(float*)(&val) = X;
	native_push(val);
	*(float*)(&val) = Y;
	native_push(val);
	*(float*)(&val) = Z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = ignoreCopCars;
	native_push(val);
	*(BOOL*)(&val) = ignoreObjects;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_IS_AREA_OCCUPIED(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, Any p11, BOOL p12) /* 0xA61B4DF533DCB56E */
{
	uint64_t val;

	native_init(0xA61B4DF533DCB56E);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(BOOL*)(&val) = p9;
	native_push(val);
	*(BOOL*)(&val) = p10;
	native_push(val);
	*(Any*)(&val) = p11;
	native_push(val);
	*(BOOL*)(&val) = p12;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_SET_EXPLOSIVE_AMMO_THIS_FRAME(Player player) /* 0xA66C71C98D5F2CFB */
{
	uint64_t val;

	native_init(0xA66C71C98D5F2CFB);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void GAMEPLAY__REMOVE_STEALTH_KILL(Hash hash, BOOL p1) /* 0xA6A12939F16D85BE */
{
	uint64_t val;

	native_init(0xA6A12939F16D85BE);

	*(Hash*)(&val) = hash;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_IS_ORBIS_VERSION() /* 0xA72BC0B675B1519E */
{
	native_init(0xA72BC0B675B1519E);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0xA735353C77334EA0(Any* p0, Any* p1) /* 0xA735353C77334EA0 */
{
	uint64_t val;

	native_init(0xA735353C77334EA0);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_UNLOAD_CLOUD_HAT(const char* name, float p1) /* 0xA74802FB8D0B7814 */
{
	uint64_t val;

	native_init(0xA74802FB8D0B7814);

	*(const char**)(&val) = name;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0xA7A1127490312C36(float p0) /* 0xA7A1127490312C36 */
{
	uint64_t val;

	native_init(0xA7A1127490312C36);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0xA8434F1DFF41D6E7(float p0) /* 0xA8434F1DFF41D6E7 */
{
	uint64_t val;

	native_init(0xA8434F1DFF41D6E7);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline float GAMEPLAY_GET_WIND_SPEED() /* 0xA8CF1CC0AFCD3F12 */
{
	native_init(0xA8CF1CC0AFCD3F12);
	return *(float*)(native_call());
}

inline BOOL GAMEPLAY_IS_BIT_SET(int* address, int offset) /* 0xA921AA820C25702F */
{
	uint64_t val;

	native_init(0xA921AA820C25702F);

	*(int**)(&val) = address;
	native_push(val);
	*(int*)(&val) = offset;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_START_SAVE_DATA(Any* p0, Any p1, BOOL p2) /* 0xA9575F812C6A7997 */
{
	uint64_t val;

	native_init(0xA9575F812C6A7997);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline float GAMEPLAY_ATAN(float p0) /* 0xA9D1795CD5043663 */
{
	uint64_t val;

	native_init(0xA9D1795CD5043663);

	*(float*)(&val) = p0;
	native_push(val);

	return *(float*)(native_call());
}

inline void GAMEPLAY_SET_THIS_SCRIPT_CAN_BE_PAUSED(BOOL toggle) /* 0xAA391C728106F7AF */
{
	uint64_t val;

	native_init(0xAA391C728106F7AF);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Any GAMEPLAY_0xABB2FA71C83A1B72() /* 0xABB2FA71C83A1B72 */
{
	native_init(0xABB2FA71C83A1B72);
	return *(Any*)(native_call());
}

inline void GAMEPLAY_SET_WIND(float speed) /* 0xAC3A74E8384A9919 */
{
	uint64_t val;

	native_init(0xAC3A74E8384A9919);

	*(float*)(&val) = speed;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_RESET_DISPATCH_SPAWN_BLOCKING_AREAS() /* 0xAC7BFD5C1D83EA75 */
{
	native_init(0xAC7BFD5C1D83EA75);
	native_call();
}

inline BOOL GAMEPLAY_IS_POSITION_OCCUPIED(float x, float y, float z, float range, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, Any p9, BOOL p10) /* 0xADCDE75E1C60F32D */
{
	uint64_t val;

	native_init(0xADCDE75E1C60F32D);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = range;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(Any*)(&val) = p9;
	native_push(val);
	*(BOOL*)(&val) = p10;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0xB08B85D860E7BA3C(Any p0, Any p1, Any p2) /* 0xB08B85D860E7BA3C */
{
	uint64_t val;

	native_init(0xB08B85D860E7BA3C);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0xB129E447A2EDA4BF(Any p0, BOOL p1) /* 0xB129E447A2EDA4BF */
{
	uint64_t val;

	native_init(0xB129E447A2EDA4BF);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_0xB335F761606DB47C(Any* p1, Any* p2, Any p3, BOOL p4) /* 0xB335F761606DB47C */
{
	uint64_t val;

	native_init(0xB335F761606DB47C);

	*(Any**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0xB3CD58CCA6CDA852() /* 0xB3CD58CCA6CDA852 */
{
	native_init(0xB3CD58CCA6CDA852);
	native_call();
}

inline void GAMEPLAY_0xB3E6360DDE733E82(float p0) /* 0xB3E6360DDE733E82 */
{
	uint64_t val;

	native_init(0xB3E6360DDE733E82);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0xB51B9AB9EF81868C(BOOL toggle) /* 0xB51B9AB9EF81868C */
{
	uint64_t val;

	native_init(0xB51B9AB9EF81868C);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0xB8721407EE9C3FF6(Any p0, Any p1, Any p2) /* 0xB8721407EE9C3FF6 */
{
	uint64_t val;

	native_init(0xB8721407EE9C3FF6);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0xB8F87EAD7533B176(float p0) /* 0xB8F87EAD7533B176 */
{
	uint64_t val;

	native_init(0xB8F87EAD7533B176);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_SET_CREDITS_ACTIVE(BOOL toggle) /* 0xB938B7E6D3C0620C */
{
	uint64_t val;

	native_init(0xB938B7E6D3C0620C);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(BOOL toggle) /* 0xB98236CAAECEF897 */
{
	uint64_t val;

	native_init(0xB98236CAAECEF897);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0xB9854DFDE0D833D6(float p0) /* 0xB9854DFDE0D833D6 */
{
	uint64_t val;

	native_init(0xB9854DFDE0D833D6);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0xBA4B8D83BDC75551(Any p0) /* 0xBA4B8D83BDC75551 */
{
	uint64_t val;

	native_init(0xBA4B8D83BDC75551);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int GAMEPLAY_ADD_STUNT_JUMP_ANGLED(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, Any p17, Any p18) /* 0xBBE5D803A5360CBF */
{
	uint64_t val;

	native_init(0xBBE5D803A5360CBF);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);
	*(float*)(&val) = p10;
	native_push(val);
	*(float*)(&val) = p11;
	native_push(val);
	*(float*)(&val) = p12;
	native_push(val);
	*(float*)(&val) = p13;
	native_push(val);
	*(float*)(&val) = p14;
	native_push(val);
	*(float*)(&val) = p15;
	native_push(val);
	*(float*)(&val) = p16;
	native_push(val);
	*(Any*)(&val) = p17;
	native_push(val);
	*(Any*)(&val) = p18;
	native_push(val);

	return *(int*)(native_call());
}

inline void GAMEPLAY_CLEAR_AREA_OF_PEDS(float x, float y, float z, float radius, int flags) /* 0xBE31FD6CE464AC59 */
{
	uint64_t val;

	native_init(0xBE31FD6CE464AC59);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(int*)(&val) = flags;
	native_push(val);

	native_call();
}

inline void GAMEPLAY__START_SAVE_STRUCT(Any* p0, int p1, const char* structName) /* 0xBF737600CDDBEADD */
{
	uint64_t val;

	native_init(0xBF737600CDDBEADD);

	*(Any**)(&val) = p0;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = structName;
	native_push(val);

	native_call();
}

inline void GAMEPLAY__SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity, BOOL p14, BOOL p15, BOOL p16, BOOL p17) /* 0xBFE5756E7407064A */
{
	uint64_t val;

	native_init(0xBFE5756E7407064A);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(int*)(&val) = damage;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(Hash*)(&val) = weaponHash;
	native_push(val);
	*(Ped*)(&val) = ownerPed;
	native_push(val);
	*(BOOL*)(&val) = isAudible;
	native_push(val);
	*(BOOL*)(&val) = isInvisible;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = p14;
	native_push(val);
	*(BOOL*)(&val) = p15;
	native_push(val);
	*(BOOL*)(&val) = p16;
	native_push(val);
	*(BOOL*)(&val) = p17;
	native_push(val);

	native_call();
}

inline Any GAMEPLAY_REGISTER_SAVE_HOUSE(float p0, float p1, float p2, float p3, Any* p4, Any p5, Any p6) /* 0xC0714D0A7EEECA54 */
{
	uint64_t val;

	native_init(0xC0714D0A7EEECA54);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(Any**)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);

	return *(Any*)(native_call());
}

inline void GAMEPLAY__RESET_LOCALPLAYER_STATE() /* 0xC0AA53F866B3134D */
{
	native_init(0xC0AA53F866B3134D);
	native_call();
}

inline void GAMEPLAY_0xC3C221ADDDE31A11(float p0) /* 0xC3C221ADDDE31A11 */
{
	uint64_t val;

	native_init(0xC3C221ADDDE31A11);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0xC3EAD29AB273ECE8(float p0) /* 0xC3EAD29AB273ECE8 */
{
	uint64_t val;

	native_init(0xC3EAD29AB273ECE8);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_SET_MISSION_FLAG(BOOL toggle) /* 0xC4301E5121A0ED73 */
{
	uint64_t val;

	native_init(0xC4301E5121A0ED73);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int GAMEPLAY_GET_PROFILE_SETTING(int profileSetting) /* 0xC488FF2356EA7791 */
{
	uint64_t val;

	native_init(0xC488FF2356EA7791);

	*(int*)(&val) = profileSetting;
	native_push(val);

	return *(int*)(native_call());
}

inline void GAMEPLAY_0xC54A08C85AE4D410(float p0) /* 0xC54A08C85AE4D410 */
{
	uint64_t val;

	native_init(0xC54A08C85AE4D410);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline float GAMEPLAY_GET_SNOW_LEVEL() /* 0xC5868A966E5BE3AE */
{
	native_init(0xC5868A966E5BE3AE);
	return *(float*)(native_call());
}

inline void GAMEPLAY__SET_UNK_MAP_FLAG(int flag) /* 0xC5F0A8EBD3F361CE */
{
	uint64_t val;

	native_init(0xC5F0A8EBD3F361CE);

	*(int*)(&val) = flag;
	native_push(val);

	native_call();
}

inline void GAMEPLAY__CLEANUP_ASYNC_INSTALL() /* 0xC79AE21974B01FB2 */
{
	native_init(0xC79AE21974B01FB2);
	native_call();
}

inline void GAMEPLAY_0xC7DB36C24634F52B() /* 0xC7DB36C24634F52B */
{
	native_init(0xC7DB36C24634F52B);
	native_call();
}

inline float GAMEPLAY_ASIN(float p0) /* 0xC843060B5765DCE7 */
{
	uint64_t val;

	native_init(0xC843060B5765DCE7);

	*(float*)(&val) = p0;
	native_push(val);

	return *(float*)(native_call());
}

inline void GAMEPLAY_DISABLE_HOSPITAL_RESTART(int hospitalIndex, BOOL toggle) /* 0xC8535819C450EBA8 */
{
	uint64_t val;

	native_init(0xC8535819C450EBA8);

	*(int*)(&val) = hospitalIndex;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_IS_INCIDENT_VALID(int incidentId) /* 0xC8BC6461E629BEAA */
{
	uint64_t val;

	native_init(0xC8BC6461E629BEAA);

	*(int*)(&val) = incidentId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_REGISTER_BOOL_TO_SAVE(Any* p0, const char* name) /* 0xC8F4131414C835A1 */
{
	uint64_t val;

	native_init(0xC8F4131414C835A1);

	*(Any**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float* groundZ, BOOL unk) /* 0xC906A7DAB05C8D2B */
{
	uint64_t val;

	native_init(0xC906A7DAB05C8D2B);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float**)(&val) = groundZ;
	native_push(val);
	*(BOOL*)(&val) = unk;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_SET_SAVE_MENU_ACTIVE(BOOL unk) /* 0xC9BF75D28165FF77 */
{
	uint64_t val;

	native_init(0xC9BF75D28165FF77);

	*(BOOL*)(&val) = unk;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_IS_STRING_NULL_OR_EMPTY(const char* string) /* 0xCA042B6957743895 */
{
	uint64_t val;

	native_init(0xCA042B6957743895);

	*(const char**)(&val) = string;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY__DISPLAY_ONSCREEN_KEYBOARD_2(int p0, const char* windowTitle, Any* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, const char* defaultConcat4, const char* defaultConcat5, const char* defaultConcat6, const char* defaultConcat7, int maxInputLength) /* 0xCA78CFA0366592FE */
{
	uint64_t val;

	native_init(0xCA78CFA0366592FE);

	*(int*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = windowTitle;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(const char**)(&val) = defaultText;
	native_push(val);
	*(const char**)(&val) = defaultConcat1;
	native_push(val);
	*(const char**)(&val) = defaultConcat2;
	native_push(val);
	*(const char**)(&val) = defaultConcat3;
	native_push(val);
	*(const char**)(&val) = defaultConcat4;
	native_push(val);
	*(const char**)(&val) = defaultConcat5;
	native_push(val);
	*(const char**)(&val) = defaultConcat6;
	native_push(val);
	*(const char**)(&val) = defaultConcat7;
	native_push(val);
	*(int*)(&val) = maxInputLength;
	native_push(val);

	native_call();
}

inline int GAMEPLAY_GET_INDEX_OF_CURRENT_LEVEL() /* 0xCBAD6729F7B1F4FC */
{
	native_init(0xCBAD6729F7B1F4FC);
	return *(int*)(native_call());
}

inline BOOL GAMEPLAY_IS_PS3_VERSION() /* 0xCCA1072C29D096C2 */
{
	native_init(0xCCA1072C29D096C2);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_CLEAR_WEATHER_TYPE_PERSIST() /* 0xCCC39339BEF76CF5 */
{
	native_init(0xCCC39339BEF76CF5);
	native_call();
}

inline Any GAMEPLAY_0xD10282B6E3751BA0() /* 0xD10282B6E3751BA0 */
{
	native_init(0xD10282B6E3751BA0);
	return *(Any*)(native_call());
}

inline void GAMEPLAY_0xD10F442036302D50(Any p0, Any p1, Any p2) /* 0xD10F442036302D50 */
{
	uint64_t val;

	native_init(0xD10F442036302D50);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	native_call();
}

inline Hash GAMEPLAY_GET_HASH_KEY(const char* string) /* 0xD24D37CC275948CC */
{
	uint64_t val;

	native_init(0xD24D37CC275948CC);

	*(const char**)(&val) = string;
	native_push(val);

	return *(Hash*)(native_call());
}

inline void GAMEPLAY_0xD261BA3E7E998072(Any p0, float p1) /* 0xD261BA3E7E998072 */
{
	uint64_t val;

	native_init(0xD261BA3E7E998072);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_GET_RANDOM_EVENT_FLAG() /* 0xD2D57F1D764117B1 */
{
	native_init(0xD2D57F1D764117B1);
	return *(BOOL*)(native_call());
}

inline BOOL GAMEPLAY_0xD3D15555431AB793() /* 0xD3D15555431AB793 */
{
	native_init(0xD3D15555431AB793);
	return *(BOOL*)(native_call());
}

inline int GAMEPLAY_GET_RANDOM_INT_IN_RANGE(int startRange, int endRange) /* 0xD53343AA4FB7DD28 */
{
	uint64_t val;

	native_init(0xD53343AA4FB7DD28);

	*(int*)(&val) = startRange;
	native_push(val);
	*(int*)(&val) = endRange;
	native_push(val);

	return *(int*)(native_call());
}

inline Any GAMEPLAY_0xD642319C54AADEB6() /* 0xD642319C54AADEB6 */
{
	native_init(0xD642319C54AADEB6);
	return *(Any*)(native_call());
}

inline void GAMEPLAY_0xD79185689F8FD5DF(BOOL p0) /* 0xD79185689F8FD5DF */
{
	uint64_t val;

	native_init(0xD79185689F8FD5DF);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0xD9F692D349249528() /* 0xD9F692D349249528 */
{
	native_init(0xD9F692D349249528);
	native_call();
}

inline void GAMEPLAY_SET_FADE_IN_AFTER_DEATH_ARREST(BOOL toggle) /* 0xDA66D2796BA33F12 */
{
	uint64_t val;

	native_init(0xDA66D2796BA33F12);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_ENABLE_DISPATCH_SERVICE(int dispatchService, BOOL toggle) /* 0xDC0F817884CDD856 */
{
	uint64_t val;

	native_init(0xDC0F817884CDD856);

	*(int*)(&val) = dispatchService;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_DELETE_STUNT_JUMP(int player) /* 0xDC518000E39DAE1F */
{
	uint64_t val;

	native_init(0xDC518000E39DAE1F);

	*(int*)(&val) = player;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) /* 0xDC8C5D7CFEAB8394 */
{
	uint64_t val;

	native_init(0xDC8C5D7CFEAB8394);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any GAMEPLAY_0xDC9274A7EF6B2867() /* 0xDC9274A7EF6B2867 */
{
	native_init(0xDC9274A7EF6B2867);
	return *(Any*)(native_call());
}

inline void GAMEPLAY_CLEAR_AREA_OF_OBJECTS(float x, float y, float z, float radius, int flags) /* 0xDD9B9B385AAC7F5B */
{
	uint64_t val;

	native_init(0xDD9B9B385AAC7F5B);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(int*)(&val) = flags;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_IS_BULLET_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6) /* 0xDE0F6D7450D37351 */
{
	uint64_t val;

	native_init(0xDE0F6D7450D37351);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0xDEA36202FC3382DF(BOOL p0) /* 0xDEA36202FC3382DF */
{
	uint64_t val;

	native_init(0xDEA36202FC3382DF);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY__GET_PROJECTILE_NEAR_PED_COORDS(Ped ped, Hash projHash, float radius, Vector3* projPos, BOOL ownedByPlayer) /* 0xDFB4138EEFED7B81 */
{
	uint64_t val;

	native_init(0xDFB4138EEFED7B81);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = projHash;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(Vector3**)(&val) = projPos;
	native_push(val);
	*(BOOL*)(&val) = ownedByPlayer;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_BEGIN_REPLAY_STATS(Any p0, Any p1) /* 0xE0E500246FF73D66 */
{
	uint64_t val;

	native_init(0xE0E500246FF73D66);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0xE266ED23311F24D4(Any p0, Any* p1, Any* p2, float p3, float p4, BOOL p5) /* 0xE266ED23311F24D4 */
{
	uint64_t val;

	native_init(0xE266ED23311F24D4);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_ENABLE_STUNT_JUMP_SET(int p0) /* 0xE369A5783B866016 */
{
	uint64_t val;

	native_init(0xE369A5783B866016);

	*(int*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY__SHOOT_SINGLE_BULLET_BETWEEN_COORDS_PRESET_PARAMS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity) /* 0xE3A7742E0B7A2F8B */
{
	uint64_t val;

	native_init(0xE3A7742E0B7A2F8B);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(int*)(&val) = damage;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(Hash*)(&val) = weaponHash;
	native_push(val);
	*(Ped*)(&val) = ownerPed;
	native_push(val);
	*(BOOL*)(&val) = isAudible;
	native_push(val);
	*(BOOL*)(&val) = isInvisible;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0xE3D969D2785FFB5E() /* 0xE3D969D2785FFB5E */
{
	native_init(0xE3D969D2785FFB5E);
	native_call();
}

inline void GAMEPLAY_0xE532EC1A63231B4F(Any p0, Any p1) /* 0xE532EC1A63231B4F */
{
	uint64_t val;

	native_init(0xE532EC1A63231B4F);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) /* 0xE54E209C35FFA18D */
{
	uint64_t val;

	native_init(0xE54E209C35FFA18D);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline float GAMEPLAY__GET_BENCHMARK_TIME() /* 0xE599A503B3837E1B */
{
	native_init(0xE599A503B3837E1B);
	return *(float*)(native_call());
}

inline void GAMEPLAY_0xE6869BECDD8F2403(Any p0, BOOL p1) /* 0xE6869BECDD8F2403 */
{
	uint64_t val;

	native_init(0xE6869BECDD8F2403);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_CANCEL_STUNT_JUMP() /* 0xE6B7B0ACD4E4B75E */
{
	native_init(0xE6B7B0ACD4E4B75E);
	native_call();
}

inline void GAMEPLAY_CLEAR_BIT(int* address, int offset) /* 0xE80492A9AC099A93 */
{
	uint64_t val;

	native_init(0xE80492A9AC099A93);

	*(int**)(&val) = address;
	native_push(val);
	*(int*)(&val) = offset;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_0xE8B9C0EC9E183F35() /* 0xE8B9C0EC9E183F35 */
{
	native_init(0xE8B9C0EC9E183F35);
	return *(BOOL*)(native_call());
}

inline BOOL GAMEPLAY_0xE95B0C7D5BA3B96B(Any p0) /* 0xE95B0C7D5BA3B96B */
{
	uint64_t val;

	native_init(0xE95B0C7D5BA3B96B);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any GAMEPLAY_0xEA2F2061875EED90() /* 0xEA2F2061875EED90 */
{
	native_init(0xEA2F2061875EED90);
	return *(Any*)(native_call());
}

inline void GAMEPLAY_0xEB078CA2B5E82ADD(Any p0, Any p1) /* 0xEB078CA2B5E82ADD */
{
	uint64_t val;

	native_init(0xEB078CA2B5E82ADD);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_SET_WIND_DIRECTION(float direction) /* 0xEB0F4468467B4528 */
{
	uint64_t val;

	native_init(0xEB0F4468467B4528);

	*(float*)(&val) = direction;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_STOP_SAVE_STRUCT() /* 0xEB1774DF12BB9F12 */
{
	native_init(0xEB1774DF12BB9F12);
	native_call();
}

inline Any GAMEPLAY_0xEB2104E905C6F2E9() /* 0xEB2104E905C6F2E9 */
{
	native_init(0xEB2104E905C6F2E9);
	return *(Any*)(native_call());
}

inline int GAMEPLAY__GET_NUMBER_OF_DISPATCHED_UNITS_FOR_PLAYER(int dispatchService) /* 0xEB4A0C2D56441717 */
{
	uint64_t val;

	native_init(0xEB4A0C2D56441717);

	*(int*)(&val) = dispatchService;
	native_push(val);

	return *(int*)(native_call());
}

inline void GAMEPLAY__FORCE_SOCIAL_CLUB_UPDATE() /* 0xEB6891F03362FB12 */
{
	native_init(0xEB6891F03362FB12);
	native_call();
}

inline void GAMEPLAY_0xEBD3205A207939ED(Any* p0) /* 0xEBD3205A207939ED */
{
	uint64_t val;

	native_init(0xEBD3205A207939ED);

	*(Any**)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_SET_WEATHER_TYPE_NOW_PERSIST(const char* weatherType) /* 0xED712CA327900C8A */
{
	uint64_t val;

	native_init(0xED712CA327900C8A);

	*(const char**)(&val) = weatherType;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_REGISTER_TEXT_LABEL_TO_SAVE(Any* p0, const char* name) /* 0xEDB1232C5BEAE62F */
{
	uint64_t val;

	native_init(0xEDB1232C5BEAE62F);

	*(Any**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_SET_WIND_SPEED(float speed) /* 0xEE09ECEDBABE47FC */
{
	uint64_t val;

	native_init(0xEE09ECEDBABE47FC);

	*(float*)(&val) = speed;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, BOOL p8) /* 0xF0BC12401061DEA0 */
{
	uint64_t val;

	native_init(0xF0BC12401061DEA0);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(Any*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int GAMEPLAY_ABSI(int value) /* 0xF0D31AD191A74F87 */
{
	uint64_t val;

	native_init(0xF0D31AD191A74F87);

	*(int*)(&val) = value;
	native_push(val);

	return *(int*)(native_call());
}

inline void GAMEPLAY_USING_MISSION_CREATOR(BOOL toggle) /* 0xF14878FC50BEC6EE */
{
	uint64_t val;

	native_init(0xF14878FC50BEC6EE);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline float GAMEPLAY_GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, BOOL useZ) /* 0xF1B760881820C952 */
{
	uint64_t val;

	native_init(0xF1B760881820C952);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(BOOL*)(&val) = useZ;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL GAMEPLAY_IS_STRING_NULL(const char* string) /* 0xF22B6C47C6EAB066 */
{
	uint64_t val;

	native_init(0xF22B6C47C6EAB066);

	*(const char**)(&val) = string;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0xF2F6A2FA49278625(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any* p9, Any* p10, Any* p11, Any* p12) /* 0xF2F6A2FA49278625 */
{
	uint64_t val;

	native_init(0xF2F6A2FA49278625);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(Any**)(&val) = p9;
	native_push(val);
	*(Any**)(&val) = p10;
	native_push(val);
	*(Any**)(&val) = p11;
	native_push(val);
	*(Any**)(&val) = p12;
	native_push(val);

	native_call();
}

inline void GAMEPLAY__SET_CLOUD_HAT_OPACITY(float opacity) /* 0xF36199225D6D8C86 */
{
	uint64_t val;

	native_init(0xF36199225D6D8C86);

	*(float*)(&val) = opacity;
	native_push(val);

	native_call();
}

inline void GAMEPLAY__GET_WEATHER_TYPE_TRANSITION(Hash* weatherType1, Hash* weatherType2, float* percentWeather2) /* 0xF3BBE884A14BB413 */
{
	uint64_t val;

	native_init(0xF3BBE884A14BB413);

	*(Hash**)(&val) = weatherType1;
	native_push(val);
	*(Hash**)(&val) = weatherType2;
	native_push(val);
	*(float**)(&val) = percentWeather2;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_SET_FADE_IN_AFTER_LOAD(BOOL toggle) /* 0xF3D78F59DFE18D79 */
{
	uint64_t val;

	native_init(0xF3D78F59DFE18D79);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL GAMEPLAY_0xF56DFB7B61BE7276(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, Any* p12) /* 0xF56DFB7B61BE7276 */
{
	uint64_t val;

	native_init(0xF56DFB7B61BE7276);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);
	*(float*)(&val) = p10;
	native_push(val);
	*(float*)(&val) = p11;
	native_push(val);
	*(Any**)(&val) = p12;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_FORCE_LIGHTNING_FLASH() /* 0xF6062E089251C898 */
{
	native_init(0xF6062E089251C898);
	native_call();
}

inline BOOL GAMEPLAY_IS_XBOX360_VERSION() /* 0xF6201B4DAF662A9D */
{
	native_init(0xF6201B4DAF662A9D);
	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_0xF751B16FB32ABC1D(float p0) /* 0xF751B16FB32ABC1D */
{
	uint64_t val;

	native_init(0xF751B16FB32ABC1D);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0xFAA457EF263E8763(Any* p0, const char* name) /* 0xFAA457EF263E8763 */
{
	uint64_t val;

	native_init(0xFAA457EF263E8763);

	*(Any**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_0xFB00CA71DA386228() /* 0xFB00CA71DA386228 */
{
	native_init(0xFB00CA71DA386228);
	native_call();
}

inline void GAMEPLAY__SET_WEATHER_TYPE_OVER_TIME(const char* weatherType, float time) /* 0xFB5045B7C42B75BF */
{
	uint64_t val;

	native_init(0xFB5045B7C42B75BF);

	*(const char**)(&val) = weatherType;
	native_push(val);
	*(float*)(&val) = time;
	native_push(val);

	native_call();
}

inline void GAMEPLAY_LOAD_CLOUD_HAT(const char* name, float transitionTime) /* 0xFC4842A34657BFCB */
{
	uint64_t val;

	native_init(0xFC4842A34657BFCB);

	*(const char**)(&val) = name;
	native_push(val);
	*(float*)(&val) = transitionTime;
	native_push(val);

	native_call();
}

inline int GAMEPLAY_GET_FRAME_COUNT() /* 0xFC8202EFC642E6F2 */
{
	native_init(0xFC8202EFC642E6F2);
	return *(int*)(native_call());
}

inline int GAMEPLAY__GET_FREE_STACK_SLOTS_COUNT(int threadId) /* 0xFEAD16FC8F9DFC0F */
{
	uint64_t val;

	native_init(0xFEAD16FC8F9DFC0F);

	*(int*)(&val) = threadId;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL GAMEPLAY_IS_SNIPER_BULLET_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) /* 0xFEFCF11B01287125 */
{
	uint64_t val;

	native_init(0xFEFCF11B01287125);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GAMEPLAY_SET_EXPLOSIVE_MELEE_THIS_FRAME(Player player) /* 0xFF1BED81BFDC0FE0 */
{
	uint64_t val;

	native_init(0xFF1BED81BFDC0FE0);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline int GRAPHICS_CREATE_CHECKPOINT(int type, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float radius, int red, int green, int blue, int alpha, int reserved) /* 0x0134F0835AB6BFCB */
{
	uint64_t val;

	native_init(0x0134F0835AB6BFCB);

	*(int*)(&val) = type;
	native_push(val);
	*(float*)(&val) = posX1;
	native_push(val);
	*(float*)(&val) = posY1;
	native_push(val);
	*(float*)(&val) = posZ1;
	native_push(val);
	*(float*)(&val) = posX2;
	native_push(val);
	*(float*)(&val) = posY2;
	native_push(val);
	*(float*)(&val) = posZ2;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);
	*(int*)(&val) = reserved;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL GRAPHICS_HAS_STREAMED_TEXTURE_DICT_LOADED(const char* textureDict) /* 0x0145F696AAAAD2E4 */
{
	uint64_t val;

	native_init(0x0145F696AAAAD2E4);

	*(const char**)(&val) = textureDict;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0x0218BA067D249DEA() /* 0x0218BA067D249DEA */
{
	native_init(0x0218BA067D249DEA);
	native_call();
}

inline void GRAPHICS_0x02369D5C8A51FDCF(BOOL p0) /* 0x02369D5C8A51FDCF */
{
	uint64_t val;

	native_init(0x02369D5C8A51FDCF);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any GRAPHICS_0x02AC28F3A01FA04A(float p0) /* 0x02AC28F3A01FA04A */
{
	uint64_t val;

	native_init(0x02AC28F3A01FA04A);

	*(float*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void GRAPHICS_0x03300B57FCAC6DDB(BOOL p0) /* 0x03300B57FCAC6DDB */
{
	uint64_t val;

	native_init(0x03300B57FCAC6DDB);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x03FC694AE06C5A20() /* 0x03FC694AE06C5A20 */
{
	native_init(0x03FC694AE06C5A20);
	native_call();
}

inline BOOL GRAPHICS__DOES_VEHICLE_HAVE_DECAL(Vehicle vehicle, int decalIndex) /* 0x060D935D3981A275 */
{
	uint64_t val;

	native_init(0x060D935D3981A275);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(int*)(&val) = decalIndex;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_ANIMPOSTFX_STOP(const char* effectName) /* 0x068E835A1D0DC0E3 */
{
	uint64_t val;

	native_init(0x068E835A1D0DC0E3);

	*(const char**)(&val) = effectName;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x06F761EA47C1D3ED(BOOL p0) /* 0x06F761EA47C1D3ED */
{
	uint64_t val;

	native_init(0x06F761EA47C1D3ED);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_DRAW_DEBUG_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) /* 0x083A2CA4F2E573BD */
{
	uint64_t val;

	native_init(0x083A2CA4F2E573BD);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x0A123435A26C36CD() /* 0x0A123435A26C36CD */
{
	native_init(0x0A123435A26C36CD);
	native_call();
}

inline void GRAPHICS_0x0A46AF8A78DC5E0A() /* 0x0A46AF8A78DC5E0A */
{
	native_init(0x0A46AF8A78DC5E0A);
	native_call();
}

inline void GRAPHICS_SET_FLASH(float p0, float p1, float fadeIn, float duration, float fadeOut) /* 0x0AB84296FED9CFC6 */
{
	uint64_t val;

	native_init(0x0AB84296FED9CFC6);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = fadeIn;
	native_push(val);
	*(float*)(&val) = duration;
	native_push(val);
	*(float*)(&val) = fadeOut;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS__IS_TV_PLAYLIST_ITEM_PLAYING(Hash videoClip) /* 0x0AD973CA1E077B60 */
{
	uint64_t val;

	native_init(0x0AD973CA1E077B60);

	*(Hash*)(&val) = videoClip;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0x0AE73D8DF3A762B2(BOOL p0) /* 0x0AE73D8DF3A762B2 */
{
	uint64_t val;

	native_init(0x0AE73D8DF3A762B2);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int GRAPHICS_0x0C0C4E81E1AC60A0() /* 0x0C0C4E81E1AC60A0 */
{
	native_init(0x0C0C4E81E1AC60A0);
	return *(int*)(native_call());
}

inline BOOL GRAPHICS__HAS_NAMED_SCALEFORM_MOVIE_LOADED(const char* scaleformName) /* 0x0C1C5D756FB5F337 */
{
	uint64_t val;

	native_init(0x0C1C5D756FB5F337);

	*(const char**)(&val) = scaleformName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL GRAPHICS_START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) /* 0x0D53A3B8DA0809D2 */
{
	uint64_t val;

	native_init(0x0D53A3B8DA0809D2);

	*(const char**)(&val) = effectName;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = offsetX;
	native_push(val);
	*(float*)(&val) = offsetY;
	native_push(val);
	*(float*)(&val) = offsetZ;
	native_push(val);
	*(float*)(&val) = rotX;
	native_push(val);
	*(float*)(&val) = rotY;
	native_push(val);
	*(float*)(&val) = rotZ;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(BOOL*)(&val) = axisX;
	native_push(val);
	*(BOOL*)(&val) = axisY;
	native_push(val);
	*(BOOL*)(&val) = axisZ;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int GRAPHICS_0x0D6CA79EEEBD8CA3() /* 0x0D6CA79EEEBD8CA3 */
{
	native_init(0x0D6CA79EEEBD8CA3);
	return *(int*)(native_call());
}

inline void GRAPHICS_DRAW_SCALEFORM_MOVIE_FULLSCREEN(int scaleform, int red, int green, int blue, int alpha, int unk) /* 0x0DF606929C105BE1 */
{
	uint64_t val;

	native_init(0x0DF606929C105BE1);

	*(int*)(&val) = scaleform;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);
	*(int*)(&val) = unk;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x0E4299C549F0D1F1(BOOL p0) /* 0x0E4299C549F0D1F1 */
{
	uint64_t val;

	native_init(0x0E4299C549F0D1F1);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) /* 0x0E7E72961BA18619 */
{
	uint64_t val;

	native_init(0x0E7E72961BA18619);

	*(const char**)(&val) = effectName;
	native_push(val);
	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = offsetX;
	native_push(val);
	*(float*)(&val) = offsetY;
	native_push(val);
	*(float*)(&val) = offsetZ;
	native_push(val);
	*(float*)(&val) = rotX;
	native_push(val);
	*(float*)(&val) = rotY;
	native_push(val);
	*(float*)(&val) = rotZ;
	native_push(val);
	*(int*)(&val) = boneIndex;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(BOOL*)(&val) = axisX;
	native_push(val);
	*(BOOL*)(&val) = axisY;
	native_push(val);
	*(BOOL*)(&val) = axisZ;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_CLEAR_TIMECYCLE_MODIFIER() /* 0x0F07E7745A236711 */
{
	native_init(0x0F07E7745A236711);
	native_call();
}

inline void GRAPHICS_0x1072F115DAB0717E(BOOL p0, BOOL p1) /* 0x1072F115DAB0717E */
{
	uint64_t val;

	native_init(0x1072F115DAB0717E);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x108BE26959A9D9BB(BOOL p0) /* 0x108BE26959A9D9BB */
{
	uint64_t val;

	native_init(0x108BE26959A9D9BB);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_TV_AUDIO_FRONTEND(BOOL toggle) /* 0x113D2C5DC57E1774 */
{
	uint64_t val;

	native_init(0x113D2C5DC57E1774);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int GRAPHICS_REQUEST_SCALEFORM_MOVIE(const char* scaleformName) /* 0x11FE353CF9733E6F */
{
	uint64_t val;

	native_init(0x11FE353CF9733E6F);

	*(const char**)(&val) = scaleformName;
	native_push(val);

	return *(int*)(native_call());
}

inline void GRAPHICS_SET_ARTIFICIAL_LIGHTS_STATE(BOOL state) /* 0x1268615ACE24D504 */
{
	uint64_t val;

	native_init(0x1268615ACE24D504);

	*(BOOL*)(&val) = state;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x12995F2E53FFA601(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) /* 0x12995F2E53FFA601 */
{
	uint64_t val;

	native_init(0x12995F2E53FFA601);

	*(int*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);
	*(int*)(&val) = p4;
	native_push(val);
	*(int*)(&val) = p5;
	native_push(val);
	*(int*)(&val) = p6;
	native_push(val);
	*(int*)(&val) = p7;
	native_push(val);
	*(int*)(&val) = p8;
	native_push(val);
	*(int*)(&val) = p9;
	native_push(val);
	*(int*)(&val) = p10;
	native_push(val);
	*(int*)(&val) = p11;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x14FC5833464340A8() /* 0x14FC5833464340A8 */
{
	native_init(0x14FC5833464340A8);
	native_call();
}

inline void GRAPHICS_0x15E33297C3E8DC60(Any p0) /* 0x15E33297C3E8DC60 */
{
	uint64_t val;

	native_init(0x15E33297C3E8DC60);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x1600FD8CF72EBC12(float p0) /* 0x1600FD8CF72EBC12 */
{
	uint64_t val;

	native_init(0x1600FD8CF72EBC12);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x1612C45F9E3E0D44() /* 0x1612C45F9E3E0D44 */
{
	native_init(0x1612C45F9E3E0D44);
	native_call();
}

inline void GRAPHICS_SET_TRACKED_POINT_INFO(int point, float x, float y, float z, float radius) /* 0x164ECBB3CF750CB0 */
{
	uint64_t val;

	native_init(0x164ECBB3CF750CB0);

	*(int*)(&val) = point;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);

	native_call();
}

inline int GRAPHICS_0x1670F8D05056F257(Any p0) /* 0x1670F8D05056F257 */
{
	uint64_t val;

	native_init(0x1670F8D05056F257);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline void GRAPHICS_SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(BOOL enabled) /* 0x175B6BFC15CDD0C5 */
{
	uint64_t val;

	native_init(0x175B6BFC15CDD0C5);

	*(BOOL*)(&val) = enabled;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_NIGHTVISION(BOOL toggle) /* 0x18F621F7A5B1F85D */
{
	uint64_t val;

	native_init(0x18F621F7A5B1F85D);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x1A8E2C8B9CF4549C(Any* p0, Any* p1) /* 0x1A8E2C8B9CF4549C */
{
	uint64_t val;

	native_init(0x1A8E2C8B9CF4549C);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	native_call();
}

inline int GRAPHICS_START_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) /* 0x1AE42C1660FD6517 */
{
	uint64_t val;

	native_init(0x1AE42C1660FD6517);

	*(const char**)(&val) = effectName;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = xOffset;
	native_push(val);
	*(float*)(&val) = yOffset;
	native_push(val);
	*(float*)(&val) = zOffset;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(BOOL*)(&val) = xAxis;
	native_push(val);
	*(BOOL*)(&val) = yAxis;
	native_push(val);
	*(BOOL*)(&val) = zAxis;
	native_push(val);

	return *(int*)(native_call());
}

inline void GRAPHICS_0x1BBC135A4D25EDDE(BOOL p0) /* 0x1BBC135A4D25EDDE */
{
	uint64_t val;

	native_init(0x1BBC135A4D25EDDE);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x1C4FC5752BCD8E48(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12) /* 0x1C4FC5752BCD8E48 */
{
	uint64_t val;

	native_init(0x1C4FC5752BCD8E48);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);
	*(float*)(&val) = p10;
	native_push(val);
	*(float*)(&val) = p11;
	native_push(val);
	*(float*)(&val) = p12;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x1CBA05AE7BD7EE05(float p0) /* 0x1CBA05AE7BD7EE05 */
{
	uint64_t val;

	native_init(0x1CBA05AE7BD7EE05);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS__DRAW_SCALEFORM_MOVIE_3D_NON_ADDITIVE(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, Any p13) /* 0x1CE592FDC749D6F5 */
{
	uint64_t val;

	native_init(0x1CE592FDC749D6F5);

	*(int*)(&val) = scaleform;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = rotX;
	native_push(val);
	*(float*)(&val) = rotY;
	native_push(val);
	*(float*)(&val) = rotZ;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);
	*(float*)(&val) = scaleX;
	native_push(val);
	*(float*)(&val) = scaleY;
	native_push(val);
	*(float*)(&val) = scaleZ;
	native_push(val);
	*(Any*)(&val) = p13;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(int* scaleformHandle) /* 0x1D132D614DD86811 */
{
	uint64_t val;

	native_init(0x1D132D614DD86811);

	*(int**)(&val) = scaleformHandle;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_ENTITY_ICON_COLOR(Entity entity, int red, int green, int blue, int alpha) /* 0x1D5F595CCAE2E238 */
{
	uint64_t val;

	native_init(0x1D5F595CCAE2E238);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_0x1DD2139A9A20DCE8() /* 0x1DD2139A9A20DCE8 */
{
	native_init(0x1DD2139A9A20DCE8);
	return *(BOOL*)(native_call());
}

inline float GRAPHICS_GET_TV_VOLUME() /* 0x2170813D3DD8661B */
{
	native_init(0x2170813D3DD8661B);
	return *(float*)(native_call());
}

inline void GRAPHICS_0x2201C576FACAEBE8(Any p0, const char* p1, Any p2) /* 0x2201C576FACAEBE8 */
{
	uint64_t val;

	native_init(0x2201C576FACAEBE8);

	*(Any*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS__IS_NIGHTVISION_ACTIVE() /* 0x2202A3F42C8E5F79 */
{
	native_init(0x2202A3F42C8E5F79);
	return *(BOOL*)(native_call());
}

inline void GRAPHICS_ANIMPOSTFX_PLAY(const char* effectName, int duration, BOOL looped) /* 0x2206BF9A37B7F724 */
{
	uint64_t val;

	native_init(0x2206BF9A37B7F724);

	*(const char**)(&val) = effectName;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(BOOL*)(&val) = looped;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x22A249A53034450A(BOOL p0) /* 0x22A249A53034450A */
{
	uint64_t val;

	native_init(0x22A249A53034450A);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x23BA6B0C2AD7B0D3(BOOL toggle) /* 0x23BA6B0C2AD7B0D3 */
{
	uint64_t val;

	native_init(0x23BA6B0C2AD7B0D3);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x2485D34E50A22E84(float p0, float p1, float p2) /* 0x2485D34E50A22E84 */
{
	uint64_t val;

	native_init(0x2485D34E50A22E84);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);

	native_call();
}

inline int GRAPHICS_START_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) /* 0x25129531F77B9ED3 */
{
	uint64_t val;

	native_init(0x25129531F77B9ED3);

	*(const char**)(&val) = effectName;
	native_push(val);
	*(float*)(&val) = xPos;
	native_push(val);
	*(float*)(&val) = yPos;
	native_push(val);
	*(float*)(&val) = zPos;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(BOOL*)(&val) = xAxis;
	native_push(val);
	*(BOOL*)(&val) = yAxis;
	native_push(val);
	*(BOOL*)(&val) = zAxis;
	native_push(val);

	return *(int*)(native_call());
}

inline void GRAPHICS_0x25FC3E33A31AD0C9(BOOL p0) /* 0x25FC3E33A31AD0C9 */
{
	uint64_t val;

	native_init(0x25FC3E33A31AD0C9);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_PARTICLE_FX_NON_LOOPED_COLOUR(float r, float g, float b) /* 0x26143A59EF48B262 */
{
	uint64_t val;

	native_init(0x26143A59EF48B262);

	*(float*)(&val) = r;
	native_push(val);
	*(float*)(&val) = g;
	native_push(val);
	*(float*)(&val) = b;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_CHECKPOINT_CYLINDER_HEIGHT(int checkpoint, float nearHeight, float farHeight, float radius) /* 0x2707AAE9D9297D89 */
{
	uint64_t val;

	native_init(0x2707AAE9D9297D89);

	*(int*)(&val) = checkpoint;
	native_push(val);
	*(float*)(&val) = nearHeight;
	native_push(val);
	*(float*)(&val) = farHeight;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x27CB772218215325() /* 0x27CB772218215325 */
{
	native_init(0x27CB772218215325);
	native_call();
}

inline void GRAPHICS_0x27CFB1B1E078CB2D() /* 0x27CFB1B1E078CB2D */
{
	native_init(0x27CFB1B1E078CB2D);
	native_call();
}

inline void GRAPHICS_0x27E32866E9A5C416(float p0) /* 0x27E32866E9A5C416 */
{
	uint64_t val;

	native_init(0x27E32866E9A5C416);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_0x27FEB5254759CDE3(const char* textureDict, BOOL p1) /* 0x27FEB5254759CDE3 */
{
	uint64_t val;

	native_init(0x27FEB5254759CDE3);

	*(const char**)(&val) = textureDict;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_DRAW_MARKER(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts) /* 0x28477EC23D892089 */
{
	uint64_t val;

	native_init(0x28477EC23D892089);

	*(int*)(&val) = type;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = dirX;
	native_push(val);
	*(float*)(&val) = dirY;
	native_push(val);
	*(float*)(&val) = dirZ;
	native_push(val);
	*(float*)(&val) = rotX;
	native_push(val);
	*(float*)(&val) = rotY;
	native_push(val);
	*(float*)(&val) = rotZ;
	native_push(val);
	*(float*)(&val) = scaleX;
	native_push(val);
	*(float*)(&val) = scaleY;
	native_push(val);
	*(float*)(&val) = scaleZ;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);
	*(BOOL*)(&val) = bobUpAndDown;
	native_push(val);
	*(BOOL*)(&val) = faceCamera;
	native_push(val);
	*(int*)(&val) = p19;
	native_push(val);
	*(BOOL*)(&val) = rotate;
	native_push(val);
	*(const char**)(&val) = textureDict;
	native_push(val);
	*(const char**)(&val) = textureName;
	native_push(val);
	*(BOOL*)(&val) = drawOnEnts;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_TV_VOLUME(float volume) /* 0x2982BF73F66E9DDC */
{
	uint64_t val;

	native_init(0x2982BF73F66E9DDC);

	*(float*)(&val) = volume;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x2A2A52824DB96700(Any* p0) /* 0x2A2A52824DB96700 */
{
	uint64_t val;

	native_init(0x2A2A52824DB96700);

	*(Any**)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_0x2A893980E96B659A(BOOL p0) /* 0x2A893980E96B659A */
{
	uint64_t val;

	native_init(0x2A893980E96B659A);

	*(BOOL*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0x2BF72AD5B41AA739() /* 0x2BF72AD5B41AA739 */
{
	native_init(0x2BF72AD5B41AA739);
	native_call();
}

inline void GRAPHICS_0x2C328AF17210F009(float p0) /* 0x2C328AF17210F009 */
{
	uint64_t val;

	native_init(0x2C328AF17210F009);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any GRAPHICS_0x2C42340F916C5930(Any p0) /* 0x2C42340F916C5930 */
{
	uint64_t val;

	native_init(0x2C42340F916C5930);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void GRAPHICS_SET_TIMECYCLE_MODIFIER(const char* modifierName) /* 0x2C933ABF17A1DF41 */
{
	uint64_t val;

	native_init(0x2C933ABF17A1DF41);

	*(const char**)(&val) = modifierName;
	native_push(val);

	native_call();
}

inline int GRAPHICS__GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(int method_return) /* 0x2DE7EFA66B906036 */
{
	uint64_t val;

	native_init(0x2DE7EFA66B906036);

	*(int*)(&val) = method_return;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL GRAPHICS_0x2F09F7976C512404(float xCoord, float yCoord, float zCoord, float p3) /* 0x2F09F7976C512404 */
{
	uint64_t val;

	native_init(0x2F09F7976C512404);

	*(float*)(&val) = xCoord;
	native_push(val);
	*(float*)(&val) = yCoord;
	native_push(val);
	*(float*)(&val) = zCoord;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0x302C91AB2D477F7E() /* 0x302C91AB2D477F7E */
{
	native_init(0x302C91AB2D477F7E);
	native_call();
}

inline BOOL GRAPHICS_GET_IS_WIDESCREEN() /* 0x30CF4BDA4FCB1905 */
{
	native_init(0x30CF4BDA4FCB1905);
	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0x312342E1A4874F3F(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8) /* 0x312342E1A4874F3F */
{
	uint64_t val;

	native_init(0x312342E1A4874F3F);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);

	native_call();
}

inline float GRAPHICS_GET_DECAL_WASH_LEVEL(int decal) /* 0x323F647679A09103 */
{
	uint64_t val;

	native_init(0x323F647679A09103);

	*(int*)(&val) = decal;
	native_push(val);

	return *(float*)(native_call());
}

inline void GRAPHICS_0x346EF3ECAAAB149E() /* 0x346EF3ECAAAB149E */
{
	native_init(0x346EF3ECAAAB149E);
	native_call();
}

inline int GRAPHICS_GET_MAXIMUM_NUMBER_OF_PHOTOS() /* 0x34D23450F028B0BF */
{
	native_init(0x34D23450F028B0BF);
	return *(int*)(native_call());
}

inline BOOL GRAPHICS_GET_SCREEN_COORD_FROM_WORLD_COORD(float worldX, float worldY, float worldZ, float* screenX, float* screenY) /* 0x34E82F05DF2974F5 */
{
	uint64_t val;

	native_init(0x34E82F05DF2974F5);

	*(float*)(&val) = worldX;
	native_push(val);
	*(float*)(&val) = worldY;
	native_push(val);
	*(float*)(&val) = worldZ;
	native_push(val);
	*(float**)(&val) = screenX;
	native_push(val);
	*(float**)(&val) = screenY;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Vector3 GRAPHICS_GET_TEXTURE_RESOLUTION(const char* textureDict, const char* textureName) /* 0x35736EE65BD00C11 */
{
	uint64_t val;

	native_init(0x35736EE65BD00C11);

	*(const char**)(&val) = textureDict;
	native_push(val);
	*(const char**)(&val) = textureName;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline Any GRAPHICS_0x35FB78DC42B7BD21() /* 0x35FB78DC42B7BD21 */
{
	native_init(0x35FB78DC42B7BD21);
	return *(Any*)(native_call());
}

inline void GRAPHICS_END_TEXT_COMMAND_SCALEFORM_STRING() /* 0x362E2D3FE93A9959 */
{
	native_init(0x362E2D3FE93A9959);
	native_call();
}

inline void GRAPHICS_0x3669F1B198DCAA4F() /* 0x3669F1B198DCAA4F */
{
	native_init(0x3669F1B198DCAA4F);
	native_call();
}

inline BOOL GRAPHICS_ANIMPOSTFX_IS_RUNNING(const char* effectName) /* 0x36AD3E690DA5ACEB */
{
	uint64_t val;

	native_init(0x36AD3E690DA5ACEB);

	*(const char**)(&val) = effectName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0x36F6626459D91457(float p0) /* 0x36F6626459D91457 */
{
	uint64_t val;

	native_init(0x36F6626459D91457);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_DRAW_DEBUG_TEXT(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) /* 0x3903E216620488E8 */
{
	uint64_t val;

	native_init(0x3903E216620488E8);

	*(const char**)(&val) = text;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline void GRAPHICS_DRAW_RECT(float x, float y, float width, float height, int r, int g, int b, int a) /* 0x3A618A217E5154F0 */
{
	uint64_t val;

	native_init(0x3A618A217E5154F0);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = width;
	native_push(val);
	*(float*)(&val) = height;
	native_push(val);
	*(int*)(&val) = r;
	native_push(val);
	*(int*)(&val) = g;
	native_push(val);
	*(int*)(&val) = b;
	native_push(val);
	*(int*)(&val) = a;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_TRANSITION_TIMECYCLE_MODIFIER(const char* modifierName, float transition) /* 0x3BCF567485E1971C */
{
	uint64_t val;

	native_init(0x3BCF567485E1971C);

	*(const char**)(&val) = modifierName;
	native_push(val);
	*(float*)(&val) = transition;
	native_push(val);

	native_call();
}

inline void GRAPHICS_POP_TIMECYCLE_MODIFIER() /* 0x3C8938D7D872211E */
{
	native_init(0x3C8938D7D872211E);
	native_call();
}

inline BOOL GRAPHICS_0x3DEC726C25A11BAC(int p0) /* 0x3DEC726C25A11BAC */
{
	uint64_t val;

	native_init(0x3DEC726C25A11BAC);

	*(int*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int GRAPHICS__RETURN_TWO(Any p0) /* 0x40AFB081F8ADD4EE */
{
	uint64_t val;

	native_init(0x40AFB081F8ADD4EE);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL GRAPHICS__ADD_CLAN_DECAL_TO_VEHICLE(Vehicle vehicle, Ped ped, int boneIndex, float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3, float scale, int decalIndex, int alpha) /* 0x428BDCB9DA58DA53 */
{
	uint64_t val;

	native_init(0x428BDCB9DA58DA53);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = boneIndex;
	native_push(val);
	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = x3;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = y3;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(float*)(&val) = z3;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(int*)(&val) = decalIndex;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL GRAPHICS__IS_SEETHROUGH_ACTIVE() /* 0x44B80ABAB9D80BD3 */
{
	native_init(0x44B80ABAB9D80BD3);
	return *(BOOL*)(native_call());
}

inline Any GRAPHICS_0x459FD2C8D0AB78BC() /* 0x459FD2C8D0AB78BC */
{
	native_init(0x459FD2C8D0AB78BC);
	return *(Any*)(native_call());
}

inline void GRAPHICS_0x46D1A61A21F566FC(float p0) /* 0x46D1A61A21F566FC */
{
	uint64_t val;

	native_init(0x46D1A61A21F566FC);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int GRAPHICS__GET_NUMBER_OF_PHOTOS() /* 0x473151EBC762C6DA */
{
	native_init(0x473151EBC762C6DA);
	return *(int*)(native_call());
}

inline BOOL GRAPHICS_0x4862437A486F91B0(const char* p0, Any* p1, Any* p2, BOOL p3) /* 0x4862437A486F91B0 */
{
	uint64_t val;

	native_init(0x4862437A486F91B0);

	*(const char**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0x4AF92ACD3141D96C() /* 0x4AF92ACD3141D96C */
{
	native_init(0x4AF92ACD3141D96C);
	native_call();
}

inline void GRAPHICS__SET_CHECKPOINT_ICON_HEIGHT(int checkpoint, float iconHeight) /* 0x4B5B4DA5D79F1943 */
{
	uint64_t val;

	native_init(0x4B5B4DA5D79F1943);

	*(int*)(&val) = checkpoint;
	native_push(val);
	*(float*)(&val) = iconHeight;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x4B5CFC83122DF602() /* 0x4B5CFC83122DF602 */
{
	native_init(0x4B5CFC83122DF602);
	native_call();
}

inline void GRAPHICS__SET_FORCE_VEHICLE_TRAILS(BOOL toggle) /* 0x4CC7F0FEA5283FE0 */
{
	uint64_t val;

	native_init(0x4CC7F0FEA5283FE0);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Any GRAPHICS_ADD_PETROL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) /* 0x4F5212C7AD880DF8 */
{
	uint64_t val;

	native_init(0x4F5212C7AD880DF8);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = groundLvl;
	native_push(val);
	*(float*)(&val) = width;
	native_push(val);
	*(float*)(&val) = transparency;
	native_push(val);

	return *(Any*)(native_call());
}

inline void GRAPHICS_0x5096FD9CCB49056D(const char* p0) /* 0x5096FD9CCB49056D */
{
	uint64_t val;

	native_init(0x5096FD9CCB49056D);

	*(const char**)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS__CALL_SCALEFORM_MOVIE_FUNCTION_STRING_PARAMS(int scaleform, const char* functionName, const char* param1, const char* param2, const char* param3, const char* param4, const char* param5) /* 0x51BC1ED3CC44E8F7 */
{
	uint64_t val;

	native_init(0x51BC1ED3CC44E8F7);

	*(int*)(&val) = scaleform;
	native_push(val);
	*(const char**)(&val) = functionName;
	native_push(val);
	*(const char**)(&val) = param1;
	native_push(val);
	*(const char**)(&val) = param2;
	native_push(val);
	*(const char**)(&val) = param3;
	native_push(val);
	*(const char**)(&val) = param4;
	native_push(val);
	*(const char**)(&val) = param5;
	native_push(val);

	native_call();
}

inline void GRAPHICS_DRAW_SCALEFORM_MOVIE(int scaleformHandle, float x, float y, float width, float height, int red, int green, int blue, int alpha, int unk) /* 0x54972ADAF0294A93 */
{
	uint64_t val;

	native_init(0x54972ADAF0294A93);

	*(int*)(&val) = scaleformHandle;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = width;
	native_push(val);
	*(float*)(&val) = height;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);
	*(int*)(&val) = unk;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x54E22EA2C1956A8D(float p0) /* 0x54E22EA2C1956A8D */
{
	uint64_t val;

	native_init(0x54E22EA2C1956A8D);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_PUSH_TIMECYCLE_MODIFIER() /* 0x58F735290861E6B4 */
{
	native_init(0x58F735290861E6B4);
	native_call();
}

inline int GRAPHICS_0x5B0316762AFD4A64() /* 0x5B0316762AFD4A64 */
{
	native_init(0x5B0316762AFD4A64);
	return *(int*)(native_call());
}

inline void GRAPHICS_WASH_DECALS_FROM_VEHICLE(Vehicle vehicle, float p1) /* 0x5B712761429DBC14 */
{
	uint64_t val;

	native_init(0x5B712761429DBC14);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void GRAPHICS__DRAW_SPOT_LIGHT_WITH_SHADOW(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float roundness, float radius, float falloff, int shadowId) /* 0x5BCA583A583194DB */
{
	uint64_t val;

	native_init(0x5BCA583A583194DB);

	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = dirX;
	native_push(val);
	*(float*)(&val) = dirY;
	native_push(val);
	*(float*)(&val) = dirZ;
	native_push(val);
	*(int*)(&val) = colorR;
	native_push(val);
	*(int*)(&val) = colorG;
	native_push(val);
	*(int*)(&val) = colorB;
	native_push(val);
	*(float*)(&val) = distance;
	native_push(val);
	*(float*)(&val) = brightness;
	native_push(val);
	*(float*)(&val) = roundness;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(float*)(&val) = falloff;
	native_push(val);
	*(int*)(&val) = shadowId;
	native_push(val);

	native_call();
}

inline float GRAPHICS_IS_PARTICLE_FX_DELAYED_BLINK() /* 0x5CCABFFCA31DDE33 */
{
	native_init(0x5CCABFFCA31DDE33);
	return *(float*)(native_call());
}

inline void GRAPHICS_0x5CE62918F8D703C7(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) /* 0x5CE62918F8D703C7 */
{
	uint64_t val;

	native_init(0x5CE62918F8D703C7);

	*(int*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);
	*(int*)(&val) = p4;
	native_push(val);
	*(int*)(&val) = p5;
	native_push(val);
	*(int*)(&val) = p6;
	native_push(val);
	*(int*)(&val) = p7;
	native_push(val);
	*(int*)(&val) = p8;
	native_push(val);
	*(int*)(&val) = p9;
	native_push(val);
	*(int*)(&val) = p10;
	native_push(val);
	*(int*)(&val) = p11;
	native_push(val);

	native_call();
}

inline void GRAPHICS_REMOVE_DECALS_IN_RANGE(float x, float y, float z, float range) /* 0x5D6B2D4830A67C62 */
{
	uint64_t val;

	native_init(0x5D6B2D4830A67C62);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = range;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x5DEBD9C4DC995692() /* 0x5DEBD9C4DC995692 */
{
	native_init(0x5DEBD9C4DC995692);
	native_call();
}

inline BOOL GRAPHICS_0x5E657EF1099EDD65(int p0) /* 0x5E657EF1099EDD65 */
{
	uint64_t val;

	native_init(0x5E657EF1099EDD65);

	*(int*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0x5E9DAF5A20F15908(float p0) /* 0x5E9DAF5A20F15908 */
{
	uint64_t val;

	native_init(0x5E9DAF5A20F15908);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxHandle, const char* propertyName, float amount, BOOL Id) /* 0x5F0C4B5B1C393BE2 */
{
	uint64_t val;

	native_init(0x5F0C4B5B1C393BE2);

	*(int*)(&val) = ptfxHandle;
	native_push(val);
	*(const char**)(&val) = propertyName;
	native_push(val);
	*(float*)(&val) = amount;
	native_push(val);
	*(BOOL*)(&val) = Id;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x5F0F3F56635809EF(float p0) /* 0x5F0F3F56635809EF */
{
	uint64_t val;

	native_init(0x5F0F3F56635809EF);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_PARTICLE_FX_BLOOD_SCALE(BOOL p0) /* 0x5F6DF3D92271E8A1 */
{
	uint64_t val;

	native_init(0x5F6DF3D92271E8A1);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x615D3925E87A3B26(int checkpoint) /* 0x615D3925E87A3B26 */
{
	uint64_t val;

	native_init(0x615D3925E87A3B26);

	*(int*)(&val) = checkpoint;
	native_push(val);

	native_call();
}

inline void GRAPHICS__SET_UI_LAYER(int layer) /* 0x61BB1D9B3A95D802 */
{
	uint64_t val;

	native_init(0x61BB1D9B3A95D802);

	*(int*)(&val) = layer;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x61F95E5BB3E0A8C6(Any p0) /* 0x61F95E5BB3E0A8C6 */
{
	uint64_t val;

	native_init(0x61F95E5BB3E0A8C6);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x649C97D52332341A(Any p0) /* 0x649C97D52332341A */
{
	uint64_t val;

	native_init(0x649C97D52332341A);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x6A12D88881435DCA() /* 0x6A12D88881435DCA */
{
	native_init(0x6A12D88881435DCA);
	native_call();
}

inline void GRAPHICS_DRAW_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) /* 0x6B7256074AE34680 */
{
	uint64_t val;

	native_init(0x6B7256074AE34680);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline void GRAPHICS_USE_PARTICLE_FX_ASSET(const char* name) /* 0x6C38AF3693A69A91 */
{
	uint64_t val;

	native_init(0x6C38AF3693A69A91);

	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(int scaleform, BOOL toggle) /* 0x6D8EB211944DCE08 */
{
	uint64_t val;

	native_init(0x6D8EB211944DCE08);

	*(int*)(&val) = scaleform;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x6D955F6A9E0295B1(float x, float y, float z, float p3, float p4, float p5, float p6) /* 0x6D955F6A9E0295B1 */
{
	uint64_t val;

	native_init(0x6D955F6A9E0295B1);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x6DD8F5AA635EB4B2(float p0, float p1, float* p2, float* p3) /* 0x6DD8F5AA635EB4B2 */
{
	uint64_t val;

	native_init(0x6DD8F5AA635EB4B2);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float**)(&val) = p2;
	native_push(val);
	*(float**)(&val) = p3;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x6DDBF9DFFC4AC080(BOOL p0) /* 0x6DDBF9DFFC4AC080 */
{
	uint64_t val;

	native_init(0x6DDBF9DFFC4AC080);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int GRAPHICS_START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) /* 0x6F60E89A7B64EE1D */
{
	uint64_t val;

	native_init(0x6F60E89A7B64EE1D);

	*(const char**)(&val) = effectName;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = xOffset;
	native_push(val);
	*(float*)(&val) = yOffset;
	native_push(val);
	*(float*)(&val) = zOffset;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(BOOL*)(&val) = xAxis;
	native_push(val);
	*(BOOL*)(&val) = yAxis;
	native_push(val);
	*(BOOL*)(&val) = zAxis;
	native_push(val);

	return *(int*)(native_call());
}

inline void GRAPHICS_SET_CHECKPOINT_RGBA(int checkpoint, int red, int green, int blue, int alpha) /* 0x7167371E8AD747F7 */
{
	uint64_t val;

	native_init(0x7167371E8AD747F7);

	*(int*)(&val) = checkpoint;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_PARTICLE_FX_LOOPED_ALPHA(int ptfxHandle, float alpha) /* 0x726845132380142E */
{
	uint64_t val;

	native_init(0x726845132380142E);

	*(int*)(&val) = ptfxHandle;
	native_push(val);
	*(float*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline void GRAPHICS_DRAW_DEBUG_CROSS(float x, float y, float z, float size, int red, int green, int blue, int alpha) /* 0x73B1189623049839 */
{
	uint64_t val;

	native_init(0x73B1189623049839);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = size;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxHandle) /* 0x74AFEF0D2E1E409B */
{
	uint64_t val;

	native_init(0x74AFEF0D2E1E409B);

	*(int*)(&val) = ptfxHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0x74C180030FDE4B69(BOOL p0) /* 0x74C180030FDE4B69 */
{
	uint64_t val;

	native_init(0x74C180030FDE4B69);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_0x759650634F07B6B4(int p0) /* 0x759650634F07B6B4 */
{
	uint64_t val;

	native_init(0x759650634F07B6B4);

	*(int*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL GRAPHICS__GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(int method_return) /* 0x768FF8961BA904D6 */
{
	uint64_t val;

	native_init(0x768FF8961BA904D6);

	*(int*)(&val) = method_return;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_SET_PARTICLE_FX_NON_LOOPED_ALPHA(float alpha) /* 0x77168D722C58B2FC */
{
	uint64_t val;

	native_init(0x77168D722C58B2FC);

	*(float*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x7A42B2E236E71415() /* 0x7A42B2E236E71415 */
{
	native_init(0x7A42B2E236E71415);
	native_call();
}

inline BOOL GRAPHICS_0x7AC24EAB6D74118D(BOOL p0) /* 0x7AC24EAB6D74118D */
{
	uint64_t val;

	native_init(0x7AC24EAB6D74118D);

	*(BOOL*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any GRAPHICS_0x7B226C785A52A0A9() /* 0x7B226C785A52A0A9 */
{
	native_init(0x7B226C785A52A0A9);
	return *(Any*)(native_call());
}

inline void GRAPHICS_SET_SEETHROUGH(BOOL toggle) /* 0x7E08924259E08CE0 */
{
	uint64_t val;

	native_init(0x7E08924259E08CE0);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_PARTICLE_FX_LOOPED_COLOUR(int ptfxHandle, float r, float g, float b, BOOL p4) /* 0x7F8F65877F88783B */
{
	uint64_t val;

	native_init(0x7F8F65877F88783B);

	*(int*)(&val) = ptfxHandle;
	native_push(val);
	*(float*)(&val) = r;
	native_push(val);
	*(float*)(&val) = g;
	native_push(val);
	*(float*)(&val) = b;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_0x7FA5D82B8F58EC06() /* 0x7FA5D82B8F58EC06 */
{
	native_init(0x7FA5D82B8F58EC06);
	return *(BOOL*)(native_call());
}

inline void GRAPHICS_DRAW_DEBUG_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) /* 0x7FDFADE676AA3CB0 */
{
	uint64_t val;

	native_init(0x7FDFADE676AA3CB0);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline void GRAPHICS_BEGIN_TEXT_COMMAND_SCALEFORM_STRING(const char* componentType) /* 0x80338406F3475E55 */
{
	uint64_t val;

	native_init(0x80338406F3475E55);

	*(const char**)(&val) = componentType;
	native_push(val);

	native_call();
}

inline void GRAPHICS__SET_FAR_SHADOWS_SUPPRESSED(BOOL toggle) /* 0x80ECBC0C856D3B0B */
{
	uint64_t val;

	native_init(0x80ECBC0C856D3B0B);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(int scaleformHandle) /* 0x8217150E1217EBFD */
{
	uint64_t val;

	native_init(0x8217150E1217EBFD);

	*(int*)(&val) = scaleformHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_SET_TIMECYCLE_MODIFIER_STRENGTH(float strength) /* 0x82E7FFCD5B2326B3 */
{
	uint64_t val;

	native_init(0x82E7FFCD5B2326B3);

	*(float*)(&val) = strength;
	native_push(val);

	native_call();
}

inline void GRAPHICS_ATTACH_TV_AUDIO_TO_ENTITY(Entity entity) /* 0x845BAD77CC770633 */
{
	uint64_t val;

	native_init(0x845BAD77CC770633);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline void GRAPHICS_MOVE_VEHICLE_DECALS(Vehicle vehicle1, Vehicle vehicle2) /* 0x84C8D7C2D30D3280 */
{
	uint64_t val;

	native_init(0x84C8D7C2D30D3280);

	*(Vehicle*)(&val) = vehicle1;
	native_push(val);
	*(Vehicle*)(&val) = vehicle2;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_GET_IS_HIDEF() /* 0x84ED31191CC5D2C9 */
{
	native_init(0x84ED31191CC5D2C9);
	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0x851CD923176EBA7C() /* 0x851CD923176EBA7C */
{
	native_init(0x851CD923176EBA7C);
	native_call();
}

inline BOOL GRAPHICS_HAS_SCALEFORM_MOVIE_LOADED(int scaleformHandle) /* 0x85F01B8D5B90570E */
{
	uint64_t val;

	native_init(0x85F01B8D5B90570E);

	*(int*)(&val) = scaleformHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS__GET_ACTIVE_SCREEN_RESOLUTION(int* x, int* y) /* 0x873C9F3104101DD3 */
{
	uint64_t val;

	native_init(0x873C9F3104101DD3);

	*(int**)(&val) = x;
	native_push(val);
	*(int**)(&val) = y;
	native_push(val);

	native_call();
}

inline void GRAPHICS_ENABLE_MOVIE_SUBTITLES(BOOL toggle) /* 0x873FA65C778AD970 */
{
	uint64_t val;

	native_init(0x873FA65C778AD970);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GRAPHICS_DRAW_SCALEFORM_MOVIE_3D(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float sharpness, float p9, float scaleX, float scaleY, float scaleZ, Any p13) /* 0x87D51D72255D4E78 */
{
	uint64_t val;

	native_init(0x87D51D72255D4E78);

	*(int*)(&val) = scaleform;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = rotX;
	native_push(val);
	*(float*)(&val) = rotY;
	native_push(val);
	*(float*)(&val) = rotZ;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = sharpness;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);
	*(float*)(&val) = scaleX;
	native_push(val);
	*(float*)(&val) = scaleY;
	native_push(val);
	*(float*)(&val) = scaleZ;
	native_push(val);
	*(Any*)(&val) = p13;
	native_push(val);

	native_call();
}

inline void GRAPHICS_GET_SCREEN_RESOLUTION(int* x, int* y) /* 0x888D57E407E63624 */
{
	uint64_t val;

	native_init(0x888D57E407E63624);

	*(int**)(&val) = x;
	native_push(val);
	*(int**)(&val) = y;
	native_push(val);

	native_call();
}

inline void GRAPHICS__RESET_PARTICLE_FX_ASSET_OLD_TO_NEW(const char* name) /* 0x89C8553DD3274AAE */
{
	uint64_t val;

	native_init(0x89C8553DD3274AAE);

	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline void GRAPHICS__OVERRIDE_DECAL_TEXTURE(int decalType, const char* textureDict, const char* textureName) /* 0x8A35C742130C6080 */
{
	uint64_t val;

	native_init(0x8A35C742130C6080);

	*(int*)(&val) = decalType;
	native_push(val);
	*(const char**)(&val) = textureDict;
	native_push(val);
	*(const char**)(&val) = textureName;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x8CDE909A0370BB3A(BOOL p0) /* 0x8CDE909A0370BB3A */
{
	uint64_t val;

	native_init(0x8CDE909A0370BB3A);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_STOP_PARTICLE_FX_LOOPED(int ptfxHandle, BOOL p1) /* 0x8F75998877616996 */
{
	uint64_t val;

	native_init(0x8F75998877616996);

	*(int*)(&val) = ptfxHandle;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline int GRAPHICS_0x90A78ECAA4E78453() /* 0x90A78ECAA4E78453 */
{
	native_init(0x90A78ECAA4E78453);
	return *(int*)(native_call());
}

inline void GRAPHICS_0x92CCC17A7A2285DA() /* 0x92CCC17A7A2285DA */
{
	native_init(0x92CCC17A7A2285DA);
	native_call();
}

inline void GRAPHICS__REQUEST_HUD_SCALEFORM(int hudComponent) /* 0x9304881D6F6537EA */
{
	uint64_t val;

	native_init(0x9304881D6F6537EA);

	*(int*)(&val) = hudComponent;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x949F397A288B28B3(float p0) /* 0x949F397A288B28B3 */
{
	uint64_t val;

	native_init(0x949F397A288B28B3);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x967278682CB6967A(Any p0, Any p1, Any p2, Any p3) /* 0x967278682CB6967A */
{
	uint64_t val;

	native_init(0x967278682CB6967A);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_PARTICLE_FX_SHOOTOUT_BOAT(Any p0) /* 0x96EF97DAEB89BEF5 */
{
	uint64_t val;

	native_init(0x96EF97DAEB89BEF5);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS__BEGIN_SCALEFORM_MOVIE_METHOD_HUD_COMPONENT(int hudComponent, const char* functionName) /* 0x98C494FD5BDFBFD5 */
{
	uint64_t val;

	native_init(0x98C494FD5BDFBFD5);

	*(int*)(&val) = hudComponent;
	native_push(val);
	*(const char**)(&val) = functionName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL GRAPHICS__DRAW_SHOWROOM(const char* p0, Ped ped, int p2, float posX, float posY, float posZ) /* 0x98C4FE6EC34154CA */
{
	uint64_t val;

	native_init(0x98C4FE6EC34154CA);

	*(const char**)(&val) = p0;
	native_push(val);
	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0x98EDF76A7271E4F2() /* 0x98EDF76A7271E4F2 */
{
	native_init(0x98EDF76A7271E4F2);
	native_call();
}

inline void GRAPHICS_0x99AC7F0D8B9C893D(float p0) /* 0x99AC7F0D8B9C893D */
{
	uint64_t val;

	native_init(0x99AC7F0D8B9C893D);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0x9B079E5221D984D3(BOOL p0) /* 0x9B079E5221D984D3 */
{
	uint64_t val;

	native_init(0x9B079E5221D984D3);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any GRAPHICS_0x9B6E70C5CEEF4EEB(Any p0) /* 0x9B6E70C5CEEF4EEB */
{
	uint64_t val;

	native_init(0x9B6E70C5CEEF4EEB);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void GRAPHICS_WASH_DECALS_IN_RANGE(Any p0, Any p1, Any p2, Any p3, Any p4) /* 0x9C30613D50A6ADEF */
{
	uint64_t val;

	native_init(0x9C30613D50A6ADEF);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	native_call();
}

inline Any GRAPHICS_ADD_ENTITY_ICON(Entity entity, const char* icon) /* 0x9CD43EEE12BF4DD0 */
{
	uint64_t val;

	native_init(0x9CD43EEE12BF4DD0);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(const char**)(&val) = icon;
	native_push(val);

	return *(Any*)(native_call());
}

inline void GRAPHICS_0x9CFDD90B2B844BF7(float p0, float p1, float p2, float p3, float p4) /* 0x9CFDD90B2B844BF7 */
{
	uint64_t val;

	native_init(0x9CFDD90B2B844BF7);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void GRAPHICS_ENABLE_ALIEN_BLOOD_VFX(BOOL Toggle) /* 0x9DCE1F0F78260875 */
{
	uint64_t val;

	native_init(0x9DCE1F0F78260875);

	*(BOOL*)(&val) = Toggle;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS__TRANSITION_TO_BLURRED(float transitionTime) /* 0xA328A24AAA6B7FDC */
{
	uint64_t val;

	native_init(0xA328A24AAA6B7FDC);

	*(float*)(&val) = transitionTime;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0xA356990E161C9E65(BOOL p0) /* 0xA356990E161C9E65 */
{
	uint64_t val;

	native_init(0xA356990E161C9E65);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_DRAW_DEBUG_TEXT_2D(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) /* 0xA3BB2E9555C05A8F */
{
	uint64_t val;

	native_init(0xA3BB2E9555C05A8F);

	*(const char**)(&val) = text;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) /* 0xA41B6A43642AC2CF */
{
	uint64_t val;

	native_init(0xA41B6A43642AC2CF);

	*(const char**)(&val) = effectName;
	native_push(val);
	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = offsetX;
	native_push(val);
	*(float*)(&val) = offsetY;
	native_push(val);
	*(float*)(&val) = offsetZ;
	native_push(val);
	*(float*)(&val) = rotX;
	native_push(val);
	*(float*)(&val) = rotY;
	native_push(val);
	*(float*)(&val) = rotZ;
	native_push(val);
	*(int*)(&val) = boneIndex;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(BOOL*)(&val) = axisX;
	native_push(val);
	*(BOOL*)(&val) = axisY;
	native_push(val);
	*(BOOL*)(&val) = axisZ;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0xA44FF770DFBC5DAE() /* 0xA44FF770DFBC5DAE */
{
	native_init(0xA44FF770DFBC5DAE);
	native_call();
}

inline int GRAPHICS_0xA4664972A9B8F8BA(Any p0) /* 0xA4664972A9B8F8BA */
{
	uint64_t val;

	native_init(0xA4664972A9B8F8BA);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline void GRAPHICS_0xA46B73FAA3460AE1(BOOL p0) /* 0xA46B73FAA3460AE1 */
{
	uint64_t val;

	native_init(0xA46B73FAA3460AE1);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any GRAPHICS_0xA4819F5E23E2FFAD() /* 0xA4819F5E23E2FFAD */
{
	native_init(0xA4819F5E23E2FFAD);
	return *(Any*)(native_call());
}

inline void GRAPHICS_0xA51C4B86B71652AE(BOOL p0) /* 0xA51C4B86B71652AE */
{
	uint64_t val;

	native_init(0xA51C4B86B71652AE);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_0xA67C35C56EB1BD9D() /* 0xA67C35C56EB1BD9D */
{
	native_init(0xA67C35C56EB1BD9D);
	return *(BOOL*)(native_call());
}

inline void GRAPHICS_REMOVE_DECALS_FROM_OBJECT_FACING(Object obj, float x, float y, float z) /* 0xA6F6F70FDC6D144C */
{
	uint64_t val;

	native_init(0xA6F6F70FDC6D144C);

	*(Object*)(&val) = obj;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_DRAW_ORIGIN(float x, float y, float z, Any p3) /* 0xAA0008F3BBB8F416 */
{
	uint64_t val;

	native_init(0xAA0008F3BBB8F416);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void GRAPHICS_DRAW_DEBUG_SPHERE(float x, float y, float z, float radius, int red, int green, int blue, int alpha) /* 0xAAD68E1AB39DA632 */
{
	uint64_t val;

	native_init(0xAAD68E1AB39DA632);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS__BEGIN_SCALEFORM_MOVIE_METHOD_N(const char* functionName) /* 0xAB58C27C2E6123C6 */
{
	uint64_t val;

	native_init(0xAB58C27C2E6123C6);

	*(const char**)(&val) = functionName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_DRAW_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int red, int green, int blue, int alpha) /* 0xAC26716048436851 */
{
	uint64_t val;

	native_init(0xAC26716048436851);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(float*)(&val) = x3;
	native_push(val);
	*(float*)(&val) = y3;
	native_push(val);
	*(float*)(&val) = z3;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(Any p0, BOOL p1) /* 0xACEE6F360FC1F6B6 */
{
	uint64_t val;

	native_init(0xACEE6F360FC1F6B6);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void GRAPHICS__END_TEXT_COMMAND_SCALEFORM_STRING_2() /* 0xAE4E8157D9ECF087 */
{
	native_init(0xAE4E8157D9ECF087);
	native_call();
}

inline void GRAPHICS_0xAE51BC858F32BA66(Any p0, float p1, float p2, float p3, float p4) /* 0xAE51BC858F32BA66 */
{
	uint64_t val;

	native_init(0xAE51BC858F32BA66);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void GRAPHICS__SET_FORCE_PED_FOOTSTEPS_TRACKS(BOOL toggle) /* 0xAEEDAD1420C65CC0 */
{
	uint64_t val;

	native_init(0xAEEDAD1420C65CC0);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xB11D94BC55F41932(const char* p0) /* 0xB11D94BC55F41932 */
{
	uint64_t val;

	native_init(0xB11D94BC55F41932);

	*(const char**)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xB1BB03742917A5D6(int type, float xPos, float yPos, float zPos, float p4, int red, int green, int blue, int alpha) /* 0xB1BB03742917A5D6 */
{
	uint64_t val;

	native_init(0xB1BB03742917A5D6);

	*(int*)(&val) = type;
	native_push(val);
	*(float*)(&val) = xPos;
	native_push(val);
	*(float*)(&val) = yPos;
	native_push(val);
	*(float*)(&val) = zPos;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline void GRAPHICS_DESTROY_TRACKED_POINT(int point) /* 0xB25DC90BAD56CA42 */
{
	uint64_t val;

	native_init(0xB25DC90BAD56CA42);

	*(int*)(&val) = point;
	native_push(val);

	native_call();
}

inline Any GRAPHICS_0xB2EBE8CBC58B90E9() /* 0xB2EBE8CBC58B90E9 */
{
	native_init(0xB2EBE8CBC58B90E9);
	return *(Any*)(native_call());
}

inline Object GRAPHICS_ADD_DECAL(int decalType, float posX, float posY, float posZ, float p4, float p5, float p6, float p7, float p8, float p9, float width, float height, float rCoef, float gCoef, float bCoef, float opacity, float timeout, BOOL p17, BOOL p18, BOOL p19) /* 0xB302244A1839BDAD */
{
	uint64_t val;

	native_init(0xB302244A1839BDAD);

	*(int*)(&val) = decalType;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);
	*(float*)(&val) = width;
	native_push(val);
	*(float*)(&val) = height;
	native_push(val);
	*(float*)(&val) = rCoef;
	native_push(val);
	*(float*)(&val) = gCoef;
	native_push(val);
	*(float*)(&val) = bCoef;
	native_push(val);
	*(float*)(&val) = opacity;
	native_push(val);
	*(float*)(&val) = timeout;
	native_push(val);
	*(BOOL*)(&val) = p17;
	native_push(val);
	*(BOOL*)(&val) = p18;
	native_push(val);
	*(BOOL*)(&val) = p19;
	native_push(val);

	return *(Object*)(native_call());
}

inline void GRAPHICS_0xB3C641F3630BF6DA(float p0) /* 0xB3C641F3630BF6DA */
{
	uint64_t val;

	native_init(0xB3C641F3630BF6DA);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_PARTICLE_FX_LOOPED_SCALE(int ptfxHandle, float scale) /* 0xB44250AAA456492D */
{
	uint64_t val;

	native_init(0xB44250AAA456492D);

	*(int*)(&val) = ptfxHandle;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);

	native_call();
}

inline void GRAPHICS_ANIMPOSTFX_STOP_ALL() /* 0xB4EDDC19532BFB85 */
{
	native_init(0xB4EDDC19532BFB85);
	native_call();
}

inline int GRAPHICS_LOAD_MOVIE_MESH_SET(const char* movieMeshSetName) /* 0xB66064452270E8F1 */
{
	uint64_t val;

	native_init(0xB66064452270E8F1);

	*(const char**)(&val) = movieMeshSetName;
	native_push(val);

	return *(int*)(native_call());
}

inline void GRAPHICS_0xB7ED70C49521A61D(int decalType) /* 0xB7ED70C49521A61D */
{
	uint64_t val;

	native_init(0xB7ED70C49521A61D);

	*(int*)(&val) = decalType;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_SCRIPT_GFX_ALIGN(int x, int y) /* 0xB8A850F20A067EB6 */
{
	uint64_t val;

	native_init(0xB8A850F20A067EB6);

	*(int*)(&val) = x;
	native_push(val);
	*(int*)(&val) = y;
	native_push(val);

	native_call();
}

inline void GRAPHICS_REMOVE_PARTICLE_FX_FROM_ENTITY(Entity entity) /* 0xB8FEAEEBCC127425 */
{
	uint64_t val;

	native_init(0xB8FEAEEBCC127425);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS__BEGIN_SCALEFORM_MOVIE_METHOD_V(const char* functionName) /* 0xB9449845F73F5E9C */
{
	uint64_t val;

	native_init(0xB9449845F73F5E9C);

	*(const char**)(&val) = functionName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS__SET_CHECKPOINT_ICON_RGBA(int checkpoint, int red, int green, int blue, int alpha) /* 0xB9EA40907C680580 */
{
	uint64_t val;

	native_init(0xB9EA40907C680580);

	*(int*)(&val) = checkpoint;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xBA3D65906822BED5(BOOL p0, BOOL p1, float p2, float p3, float p4, float p5) /* 0xBA3D65906822BED5 */
{
	uint64_t val;

	native_init(0xBA3D65906822BED5);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);

	native_call();
}

inline void GRAPHICS__ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(const char* value) /* 0xBA7148484BD90365 */
{
	uint64_t val;

	native_init(0xBA7148484BD90365);

	*(const char**)(&val) = value;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_TV_CHANNEL(int channel) /* 0xBAABBB23EB6E484E */
{
	uint64_t val;

	native_init(0xBAABBB23EB6E484E);

	*(int*)(&val) = channel;
	native_push(val);

	native_call();
}

inline float GRAPHICS_GET_SAFE_ZONE_SIZE() /* 0xBAF107B6BB2C97F0 */
{
	native_init(0xBAF107B6BB2C97F0);
	return *(float*)(native_call());
}

inline Any GRAPHICS_0xBB0527EC6341496D() /* 0xBB0527EC6341496D */
{
	native_init(0xBB0527EC6341496D);
	return *(Any*)(native_call());
}

inline void GRAPHICS_0xBB90E12CAC1DAB25(float p0) /* 0xBB90E12CAC1DAB25 */
{
	uint64_t val;

	native_init(0xBB90E12CAC1DAB25);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xBBF327DED94E4DEB(const char* p0) /* 0xBBF327DED94E4DEB */
{
	uint64_t val;

	native_init(0xBBF327DED94E4DEB);

	*(const char**)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any GRAPHICS_0xBCEDB009461DA156() /* 0xBCEDB009461DA156 */
{
	native_init(0xBCEDB009461DA156);
	return *(Any*)(native_call());
}

inline int GRAPHICS__REQUEST_SCALEFORM_MOVIE_INTERACTIVE(const char* scaleformName) /* 0xBD06C611BB9048C2 */
{
	uint64_t val;

	native_init(0xBD06C611BB9048C2);

	*(const char**)(&val) = scaleformName;
	native_push(val);

	return *(int*)(native_call());
}

inline void GRAPHICS_0xBDEB86F4D5809204(float p0) /* 0xBDEB86F4D5809204 */
{
	uint64_t val;

	native_init(0xBDEB86F4D5809204);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any GRAPHICS_0xBE197EAA669238F4(Any p0, Any p1, Any p2, Any p3) /* 0xBE197EAA669238F4 */
{
	uint64_t val;

	native_init(0xBE197EAA669238F4);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	return *(Any*)(native_call());
}

inline void GRAPHICS_SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(const char* textureDict) /* 0xBE2CACCF5A8AA805 */
{
	uint64_t val;

	native_init(0xBE2CACCF5A8AA805);

	*(const char**)(&val) = textureDict;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xBEB3D46BB7F043C0(Any p0) /* 0xBEB3D46BB7F043C0 */
{
	uint64_t val;

	native_init(0xBEB3D46BB7F043C0);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xBF59707B3E5ED531(const char* p0) /* 0xBF59707B3E5ED531 */
{
	uint64_t val;

	native_init(0xBF59707B3E5ED531);

	*(const char**)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xC0416B061F2B7E5E(BOOL p0) /* 0xC0416B061F2B7E5E */
{
	uint64_t val;

	native_init(0xC0416B061F2B7E5E);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xC35A6D07C93802B2() /* 0xC35A6D07C93802B2 */
{
	native_init(0xC35A6D07C93802B2);
	native_call();
}

inline void GRAPHICS__ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(int value) /* 0xC3D0841A0CC546A6 */
{
	uint64_t val;

	native_init(0xC3D0841A0CC546A6);

	*(int*)(&val) = value;
	native_push(val);

	native_call();
}

inline void GRAPHICS_REMOVE_PARTICLE_FX(int ptfxHandle, BOOL p1) /* 0xC401503DFE8D53CF */
{
	uint64_t val;

	native_init(0xC401503DFE8D53CF);

	*(int*)(&val) = ptfxHandle;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_IS_TRACKED_POINT_VISIBLE(int point) /* 0xC45CCDAAC9221CA8 */
{
	uint64_t val;

	native_init(0xC45CCDAAC9221CA8);

	*(int*)(&val) = point;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int GRAPHICS__END_SCALEFORM_MOVIE_METHOD_RETURN() /* 0xC50AA39A577AF886 */
{
	native_init(0xC50AA39A577AF886);
	return *(int*)(native_call());
}

inline int GRAPHICS_REQUEST_SCALEFORM_MOVIE_INSTANCE(const char* scaleformName) /* 0xC514489CFB8AF806 */
{
	uint64_t val;

	native_init(0xC514489CFB8AF806);

	*(const char**)(&val) = scaleformName;
	native_push(val);

	return *(int*)(native_call());
}

inline void GRAPHICS__ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(BOOL value) /* 0xC58424BA936EB458 */
{
	uint64_t val;

	native_init(0xC58424BA936EB458);

	*(BOOL*)(&val) = value;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(BOOL p0) /* 0xC6372ECD45D73BCD */
{
	uint64_t val;

	native_init(0xC6372ECD45D73BCD);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_END_SCALEFORM_MOVIE_METHOD() /* 0xC6796A8FFA375E53 */
{
	native_init(0xC6796A8FFA375E53);
	native_call();
}

inline BOOL GRAPHICS_IS_DECAL_ALIVE(Object decal) /* 0xC694D74949CAFD0C */
{
	uint64_t val;

	native_init(0xC694D74949CAFD0C);

	*(Object*)(&val) = decal;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int GRAPHICS__START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) /* 0xC6EB449E33977F0B */
{
	uint64_t val;

	native_init(0xC6EB449E33977F0B);

	*(const char**)(&val) = effectName;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = xOffset;
	native_push(val);
	*(float*)(&val) = yOffset;
	native_push(val);
	*(float*)(&val) = zOffset;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(int*)(&val) = boneIndex;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(BOOL*)(&val) = xAxis;
	native_push(val);
	*(BOOL*)(&val) = yAxis;
	native_push(val);
	*(BOOL*)(&val) = zAxis;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL GRAPHICS__START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) /* 0xC95EB1DB6E92113D */
{
	uint64_t val;

	native_init(0xC95EB1DB6E92113D);

	*(const char**)(&val) = effectName;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = offsetX;
	native_push(val);
	*(float*)(&val) = offsetY;
	native_push(val);
	*(float*)(&val) = offsetZ;
	native_push(val);
	*(float*)(&val) = rotX;
	native_push(val);
	*(float*)(&val) = rotY;
	native_push(val);
	*(float*)(&val) = rotZ;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(BOOL*)(&val) = axisX;
	native_push(val);
	*(BOOL*)(&val) = axisY;
	native_push(val);
	*(BOOL*)(&val) = axisZ;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0xC9B18B4619F48F7B(float p0) /* 0xC9B18B4619F48F7B */
{
	uint64_t val;

	native_init(0xC9B18B4619F48F7B);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_DISABLE_VEHICLE_DISTANTLIGHTS(BOOL toggle) /* 0xC9F98AC1884E73A2 */
{
	uint64_t val;

	native_init(0xC9F98AC1884E73A2);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xCA4AE345A153D573(BOOL p0) /* 0xCA4AE345A153D573 */
{
	uint64_t val;

	native_init(0xCA4AE345A153D573);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_NOISINESSOVERIDE(float value) /* 0xCB6A7C3BB17A0C67 */
{
	uint64_t val;

	native_init(0xCB6A7C3BB17A0C67);

	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline int GRAPHICS_0xCB82A0BF0E3E3265(int p0) /* 0xCB82A0BF0E3E3265 */
{
	uint64_t val;

	native_init(0xCB82A0BF0E3E3265);

	*(int*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline void GRAPHICS_REMOVE_DECALS_FROM_OBJECT(Object obj) /* 0xCCF71CBDDF5B6CB9 */
{
	uint64_t val;

	native_init(0xCCF71CBDDF5B6CB9);

	*(Object*)(&val) = obj;
	native_push(val);

	native_call();
}

inline void GRAPHICS_DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(int scaleform1, int scaleform2, int red, int green, int blue, int alpha) /* 0xCF537FDE4FBD4CE5 */
{
	uint64_t val;

	native_init(0xCF537FDE4FBD4CE5);

	*(int*)(&val) = scaleform1;
	native_push(val);
	*(int*)(&val) = scaleform2;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline void GRAPHICS__CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(int scaleform, const char* functionName, float param1, float param2, float param3, float param4, float param5) /* 0xD0837058AE2E4BEE */
{
	uint64_t val;

	native_init(0xD0837058AE2E4BEE);

	*(int*)(&val) = scaleform;
	native_push(val);
	*(const char**)(&val) = functionName;
	native_push(val);
	*(float*)(&val) = param1;
	native_push(val);
	*(float*)(&val) = param2;
	native_push(val);
	*(float*)(&val) = param3;
	native_push(val);
	*(float*)(&val) = param4;
	native_push(val);
	*(float*)(&val) = param5;
	native_push(val);

	native_call();
}

inline void GRAPHICS_DRAW_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float hardness, float radius, float falloff) /* 0xD0F64B265C8C8B33 */
{
	uint64_t val;

	native_init(0xD0F64B265C8C8B33);

	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = dirX;
	native_push(val);
	*(float*)(&val) = dirY;
	native_push(val);
	*(float*)(&val) = dirZ;
	native_push(val);
	*(int*)(&val) = colorR;
	native_push(val);
	*(int*)(&val) = colorG;
	native_push(val);
	*(int*)(&val) = colorB;
	native_push(val);
	*(float*)(&val) = distance;
	native_push(val);
	*(float*)(&val) = brightness;
	native_push(val);
	*(float*)(&val) = hardness;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(float*)(&val) = falloff;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xD1C55B110E4DF534(Any p0) /* 0xD1C55B110E4DF534 */
{
	uint64_t val;

	native_init(0xD1C55B110E4DF534);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_0xD1C7CB175E012964(int scaleformHandle) /* 0xD1C7CB175E012964 */
{
	uint64_t val;

	native_init(0xD1C7CB175E012964);

	*(int*)(&val) = scaleformHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0xD2209BE128B5418C(const char* graphicsName) /* 0xD2209BE128B5418C */
{
	uint64_t val;

	native_init(0xD2209BE128B5418C);

	*(const char**)(&val) = graphicsName;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xD2300034310557E4(Vehicle vehicle, Any p1) /* 0xD2300034310557E4 */
{
	uint64_t val;

	native_init(0xD2300034310557E4);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xD2936CAB8B58FCBD(int p0, BOOL p1, float x, float y, float z, float p5, BOOL p6, BOOL p7) /* 0xD2936CAB8B58FCBD */
{
	uint64_t val;

	native_init(0xD2936CAB8B58FCBD);

	*(int*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xD39D13C9FEBF0511(BOOL p0) /* 0xD39D13C9FEBF0511 */
{
	uint64_t val;

	native_init(0xD39D13C9FEBF0511);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_0xD3A10FC7FD8D98CD() /* 0xD3A10FC7FD8D98CD */
{
	native_init(0xD3A10FC7FD8D98CD);
	return *(BOOL*)(native_call());
}

inline void GRAPHICS_DRAW_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) /* 0xD3A9971CADAC7252 */
{
	uint64_t val;

	native_init(0xD3A9971CADAC7252);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline void GRAPHICS__ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(float value) /* 0xD69736AAE04DB51A */
{
	uint64_t val;

	native_init(0xD69736AAE04DB51A);

	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline void GRAPHICS__PRESET_INTERIOR_AMBIENT_CACHE(const char* tcModifierName) /* 0xD7021272EB0A451E */
{
	uint64_t val;

	native_init(0xD7021272EB0A451E);

	*(const char**)(&val) = tcModifierName;
	native_push(val);

	native_call();
}

inline void GRAPHICS_FADE_DECALS_IN_RANGE(Any p0, Any p1, Any p2, Any p3, Any p4) /* 0xD77EDADB0420E6E0 */
{
	uint64_t val;

	native_init(0xD77EDADB0420E6E0);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xD7D0B00177485411(Any p0, float p1) /* 0xD7D0B00177485411 */
{
	uint64_t val;

	native_init(0xD7D0B00177485411);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xD801CC02177FA3F1() /* 0xD801CC02177FA3F1 */
{
	native_init(0xD801CC02177FA3F1);
	native_call();
}

inline void GRAPHICS_ENABLE_CLOWN_BLOOD_VFX(BOOL toggle) /* 0xD821490579791273 */
{
	uint64_t val;

	native_init(0xD821490579791273);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GRAPHICS_DRAW_DEBUG_LINE_WITH_TWO_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, int r1, int g1, int b1, int r2, int g2, int b2, int alpha1, int alpha2) /* 0xD8B9A8AC5608FF94 */
{
	uint64_t val;

	native_init(0xD8B9A8AC5608FF94);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(int*)(&val) = r1;
	native_push(val);
	*(int*)(&val) = g1;
	native_push(val);
	*(int*)(&val) = b1;
	native_push(val);
	*(int*)(&val) = r2;
	native_push(val);
	*(int*)(&val) = g2;
	native_push(val);
	*(int*)(&val) = b2;
	native_push(val);
	*(int*)(&val) = alpha1;
	native_push(val);
	*(int*)(&val) = alpha2;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xD9454B5752C857DC() /* 0xD9454B5752C857DC */
{
	native_init(0xD9454B5752C857DC);
	native_call();
}

inline void GRAPHICS_0xDBAA5EC848BA2D46(Any p0, Any p1) /* 0xDBAA5EC848BA2D46 */
{
	uint64_t val;

	native_init(0xDBAA5EC848BA2D46);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xDC459CFA0CCE245B(BOOL p0) /* 0xDC459CFA0CCE245B */
{
	uint64_t val;

	native_init(0xDC459CFA0CCE245B);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int GRAPHICS__GET_MAXIMUM_NUMBER_OF_PHOTOS_2() /* 0xDC54A7AF8B3A14EF */
{
	native_init(0xDC54A7AF8B3A14EF);
	return *(int*)(native_call());
}

inline void GRAPHICS_SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(int ptfxHandle, float dist) /* 0xDCB194B85EF7B541 */
{
	uint64_t val;

	native_init(0xDCB194B85EF7B541);

	*(int*)(&val) = ptfxHandle;
	native_push(val);
	*(float*)(&val) = dist;
	native_push(val);

	native_call();
}

inline void GRAPHICS_REMOVE_PARTICLE_FX_IN_RANGE(float X, float Y, float Z, float radius) /* 0xDD19FA1C6D657305 */
{
	uint64_t val;

	native_init(0xDD19FA1C6D657305);

	*(float*)(&val) = X;
	native_push(val);
	*(float*)(&val) = Y;
	native_push(val);
	*(float*)(&val) = Z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);

	native_call();
}

inline int GRAPHICS__START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) /* 0xDDE23F30CC5A0F03 */
{
	uint64_t val;

	native_init(0xDDE23F30CC5A0F03);

	*(const char**)(&val) = effectName;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = xOffset;
	native_push(val);
	*(float*)(&val) = yOffset;
	native_push(val);
	*(float*)(&val) = zOffset;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(int*)(&val) = boneIndex;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(BOOL*)(&val) = xAxis;
	native_push(val);
	*(BOOL*)(&val) = yAxis;
	native_push(val);
	*(BOOL*)(&val) = zAxis;
	native_push(val);

	return *(int*)(native_call());
}

inline void GRAPHICS_0xDE81239437E8C5A8() /* 0xDE81239437E8C5A8 */
{
	native_init(0xDE81239437E8C5A8);
	native_call();
}

inline void GRAPHICS__ENTITY_DESCRIPTION_TEXT(Entity entity) /* 0xDEADC0DEDEADC0DE */
{
	uint64_t val;

	native_init(0xDEADC0DEDEADC0DE);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS__HAS_HUD_SCALEFORM_LOADED(int hudComponent) /* 0xDF6E5987D2B4D140 */
{
	uint64_t val;

	native_init(0xDF6E5987D2B4D140);

	*(int*)(&val) = hudComponent;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_REQUEST_STREAMED_TEXTURE_DICT(const char* textureDict, BOOL unused) /* 0xDFA2EF8E04127DD5 */
{
	uint64_t val;

	native_init(0xDFA2EF8E04127DD5);

	*(const char**)(&val) = textureDict;
	native_push(val);
	*(BOOL*)(&val) = unused;
	native_push(val);

	native_call();
}

inline void GRAPHICS__TOGGLE_PAUSE_RENDER_PHASES(BOOL toggle) /* 0xDFC252D8A3E15AB7 */
{
	uint64_t val;

	native_init(0xDFC252D8A3E15AB7);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_ENTITY_ICON_VISIBILITY(Entity entity, BOOL toggle) /* 0xE0E8BEECCA96BA31 */
{
	uint64_t val;

	native_init(0xE0E8BEECCA96BA31);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int GRAPHICS_START_PARTICLE_FX_LOOPED_AT_COORD(const char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) /* 0xE184F4F0DC5910E7 */
{
	uint64_t val;

	native_init(0xE184F4F0DC5910E7);

	*(const char**)(&val) = effectName;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(BOOL*)(&val) = xAxis;
	native_push(val);
	*(BOOL*)(&val) = yAxis;
	native_push(val);
	*(BOOL*)(&val) = zAxis;
	native_push(val);
	*(BOOL*)(&val) = p11;
	native_push(val);

	return *(int*)(native_call());
}

inline void GRAPHICS_0xE1C8709406F2C41C() /* 0xE1C8709406F2C41C */
{
	native_init(0xE1C8709406F2C41C);
	native_call();
}

inline const char *GRAPHICS_SITTING_TV(int method_return) /* 0xE1E258829A885245 */
{
	uint64_t val;

	native_init(0xE1E258829A885245);

	*(int*)(&val) = method_return;
	native_push(val);

	return *(const char**)(native_call());
}

inline void GRAPHICS_0xE2892E7E55D7073A(float p0) /* 0xE2892E7E55D7073A */
{
	uint64_t val;

	native_init(0xE2892E7E55D7073A);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int GRAPHICS_CREATE_TRACKED_POINT() /* 0xE2C9439ED45DEA60 */
{
	native_init(0xE2C9439ED45DEA60);
	return *(int*)(native_call());
}

inline void GRAPHICS_RESET_SCRIPT_GFX_ALIGN() /* 0xE3A3DB414A373DAB */
{
	native_init(0xE3A3DB414A373DAB);
	native_call();
}

inline void GRAPHICS_0xE3E2C1B4C59DBC77(int unk) /* 0xE3E2C1B4C59DBC77 */
{
	uint64_t val;

	native_init(0xE3E2C1B4C59DBC77);

	*(int*)(&val) = unk;
	native_push(val);

	native_call();
}

inline Any GRAPHICS_0xE59343E9E96529E7() /* 0xE59343E9E96529E7 */
{
	native_init(0xE59343E9E96529E7);
	return *(Any*)(native_call());
}

inline void GRAPHICS_0xE63D7C6EECECB66B(BOOL p0) /* 0xE63D7C6EECECB66B */
{
	uint64_t val;

	native_init(0xE63D7C6EECECB66B);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_NOISEOVERIDE(BOOL toggle) /* 0xE787BF1C5CF823C9 */
{
	uint64_t val;

	native_init(0xE787BF1C5CF823C9);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Any GRAPHICS_0xE791DF1F73ED2C8B(Any p0) /* 0xE791DF1F73ED2C8B */
{
	uint64_t val;

	native_init(0xE791DF1F73ED2C8B);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void GRAPHICS_DRAW_SPRITE(const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha) /* 0xE7FFAE5EBF23D890 */
{
	uint64_t val;

	native_init(0xE7FFAE5EBF23D890);

	*(const char**)(&val) = textureDict;
	native_push(val);
	*(const char**)(&val) = textureName;
	native_push(val);
	*(float*)(&val) = screenX;
	native_push(val);
	*(float*)(&val) = screenY;
	native_push(val);
	*(float*)(&val) = width;
	native_push(val);
	*(float*)(&val) = height;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline void GRAPHICS__ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(const char* button) /* 0xE83A3E3557A56640 */
{
	uint64_t val;

	native_init(0xE83A3E3557A56640);

	*(const char**)(&val) = button;
	native_push(val);

	native_call();
}

inline void GRAPHICS_REMOVE_DECALS_FROM_VEHICLE(Vehicle vehicle) /* 0xE91F1B65F2B48D57 */
{
	uint64_t val;

	native_init(0xE91F1B65F2B48D57);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	native_call();
}

inline void GRAPHICS__SET_PARTICLE_FX_ASSET_OLD_TO_NEW(const char* oldAsset, const char* newAsset) /* 0xEA1E2D93F6F75ED9 */
{
	uint64_t val;

	native_init(0xEA1E2D93F6F75ED9);

	*(const char**)(&val) = oldAsset;
	native_push(val);
	*(const char**)(&val) = newAsset;
	native_push(val);

	native_call();
}

inline void GRAPHICS_RELEASE_MOVIE_MESH_SET(int movieMeshSet) /* 0xEB119AA014E89183 */
{
	uint64_t val;

	native_init(0xEB119AA014E89183);

	*(int*)(&val) = movieMeshSet;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_0xEB3DAC2C86001E5E() /* 0xEB3DAC2C86001E5E */
{
	native_init(0xEB3DAC2C86001E5E);
	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0xEC52C631A1831C03(int p0) /* 0xEC52C631A1831C03 */
{
	uint64_t val;

	native_init(0xEC52C631A1831C03);

	*(int*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any GRAPHICS_0xEC72C258667BE5EA(Any p0) /* 0xEC72C258667BE5EA */
{
	uint64_t val;

	native_init(0xEC72C258667BE5EA);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void GRAPHICS_REMOVE_DECAL(Object decal) /* 0xED3F346429CCD659 */
{
	uint64_t val;

	native_init(0xED3F346429CCD659);

	*(Object*)(&val) = decal;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(BOOL p0) /* 0xEEC4047028426510 */
{
	uint64_t val;

	native_init(0xEEC4047028426510);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xEF398BEEE4EF45F9(BOOL p0) /* 0xEF398BEEE4EF45F9 */
{
	uint64_t val;

	native_init(0xEF398BEEE4EF45F9);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS__CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(int scaleform, const char* functionName, float floatParam1, float floatParam2, float floatParam3, float floatParam4, float floatParam5, const char* stringParam1, const char* stringParam2, const char* stringParam3, const char* stringParam4, const char* stringParam5) /* 0xEF662D8D57E290B1 */
{
	uint64_t val;

	native_init(0xEF662D8D57E290B1);

	*(int*)(&val) = scaleform;
	native_push(val);
	*(const char**)(&val) = functionName;
	native_push(val);
	*(float*)(&val) = floatParam1;
	native_push(val);
	*(float*)(&val) = floatParam2;
	native_push(val);
	*(float*)(&val) = floatParam3;
	native_push(val);
	*(float*)(&val) = floatParam4;
	native_push(val);
	*(float*)(&val) = floatParam5;
	native_push(val);
	*(const char**)(&val) = stringParam1;
	native_push(val);
	*(const char**)(&val) = stringParam2;
	native_push(val);
	*(const char**)(&val) = stringParam3;
	native_push(val);
	*(const char**)(&val) = stringParam4;
	native_push(val);
	*(const char**)(&val) = stringParam5;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xEFABC7722293DA7C() /* 0xEFABC7722293DA7C */
{
	native_init(0xEFABC7722293DA7C);
	native_call();
}

inline BOOL GRAPHICS__TRANSITION_FROM_BLURRED(float transitionTime) /* 0xEFACC8AEF94430D5 */
{
	uint64_t val;

	native_init(0xEFACC8AEF94430D5);

	*(float*)(&val) = transitionTime;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0xEFB55E7C25D3B3BE() /* 0xEFB55E7C25D3B3BE */
{
	native_init(0xEFB55E7C25D3B3BE);
	native_call();
}

inline float GRAPHICS__GET_ASPECT_RATIO(BOOL b) /* 0xF1307EF624A80D87 */
{
	uint64_t val;

	native_init(0xF1307EF624A80D87);

	*(BOOL*)(&val) = b;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL GRAPHICS_0xF1CEA8A4198D8E9A(const char* p0) /* 0xF1CEA8A4198D8E9A */
{
	uint64_t val;

	native_init(0xF1CEA8A4198D8E9A);

	*(const char**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int GRAPHICS_START_PARTICLE_FX_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) /* 0xF28DA9F38CD1787C */
{
	uint64_t val;

	native_init(0xF28DA9F38CD1787C);

	*(const char**)(&val) = effectName;
	native_push(val);
	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = xOffset;
	native_push(val);
	*(float*)(&val) = yOffset;
	native_push(val);
	*(float*)(&val) = zOffset;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(int*)(&val) = boneIndex;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(BOOL*)(&val) = xAxis;
	native_push(val);
	*(BOOL*)(&val) = yAxis;
	native_push(val);
	*(BOOL*)(&val) = zAxis;
	native_push(val);

	return *(int*)(native_call());
}

inline void GRAPHICS_DRAW_LIGHT_WITH_RANGE(float posX, float posY, float posZ, int colorR, int colorG, int colorB, float range, float intensity) /* 0xF2A1B2771A01DBD4 */
{
	uint64_t val;

	native_init(0xF2A1B2771A01DBD4);

	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(int*)(&val) = colorR;
	native_push(val);
	*(int*)(&val) = colorG;
	native_push(val);
	*(int*)(&val) = colorB;
	native_push(val);
	*(float*)(&val) = range;
	native_push(val);
	*(float*)(&val) = intensity;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xF44A5456AC3F4F97(Any p0) /* 0xF44A5456AC3F4F97 */
{
	uint64_t val;

	native_init(0xF44A5456AC3F4F97);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS__DRAW_LIGHT_WITH_RANGE_AND_SHADOW(float x, float y, float z, int r, int g, int b, float range, float intensity, float shadow) /* 0xF49E9A9716A04595 */
{
	uint64_t val;

	native_init(0xF49E9A9716A04595);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = r;
	native_push(val);
	*(int*)(&val) = g;
	native_push(val);
	*(int*)(&val) = b;
	native_push(val);
	*(float*)(&val) = range;
	native_push(val);
	*(float*)(&val) = intensity;
	native_push(val);
	*(float*)(&val) = shadow;
	native_push(val);

	native_call();
}

inline void GRAPHICS_0xF51D36185993515D(int checkpoint, float posX, float posY, float posZ, float unkX, float unkY, float unkZ) /* 0xF51D36185993515D */
{
	uint64_t val;

	native_init(0xF51D36185993515D);

	*(int*)(&val) = checkpoint;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = unkX;
	native_push(val);
	*(float*)(&val) = unkY;
	native_push(val);
	*(float*)(&val) = unkZ;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) /* 0xF56B8137DF10135D */
{
	uint64_t val;

	native_init(0xF56B8137DF10135D);

	*(const char**)(&val) = effectName;
	native_push(val);
	*(float*)(&val) = xPos;
	native_push(val);
	*(float*)(&val) = yPos;
	native_push(val);
	*(float*)(&val) = zPos;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(BOOL*)(&val) = xAxis;
	native_push(val);
	*(BOOL*)(&val) = yAxis;
	native_push(val);
	*(BOOL*)(&val) = zAxis;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS__SCREEN_DRAW_POSITION_RATIO(float x, float y, float p2, float p3) /* 0xF5A2C681787E579D */
{
	uint64_t val;

	native_init(0xF5A2C681787E579D);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	native_call();
}

inline int GRAPHICS_0xF5BED327CEA362B1(BOOL p0) /* 0xF5BED327CEA362B1 */
{
	uint64_t val;

	native_init(0xF5BED327CEA362B1);

	*(BOOL*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline void GRAPHICS_DELETE_CHECKPOINT(int checkpoint) /* 0xF5ED37F54CD4D52E */
{
	uint64_t val;

	native_init(0xF5ED37F54CD4D52E);

	*(int*)(&val) = checkpoint;
	native_push(val);

	native_call();
}

inline BOOL GRAPHICS_BEGIN_SCALEFORM_MOVIE_METHOD(int scaleform, const char* functionName) /* 0xF6E48914C7A8694E */
{
	uint64_t val;

	native_init(0xF6E48914C7A8694E);

	*(int*)(&val) = scaleform;
	native_push(val);
	*(const char**)(&val) = functionName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void GRAPHICS_0xF78B803082D4386F(float p0) /* 0xF78B803082D4386F */
{
	uint64_t val;

	native_init(0xF78B803082D4386F);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_TV_CHANNEL_PLAYLIST(int channel, const char* playlist, BOOL fromBeginning) /* 0xF7B38B8305F1FE8B */
{
	uint64_t val;

	native_init(0xF7B38B8305F1FE8B);

	*(int*)(&val) = channel;
	native_push(val);
	*(const char**)(&val) = playlist;
	native_push(val);
	*(BOOL*)(&val) = fromBeginning;
	native_push(val);

	native_call();
}

inline void GRAPHICS_SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxHandle, float x, float y, float z, float rotX, float rotY, float rotZ) /* 0xF7DDEBEC43483C43 */
{
	uint64_t val;

	native_init(0xF7DDEBEC43483C43);

	*(int*)(&val) = ptfxHandle;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = rotX;
	native_push(val);
	*(float*)(&val) = rotY;
	native_push(val);
	*(float*)(&val) = rotZ;
	native_push(val);

	native_call();
}

inline void GRAPHICS_CALL_SCALEFORM_MOVIE_METHOD(int scaleform, const char* method) /* 0xFBD96D87AC96D533 */
{
	uint64_t val;

	native_init(0xFBD96D87AC96D533);

	*(int*)(&val) = scaleform;
	native_push(val);
	*(const char**)(&val) = method;
	native_push(val);

	native_call();
}

inline int GRAPHICS_GET_TV_CHANNEL() /* 0xFC1E275A90D39995 */
{
	native_init(0xFC1E275A90D39995);
	return *(int*)(native_call());
}

inline void GRAPHICS_DRAW_TV_CHANNEL(float xPos, float yPos, float xScale, float yScale, float rotation, int red, int green, int blue, int alpha) /* 0xFDDC2B4ED3C69DF0 */
{
	uint64_t val;

	native_init(0xFDDC2B4ED3C69DF0);

	*(float*)(&val) = xPos;
	native_push(val);
	*(float*)(&val) = yPos;
	native_push(val);
	*(float*)(&val) = xScale;
	native_push(val);
	*(float*)(&val) = yScale;
	native_push(val);
	*(float*)(&val) = rotation;
	native_push(val);
	*(int*)(&val) = red;
	native_push(val);
	*(int*)(&val) = green;
	native_push(val);
	*(int*)(&val) = blue;
	native_push(val);
	*(int*)(&val) = alpha;
	native_push(val);

	native_call();
}

inline int GRAPHICS_GET_TIMECYCLE_MODIFIER_INDEX() /* 0xFDF3D97C674AFB66 */
{
	native_init(0xFDF3D97C674AFB66);
	return *(int*)(native_call());
}

inline int GRAPHICS_0xFE26117A5841B2FF(Vehicle vehicle, Any p1) /* 0xFE26117A5841B2FF */
{
	uint64_t val;

	native_init(0xFE26117A5841B2FF);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(int*)(native_call());
}

inline void GRAPHICS_CLEAR_DRAW_ORIGIN() /* 0xFF0B610F6BE0D7AF */
{
	native_init(0xFF0B610F6BE0D7AF);
	native_call();
}

inline int INTERIOR_GET_INTERIOR_AT_COORDS_WITH_TYPE(float x, float y, float z, const char* interiorType) /* 0x05B7A89BD78797FC */
{
	uint64_t val;

	native_init(0x05B7A89BD78797FC);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(const char**)(&val) = interiorType;
	native_push(val);

	return *(int*)(native_call());
}

inline int INTERIOR_GET_INTERIOR_FROM_ENTITY(Entity entity) /* 0x2107BA504071A6BB */
{
	uint64_t val;

	native_init(0x2107BA504071A6BB);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(int*)(native_call());
}

inline void INTERIOR_0x23B59D8912F94246() /* 0x23B59D8912F94246 */
{
	native_init(0x23B59D8912F94246);
	native_call();
}

inline void INTERIOR_UNPIN_INTERIOR(int interiorID) /* 0x261CCE7EED010641 */
{
	uint64_t val;

	native_init(0x261CCE7EED010641);

	*(int*)(&val) = interiorID;
	native_push(val);

	native_call();
}

inline BOOL INTERIOR_IS_VALID_INTERIOR(int interiorID) /* 0x26B0E73D7EAAF4D3 */
{
	uint64_t val;

	native_init(0x26B0E73D7EAAF4D3);

	*(int*)(&val) = interiorID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void INTERIOR__LOAD_INTERIOR(int interiorID) /* 0x2CA429C029CCF247 */
{
	uint64_t val;

	native_init(0x2CA429C029CCF247);

	*(int*)(&val) = interiorID;
	native_push(val);

	native_call();
}

inline BOOL INTERIOR__IS_INTERIOR_PROP_ENABLED(int interiorID, const char* propName) /* 0x35F7DD45E8C0A16D */
{
	uint64_t val;

	native_init(0x35F7DD45E8C0A16D);

	*(int*)(&val) = interiorID;
	native_push(val);
	*(const char**)(&val) = propName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Hash INTERIOR_GET_KEY_FOR_ENTITY_IN_ROOM(Entity entity) /* 0x399685DB942336BC */
{
	uint64_t val;

	native_init(0x399685DB942336BC);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(Hash*)(native_call());
}

inline void INTERIOR_ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(Pickup pickup, const char* roomName) /* 0x3F6167F351168730 */
{
	uint64_t val;

	native_init(0x3F6167F351168730);

	*(Pickup*)(&val) = pickup;
	native_push(val);
	*(const char**)(&val) = roomName;
	native_push(val);

	native_call();
}

inline void INTERIOR_0x405DC2AEF6AF95B9(Hash roomHashKey) /* 0x405DC2AEF6AF95B9 */
{
	uint64_t val;

	native_init(0x405DC2AEF6AF95B9);

	*(Hash*)(&val) = roomHashKey;
	native_push(val);

	native_call();
}

inline void INTERIOR_REFRESH_INTERIOR(int interiorID) /* 0x41F37C3427C75AE0 */
{
	uint64_t val;

	native_init(0x41F37C3427C75AE0);

	*(int*)(&val) = interiorID;
	native_push(val);

	native_call();
}

inline void INTERIOR__DISABLE_INTERIOR_PROP(int interiorID, const char* propName) /* 0x420BD37289EEE162 */
{
	uint64_t val;

	native_init(0x420BD37289EEE162);

	*(int*)(&val) = interiorID;
	native_push(val);
	*(const char**)(&val) = propName;
	native_push(val);

	native_call();
}

inline Hash INTERIOR_GET_ROOM_KEY_FROM_ENTITY(Entity entity) /* 0x47C2A06D4F5F424B */
{
	uint64_t val;

	native_init(0x47C2A06D4F5F424B);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(Hash*)(native_call());
}

inline Any INTERIOR_0x4C2330E61D3DEB56(int interiorID) /* 0x4C2330E61D3DEB56 */
{
	uint64_t val;

	native_init(0x4C2330E61D3DEB56);

	*(int*)(&val) = interiorID;
	native_push(val);

	return *(Any*)(native_call());
}

inline void INTERIOR_FORCE_ROOM_FOR_ENTITY(Entity entity, int interiorID, Hash roomHashKey) /* 0x52923C4710DD9907 */
{
	uint64_t val;

	native_init(0x52923C4710DD9907);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = interiorID;
	native_push(val);
	*(Hash*)(&val) = roomHashKey;
	native_push(val);

	native_call();
}

inline void INTERIOR__ENABLE_INTERIOR_PROP(int interiorID, const char* propName) /* 0x55E86AF2712B36A1 */
{
	uint64_t val;

	native_init(0x55E86AF2712B36A1);

	*(int*)(&val) = interiorID;
	native_push(val);
	*(const char**)(&val) = propName;
	native_push(val);

	native_call();
}

inline void INTERIOR_DISABLE_INTERIOR(int interiorID, BOOL toggle) /* 0x6170941419D7D8EC */
{
	uint64_t val;

	native_init(0x6170941419D7D8EC);

	*(int*)(&val) = interiorID;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL INTERIOR_IS_INTERIOR_READY(int interiorID) /* 0x6726BDCCC1932F0E */
{
	uint64_t val;

	native_init(0x6726BDCCC1932F0E);

	*(int*)(&val) = interiorID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void INTERIOR_0x82EBB79E258FA2B7(Entity entity, int interiorID) /* 0x82EBB79E258FA2B7 */
{
	uint64_t val;

	native_init(0x82EBB79E258FA2B7);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = interiorID;
	native_push(val);

	native_call();
}

inline void INTERIOR_0x920D853F3E17F1DA(int interiorID, Hash roomHashKey) /* 0x920D853F3E17F1DA */
{
	uint64_t val;

	native_init(0x920D853F3E17F1DA);

	*(int*)(&val) = interiorID;
	native_push(val);
	*(Hash*)(&val) = roomHashKey;
	native_push(val);

	native_call();
}

inline BOOL INTERIOR_IS_INTERIOR_CAPPED(int interiorID) /* 0x92BAC8ACF88CEC26 */
{
	uint64_t val;

	native_init(0x92BAC8ACF88CEC26);

	*(int*)(&val) = interiorID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Vector3 INTERIOR_GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(int interiorID, float x, float y, float z) /* 0x9E3B3E6D66F6E22F */
{
	uint64_t val;

	native_init(0x9E3B3E6D66F6E22F);

	*(int*)(&val) = interiorID;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline void INTERIOR_0x9E6542F0CE8E70A3(BOOL toggle) /* 0x9E6542F0CE8E70A3 */
{
	uint64_t val;

	native_init(0x9E6542F0CE8E70A3);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Hash INTERIOR__GET_ROOM_KEY_FROM_GAMEPLAY_CAM() /* 0xA6575914D2A0B450 */
{
	native_init(0xA6575914D2A0B450);
	return *(Hash*)(native_call());
}

inline void INTERIOR__HIDE_MAP_OBJECT_THIS_FRAME(Hash mapObjectHash) /* 0xA97F257D0151A6AB */
{
	uint64_t val;

	native_init(0xA97F257D0151A6AB);

	*(Hash*)(&val) = mapObjectHash;
	native_push(val);

	native_call();
}

inline void INTERIOR_0xAF348AFCB575A441(const char* roomName) /* 0xAF348AFCB575A441 */
{
	uint64_t val;

	native_init(0xAF348AFCB575A441);

	*(const char**)(&val) = roomName;
	native_push(val);

	native_call();
}

inline int INTERIOR_GET_INTERIOR_AT_COORDS(float x, float y, float z) /* 0xB0F7F8663821D9C3 */
{
	uint64_t val;

	native_init(0xB0F7F8663821D9C3);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	return *(int*)(native_call());
}

inline void INTERIOR_CLEAR_ROOM_FOR_ENTITY(Entity entity) /* 0xB365FC0C4E27FFA7 */
{
	uint64_t val;

	native_init(0xB365FC0C4E27FFA7);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline BOOL INTERIOR_IS_INTERIOR_DISABLED(int interiorID) /* 0xBC5115A5A939DD15 */
{
	uint64_t val;

	native_init(0xBC5115A5A939DD15);

	*(int*)(&val) = interiorID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL INTERIOR_IS_INTERIOR_SCENE() /* 0xBC72B5D7A1CBD54D */
{
	native_init(0xBC72B5D7A1CBD54D);
	return *(BOOL*)(native_call());
}

inline void INTERIOR_CAP_INTERIOR(int interiorID, BOOL toggle) /* 0xD9175F941610DB54 */
{
	uint64_t val;

	native_init(0xD9175F941610DB54);

	*(int*)(&val) = interiorID;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int INTERIOR_GET_INTERIOR_GROUP_ID(int interiorID) /* 0xE4A84ABF135EF91A */
{
	uint64_t val;

	native_init(0xE4A84ABF135EF91A);

	*(int*)(&val) = interiorID;
	native_push(val);

	return *(int*)(native_call());
}

inline int INTERIOR_GET_INTERIOR_FROM_COLLISION(float x, float y, float z) /* 0xEC4CF9FCB29A4424 */
{
	uint64_t val;

	native_init(0xEC4CF9FCB29A4424);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL INTERIOR__ARE_COORDS_COLLIDING_WITH_EXTERIOR(float x, float y, float z) /* 0xEEA5AC2EDA7C33E8 */
{
	uint64_t val;

	native_init(0xEEA5AC2EDA7C33E8);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int INTERIOR__UNK_GET_INTERIOR_AT_COORDS(float x, float y, float z, int unk) /* 0xF0F77ADB9F67E79D */
{
	uint64_t val;

	native_init(0xF0F77ADB9F67E79D);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = unk;
	native_push(val);

	return *(int*)(native_call());
}

inline void ITEMSET_REMOVE_FROM_ITEMSET(Any p0, Any p1) /* 0x25E68244B0177686 */
{
	uint64_t val;

	native_init(0x25E68244B0177686);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL ITEMSET_IS_IN_ITEMSET(Any p0, Any p1) /* 0x2D0FC594D1E9C107 */
{
	uint64_t val;

	native_init(0x2D0FC594D1E9C107);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Vehicle ITEMSET_CREATE_ITEMSET(Vehicle distri) /* 0x35AD299F50D91B24 */
{
	uint64_t val;

	native_init(0x35AD299F50D91B24);

	*(Vehicle*)(&val) = distri;
	native_push(val);

	return *(Vehicle*)(native_call());
}

inline void ITEMSET_CLEAN_ITEMSET(Any p0) /* 0x41BC0D722FC04221 */
{
	uint64_t val;

	native_init(0x41BC0D722FC04221);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any ITEMSET_GET_INDEXED_ITEM_IN_ITEMSET(Any p0, Any p1) /* 0x7A197E2521EE2BAB */
{
	uint64_t val;

	native_init(0x7A197E2521EE2BAB);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL ITEMSET_IS_ITEMSET_VALID(Any p0) /* 0xB1B1EA596344DFAB */
{
	uint64_t val;

	native_init(0xB1B1EA596344DFAB);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any ITEMSET_GET_ITEMSET_SIZE(ScrHandle x) /* 0xD9127E83ABF7C631 */
{
	uint64_t val;

	native_init(0xD9127E83ABF7C631);

	*(ScrHandle*)(&val) = x;
	native_push(val);

	return *(Any*)(native_call());
}

inline void ITEMSET_DESTROY_ITEMSET(Any p0) /* 0xDE18220B1C183EDA */
{
	uint64_t val;

	native_init(0xDE18220B1C183EDA);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL ITEMSET_ADD_TO_ITEMSET(Any p0, Any p1) /* 0xE3945201F14637DD */
{
	uint64_t val;

	native_init(0xE3945201F14637DD);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void MOBILE__DISABLE_PHONE_THIS_FRAME(BOOL toggle) /* 0x015C49A93E3E086E */
{
	uint64_t val;

	native_init(0x015C49A93E3E086E);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void MOBILE_0x15E69E2802C24B8D(float p0) /* 0x15E69E2802C24B8D */
{
	uint64_t val;

	native_init(0x15E69E2802C24B8D);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void MOBILE_0x1B0B4AEED5B9B41C(float p0) /* 0x1B0B4AEED5B9B41C */
{
	uint64_t val;

	native_init(0x1B0B4AEED5B9B41C);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void MOBILE_GET_MOBILE_PHONE_ROTATION(Vector3* rotation, Vehicle p1) /* 0x1CEFB61F193070AE */
{
	uint64_t val;

	native_init(0x1CEFB61F193070AE);

	*(Vector3**)(&val) = rotation;
	native_push(val);
	*(Vehicle*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL MOBILE__NETWORK_SHOP_DOES_ITEM_EXIST_HASH(Hash hash) /* 0x247F0F73A182EA0B */
{
	uint64_t val;

	native_init(0x247F0F73A182EA0B);

	*(Hash*)(&val) = hash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void MOBILE_0x3117D84EFA60F77B(float p0) /* 0x3117D84EFA60F77B */
{
	uint64_t val;

	native_init(0x3117D84EFA60F77B);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void MOBILE_DESTROY_MOBILE_PHONE() /* 0x3BC861DF703E5097 */
{
	native_init(0x3BC861DF703E5097);
	native_call();
}

inline BOOL MOBILE_CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(Entity entity) /* 0x439E9BC95B7E7FBE */
{
	uint64_t val;

	native_init(0x439E9BC95B7E7FBE);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void MOBILE__SET_PHONE_LEAN(BOOL Toggle) /* 0x44E44169EF70138E */
{
	uint64_t val;

	native_init(0x44E44169EF70138E);

	*(BOOL*)(&val) = Toggle;
	native_push(val);

	native_call();
}

inline void MOBILE_0x466DA42C89865553(float p0) /* 0x466DA42C89865553 */
{
	uint64_t val;

	native_init(0x466DA42C89865553);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void MOBILE_0x53F4892D18EC90A4(float p0) /* 0x53F4892D18EC90A4 */
{
	uint64_t val;

	native_init(0x53F4892D18EC90A4);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void MOBILE_GET_MOBILE_PHONE_POSITION(Vector3* position) /* 0x584FDFDA48805B86 */
{
	uint64_t val;

	native_init(0x584FDFDA48805B86);

	*(Vector3**)(&val) = position;
	native_push(val);

	native_call();
}

inline void MOBILE_SET_MOBILE_PHONE_POSITION(float posX, float posY, float posZ) /* 0x693A5C6D6734085B */
{
	uint64_t val;

	native_init(0x693A5C6D6734085B);

	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);

	native_call();
}

inline void MOBILE__MOVE_FINGER(int direction) /* 0x95C9E72F3D7DEC9B */
{
	uint64_t val;

	native_init(0x95C9E72F3D7DEC9B);

	*(int*)(&val) = direction;
	native_push(val);

	native_call();
}

inline void MOBILE_0xA2CCBE62CD4C91A4(int* toggle) /* 0xA2CCBE62CD4C91A4 */
{
	uint64_t val;

	native_init(0xA2CCBE62CD4C91A4);

	*(int**)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void MOBILE_CREATE_MOBILE_PHONE(int p4) /* 0xA4E8E696C532FBC7 */
{
	uint64_t val;

	native_init(0xA4E8E696C532FBC7);

	*(int*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void MOBILE_0xAC2890471901861C(float p0) /* 0xAC2890471901861C */
{
	uint64_t val;

	native_init(0xAC2890471901861C);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void MOBILE_GET_MOBILE_PHONE_RENDER_ID(int* renderId) /* 0xB4A53E05F68B6FA1 */
{
	uint64_t val;

	native_init(0xB4A53E05F68B6FA1);

	*(int**)(&val) = renderId;
	native_push(val);

	native_call();
}

inline void MOBILE_SET_MOBILE_PHONE_ROTATION(float rotX, float rotY, float rotZ, Any p3) /* 0xBB779C0CA917E865 */
{
	uint64_t val;

	native_init(0xBB779C0CA917E865);

	*(float*)(&val) = rotX;
	native_push(val);
	*(float*)(&val) = rotY;
	native_push(val);
	*(float*)(&val) = rotZ;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline BOOL MOBILE__NETWORK_SHOP_DOES_ITEM_EXIST(const char* name) /* 0xBD4D7EAF8A30F637 */
{
	uint64_t val;

	native_init(0xBD4D7EAF8A30F637);

	*(const char**)(&val) = name;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL MOBILE_CAN_PHONE_BE_SEEN_ON_SCREEN() /* 0xC4E2813898C97A4B */
{
	native_init(0xC4E2813898C97A4B);
	return *(BOOL*)(native_call());
}

inline void MOBILE_SET_MOBILE_PHONE_SCALE(float scale) /* 0xCBDD322A73D6D932 */
{
	uint64_t val;

	native_init(0xCBDD322A73D6D932);

	*(float*)(&val) = scale;
	native_push(val);

	native_call();
}

inline void MOBILE_0xD6ADE981781FCA09(float p0) /* 0xD6ADE981781FCA09 */
{
	uint64_t val;

	native_init(0xD6ADE981781FCA09);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void MOBILE_0xF1E22DC13F5EEBAD(float p0) /* 0xF1E22DC13F5EEBAD */
{
	uint64_t val;

	native_init(0xF1E22DC13F5EEBAD);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void MOBILE_SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(BOOL toggle) /* 0xF511F759238A5122 */
{
	uint64_t val;

	native_init(0xF511F759238A5122);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void MOBILE_CELL_CAM_ACTIVATE(BOOL p0, BOOL p1) /* 0xFDE8F069C542D126 */
{
	uint64_t val;

	native_init(0xFDE8F069C542D126);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline int NETWORK_GET_TIME_OFFSET(int timeA, int timeB) /* 0x017008CCDAD48503 */
{
	uint64_t val;

	native_init(0x017008CCDAD48503);

	*(int*)(&val) = timeA;
	native_push(val);
	*(int*)(&val) = timeB;
	native_push(val);

	return *(int*)(native_call());
}

inline Any NETWORK_0x01ABCE5E7CBDA196() /* 0x01ABCE5E7CBDA196 */
{
	native_init(0x01ABCE5E7CBDA196);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_HAS_CONTROL_OF_ENTITY(Entity entity) /* 0x01BF60A500E28887 */
{
	uint64_t val;

	native_init(0x01BF60A500E28887);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x02A8BEC6FD9AF660(Any* p0, Any p1) /* 0x02A8BEC6FD9AF660 */
{
	uint64_t val;

	native_init(0x02A8BEC6FD9AF660);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x02ADA21EA2F6918F() /* 0x02ADA21EA2F6918F */
{
	native_init(0x02ADA21EA2F6918F);
	return *(Any*)(native_call());
}

inline int NETWORK__NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(int netScene) /* 0x02C40BF885C567B6 */
{
	uint64_t val;

	native_init(0x02C40BF885C567B6);

	*(int*)(&val) = netScene;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_PLAYER_TALKING(Player player) /* 0x031E11F3D447647E */
{
	uint64_t val;

	native_init(0x031E11F3D447647E);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL() /* 0x042E4B70B93E6054 */
{
	native_init(0x042E4B70B93E6054);
	native_call();
}

inline BOOL NETWORK__NETWORK_HAVE_TUNABLES_BEEN_DOWNLOADED() /* 0x0467C11ED88B7D28 */
{
	native_init(0x0467C11ED88B7D28);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_IN_SPECTATOR_MODE() /* 0x048746E388762E11 */
{
	native_init(0x048746E388762E11);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_ACTIVITY_SESSION() /* 0x05095437424397FA */
{
	native_init(0x05095437424397FA);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_SIGNED_IN() /* 0x054354A99211EB96 */
{
	native_init(0x054354A99211EB96);
	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_CLEAR_FOLLOWERS() /* 0x058F43EC59A8631A */
{
	native_init(0x058F43EC59A8631A);
	native_call();
}

inline void NETWORK_NETWORK_REGISTER_ENTITY_AS_NETWORKED(Entity entity) /* 0x06FAACD625D80CAA */
{
	uint64_t val;

	native_init(0x06FAACD625D80CAA);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x07DD29D5E22763F1(Any* p0) /* 0x07DD29D5E22763F1 */
{
	uint64_t val;

	native_init(0x07DD29D5E22763F1);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__FACEBOOK_SET_HEIST_COMPLETE(const char* heistName, int cashEarned, int xpEarned) /* 0x098AB65B9ED9A9EC */
{
	uint64_t val;

	native_init(0x098AB65B9ED9A9EC);

	*(const char**)(&val) = heistName;
	native_push(val);
	*(int*)(&val) = cashEarned;
	native_push(val);
	*(int*)(&val) = xpEarned;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_GET_ENTITY_IS_LOCAL(Entity entity) /* 0x0991549DE4D64762 */
{
	uint64_t val;

	native_init(0x0991549DE4D64762);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__FACEBOOK_SET_MILESTONE_COMPLETE(int milestoneId) /* 0x0AE1F1653B554AB9 */
{
	uint64_t val;

	native_init(0x0AE1F1653B554AB9);

	*(int*)(&val) = milestoneId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x0AFCE529F69B21FF() /* 0x0AFCE529F69B21FF */
{
	native_init(0x0AFCE529F69B21FF);
	return *(Any*)(native_call());
}

inline Any NETWORK_NETWORK_ENABLE_MOTION_DRUGGED() /* 0x0B0CC10720653F3B */
{
	native_init(0x0B0CC10720653F3B);
	return *(Any*)(native_call());
}

inline Any NETWORK_0x0B203B4AFDE53A4F(Any* p0, Any* p1, BOOL p2) /* 0x0B203B4AFDE53A4F */
{
	uint64_t val;

	native_init(0x0B203B4AFDE53A4F);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any NETWORK_NETWORK_IS_TRANSITION_HOST() /* 0x0B824797C9BF2159 */
{
	native_init(0x0B824797C9BF2159);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_PENDING_FRIEND(Any p0) /* 0x0BE73DA6984A6E33 */
{
	uint64_t val;

	native_init(0x0BE73DA6984A6E33);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x0C1F7D49C39D2289() /* 0x0C1F7D49C39D2289 */
{
	native_init(0x0C1F7D49C39D2289);
	return *(Any*)(native_call());
}

inline void NETWORK_0x0C978FDA19692C2C(BOOL p0, BOOL p1) /* 0x0C978FDA19692C2C */
{
	uint64_t val;

	native_init(0x0C978FDA19692C2C);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline int NETWORK_0x0CD9AB83489430EA(BOOL p0) /* 0x0CD9AB83489430EA */
{
	uint64_t val;

	native_init(0x0CD9AB83489430EA);

	*(BOOL*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline void NETWORK_0x0D77A82DC2D0DA59(Any* p0, Any* p1) /* 0x0D77A82DC2D0DA59 */
{
	uint64_t val;

	native_init(0x0D77A82DC2D0DA59);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x0DBD5D7E3C5BEC3B() /* 0x0DBD5D7E3C5BEC3B */
{
	native_init(0x0DBD5D7E3C5BEC3B);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_0x0EDE326D47CD0F3E(Ped ped, Player player) /* 0x0EDE326D47CD0F3E */
{
	uint64_t val;

	native_init(0x0EDE326D47CD0F3E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int NETWORK_PED_TO_NET(Ped ped) /* 0x0EDEC3C276198689 */
{
	uint64_t val;

	native_init(0x0EDEC3C276198689);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_GAMER_IN_MY_SESSION(int* networkHandle) /* 0x0F10B05DDF8D16E9 */
{
	uint64_t val;

	native_init(0x0F10B05DDF8D16E9);

	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x0FF2862B61A58AF9(BOOL p0) /* 0x0FF2862B61A58AF9 */
{
	uint64_t val;

	native_init(0x0FF2862B61A58AF9);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_IS_SIGNED_ONLINE() /* 0x1077788E268557C2 */
{
	native_init(0x1077788E268557C2);
	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x10BD227A753B0D84() /* 0x10BD227A753B0D84 */
{
	native_init(0x10BD227A753B0D84);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_GAME_IN_PROGRESS() /* 0x10FAB35428CCC9D7 */
{
	native_init(0x10FAB35428CCC9D7);
	return *(BOOL*)(native_call());
}

inline void NETWORK_0x113E6E3E50E286B0(Any p0) /* 0x113E6E3E50E286B0 */
{
	uint64_t val;

	native_init(0x113E6E3E50E286B0);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK_0x1153FA02A659051C() /* 0x1153FA02A659051C */
{
	native_init(0x1153FA02A659051C);
	native_call();
}

inline BOOL NETWORK_0x1171A97A3D3981B6(Any* p0, Any* p1, Any p2, Any p3) /* 0x1171A97A3D3981B6 */
{
	uint64_t val;

	native_init(0x1171A97A3D3981B6);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x120364DE2845DAF8(Any* p0, Any p1) /* 0x120364DE2845DAF8 */
{
	uint64_t val;

	native_init(0x120364DE2845DAF8);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_ACTIVITY_SPECTATOR() /* 0x12103B9E0C9F92FB */
{
	native_init(0x12103B9E0C9F92FB);
	return *(BOOL*)(native_call());
}

inline void NETWORK_SET_PLAYER_INVISIBLE_LOCALLY(Player player, BOOL toggle) /* 0x12B37D54667DB0B8 */
{
	uint64_t val;

	native_init(0x12B37D54667DB0B8);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int NETWORK_0x12B6281B6C6706C0(BOOL p0) /* 0x12B6281B6C6706C0 */
{
	uint64_t val;

	native_init(0x12B6281B6C6706C0);

	*(BOOL*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL NETWORK_0x13518FF1C6B28938(Any p0) /* 0x13518FF1C6B28938 */
{
	uint64_t val;

	native_init(0x13518FF1C6B28938);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__NETWORK_HAS_RESTRICTED_PROFILE() /* 0x1353F87E89946207 */
{
	native_init(0x1353F87E89946207);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x135F9B7B7ADD2185(Any* p0) /* 0x135F9B7B7ADD2185 */
{
	uint64_t val;

	native_init(0x135F9B7B7ADD2185);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x140E6A44870A11CE() /* 0x140E6A44870A11CE */
{
	native_init(0x140E6A44870A11CE);
	native_call();
}

inline Any NETWORK_0x14922ED3E38761F0() /* 0x14922ED3E38761F0 */
{
	native_init(0x14922ED3E38761F0);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_0x152D90E4C1B4738A(Any* p0, Any* p1) /* 0x152D90E4C1B4738A */
{
	uint64_t val;

	native_init(0x152D90E4C1B4738A);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_AM_I_BLOCKED_BY_GAMER(Any* p0) /* 0x15337C7C268A27B2 */
{
	uint64_t val;

	native_init(0x15337C7C268A27B2);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x158EC424F35EC469(const char* p0, BOOL p1, const char* contentType) /* 0x158EC424F35EC469 */
{
	uint64_t val;

	native_init(0x158EC424F35EC469);

	*(const char**)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = contentType;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int NETWORK_TEXTURE_DOWNLOAD_REQUEST(int* PlayerHandle, const char* FilePath, const char* Name, BOOL p3) /* 0x16160DA74A8E74A2 */
{
	uint64_t val;

	native_init(0x16160DA74A8E74A2);

	*(int**)(&val) = PlayerHandle;
	native_push(val);
	*(const char**)(&val) = FilePath;
	native_push(val);
	*(const char**)(&val) = Name;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL NETWORK_0x162C23CA83ED0A62(Any p0) /* 0x162C23CA83ED0A62 */
{
	uint64_t val;

	native_init(0x162C23CA83ED0A62);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x171DF6A0C07FB3DC(Any p0, Any p1) /* 0x171DF6A0C07FB3DC */
{
	uint64_t val;

	native_init(0x171DF6A0C07FB3DC);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK__NETWORK_PLAYER_IS_UNK() /* 0x172F75B6EE2233BA */
{
	native_init(0x172F75B6EE2233BA);
	return *(BOOL*)(native_call());
}

inline void NETWORK_0x17440AA15D1D3739() /* 0x17440AA15D1D3739 */
{
	native_init(0x17440AA15D1D3739);
	native_call();
}

inline void NETWORK_NETWORK_SET_PROPERTY_ID(Any p0) /* 0x1775961C2FBBCB5C */
{
	uint64_t val;

	native_init(0x1775961C2FBBCB5C);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK_0x17E0198B3882C2CB() /* 0x17E0198B3882C2CB */
{
	native_init(0x17E0198B3882C2CB);
	native_call();
}

inline int NETWORK__GET_TUNABLES_CONTENT_MODIFIER_ID(Hash contentHash) /* 0x187382F8A3E0A6C3 */
{
	uint64_t val;

	native_init(0x187382F8A3E0A6C3);

	*(Hash*)(&val) = contentHash;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL NETWORK_NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(int netId) /* 0x18A47D074708FD68 */
{
	uint64_t val;

	native_init(0x18A47D074708FD68);

	*(int*)(&val) = netId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int NETWORK_NETWORK_GET_NUM_PARTICIPANTS() /* 0x18D0456E86604654 */
{
	native_init(0x18D0456E86604654);
	return *(int*)(native_call());
}

inline BOOL NETWORK_NETWORK_PLAYER_IS_BADSPORT() /* 0x19D8DA0E5A68045A */
{
	native_init(0x19D8DA0E5A68045A);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_FRIEND(int* networkHandle) /* 0x1A24A179F9B31654 */
{
	uint64_t val;

	native_init(0x1A24A179F9B31654);

	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x1ACCFBA3D8DAB2EE(Any p0, Any p1) /* 0x1ACCFBA3D8DAB2EE */
{
	uint64_t val;

	native_init(0x1ACCFBA3D8DAB2EE);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK_0x1AD5B71586B94820(Player p0, Any* p1, Any p2) /* 0x1AD5B71586B94820 */
{
	uint64_t val;

	native_init(0x1AD5B71586B94820);

	*(Player*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int NETWORK_NETWORK_GET_PARTICIPANT_INDEX(int index) /* 0x1B84DF6AF2A46938 */
{
	uint64_t val;

	native_init(0x1B84DF6AF2A46938);

	*(int*)(&val) = index;
	native_push(val);

	return *(int*)(native_call());
}

inline void NETWORK_0x1B857666604B1A74(BOOL p0) /* 0x1B857666604B1A74 */
{
	uint64_t val;

	native_init(0x1B857666604B1A74);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK_NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(int lobbySize, BOOL p1, int instanceId) /* 0x1CA59E306ECB80A5 */
{
	uint64_t val;

	native_init(0x1CA59E306ECB80A5);

	*(int*)(&val) = lobbySize;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = instanceId;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x1D4DC17C38FEAFF0() /* 0x1D4DC17C38FEAFF0 */
{
	native_init(0x1D4DC17C38FEAFF0);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_0x1D610EB0FEA716D9(Any p0) /* 0x1D610EB0FEA716D9 */
{
	uint64_t val;

	native_init(0x1D610EB0FEA716D9);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int NETWORK_NETWORK_GET_HOST_OF_SCRIPT(const char* scriptName, int instanceId, int positionHash) /* 0x1D6A14F1F9A736FC */
{
	uint64_t val;

	native_init(0x1D6A14F1F9A736FC);

	*(const char**)(&val) = scriptName;
	native_push(val);
	*(int*)(&val) = instanceId;
	native_push(val);
	*(int*)(&val) = positionHash;
	native_push(val);

	return *(int*)(native_call());
}

inline void NETWORK_NETWORK_SET_RICH_PRESENCE(int p0, Any p1, Any p2, Any p3) /* 0x1DCCACDCFC569362 */
{
	uint64_t val;

	native_init(0x1DCCACDCFC569362);

	*(int*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x1DE0F5F50D723CAA(Any* p0, Any* p1, Any* p2) /* 0x1DE0F5F50D723CAA */
{
	uint64_t val;

	native_init(0x1DE0F5F50D723CAA);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int NETWORK_GET_NUM_RESERVED_MISSION_PEDS(BOOL p0) /* 0x1F13D5AE5CB17E17 */
{
	uint64_t val;

	native_init(0x1F13D5AE5CB17E17);

	*(BOOL*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline int NETWORK__GET_NUM_MEMBERSHIP_DESC() /* 0x1F471B79ACC90BEF */
{
	native_init(0x1F471B79ACC90BEF);
	return *(int*)(native_call());
}

inline void NETWORK_NETWORK_FADE_IN_ENTITY(Entity entity, BOOL state) /* 0x1F4ED342ACEFE62D */
{
	uint64_t val;

	native_init(0x1F4ED342ACEFE62D);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = state;
	native_push(val);

	native_call();
}

inline int NETWORK_NETWORK_GET_FRIEND_COUNT() /* 0x203F1CFD823B27A4 */
{
	native_init(0x203F1CFD823B27A4);
	return *(int*)(native_call());
}

inline float NETWORK_NETWORK_GET_PLAYER_LOUDNESS(Any p0) /* 0x21A1684A25C2867F */
{
	uint64_t val;

	native_init(0x21A1684A25C2867F);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL NETWORK_0x21D04D7BC538C146(Any p0) /* 0x21D04D7BC538C146 */
{
	uint64_t val;

	native_init(0x21D04D7BC538C146);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x2302C0264EA58D31() /* 0x2302C0264EA58D31 */
{
	native_init(0x2302C0264EA58D31);
	native_call();
}

inline void NETWORK_NETWORK_ADD_FOLLOWERS(int* p0, int p1) /* 0x236406F60CF216D6 */
{
	uint64_t val;

	native_init(0x236406F60CF216D6);

	*(int**)(&val) = p0;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x237D5336A9A54108(Any p0) /* 0x237D5336A9A54108 */
{
	uint64_t val;

	native_init(0x237D5336A9A54108);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_SESSION_WAS_INVITED() /* 0x23DFB504655D0CE4 */
{
	native_init(0x23DFB504655D0CE4);
	return *(BOOL*)(native_call());
}

inline void NETWORK_SET_ENTITY_LOCALLY_VISIBLE(Entity entity) /* 0x241E289B5C059EDC */
{
	uint64_t val;

	native_init(0x241E289B5C059EDC);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x24409FC4C55CB22D(Any p0) /* 0x24409FC4C55CB22D */
{
	uint64_t val;

	native_init(0x24409FC4C55CB22D);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any NETWORK_0x24E4E51FC16305F9() /* 0x24E4E51FC16305F9 */
{
	native_init(0x24E4E51FC16305F9);
	return *(Any*)(native_call());
}

inline int NETWORK_NETWORK_GET_PLAYER_INDEX(Player player) /* 0x24FB80D107371267 */
{
	uint64_t val;

	native_init(0x24FB80D107371267);

	*(Player*)(&val) = player;
	native_push(val);

	return *(int*)(native_call());
}

inline Any NETWORK_0x25B99872D588A101(float p0, float p1, float p2, float p3, float p4, float p5) /* 0x25B99872D588A101 */
{
	uint64_t val;

	native_init(0x25B99872D588A101);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_HAVE_ONLINE_PRIVILEGES() /* 0x25CB5A9F37BFD063 */
{
	native_init(0x25CB5A9F37BFD063);
	return *(BOOL*)(native_call());
}

inline void NETWORK_0x25D990F8E0E3F13C() /* 0x25D990F8E0E3F13C */
{
	native_init(0x25D990F8E0E3F13C);
	native_call();
}

inline BOOL NETWORK_NETWORK_ARE_TRANSITION_DETAILS_VALID(Any p0) /* 0x2615AA2A695930C1 */
{
	uint64_t val;

	native_init(0x2615AA2A695930C1);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x261E97AD7BCF3D40(BOOL p0) /* 0x261E97AD7BCF3D40 */
{
	uint64_t val;

	native_init(0x261E97AD7BCF3D40);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK_0x265635150FB0D82E() /* 0x265635150FB0D82E */
{
	native_init(0x265635150FB0D82E);
	native_call();
}

inline void NETWORK_0x267C78C60E806B9A(Any p0, BOOL p1) /* 0x267C78C60E806B9A */
{
	uint64_t val;

	native_init(0x267C78C60E806B9A);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Any NETWORK_NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Any p0) /* 0x26E1CD96B0903D60 */
{
	uint64_t val;

	native_init(0x26E1CD96B0903D60);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any NETWORK_0x26F07DD83A5F7F98() /* 0x26F07DD83A5F7F98 */
{
	native_init(0x26F07DD83A5F7F98);
	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_SESSION_MARK_VISIBLE(BOOL p0) /* 0x271CC6AB59EBF9A5 */
{
	uint64_t val;

	native_init(0x271CC6AB59EBF9A5);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x274A1519DFC1094F(Any* p0, BOOL p1, Any* p2) /* 0x274A1519DFC1094F */
{
	uint64_t val;

	native_init(0x274A1519DFC1094F);

	*(Any**)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(int* networkHandle) /* 0x2763BBAA72A7BCB9 */
{
	uint64_t val;

	native_init(0x2763BBAA72A7BCB9);

	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x283B6062A2C01E9B() /* 0x283B6062A2C01E9B */
{
	native_init(0x283B6062A2C01E9B);
	native_call();
}

inline BOOL NETWORK_NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() /* 0x2910669969E9535E */
{
	native_init(0x2910669969E9535E);
	return *(BOOL*)(native_call());
}

inline Any NETWORK_NETWORK_IS_TRANSITION_MATCHMAKING() /* 0x292564C735375EDF */
{
	native_init(0x292564C735375EDF);
	return *(Any*)(native_call());
}

inline void NETWORK_SET_NETWORK_ID_CAN_MIGRATE(int netId, BOOL toggle) /* 0x299EEB23175895FC */
{
	uint64_t val;

	native_init(0x299EEB23175895FC);

	*(int*)(&val) = netId;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x299EF3C576773506() /* 0x299EF3C576773506 */
{
	native_init(0x299EF3C576773506);
	return *(Any*)(native_call());
}

inline Any NETWORK_0x2A7776C709904AB0(Any p0) /* 0x2A7776C709904AB0 */
{
	uint64_t val;

	native_init(0x2A7776C709904AB0);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK__NETWORK_SET_NETWORK_ID_DYNAMIC(int netID, BOOL toggle) /* 0x2B1813ABA29016C5 */
{
	uint64_t val;

	native_init(0x2B1813ABA29016C5);

	*(int*)(&val) = netID;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void NETWORK_NETWORK_OPEN_TRANSITION_MATCHMAKING() /* 0x2B3A8F7CA3A38FDE */
{
	native_init(0x2B3A8F7CA3A38FDE);
	native_call();
}

inline BOOL NETWORK_0x2B51EDBEFC301339(int p0, const char* p1) /* 0x2B51EDBEFC301339 */
{
	uint64_t val;

	native_init(0x2B51EDBEFC301339);

	*(int*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x2BF66D2E7414F686() /* 0x2BF66D2E7414F686 */
{
	native_init(0x2BF66D2E7414F686);
	return *(Any*)(native_call());
}

inline Any NETWORK_0x2CC848A861D01493() /* 0x2CC848A861D01493 */
{
	native_init(0x2CC848A861D01493);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_SESSION_FRIEND_MATCHMAKING(int p0, int p1, int maxPlayers, BOOL p3) /* 0x2CFC76E0D087C994 */
{
	uint64_t val;

	native_init(0x2CFC76E0D087C994);

	*(int*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = maxPlayers;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x2D5DC831176D0114(Any p0) /* 0x2D5DC831176D0114 */
{
	uint64_t val;

	native_init(0x2D5DC831176D0114);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(int time) /* 0x2D95C7E2D7E07307 */
{
	uint64_t val;

	native_init(0x2D95C7E2D7E07307);

	*(int*)(&val) = time;
	native_push(val);

	native_call();
}

inline Any NETWORK_NETWORK_LAUNCH_TRANSITION() /* 0x2DCF46CB1A4F0884 */
{
	native_init(0x2DCF46CB1A4F0884);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_0x2E0BF682CC778D49(Any p0) /* 0x2E0BF682CC778D49 */
{
	uint64_t val;

	native_init(0x2E0BF682CC778D49);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_FRIEND_IN_SAME_TITLE(const char* friendName) /* 0x2EA9A3BEDF3F17B8 */
{
	uint64_t val;

	native_init(0x2EA9A3BEDF3F17B8);

	*(const char**)(&val) = friendName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x2EAC52B4019E2782() /* 0x2EAC52B4019E2782 */
{
	native_init(0x2EAC52B4019E2782);
	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_SESSION_CANCEL_INVITE() /* 0x2FBF47B1B36D36F9 */
{
	native_init(0x2FBF47B1B36D36F9);
	native_call();
}

inline Any NETWORK_0x2FC5650B0271CB57() /* 0x2FC5650B0271CB57 */
{
	native_init(0x2FC5650B0271CB57);
	return *(Any*)(native_call());
}

inline Any NETWORK_NETWORK_EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible, Player player) /* 0x301A42153C9AD707 */
{
	uint64_t val;

	native_init(0x301A42153C9AD707);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(BOOL*)(&val) = isAudible;
	native_push(val);
	*(BOOL*)(&val) = isInvisible;
	native_push(val);
	*(Player*)(&val) = player;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_OVERRIDE_CHAT_RESTRICTIONS(Player player, BOOL toggle) /* 0x3039AE5AD2C9C0C4 */
{
	uint64_t val;

	native_init(0x3039AE5AD2C9C0C4);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x3054F114121C21EA(Any p0) /* 0x3054F114121C21EA */
{
	uint64_t val;

	native_init(0x3054F114121C21EA);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x308F96458B7087CC(Any* p0, Any p1, Any p2, Any p3, Any* p4, BOOL p5) /* 0x308F96458B7087CC */
{
	uint64_t val;

	native_init(0x308F96458B7087CC);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any**)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_SET_TRANSITION_ACTIVITY_ID(Any p0) /* 0x30DE938B516F0AD2 */
{
	uint64_t val;

	native_init(0x30DE938B516F0AD2);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x3195F8DD0D531052(Any p0, Any p1, Any* p2, Any* p3) /* 0x3195F8DD0D531052 */
{
	uint64_t val;

	native_init(0x3195F8DD0D531052);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(int* networkHandle, const char* p1, int p2, int p3, BOOL p4) /* 0x31D1D2B858D25E6B */
{
	uint64_t val;

	native_init(0x31D1D2B858D25E6B);

	*(int**)(&val) = networkHandle;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x32DD916F3F7C9672(Any p0) /* 0x32DD916F3F7C9672 */
{
	uint64_t val;

	native_init(0x32DD916F3F7C9672);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any NETWORK_NETWORK_SESSION_ENTER(Any p0, Any p1, Any p2, int maxPlayers, Any p4, Any p5) /* 0x330ED4D05491934F */
{
	uint64_t val;

	native_init(0x330ED4D05491934F);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(int*)(&val) = maxPlayers;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(const char* vars, ScrHandle numVars) /* 0x3364AA97340CA215 */
{
	uint64_t val;

	native_init(0x3364AA97340CA215);

	*(const char**)(&val) = vars;
	native_push(val);
	*(ScrHandle*)(&val) = numVars;
	native_push(val);

	native_call();
}

inline void NETWORK_NETWORK_SESSION_LEAVE_SINGLE_PLAYER() /* 0x3442775428FD2DAA */
{
	native_init(0x3442775428FD2DAA);
	native_call();
}

inline const char *NETWORK_TEXTURE_DOWNLOAD_GET_NAME(int p0) /* 0x3448505B6E35262D */
{
	uint64_t val;

	native_init(0x3448505B6E35262D);

	*(int*)(&val) = p0;
	native_push(val);

	return *(const char**)(native_call());
}

inline void NETWORK_NETWORK_BLOCK_INVITES(BOOL toggle) /* 0x34F9E9049454A7A0 */
{
	uint64_t val;

	native_init(0x34F9E9049454A7A0);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x35F0B98A8387274D() /* 0x35F0B98A8387274D */
{
	native_init(0x35F0B98A8387274D);
	return *(Any*)(native_call());
}

inline Any NETWORK_0x36391F397731595D(Any p0) /* 0x36391F397731595D */
{
	uint64_t val;

	native_init(0x36391F397731595D);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline int NETWORK_NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(Any* p0, Any p1, Any p2) /* 0x3658E8CD94FC121A */
{
	uint64_t val;

	native_init(0x3658E8CD94FC121A);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	return *(int*)(native_call());
}

inline Vehicle NETWORK_NET_TO_VEH(int netHandle) /* 0x367B936610BA360C */
{
	uint64_t val;

	native_init(0x367B936610BA360C);

	*(int*)(&val) = netHandle;
	native_push(val);

	return *(Vehicle*)(native_call());
}

inline void NETWORK_0x367EF5E2F439B4C6(int p0) /* 0x367EF5E2F439B4C6 */
{
	uint64_t val;

	native_init(0x367EF5E2F439B4C6);

	*(int*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any NETWORK__GET_CONTENT_FILE_VERSION(Any p0, Any p1) /* 0x37025B27D9B658B1 */
{
	uint64_t val;

	native_init(0x37025B27D9B658B1);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_GET_RESPAWN_RESULT(int randomInt, Vector3* coordinates, float* heading) /* 0x371EA43692861CF1 */
{
	uint64_t val;

	native_init(0x371EA43692861CF1);

	*(int*)(&val) = randomInt;
	native_push(val);
	*(Vector3**)(&val) = coordinates;
	native_push(val);
	*(float**)(&val) = heading;
	native_push(val);

	native_call();
}

inline Any NETWORK__NETWORK_ADD_ENTITY_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6) /* 0x376C6375BA60293A */
{
	uint64_t val;

	native_init(0x376C6375BA60293A);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any NETWORK_0x37A4494483B9F5C9() /* 0x37A4494483B9F5C9 */
{
	native_init(0x37A4494483B9F5C9);
	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_HANDLE_FROM_PLAYER(Player player, int* networkHandle, int bufferSize) /* 0x388EB2B86C73B6B3 */
{
	uint64_t val;

	native_init(0x388EB2B86C73B6B3);

	*(Player*)(&val) = player;
	native_push(val);
	*(int**)(&val) = networkHandle;
	native_push(val);
	*(int*)(&val) = bufferSize;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_DOES_NETWORK_ID_EXIST(int netID) /* 0x38CE16C96BD11344 */
{
	uint64_t val;

	native_init(0x38CE16C96BD11344);

	*(int*)(&val) = netID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_GET_PRESENCE_INVITE_HANDLE(Any p0, Any* p1) /* 0x38D5B0FEBB086F75 */
{
	uint64_t val;

	native_init(0x38D5B0FEBB086F75);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x39917E1B4CB0F911(BOOL p0) /* 0x39917E1B4CB0F911 */
{
	uint64_t val;

	native_init(0x39917E1B4CB0F911);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x3A17A27D75C74887() /* 0x3A17A27D75C74887 */
{
	native_init(0x3A17A27D75C74887);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_SEND_TEXT_MESSAGE(const char* message, int* networkHandle) /* 0x3A214F2EC889B100 */
{
	uint64_t val;

	native_init(0x3A214F2EC889B100);

	*(const char**)(&val) = message;
	native_push(val);
	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Hash NETWORK_0x3A3D5568AF297CD5(Hash p1) /* 0x3A3D5568AF297CD5 */
{
	uint64_t val;

	native_init(0x3A3D5568AF297CD5);

	*(Hash*)(&val) = p1;
	native_push(val);

	return *(Hash*)(native_call());
}

inline BOOL NETWORK_NETWORK_DO_TRANSITION_TO_FREEMODE(Any* p0, Any p1, BOOL p2, int players, BOOL p4) /* 0x3AAD8B2FCA1E289F */
{
	uint64_t val;

	native_init(0x3AAD8B2FCA1E289F);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(int*)(&val) = players;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x3B39236746714134(Any p0) /* 0x3B39236746714134 */
{
	uint64_t val;

	native_init(0x3B39236746714134);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_SET_MISSION_FINISHED() /* 0x3B3D11CD9FFCDFC9 */
{
	native_init(0x3B3D11CD9FFCDFC9);
	native_call();
}

inline void NETWORK_0x3C5C1E2C2FF814B1(BOOL p0) /* 0x3C5C1E2C2FF814B1 */
{
	uint64_t val;

	native_init(0x3C5C1E2C2FF814B1);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x3C891A251567DFCE(Any* p0) /* 0x3C891A251567DFCE */
{
	uint64_t val;

	native_init(0x3C891A251567DFCE);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_PLAYER_A_PARTICIPANT(Player playerId) /* 0x3CA58F6CB7CBD784 */
{
	uint64_t val;

	native_init(0x3CA58F6CB7CBD784);

	*(Player*)(&val) = playerId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x3DBF2DF0AEB7D289(Any p0) /* 0x3DBF2DF0AEB7D289 */
{
	uint64_t val;

	native_init(0x3DBF2DF0AEB7D289);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK__NETWORK_SET_RICH_PRESENCE_2(int p0, const char* gxtLabel) /* 0x3E200C2BCF4164EB */
{
	uint64_t val;

	native_init(0x3E200C2BCF4164EB);

	*(int*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = gxtLabel;
	native_push(val);

	native_call();
}

inline void NETWORK_NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(int* vars, int sizeofVars) /* 0x3E9B2F01C50DF595 */
{
	uint64_t val;

	native_init(0x3E9B2F01C50DF595);

	*(int**)(&val) = vars;
	native_push(val);
	*(int*)(&val) = sizeofVars;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_DO_TRANSITION_TO_GAME(BOOL p0, int maxPlayers) /* 0x3E9BB38102A589B0 */
{
	uint64_t val;

	native_init(0x3E9BB38102A589B0);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = maxPlayers;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x3F52E880AAF6C8CA(BOOL p0) /* 0x3F52E880AAF6C8CA */
{
	uint64_t val;

	native_init(0x3F52E880AAF6C8CA);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x3F9990BF5F22759C(Any* p0) /* 0x3F9990BF5F22759C */
{
	uint64_t val;

	native_init(0x3F9990BF5F22759C);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x3FA36981311FA4FF(int netId, BOOL state) /* 0x3FA36981311FA4FF */
{
	uint64_t val;

	native_init(0x3FA36981311FA4FF);

	*(int*)(&val) = netId;
	native_push(val);
	*(BOOL*)(&val) = state;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_PLAYER_HAS_HEADSET(Player player) /* 0x3FB99A8B08D18FD6 */
{
	uint64_t val;

	native_init(0x3FB99A8B08D18FD6);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x407091CF6037118E(int netID) /* 0x407091CF6037118E */
{
	uint64_t val;

	native_init(0x407091CF6037118E);

	*(int*)(&val) = netID;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x40F7E66472DF3E5C(Any p0, Any p1) /* 0x40F7E66472DF3E5C */
{
	uint64_t val;

	native_init(0x40F7E66472DF3E5C);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK__NETWORK_ACCESS_TUNABLE_INT_HASH(Hash tunableContext, Hash tunableName, int* value) /* 0x40FCE03E50E8DBE8 */
{
	uint64_t val;

	native_init(0x40FCE03E50E8DBE8);

	*(Hash*)(&val) = tunableContext;
	native_push(val);
	*(Hash*)(&val) = tunableName;
	native_push(val);
	*(int**)(&val) = value;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline const char *NETWORK__NETWORK_GET_FRIEND_NAME_FROM_INDEX(int friendIndex) /* 0x4164F227D052E293 */
{
	uint64_t val;

	native_init(0x4164F227D052E293);

	*(int*)(&val) = friendIndex;
	native_push(val);

	return *(const char**)(native_call());
}

inline void NETWORK_FADE_OUT_LOCAL_PLAYER(BOOL p0) /* 0x416DBD4CD6ED8DD2 */
{
	uint64_t val;

	native_init(0x416DBD4CD6ED8DD2);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK_NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(BOOL toggle, Ped playerPed, BOOL p2) /* 0x419594E137637120 */
{
	uint64_t val;

	native_init(0x419594E137637120);

	*(BOOL*)(&val) = toggle;
	native_push(val);
	*(Ped*)(&val) = playerPed;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x422D396F80A96547() /* 0x422D396F80A96547 */
{
	native_init(0x422D396F80A96547);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x422F32CC7E56ABAD(Vehicle vehicle) /* 0x422F32CC7E56ABAD */
{
	uint64_t val;

	native_init(0x422F32CC7E56ABAD);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x4237E822315D8BA9() /* 0x4237E822315D8BA9 */
{
	native_init(0x4237E822315D8BA9);
	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SET_IN_SPECTATOR_MODE(BOOL toggle, Ped playerPed) /* 0x423DE3854BB50894 */
{
	uint64_t val;

	native_init(0x423DE3854BB50894);

	*(BOOL*)(&val) = toggle;
	native_push(val);
	*(Ped*)(&val) = playerPed;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_IS_FRIEND_ONLINE(const char* name) /* 0x425A44533437B64D */
{
	uint64_t val;

	native_init(0x425A44533437B64D);

	*(const char**)(&val) = name;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline const char *NETWORK_NETWORK_GET_GAMERTAG_FROM_HANDLE(int* networkHandle) /* 0x426141162EBE5CDB */
{
	uint64_t val;

	native_init(0x426141162EBE5CDB);

	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(const char**)(native_call());
}

inline Entity NETWORK_NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Player player, Hash* weaponHash) /* 0x42B2DAA6B596F5F8 */
{
	uint64_t val;

	native_init(0x42B2DAA6B596F5F8);

	*(Player*)(&val) = player;
	native_push(val);
	*(Hash**)(&val) = weaponHash;
	native_push(val);

	return *(Entity*)(native_call());
}

inline void NETWORK_NETWORK_REQUEST_CLOUD_TUNABLES() /* 0x42FB3B532D526E6C */
{
	native_init(0x42FB3B532D526E6C);
	native_call();
}

inline BOOL NETWORK__FACEBOOK_IS_AVAILABLE() /* 0x43865688AE10F0D7 */
{
	native_init(0x43865688AE10F0D7);
	return *(BOOL*)(native_call());
}

inline Any NETWORK_NETWORK_CLEAR_FOLLOW_INVITE() /* 0x439BFDE3CD0610F6 */
{
	native_init(0x439BFDE3CD0610F6);
	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_CLOSE_TRANSITION_MATCHMAKING() /* 0x43F4DBA69710E01E */
{
	native_init(0x43F4DBA69710E01E);
	native_call();
}

inline void NETWORK_0x444C4525ECE0A4B9() /* 0x444C4525ECE0A4B9 */
{
	native_init(0x444C4525ECE0A4B9);
	native_call();
}

inline Any NETWORK_0x44B37CDCAE765AAE(Player p0, BOOL* p1) /* 0x44B37CDCAE765AAE */
{
	uint64_t val;

	native_init(0x44B37CDCAE765AAE);

	*(Player*)(&val) = p0;
	native_push(val);
	*(BOOL**)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_0x45A83257ED02D9BC() /* 0x45A83257ED02D9BC */
{
	native_init(0x45A83257ED02D9BC);
	native_call();
}

inline Any NETWORK_0x45E816772E93A9DB() /* 0x45E816772E93A9DB */
{
	native_init(0x45E816772E93A9DB);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_DO_TRANSITION_TO_NEW_GAME(BOOL p0, int maxPlayers, BOOL p2) /* 0x4665F51EFED00034 */
{
	uint64_t val;

	native_init(0x4665F51EFED00034);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = maxPlayers;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_HAS_NETWORK_TIME_STARTED() /* 0x46718ACEEDEAFC84 */
{
	native_init(0x46718ACEEDEAFC84);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_GET_PLAYER_STAT_STARS_VISIBILITY(Player player, int p1, Hash scriptHash) /* 0x46FB3ED415C7641C */
{
	uint64_t val;

	native_init(0x46FB3ED415C7641C);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(Hash*)(&val) = scriptHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(int netScene, Entity entity, int bone) /* 0x478DCBD2A98B705A */
{
	uint64_t val;

	native_init(0x478DCBD2A98B705A);

	*(int*)(&val) = netScene;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = bone;
	native_push(val);

	native_call();
}

inline void NETWORK_0x4811BBAC21C5FCD5(Any p0) /* 0x4811BBAC21C5FCD5 */
{
	uint64_t val;

	native_init(0x4811BBAC21C5FCD5);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK_TEXTURE_DOWNLOAD_RELEASE(int p0) /* 0x487EB90B98E9FB19 */
{
	uint64_t val;

	native_init(0x487EB90B98E9FB19);

	*(int*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_CLAN_GET_MEMBERSHIP_VALID(int* p0, Any p1) /* 0x48A59CF88D43DF0E */
{
	uint64_t val;

	native_init(0x48A59CF88D43DF0E);

	*(int**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_CLAN_GET_MEMBERSHIP_DESC(int* memberDesc, int p1) /* 0x48DE78AF2C8885B8 */
{
	uint64_t val;

	native_init(0x48DE78AF2C8885B8);

	*(int**)(&val) = memberDesc;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline const char *NETWORK_NETWORK_PLAYER_GET_USERID(Player player, const char* userID) /* 0x4927FC39CD0869A0 */
{
	uint64_t val;

	native_init(0x4927FC39CD0869A0);

	*(Player*)(&val) = player;
	native_push(val);
	*(const char**)(&val) = userID;
	native_push(val);

	return *(const char**)(native_call());
}

inline Any NETWORK_NETWORK_ADD_ENTITY_AREA(float p0, float p1, float p2, float p3, float p4, float p5) /* 0x494C8FB299290269 */
{
	uint64_t val;

	native_init(0x494C8FB299290269);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any NETWORK_NETWORK_GET_PRESENCE_INVITE_INVITER(Any p0) /* 0x4962CC4AA2F345B7 */
{
	uint64_t val;

	native_init(0x4962CC4AA2F345B7);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK__NETWORK_SCTV_SLOTS(int p0) /* 0x49EC8030F5015F8B */
{
	uint64_t val;

	native_init(0x49EC8030F5015F8B);

	*(int*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x4A2D4E8BF4265B0F(Any p0) /* 0x4A2D4E8BF4265B0F */
{
	uint64_t val;

	native_init(0x4A2D4E8BF4265B0F);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_INVITE_GAMERS_TO_TRANSITION(Any* p0, Any p1) /* 0x4A595C32F77DFF76 */
{
	uint64_t val;

	native_init(0x4A595C32F77DFF76);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK__NETWORK_BLOCK_INVITES_2(BOOL p0) /* 0x4A9FDE3A5A6D0437 */
{
	uint64_t val;

	native_init(0x4A9FDE3A5A6D0437);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x4BA92A18502BCA61(Player player, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, int flags) /* 0x4BA92A18502BCA61 */
{
	uint64_t val;

	native_init(0x4BA92A18502BCA61);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);
	*(float*)(&val) = p10;
	native_push(val);
	*(int*)(&val) = flags;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x4C61B39930D045DA(Any p0) /* 0x4C61B39930D045DA */
{
	uint64_t val;

	native_init(0x4C61B39930D045DA);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__NETWORK_GET_DESTROYER_OF_ENTITY(Any p0, Any p1, Hash* weaponHash) /* 0x4CACA84440FA26F6 */
{
	uint64_t val;

	native_init(0x4CACA84440FA26F6);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Hash**)(&val) = weaponHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x4D02279C83BE69FE() /* 0x4D02279C83BE69FE */
{
	native_init(0x4D02279C83BE69FE);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_HAS_CONTROL_OF_NETWORK_ID(int netId) /* 0x4D36070FE0215186 */
{
	uint64_t val;

	native_init(0x4D36070FE0215186);

	*(int*)(&val) = netId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_HAS_INVITED_GAMER(Any* p0) /* 0x4D86CD31E8976ECE */
{
	uint64_t val;

	native_init(0x4D86CD31E8976ECE);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x4DF7CFFF471A7FB1(Any p0) /* 0x4DF7CFFF471A7FB1 */
{
	uint64_t val;

	native_init(0x4DF7CFFF471A7FB1);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x4E548C0D7AE39FF9(Any p0, Any p1) /* 0x4E548C0D7AE39FF9 */
{
	uint64_t val;

	native_init(0x4E548C0D7AE39FF9);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_RESERVE_NETWORK_MISSION_OBJECTS(int amount) /* 0x4E5C93BD0C32FBF8 */
{
	uint64_t val;

	native_init(0x4E5C93BD0C32FBF8);

	*(int*)(&val) = amount;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_CAN_SESSION_END() /* 0x4EEBC3694E49C572 */
{
	native_init(0x4EEBC3694E49C572);
	return *(BOOL*)(native_call());
}

inline void NETWORK_CLOUD_CHECK_AVAILABILITY() /* 0x4F18196C8D38768D */
{
	native_init(0x4F18196C8D38768D);
	native_call();
}

inline Any NETWORK_NETWORK_IS_TRANSITION_BUSY() /* 0x520F3282A53D26B7 */
{
	native_init(0x520F3282A53D26B7);
	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_APPLY_TRANSITION_PARAMETER(Any p0, Any p1) /* 0x521638ADA1BA0D18 */
{
	uint64_t val;

	native_init(0x521638ADA1BA0D18);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void NETWORK_0x524FF0AEFF9C3973(Any p0) /* 0x524FF0AEFF9C3973 */
{
	uint64_t val;

	native_init(0x524FF0AEFF9C3973);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x5324A0E3E4CE3570(Any p0, Any p1, Any* p2, Any* p3) /* 0x5324A0E3E4CE3570 */
{
	uint64_t val;

	native_init(0x5324A0E3E4CE3570);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x53AFD64C6758F2F9() /* 0x53AFD64C6758F2F9 */
{
	native_init(0x53AFD64C6758F2F9);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_TRANSITION_STARTED() /* 0x53FA83401D9C07FE */
{
	native_init(0x53FA83401D9C07FE);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_PLAYER_IS_ROCKSTAR_DEV(Player player) /* 0x544ABDDA3B409B6D */
{
	uint64_t val;

	native_init(0x544ABDDA3B409B6D);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x5539C3EBF104A53A(BOOL p0) /* 0x5539C3EBF104A53A */
{
	uint64_t val;

	native_init(0x5539C3EBF104A53A);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline const char *NETWORK__GET_CONTENT_ID(Any p0) /* 0x55AA95F481D694D2 */
{
	uint64_t val;

	native_init(0x55AA95F481D694D2);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(const char**)(native_call());
}

inline BOOL NETWORK__NETWORK_PLAYER_IS_CHEATER(Player player) /* 0x565E430DB3B05BEC */
{
	uint64_t val;

	native_init(0x565E430DB3B05BEC);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int NETWORK__NETWORK_SESSION_GET_UNK(int p0) /* 0x56CE820830EF040B */
{
	uint64_t val;

	native_init(0x56CE820830EF040B);

	*(int*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_FRIEND_IN_MULTIPLAYER(const char* friendName) /* 0x57005C18827F3A28 */
{
	uint64_t val;

	native_init(0x57005C18827F3A28);

	*(const char**)(&val) = friendName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(Any* p0) /* 0x5728BB6D63E3FF1D */
{
	uint64_t val;

	native_init(0x5728BB6D63E3FF1D);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_TEXTURE_DOWNLOAD_HAS_FAILED(int p0) /* 0x5776ED562C134687 */
{
	uint64_t val;

	native_init(0x5776ED562C134687);

	*(int*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__NETWORK_PLAYER_IS_IN_CLAN() /* 0x579CCED0265D4896 */
{
	native_init(0x579CCED0265D4896);
	return *(BOOL*)(native_call());
}

inline int NETWORK_PARTICIPANT_ID_TO_INT() /* 0x57A3BDDAD8E5AA0A */
{
	native_init(0x57A3BDDAD8E5AA0A);
	return *(int*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_PLAYER_BLOCKED_BY_ME(Player player) /* 0x57AF1F8E27483721 */
{
	uint64_t val;

	native_init(0x57AF1F8E27483721);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK__NETWORK_CHAT_MUTE(BOOL p0) /* 0x57B192B4D4AD23D5 */
{
	uint64_t val;

	native_init(0x57B192B4D4AD23D5);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int NETWORK_NETWORK_GET_SCRIPT_STATUS() /* 0x57D158647A6BFABF */
{
	native_init(0x57D158647A6BFABF);
	return *(int*)(native_call());
}

inline BOOL NETWORK_NETWORK_ARE_HANDLES_THE_SAME(int* netHandle1, int* netHandle2) /* 0x57DBA049E110F217 */
{
	uint64_t val;

	native_init(0x57DBA049E110F217);

	*(int**)(&val) = netHandle1;
	native_push(val);
	*(int**)(&val) = netHandle2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_CAN_BAIL() /* 0x580CE4438479CC61 */
{
	native_init(0x580CE4438479CC61);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(Player* player, Any* p1) /* 0x5835D9CD92E83184 */
{
	uint64_t val;

	native_init(0x5835D9CD92E83184);

	*(Player**)(&val) = player;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x584770794D758C18(Any p0, Any* p1) /* 0x584770794D758C18 */
{
	uint64_t val;

	native_init(0x584770794D758C18);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Hash NETWORK__NETWORK_HASH_FROM_GAMER_HANDLE(int* networkHandle) /* 0x58575AC3CF2CA8EC */
{
	uint64_t val;

	native_init(0x58575AC3CF2CA8EC);

	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(Hash*)(native_call());
}

inline void NETWORK_0x58C21165F6545892(const char* p0, const char* p1) /* 0x58C21165F6545892 */
{
	uint64_t val;

	native_init(0x58C21165F6545892);

	*(const char**)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x58CC181719256197(Any p0, Any p1, Any p2) /* 0x58CC181719256197 */
{
	uint64_t val;

	native_init(0x58CC181719256197);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any NETWORK_0x59328EB08C5CEB2B() /* 0x59328EB08C5CEB2B */
{
	native_init(0x59328EB08C5CEB2B);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_0x593570C289A77688() /* 0x593570C289A77688 */
{
	native_init(0x593570C289A77688);
	return *(BOOL*)(native_call());
}

inline void NETWORK_SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME() /* 0x593850C16A36B692 */
{
	native_init(0x593850C16A36B692);
	native_call();
}

inline BOOL NETWORK_0x595F028698072DD9(Any p0, Any p1, BOOL p2) /* 0x595F028698072DD9 */
{
	uint64_t val;

	native_init(0x595F028698072DD9);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x597F8DBA9B206FC7() /* 0x597F8DBA9B206FC7 */
{
	native_init(0x597F8DBA9B206FC7);
	return *(Any*)(native_call());
}

inline int NETWORK_NETWORK_GET_RANDOM_INT() /* 0x599E4FA1F87EB5FF */
{
	native_init(0x599E4FA1F87EB5FF);
	return *(int*)(native_call());
}

inline Any NETWORK_0x59DF79317F85A7E0() /* 0x59DF79317F85A7E0 */
{
	native_init(0x59DF79317F85A7E0);
	return *(Any*)(native_call());
}

inline Any NETWORK_0x5A0A3D1A186A5508() /* 0x5A0A3D1A186A5508 */
{
	native_init(0x5A0A3D1A186A5508);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_0x5A34CD9C3C5BEC44(Any p0) /* 0x5A34CD9C3C5BEC44 */
{
	uint64_t val;

	native_init(0x5A34CD9C3C5BEC44);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x5A6AA44FF8E931E6() /* 0x5A6AA44FF8E931E6 */
{
	native_init(0x5A6AA44FF8E931E6);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x5A6FFA2433E2F14C(Player player, float p1, float p2, float p3, float p4, float p5, float p6, float p7, int flags) /* 0x5A6FFA2433E2F14C */
{
	uint64_t val;

	native_init(0x5A6FFA2433E2F14C);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(int*)(&val) = flags;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x5AE17C6B0134B7F1() /* 0x5AE17C6B0134B7F1 */
{
	native_init(0x5AE17C6B0134B7F1);
	return *(Any*)(native_call());
}

inline Any NETWORK_NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS() /* 0x5B4F04F19376A0BA */
{
	native_init(0x5B4F04F19376A0BA);
	return *(Any*)(native_call());
}

inline void NETWORK_0x5B8ED3DB018927B1(Any p0) /* 0x5B8ED3DB018927B1 */
{
	uint64_t val;

	native_init(0x5B8ED3DB018927B1);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(Any* p0) /* 0x5B9E023DC6EBEDC0 */
{
	uint64_t val;

	native_init(0x5B9E023DC6EBEDC0);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_HAS_CONTROL_OF_PICKUP(Pickup pickup) /* 0x5BC9495F0B3B6FA6 */
{
	uint64_t val;

	native_init(0x5BC9495F0B3B6FA6);

	*(Pickup*)(&val) = pickup;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x5C497525F803486B() /* 0x5C497525F803486B */
{
	native_init(0x5C497525F803486B);
	native_call();
}

inline void NETWORK_0x5C707A667DF8B9FA(BOOL p0, Any p1) /* 0x5C707A667DF8B9FA */
{
	uint64_t val;

	native_init(0x5C707A667DF8B9FA);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x5CAE833B0EE0C500(Any p0) /* 0x5CAE833B0EE0C500 */
{
	uint64_t val;

	native_init(0x5CAE833B0EE0C500);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x5D10B3795F3FC886() /* 0x5D10B3795F3FC886 */
{
	native_init(0x5D10B3795F3FC886);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x5DC577201723960A() /* 0x5DC577201723960A */
{
	native_init(0x5DC577201723960A);
	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x5E0165278F6339EE(Any p0) /* 0x5E0165278F6339EE */
{
	uint64_t val;

	native_init(0x5E0165278F6339EE);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any NETWORK_0x5E24341A7F92A74B() /* 0x5E24341A7F92A74B */
{
	native_init(0x5E24341A7F92A74B);
	return *(Any*)(native_call());
}

inline void NETWORK_0x5E3AA4CA2B6FB0EE(Any p0) /* 0x5E3AA4CA2B6FB0EE */
{
	uint64_t val;

	native_init(0x5E3AA4CA2B6FB0EE);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x5EA784D197556507() /* 0x5EA784D197556507 */
{
	native_init(0x5EA784D197556507);
	return *(Any*)(native_call());
}

inline int NETWORK_NETWORK_GET_TIMEOUT_TIME() /* 0x5ED0356A0CE3A34F */
{
	native_init(0x5ED0356A0CE3A34F);
	return *(int*)(native_call());
}

inline BOOL NETWORK__CAN_PLAY_ONLINE() /* 0x5F91D5D0B36AA310 */
{
	native_init(0x5F91D5D0B36AA310);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__NETWORK_IS_TEXT_CHAT_ACTIVE() /* 0x5FCF4D7069B09026 */
{
	native_init(0x5FCF4D7069B09026);
	return *(BOOL*)(native_call());
}

inline void NETWORK_USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(BOOL toggle) /* 0x5FFE9B4144F9712F */
{
	uint64_t val;

	native_init(0x5FFE9B4144F9712F);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void NETWORK_0x600F8CB31C7AAB6E(Any p0) /* 0x600F8CB31C7AAB6E */
{
	uint64_t val;

	native_init(0x600F8CB31C7AAB6E);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x606E4D3E3CCCF3EB() /* 0x606E4D3E3CCCF3EB */
{
	native_init(0x606E4D3E3CCCF3EB);
	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x60EDD13EB3AC1FF3() /* 0x60EDD13EB3AC1FF3 */
{
	native_init(0x60EDD13EB3AC1FF3);
	return *(Any*)(native_call());
}

inline void NETWORK_0x61A885D3F7CFEE9A() /* 0x61A885D3F7CFEE9A */
{
	native_init(0x61A885D3F7CFEE9A);
	native_call();
}

inline void NETWORK__SET_NETWORK_OBJECT_NON_CONTACT(Object object, BOOL toggle) /* 0x6274C4712850841E */
{
	uint64_t val;

	native_init(0x6274C4712850841E);

	*(Object*)(&val) = object;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x62A0296C1BB1CEB3() /* 0x62A0296C1BB1CEB3 */
{
	native_init(0x62A0296C1BB1CEB3);
	return *(Any*)(native_call());
}

inline BOOL NETWORK__FACEBOOK_IS_SENDING_DATA() /* 0x62B9FEC9A11F10EF */
{
	native_init(0x62B9FEC9A11F10EF);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x631DC5DFF4B110E3(Player index) /* 0x631DC5DFF4B110E3 */
{
	uint64_t val;

	native_init(0x631DC5DFF4B110E3);

	*(Player*)(&val) = index;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int NETWORK__NETWORK_GET_PLAYER_PED_FROM_INDEX() /* 0x638A3A81733086DB */
{
	native_init(0x638A3A81733086DB);
	return *(int*)(native_call());
}

inline Any NETWORK_0x63B406D7884BFA95() /* 0x63B406D7884BFA95 */
{
	native_init(0x63B406D7884BFA95);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_PLAYER_IN_MP_CUTSCENE(Player player) /* 0x63F9EE203C3619F2 */
{
	uint64_t val;

	native_init(0x63F9EE203C3619F2);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x64F62AFB081E260D() /* 0x64F62AFB081E260D */
{
	native_init(0x64F62AFB081E260D);
	native_call();
}

inline BOOL NETWORK_NETWORK_GET_TRANSITION_HOST(int* networkHandle) /* 0x65042B9774C4435E */
{
	uint64_t val;

	native_init(0x65042B9774C4435E);

	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x6512765E3BE78C50() /* 0x6512765E3BE78C50 */
{
	native_init(0x6512765E3BE78C50);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_PLAYER_IS_CHEATER() /* 0x655B91F1495A9090 */
{
	native_init(0x655B91F1495A9090);
	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x662635855957C411(Any p0) /* 0x662635855957C411 */
{
	uint64_t val;

	native_init(0x662635855957C411);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK_0x66B59CFFD78467AF() /* 0x66B59CFFD78467AF */
{
	native_init(0x66B59CFFD78467AF);
	return *(BOOL*)(native_call());
}

inline void NETWORK_0x66F010A4B031A331(Any* p0) /* 0x66F010A4B031A331 */
{
	uint64_t val;

	native_init(0x66F010A4B031A331);

	*(Any**)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_IS_PARTY_MEMBER(int* networkHandle) /* 0x676ED266AADD31E0 */
{
	uint64_t val;

	native_init(0x676ED266AADD31E0);

	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x678BB03C1A3BD51E(Any p0, Any p1, Any p2, Any* p3, Any* p4) /* 0x678BB03C1A3BD51E */
{
	uint64_t val;

	native_init(0x678BB03C1A3BD51E);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);
	*(Any**)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SESSION_VOICE_LEAVE() /* 0x6793E42BE02B575D */
{
	native_init(0x6793E42BE02B575D);
	native_call();
}

inline BOOL NETWORK_0x67A5589628E0CFF6() /* 0x67A5589628E0CFF6 */
{
	native_init(0x67A5589628E0CFF6);
	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x67FC09BC554A75E5() /* 0x67FC09BC554A75E5 */
{
	native_init(0x67FC09BC554A75E5);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_IN_TRANSITION() /* 0x68049AEFF83D8F0A */
{
	native_init(0x68049AEFF83D8F0A);
	return *(BOOL*)(native_call());
}

inline void NETWORK_0x68103E2247887242() /* 0x68103E2247887242 */
{
	native_init(0x68103E2247887242);
	native_call();
}

inline BOOL NETWORK_0x692D58DF40657E8C(Any p0, Any p1, Any p2, Any* p3, Any p4, BOOL p5) /* 0x692D58DF40657E8C */
{
	uint64_t val;

	native_init(0x692D58DF40657E8C);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_CAN_REGISTER_MISSION_ENTITIES(int ped_amt, int vehicle_amt, int object_amt, int pickup_amt) /* 0x69778E7564BADE6D */
{
	uint64_t val;

	native_init(0x69778E7564BADE6D);

	*(int*)(&val) = ped_amt;
	native_push(val);
	*(int*)(&val) = vehicle_amt;
	native_push(val);
	*(int*)(&val) = object_amt;
	native_push(val);
	*(int*)(&val) = pickup_amt;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x6A5D89D7769A40D8(BOOL p0) /* 0x6A5D89D7769A40D8 */
{
	uint64_t val;

	native_init(0x6A5D89D7769A40D8);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK__NETWORK_BLOCK_KICKED_PLAYERS(BOOL p0) /* 0x6B07B9CE4D390375 */
{
	uint64_t val;

	native_init(0x6B07B9CE4D390375);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(int* networkHandle) /* 0x6B5C83BA3EFE6A10 */
{
	uint64_t val;

	native_init(0x6B5C83BA3EFE6A10);

	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x6BFF5F84102DF80A(Any p0) /* 0x6BFF5F84102DF80A */
{
	uint64_t val;

	native_init(0x6BFF5F84102DF80A);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Player NETWORK_NETWORK_GET_PLAYER_INDEX_FROM_PED(Ped ped) /* 0x6C0E2E0125610278 */
{
	uint64_t val;

	native_init(0x6C0E2E0125610278);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Player*)(native_call());
}

inline Any NETWORK_0x6C34F1208B8923FD(Any p0) /* 0x6C34F1208B8923FD */
{
	uint64_t val;

	native_init(0x6C34F1208B8923FD);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_IN_MP_CUTSCENE() /* 0x6CC27C9FA2040220 */
{
	native_init(0x6CC27C9FA2040220);
	return *(BOOL*)(native_call());
}

inline void NETWORK__NETWORK_GET_SERVER_TIME(int* hours, int* minutes, int* seconds) /* 0x6D03BFBD643B2A02 */
{
	uint64_t val;

	native_init(0x6D03BFBD643B2A02);

	*(int**)(&val) = hours;
	native_push(val);
	*(int**)(&val) = minutes;
	native_push(val);
	*(int**)(&val) = seconds;
	native_push(val);

	native_call();
}

inline void NETWORK_NETWORK_CLEAR_FOUND_GAMERS() /* 0x6D14CCEE1B40381A */
{
	native_init(0x6D14CCEE1B40381A);
	native_call();
}

inline BOOL NETWORK_0x6D4CB481FAC835E8(Any p0, Any p1, const char* p2, Any p3) /* 0x6D4CB481FAC835E8 */
{
	uint64_t val;

	native_init(0x6D4CB481FAC835E8);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(int netID) /* 0x6E192E33AD436366 */
{
	uint64_t val;

	native_init(0x6E192E33AD436366);

	*(int*)(&val) = netID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_ADDING_FRIEND() /* 0x6EA101606F6E4D81 */
{
	native_init(0x6EA101606F6E4D81);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_SESSION_HOST(int p0, int maxPlayers, BOOL p2) /* 0x6F3D4ED9BEE4E61D */
{
	uint64_t val;

	native_init(0x6F3D4ED9BEE4E61D);

	*(int*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = maxPlayers;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x6F44CBF56D79FAC0(Any p0, Any p1) /* 0x6F44CBF56D79FAC0 */
{
	uint64_t val;

	native_init(0x6F44CBF56D79FAC0);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_0x6F697A66CE78674E(int team, BOOL toggle) /* 0x6F697A66CE78674E */
{
	uint64_t val;

	native_init(0x6F697A66CE78674E);

	*(int*)(&val) = team;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_IS_HANDLE_VALID(int* networkHandle, int bufferSize) /* 0x6F79B93B0A8E4133 */
{
	uint64_t val;

	native_init(0x6F79B93B0A8E4133);

	*(int**)(&val) = networkHandle;
	native_push(val);
	*(int*)(&val) = bufferSize;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x6FB7BB3607D27FA2() /* 0x6FB7BB3607D27FA2 */
{
	native_init(0x6FB7BB3607D27FA2);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_PARTICIPANT_ACTIVE(int p0) /* 0x6FF8FF40B6357D45 */
{
	uint64_t val;

	native_init(0x6FF8FF40B6357D45);

	*(int*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x702BC4D605522539(Any p0) /* 0x702BC4D605522539 */
{
	uint64_t val;

	native_init(0x702BC4D605522539);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x703F12425ECA8BF5(Any p0) /* 0x703F12425ECA8BF5 */
{
	uint64_t val;

	native_init(0x703F12425ECA8BF5);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_SET_OVERRIDE_SPECTATOR_MODE(BOOL toggle) /* 0x70DA3BF8DACD3210 */
{
	uint64_t val;

	native_init(0x70DA3BF8DACD3210);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x70EA8DA57840F9BE(Any p0) /* 0x70EA8DA57840F9BE */
{
	uint64_t val;

	native_init(0x70EA8DA57840F9BE);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x715135F4B82AC90D(Entity entity) /* 0x715135F4B82AC90D */
{
	uint64_t val;

	native_init(0x715135F4B82AC90D);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_FILLOUT_PM_PLAYER_LIST_WITH_NAMES(Any* p0, Any* p1, Any p2, Any p3) /* 0x716B6DB9D1886106 */
{
	uint64_t val;

	native_init(0x716B6DB9D1886106);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_GAMER_TALKING(int* p0) /* 0x71C33B22606CD88A */
{
	uint64_t val;

	native_init(0x71C33B22606CD88A);

	*(int**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_DO_TRANSITION_QUICKMATCH(Any p0, Any p1, Any p2, Any p3) /* 0x71FB0EBCD4915D56 */
{
	uint64_t val;

	native_init(0x71FB0EBCD4915D56);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) /* 0x7206F674F2A3B1BB */
{
	uint64_t val;

	native_init(0x7206F674F2A3B1BB);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x722F5D28B61C5EA8(Any p0) /* 0x722F5D28B61C5EA8 */
{
	uint64_t val;

	native_init(0x722F5D28B61C5EA8);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_RESET_BODY_TRACKER() /* 0x72433699B4E6DD64 */
{
	native_init(0x72433699B4E6DD64);
	native_call();
}

inline void NETWORK_NETWORK_REMOVE_ALL_TRANSITION_INVITE() /* 0x726E0375C7A26368 */
{
	native_init(0x726E0375C7A26368);
	native_call();
}

inline BOOL NETWORK_CAN_REGISTER_MISSION_VEHICLES(int amount) /* 0x7277F1F2E085EE74 */
{
	uint64_t val;

	native_init(0x7277F1F2E085EE74);

	*(int*)(&val) = amount;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_HAS_INVITED_GAMER_TO_TRANSITION(Any* p0) /* 0x7284A47B3540E6CF */
{
	uint64_t val;

	native_init(0x7284A47B3540E6CF);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x728C4CC7920CD102(Any p0) /* 0x728C4CC7920CD102 */
{
	uint64_t val;

	native_init(0x728C4CC7920CD102);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK__NETWORK_CLAN_ANIMATION(const char* animDict, const char* animName) /* 0x729E3401F0430686 */
{
	uint64_t val;

	native_init(0x729E3401F0430686);

	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x72D0706CD6CCDB58() /* 0x72D0706CD6CCDB58 */
{
	native_init(0x72D0706CD6CCDB58);
	native_call();
}

inline BOOL NETWORK_0x72D918C99BCACC54(Any p0) /* 0x72D918C99BCACC54 */
{
	uint64_t val;

	native_init(0x72D918C99BCACC54);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_UNREGISTER_NETWORKED_ENTITY(Entity entity) /* 0x7368E683BB9038D6 */
{
	uint64_t val;

	native_init(0x7368E683BB9038D6);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline Any NETWORK_NETWORK_GET_TRANSITION_MEMBERS(Any* p0, Any p1) /* 0x73B000F7FBC55829 */
{
	uint64_t val;

	native_init(0x73B000F7FBC55829);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline int NETWORK_NETWORK_GET_ACTIVITY_PLAYER_NUM(BOOL p0) /* 0x73E2B500410DA5A2 */
{
	uint64_t val;

	native_init(0x73E2B500410DA5A2);

	*(BOOL*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline void NETWORK_0x741A3D8380319A81() /* 0x741A3D8380319A81 */
{
	native_init(0x741A3D8380319A81);
	native_call();
}

inline void NETWORK_NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(Ped ped, int netScene, const char* animDict, const char* animName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, Any p9) /* 0x742A637471BCECD9 */
{
	uint64_t val;

	native_init(0x742A637471BCECD9);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = netScene;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(float*)(&val) = speedMultiplier;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);
	*(int*)(&val) = flag;
	native_push(val);
	*(float*)(&val) = playbackRate;
	native_push(val);
	*(Any*)(&val) = p9;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x742B58F723233ED9(Any p0) /* 0x742B58F723233ED9 */
{
	uint64_t val;

	native_init(0x742B58F723233ED9);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK_0x74698374C45701D2() /* 0x74698374C45701D2 */
{
	native_init(0x74698374C45701D2);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_SESSION_IS_CLOSED_CREW() /* 0x74732C6CA90DA2B4 */
{
	native_init(0x74732C6CA90DA2B4);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) /* 0x74881E6BCAE2327C */
{
	uint64_t val;

	native_init(0x74881E6BCAE2327C);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x74FB3E29E6D10FA9() /* 0x74FB3E29E6D10FA9 */
{
	native_init(0x74FB3E29E6D10FA9);
	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SET_ACTIVITY_SPECTATOR(BOOL toggle) /* 0x75138790B4359A74 */
{
	uint64_t val;

	native_init(0x75138790B4359A74);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void NETWORK_NETWORK_REMOVE_TRANSITION_INVITE(Any* p0) /* 0x7524B431B2E6F7EE */
{
	uint64_t val;

	native_init(0x7524B431B2E6F7EE);

	*(Any**)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x7543BB439F63792B(int* clanDesc, int bufferSize) /* 0x7543BB439F63792B */
{
	uint64_t val;

	native_init(0x7543BB439F63792B);

	*(int**)(&val) = clanDesc;
	native_push(val);
	*(int*)(&val) = bufferSize;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x759299C5BB31D2A9(Any p0, Any p1) /* 0x759299C5BB31D2A9 */
{
	uint64_t val;

	native_init(0x759299C5BB31D2A9);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_SET_LOCAL_PLAYER_VISIBLE_LOCALLY(BOOL p0) /* 0x7619364C82D3BF14 */
{
	uint64_t val;

	native_init(0x7619364C82D3BF14);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x769951E2455E2EB5() /* 0x769951E2455E2EB5 */
{
	native_init(0x769951E2455E2EB5);
	return *(Any*)(native_call());
}

inline void NETWORK_RESERVE_NETWORK_MISSION_VEHICLES(int amount) /* 0x76B02E21ED27A469 */
{
	uint64_t val;

	native_init(0x76B02E21ED27A469);

	*(int*)(&val) = amount;
	native_push(val);

	native_call();
}

inline Any* NETWORK_0x76BF03FADBF154F5() /* 0x76BF03FADBF154F5 */
{
	native_init(0x76BF03FADBF154F5);
	return *(Any**)(native_call());
}

inline BOOL NETWORK_NETWORK_HAS_FOLLOW_INVITE() /* 0x76D9B976C4C09FDE */
{
	native_init(0x76D9B976C4C09FDE);
	return *(BOOL*)(native_call());
}

inline const char *NETWORK_NETWORK_PLAYER_GET_NAME(Player player) /* 0x7718D2E2060837D2 */
{
	uint64_t val;

	native_init(0x7718D2E2060837D2);

	*(Player*)(&val) = player;
	native_push(val);

	return *(const char**)(native_call());
}

inline void NETWORK_0x77758139EC9B66C7(BOOL p0) /* 0x77758139EC9B66C7 */
{
	uint64_t val;

	native_init(0x77758139EC9B66C7);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK_0x77FADDCBE3499DF7(Any p0) /* 0x77FADDCBE3499DF7 */
{
	uint64_t val;

	native_init(0x77FADDCBE3499DF7);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x7808619F31FF22DB() /* 0x7808619F31FF22DB */
{
	native_init(0x7808619F31FF22DB);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_0x78321BEA235FD8CD(Any p0, BOOL p1) /* 0x78321BEA235FD8CD */
{
	uint64_t val;

	native_init(0x78321BEA235FD8CD);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x793FF272D5B365F4() /* 0x793FF272D5B365F4 */
{
	native_init(0x793FF272D5B365F4);
	return *(Any*)(native_call());
}

inline BOOL NETWORK__NETWORK_CHECK_DATA_MANAGER_FOR_HANDLE(Any* p0) /* 0x796A87B3B68D1F3D */
{
	uint64_t val;

	native_init(0x796A87B3B68D1F3D);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int NETWORK_NETWORK_GET_DESTROYER_OF_NETWORK_ID(int netId, Hash* weaponHash) /* 0x7A1ADEEF01740A24 */
{
	uint64_t val;

	native_init(0x7A1ADEEF01740A24);

	*(int*)(&val) = netId;
	native_push(val);
	*(Hash**)(&val) = weaponHash;
	native_push(val);

	return *(int*)(native_call());
}

inline int NETWORK_GET_NETWORK_TIME() /* 0x7A5487FE9FAA6B48 */
{
	native_init(0x7A5487FE9FAA6B48);
	return *(int*)(native_call());
}

inline void NETWORK_0x7AC752103856FB20(BOOL p0) /* 0x7AC752103856FB20 */
{
	uint64_t val;

	native_init(0x7AC752103856FB20);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int NETWORK_NETWORK_CREATE_SYNCHRONISED_SCENE(float x, float y, float z, float xRot, float yRot, float zRot, int p6, int p7, int p8, float p9) /* 0x7CD6BC4C2BBDD526 */
{
	uint64_t val;

	native_init(0x7CD6BC4C2BBDD526);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(int*)(&val) = p6;
	native_push(val);
	*(int*)(&val) = p7;
	native_push(val);
	*(int*)(&val) = p8;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);

	return *(int*)(native_call());
}

inline int NETWORK__GET_CONTENT_DESCRIPTION_HASH(Any p0) /* 0x7CF0448787B23758 */
{
	uint64_t val;

	native_init(0x7CF0448787B23758);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline void NETWORK_0x7D395EA61622E116(BOOL p0) /* 0x7D395EA61622E116 */
{
	uint64_t val;

	native_init(0x7D395EA61622E116);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x7DB53B37A2F211A0() /* 0x7DB53B37A2F211A0 */
{
	native_init(0x7DB53B37A2F211A0);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_INACTIVE_PROFILE(Any* p0) /* 0x7E58745504313A2E */
{
	uint64_t val;

	native_init(0x7E58745504313A2E);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_CAN_ENTER_MULTIPLAYER() /* 0x7E782A910C362C25 */
{
	native_init(0x7E782A910C362C25);
	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SET_KEEP_FOCUSPOINT(BOOL p0, Any p1) /* 0x7F8413B7FC2AA6B9 */
{
	uint64_t val;

	native_init(0x7F8413B7FC2AA6B9);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x7FCC39C46C3C03BD(Any p0) /* 0x7FCC39C46C3C03BD */
{
	uint64_t val;

	native_init(0x7FCC39C46C3C03BD);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x7FD2990AF016795E(Any* p0, Any* p1, Any p2, Any p3, Any p4) /* 0x7FD2990AF016795E */
{
	uint64_t val;

	native_init(0x7FD2990AF016795E);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK_CAN_REGISTER_MISSION_OBJECTS(int amount) /* 0x800DD4721A8B008B */
{
	uint64_t val;

	native_init(0x800DD4721A8B008B);

	*(int*)(&val) = amount;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__IS_ROCKSTAR_BANNED() /* 0x8020A73847E0CA7D */
{
	native_init(0x8020A73847E0CA7D);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__HAS_BG_SCRIPT_BEEN_DOWNLOADED() /* 0x8132C0EB8B2B3293 */
{
	native_init(0x8132C0EB8B2B3293);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_SET_BALANCE_ADD_MACHINE(Any* p0, Any* p1) /* 0x815E5E3073DA1D67 */
{
	uint64_t val;

	native_init(0x815E5E3073DA1D67);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x82377B65E943F72D(Any p0) /* 0x82377B65E943F72D */
{
	uint64_t val;

	native_init(0x82377B65E943F72D);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_HOST_OF_THIS_SCRIPT() /* 0x83CD99A1E6061AB5 */
{
	native_init(0x83CD99A1E6061AB5);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x83F28CE49FBBFFBA(Any p0, Any p1, BOOL p2) /* 0x83F28CE49FBBFFBA */
{
	uint64_t val;

	native_init(0x83F28CE49FBBFFBA);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x83FE8D7229593017() /* 0x83FE8D7229593017 */
{
	native_init(0x83FE8D7229593017);
	native_call();
}

inline Any NETWORK_NETWORK_GET_TALKER_PROXIMITY() /* 0x84F0F13120B4E098 */
{
	native_init(0x84F0F13120B4E098);
	return *(Any*)(native_call());
}

inline BOOL NETWORK__NETWORK_ARE_ROS_AVAILABLE() /* 0x85443FF4C328F53B */
{
	native_init(0x85443FF4C328F53B);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x855BC38818F6F684() /* 0x855BC38818F6F684 */
{
	native_init(0x855BC38818F6F684);
	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SHOW_PROFILE_UI(int* networkHandle) /* 0x859ED1CEA343FCA8 */
{
	uint64_t val;

	native_init(0x859ED1CEA343FCA8);

	*(int**)(&val) = networkHandle;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x85A0EF54A500882C(Any* p0) /* 0x85A0EF54A500882C */
{
	uint64_t val;

	native_init(0x85A0EF54A500882C);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_DOES_TUNABLE_EXIST(const char* tunableContext, const char* tunableName) /* 0x85E5F8B9B898B20A */
{
	uint64_t val;

	native_init(0x85E5F8B9B898B20A);

	*(const char**)(&val) = tunableContext;
	native_push(val);
	*(const char**)(&val) = tunableName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x86E0660E4F5C956D() /* 0x86E0660E4F5C956D */
{
	native_init(0x86E0660E4F5C956D);
	native_call();
}

inline BOOL NETWORK_NETWORK_REQUEST_CONTROL_OF_DOOR(int doorID) /* 0x870DDFD5A4A796E4 */
{
	uint64_t val;

	native_init(0x870DDFD5A4A796E4);

	*(int*)(&val) = doorID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x87E5C46C187FE0AE(Any p0, Any p1) /* 0x87E5C46C187FE0AE */
{
	uint64_t val;

	native_init(0x87E5C46C187FE0AE);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK__NETWORK_IS_FRIEND_HANDLE_ONLINE(int* networkHandle) /* 0x87EB7A3FFCB314DB */
{
	uint64_t val;

	native_init(0x87EB7A3FFCB314DB);

	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_AM_I_BLOCKED_BY_PLAYER(Player player) /* 0x87F395D957D4353D */
{
	uint64_t val;

	native_init(0x87F395D957D4353D);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x8806CEBFABD3CE05(Any p0) /* 0x8806CEBFABD3CE05 */
{
	uint64_t val;

	native_init(0x8806CEBFABD3CE05);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x883D79C4071E18B3() /* 0x883D79C4071E18B3 */
{
	native_init(0x883D79C4071E18B3);
	return *(Any*)(native_call());
}

inline Any NETWORK_0x88B588B41FF7868E() /* 0x88B588B41FF7868E */
{
	native_init(0x88B588B41FF7868E);
	return *(Any*)(native_call());
}

inline int NETWORK_0x89023FBBF9200E9F() /* 0x89023FBBF9200E9F */
{
	native_init(0x89023FBBF9200E9F);
	return *(int*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_LOCAL_PLAYER_INVINCIBLE() /* 0x8A8694B48715B000 */
{
	native_init(0x8A8694B48715B000);
	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x8B0C2964BA471961() /* 0x8B0C2964BA471961 */
{
	native_init(0x8B0C2964BA471961);
	return *(Any*)(native_call());
}

inline void NETWORK__NETWORK_SESSION_SET_MAX_PLAYERS(int playerType, int playerCount) /* 0x8B6A4DD0AF9CE215 */
{
	uint64_t val;

	native_init(0x8B6A4DD0AF9CE215);

	*(int*)(&val) = playerType;
	native_push(val);
	*(int*)(&val) = playerCount;
	native_push(val);

	native_call();
}

inline Any NETWORK_0x8BD6C6DEA20E82C6(Any p0) /* 0x8BD6C6DEA20E82C6 */
{
	uint64_t val;

	native_init(0x8BD6C6DEA20E82C6);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_ACCESS_TUNABLE_INT(const char* tunableContext, const char* tunableName, int* value) /* 0x8BE1146DFD5D4468 */
{
	uint64_t val;

	native_init(0x8BE1146DFD5D4468);

	*(const char**)(&val) = tunableContext;
	native_push(val);
	*(const char**)(&val) = tunableName;
	native_push(val);
	*(int**)(&val) = value;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_PLAYER_MUTED_BY_ME(Player player) /* 0x8C71288AE68EDE39 */
{
	uint64_t val;

	native_init(0x8C71288AE68EDE39);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x8C8D2739BA44AF0F(Any p0) /* 0x8C8D2739BA44AF0F */
{
	uint64_t val;

	native_init(0x8C8D2739BA44AF0F);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__NETWORK_IS_NP_AVAILABLE() /* 0x8D11E61A4ABF49CC */
{
	native_init(0x8D11E61A4ABF49CC);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_HOST() /* 0x8DB296B814EDDA07 */
{
	native_init(0x8DB296B814EDDA07);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_CHATTING_IN_PLATFORM_PARTY(int* networkHandle) /* 0x8DE9945BCC9AEC52 */
{
	uint64_t val;

	native_init(0x8DE9945BCC9AEC52);

	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_ADD_FRIEND(int* networkHandle, const char* message) /* 0x8E02D73914064223 */
{
	uint64_t val;

	native_init(0x8E02D73914064223);

	*(int**)(&val) = networkHandle;
	native_push(val);
	*(const char**)(&val) = message;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Player NETWORK_PARTICIPANT_ID() /* 0x90986E8876CE0A83 */
{
	native_init(0x90986E8876CE0A83);
	return *(Player*)(native_call());
}

inline BOOL NETWORK_0x919B3C98ED8292F9(Any p0) /* 0x919B3C98ED8292F9 */
{
	uint64_t val;

	native_init(0x919B3C98ED8292F9);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x91B87C55093DE351() /* 0x91B87C55093DE351 */
{
	native_init(0x91B87C55093DE351);
	return *(Any*)(native_call());
}

inline BOOL NETWORK__NETWORK_REQUEST_CLOUD_BACKGROUND_SCRIPTS() /* 0x924426BFFD82E915 */
{
	native_init(0x924426BFFD82E915);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_REMOVE_ENTITY_AREA(Any p0) /* 0x93CF869BAA0C4874 */
{
	uint64_t val;

	native_init(0x93CF869BAA0C4874);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_PLAYER_CONNECTED(Player player) /* 0x93DC1BE4E1ABE9D1 */
{
	uint64_t val;

	native_init(0x93DC1BE4E1ABE9D1);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x941E5306BCD7C2C7() /* 0x941E5306BCD7C2C7 */
{
	native_init(0x941E5306BCD7C2C7);
	return *(Any*)(native_call());
}

inline void NETWORK_0x94538037EE44F5CF(BOOL p0) /* 0x94538037EE44F5CF */
{
	uint64_t val;

	native_init(0x94538037EE44F5CF);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK_0x9465E683B12D3F6B() /* 0x9465E683B12D3F6B */
{
	native_init(0x9465E683B12D3F6B);
	native_call();
}

inline Any NETWORK_0x94A8394D150B013A() /* 0x94A8394D150B013A */
{
	native_init(0x94A8394D150B013A);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_SESSION_CREW_MATCHMAKING(int p0, int p1, int p2, int maxPlayers, BOOL p4) /* 0x94BC51E9449D917F */
{
	uint64_t val;

	native_init(0x94BC51E9449D917F);

	*(int*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);
	*(int*)(&val) = maxPlayers;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_BAIL() /* 0x95914459A87EBA28 */
{
	native_init(0x95914459A87EBA28);
	native_call();
}

inline Any NETWORK_0x9614B71F8ADB982B() /* 0x9614B71F8ADB982B */
{
	native_init(0x9614B71F8ADB982B);
	return *(Any*)(native_call());
}

inline void NETWORK_SET_STORE_ENABLED(BOOL toggle) /* 0x9641A9FF718E9C5E */
{
	uint64_t val;

	native_init(0x9641A9FF718E9C5E);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_IS_IN_PARTY() /* 0x966C2BC2A7FE3F30 */
{
	native_init(0x966C2BC2A7FE3F30);
	return *(BOOL*)(native_call());
}

inline void NETWORK_0x966DD84FB6A46017() /* 0x966DD84FB6A46017 */
{
	native_init(0x966DD84FB6A46017);
	native_call();
}

inline BOOL NETWORK__NETWORK_ACCESS_TUNABLE_FLOAT_HASH(Hash tunableContext, Hash tunableName, float* value) /* 0x972BC203BBC4C4D5 */
{
	uint64_t val;

	native_init(0x972BC203BBC4C4D5);

	*(Hash*)(&val) = tunableContext;
	native_push(val);
	*(Hash*)(&val) = tunableName;
	native_push(val);
	*(float**)(&val) = value;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0x973D76AA760A6CB6(BOOL p0) /* 0x973D76AA760A6CB6 */
{
	uint64_t val;

	native_init(0x973D76AA760A6CB6);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_IS_MULTIPLAYER_DISABLED() /* 0x9747292807126EDA */
{
	native_init(0x9747292807126EDA);
	return *(BOOL*)(native_call());
}

inline void NETWORK__NETWORK_RESPAWN_COORDS(Player player, float x, float y, float z, BOOL p4, BOOL p5) /* 0x9769F811D1785B03 */
{
	uint64_t val;

	native_init(0x9769F811D1785B03);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x97A770BEEF227E2B(Any p0, Any p1, Any* p2, Any* p3) /* 0x97A770BEEF227E2B */
{
	uint64_t val;

	native_init(0x97A770BEEF227E2B);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK__NETWORK_OVERRIDE_SEND_RESTRICTIONS(Player player, BOOL toggle) /* 0x97DD4C5944CC2E6A */
{
	uint64_t val;

	native_init(0x97DD4C5944CC2E6A);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0x993CBE59D350D225(Any p0) /* 0x993CBE59D350D225 */
{
	uint64_t val;

	native_init(0x993CBE59D350D225);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__NETWORK_COPY_PED_BLEND_DATA(Ped ped, Player player) /* 0x99B72C7ABDE5C910 */
{
	uint64_t val;

	native_init(0x99B72C7ABDE5C910);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int NETWORK_OBJ_TO_NET(Object object) /* 0x99BFDC94A603E541 */
{
	uint64_t val;

	native_init(0x99BFDC94A603E541);

	*(Object*)(&val) = object;
	native_push(val);

	return *(int*)(native_call());
}

inline void NETWORK_NETWORK_START_SYNCHRONISED_SCENE(int netScene) /* 0x9A1B3FCDB36C8697 */
{
	uint64_t val;

	native_init(0x9A1B3FCDB36C8697);

	*(int*)(&val) = netScene;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_IS_CLOUD_AVAILABLE() /* 0x9A4CF4F48AD77302 */
{
	native_init(0x9A4CF4F48AD77302);
	return *(BOOL*)(native_call());
}

inline int NETWORK__GET_POSIX_TIME() /* 0x9A73240B49945C76 */
{
	native_init(0x9A73240B49945C76);
	return *(int*)(native_call());
}

inline Any NETWORK_NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR() /* 0x9AA46BADAD0E27ED */
{
	native_init(0x9AA46BADAD0E27ED);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_HAS_PLAYER_STARTED_TRANSITION(Player player) /* 0x9AC9CCBFA8C29795 */
{
	uint64_t val;

	native_init(0x9AC9CCBFA8C29795);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x9BF438815F5D96EA(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5) /* 0x9BF438815F5D96EA */
{
	uint64_t val;

	native_init(0x9BF438815F5D96EA);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SESSION_VOICE_HOST() /* 0x9C1556705F864230 */
{
	native_init(0x9C1556705F864230);
	native_call();
}

inline BOOL NETWORK_NETWORK_DO_TRANSITION_QUICKMATCH_WITH_GROUP(Any p0, Any p1, Any p2, Any p3, Any* p4, Any p5) /* 0x9C4AB58491FDC98A */
{
	uint64_t val;

	native_init(0x9C4AB58491FDC98A);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any**)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SET_IN_MP_CUTSCENE(BOOL p0, BOOL p1) /* 0x9CA5DE655269FEC4 */
{
	uint64_t val;

	native_init(0x9CA5DE655269FEC4);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_JOIN_TRANSITION(Player player) /* 0x9D060B08CD63321A */
{
	uint64_t val;

	native_init(0x9D060B08CD63321A);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SET_ACTIVITY_SPECTATOR_MAX(int maxSpectators) /* 0x9D277B76D1D12222 */
{
	uint64_t val;

	native_init(0x9D277B76D1D12222);

	*(int*)(&val) = maxSpectators;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_IS_SCRIPT_ACTIVE(const char* scriptName, int instanceId, BOOL unk, int positionHash) /* 0x9D40DF90FAD26098 */
{
	uint64_t val;

	native_init(0x9D40DF90FAD26098);

	*(const char**)(&val) = scriptName;
	native_push(val);
	*(int*)(&val) = instanceId;
	native_push(val);
	*(BOOL*)(&val) = unk;
	native_push(val);
	*(int*)(&val) = positionHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_AM_I_MUTED_BY_PLAYER(Player player) /* 0x9D6981DFC91A8604 */
{
	uint64_t val;

	native_init(0x9D6981DFC91A8604);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_NETWORK_IS_TRANSITION_TO_GAME() /* 0x9D7696D8F4FA6CB7 */
{
	native_init(0x9D7696D8F4FA6CB7);
	return *(Any*)(native_call());
}

inline void NETWORK_0x9D7AFCBF21C51712(BOOL p0) /* 0x9D7AFCBF21C51712 */
{
	uint64_t val;

	native_init(0x9D7AFCBF21C51712);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_INVITE_GAMERS(Any* p0, Any p1, Any* p2, Any* p3) /* 0x9D80CD1D0E6327DE */
{
	uint64_t val;

	native_init(0x9D80CD1D0E6327DE);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_GET_FOUND_GAMER(Any* p0, Any p1) /* 0x9DCFF2AFB68B3476 */
{
	uint64_t val;

	native_init(0x9DCFF2AFB68B3476);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_DISABLE_INVINCIBLE_FLASHING(int player, BOOL p1) /* 0x9DD368BF06983221 */
{
	uint64_t val;

	native_init(0x9DD368BF06983221);

	*(int*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_IS_SESSION_STARTED() /* 0x9DE624D2FC4B603F */
{
	native_init(0x9DE624D2FC4B603F);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__NETWORK_IS_PLAYER_EQUAL_TO_INDEX(Player player, int index) /* 0x9DE986FC9A87C474 */
{
	uint64_t val;

	native_init(0x9DE986FC9A87C474);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = index;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline const char *NETWORK_GET_TIME_AS_STRING(int time) /* 0x9E23B1777A927DAD */
{
	uint64_t val;

	native_init(0x9E23B1777A927DAD);

	*(int*)(&val) = time;
	native_push(val);

	return *(const char**)(native_call());
}

inline BOOL NETWORK_NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(int* networkHandle, Any* p1, int players, BOOL p3, BOOL p4, BOOL p5) /* 0x9E80A5BA8109F974 */
{
	uint64_t val;

	native_init(0x9E80A5BA8109F974);

	*(int**)(&val) = networkHandle;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(int*)(&val) = players;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_GAMERTAG_FROM_HANDLE_START(int* networkHandle) /* 0x9F0C0A981D73FA56 */
{
	uint64_t val;

	native_init(0x9F0C0A981D73FA56);

	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0x9F6E2821885CAEE2(Any p0, Any p1, Any p2, Any* p3, Any* p4) /* 0x9F6E2821885CAEE2 */
{
	uint64_t val;

	native_init(0x9F6E2821885CAEE2);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);
	*(Any**)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_CLAN_JOIN(int clanDesc) /* 0x9FAAA4F4FC71F87F */
{
	uint64_t val;

	native_init(0x9FAAA4F4FC71F87F);

	*(int*)(&val) = clanDesc;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0x9FEDF86898F100E9() /* 0x9FEDF86898F100E9 */
{
	native_init(0x9FEDF86898F100E9);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_SESSION_END(BOOL p0, BOOL p1) /* 0xA02E59562D711006 */
{
	uint64_t val;

	native_init(0xA02E59562D711006);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_NETWORK_JOIN_GROUP_ACTIVITY() /* 0xA06509A691D12BE4 */
{
	native_init(0xA06509A691D12BE4);
	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_SUPPRESS_INVITE(BOOL toggle) /* 0xA0682D67EF1FBA3D */
{
	uint64_t val;

	native_init(0xA0682D67EF1FBA3D);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_DO_TRANSITION_QUICKMATCH_ASYNC(Any p0, Any p1, Any p2, Any p3) /* 0xA091A5E44F0072E5 */
{
	uint64_t val;

	native_init(0xA091A5E44F0072E5);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__IS_SOCIALCLUB_BANNED() /* 0xA0AD7E2AF5349F61 */
{
	native_init(0xA0AD7E2AF5349F61);
	return *(BOOL*)(native_call());
}

inline Any NETWORK_0xA0FA4EC6A05DA44E() /* 0xA0FA4EC6A05DA44E */
{
	native_init(0xA0FA4EC6A05DA44E);
	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_HANDLE_FROM_MEMBER_ID(const char* memberId, int* networkHandle, int bufferSize) /* 0xA0FD21BED61E5C4C */
{
	uint64_t val;

	native_init(0xA0FD21BED61E5C4C);

	*(const char**)(&val) = memberId;
	native_push(val);
	*(int**)(&val) = networkHandle;
	native_push(val);
	*(int*)(&val) = bufferSize;
	native_push(val);

	native_call();
}

inline int NETWORK_NETWORK_GET_NETWORK_ID_FROM_ENTITY(Entity entity) /* 0xA11700682F3AD45C */
{
	uint64_t val;

	native_init(0xA11700682F3AD45C);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL NETWORK_0xA134777FF7F33331(Any p0, Any* p1) /* 0xA134777FF7F33331 */
{
	uint64_t val;

	native_init(0xA134777FF7F33331);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_CAN_COMMUNICATE_WITH_GAMER(int* player) /* 0xA150A4F065806B1F */
{
	uint64_t val;

	native_init(0xA150A4F065806B1F);

	*(int**)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__NETWORK_CAN_NETWORK_ID_BE_SEEN(int netId) /* 0xA1607996431332DF */
{
	uint64_t val;

	native_init(0xA1607996431332DF);

	*(int*)(&val) = netId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int NETWORK_NETWORK_GET_NUM_FOUND_GAMERS() /* 0xA1B043EE79A916FB */
{
	native_init(0xA1B043EE79A916FB);
	return *(int*)(native_call());
}

inline void NETWORK_0xA1E5E0204A6FCC70() /* 0xA1E5E0204A6FCC70 */
{
	native_init(0xA1E5E0204A6FCC70);
	native_call();
}

inline void NETWORK_NETWORK_SESSION_FORCE_CANCEL_INVITE() /* 0xA29177F7703B5644 */
{
	native_init(0xA29177F7703B5644);
	native_call();
}

inline int NETWORK_GET_TIME_DIFFERENCE(int timeA, int timeB) /* 0xA2C6FC031D46FFF0 */
{
	uint64_t val;

	native_init(0xA2C6FC031D46FFF0);

	*(int*)(&val) = timeA;
	native_push(val);
	*(int*)(&val) = timeB;
	native_push(val);

	return *(int*)(native_call());
}

inline void NETWORK_0xA2E9C1AB8A92E8CD(BOOL p0) /* 0xA2E9C1AB8A92E8CD */
{
	uint64_t val;

	native_init(0xA2E9C1AB8A92E8CD);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0xA2F952104FC6DD4B(Any p0) /* 0xA2F952104FC6DD4B */
{
	uint64_t val;

	native_init(0xA2F952104FC6DD4B);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0xA306F470D1660581() /* 0xA306F470D1660581 */
{
	native_init(0xA306F470D1660581);
	return *(Any*)(native_call());
}

inline int NETWORK_NETWORK_GET_NUM_CONNECTED_PLAYERS() /* 0xA4A79DD2D9600654 */
{
	native_init(0xA4A79DD2D9600654);
	return *(int*)(native_call());
}

inline Any NETWORK_NETWORK_HOST_TRANSITION(Any p0, int playerCount, Any p2, Hash jobHash, Any p4, Any p5) /* 0xA60BB5CE242BB254 */
{
	uint64_t val;

	native_init(0xA60BB5CE242BB254);

	*(Any*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = playerCount;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Hash*)(&val) = jobHash;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int netId) /* 0xA670B3662FAFFBD0 */
{
	uint64_t val;

	native_init(0xA670B3662FAFFBD0);

	*(int*)(&val) = netId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(int netId, BOOL p1, BOOL p2) /* 0xA6928482543022B4 */
{
	uint64_t val;

	native_init(0xA6928482543022B4);

	*(int*)(&val) = netId;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_HAS_ROS_PRIVILEGE(int index) /* 0xA699957E60D80214 */
{
	uint64_t val;

	native_init(0xA699957E60D80214);

	*(int*)(&val) = index;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int NETWORK__NETWORK_GET_NUM_PARTICIPANTS_HOST() /* 0xA6C90FBC38E395EE */
{
	native_init(0xA6C90FBC38E395EE);
	return *(int*)(native_call());
}

inline Any NETWORK_0xA72835064DD63E4C() /* 0xA72835064DD63E4C */
{
	native_init(0xA72835064DD63E4C);
	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_SESSION_BLOCK_JOIN_REQUESTS(BOOL toggle) /* 0xA73667484D7037C3 */
{
	uint64_t val;

	native_init(0xA73667484D7037C3);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL NETWORK__FACEBOOK_DO_UNK_CHECK() /* 0xA75E2B6733DA5142 */
{
	native_init(0xA75E2B6733DA5142);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0xA7862BC5ED1DFD7E(Any p0, Any p1, Any* p2, Any* p3) /* 0xA7862BC5ED1DFD7E */
{
	uint64_t val;

	native_init(0xA7862BC5ED1DFD7E);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int NETWORK__GET_CONTENT_CATEGORY(int p0) /* 0xA7BAB11E7C9C6C5A */
{
	uint64_t val;

	native_init(0xA7BAB11E7C9C6C5A);

	*(int*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline void NETWORK_0xA7E30DE9272B6D49(Ped ped, float x, float y, float z, float p4) /* 0xA7E30DE9272B6D49 */
{
	uint64_t val;

	native_init(0xA7E30DE9272B6D49);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void NETWORK__SET_NETWORK_ID_SYNC_TO_PLAYER(int netId, Player player, BOOL toggle) /* 0xA8A024587329F36A */
{
	uint64_t val;

	native_init(0xA8A024587329F36A);

	*(int*)(&val) = netId;
	native_push(val);
	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Any NETWORK_0xA8ACB6459542A8C8() /* 0xA8ACB6459542A8C8 */
{
	native_init(0xA8ACB6459542A8C8);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_0xA9240A96C74CCA13(Any p0) /* 0xA9240A96C74CCA13 */
{
	uint64_t val;

	native_init(0xA9240A96C74CCA13);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(int* networkHandle) /* 0xA989044E70010ABE */
{
	uint64_t val;

	native_init(0xA989044E70010ABE);

	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_ACCESS_TUNABLE_BOOL(const char* tunableContext, const char* tunableName) /* 0xAA6A47A573ABB75A */
{
	uint64_t val;

	native_init(0xAA6A47A573ABB75A);

	*(const char**)(&val) = tunableContext;
	native_push(val);
	*(const char**)(&val) = tunableName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int NETWORK_GET_NUM_RESERVED_MISSION_OBJECTS(BOOL p0) /* 0xAA81B5F10BC43AC2 */
{
	uint64_t val;

	native_init(0xAA81B5F10BC43AC2);

	*(BOOL*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline void NETWORK_0xAAA553E7DD28A457(BOOL p0) /* 0xAAA553E7DD28A457 */
{
	uint64_t val;

	native_init(0xAAA553E7DD28A457);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int NETWORK_NETWORK_CLAN_GET_MEMBERSHIP_COUNT(int* p0) /* 0xAAB11F6C4ADBC2C1 */
{
	uint64_t val;

	native_init(0xAAB11F6C4ADBC2C1);

	*(int**)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline void NETWORK_NETWORK_SESSION_VOICE_CONNECT_TO_PLAYER(Any* p0) /* 0xABD5E88B8A2D3DB2 */
{
	uint64_t val;

	native_init(0xABD5E88B8A2D3DB2);

	*(Any**)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_HAS_PENDING_INVITE() /* 0xAC8C7B9B88C4A668 */
{
	native_init(0xAC8C7B9B88C4A668);
	return *(BOOL*)(native_call());
}

inline void NETWORK__GET_DATE_AND_TIME_FROM_UNIX_EPOCH(int unixEpoch, Any* timeStructure) /* 0xAC97AF97FA68E5D5 */
{
	uint64_t val;

	native_init(0xAC97AF97FA68E5D5);

	*(int*)(&val) = unixEpoch;
	native_push(val);
	*(Any**)(&val) = timeStructure;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_IS_IN_TUTORIAL_SESSION() /* 0xADA24309FE08DACF */
{
	native_init(0xADA24309FE08DACF);
	return *(BOOL*)(native_call());
}

inline void NETWORK_0xADB57E5B663CCA8B(Player p0, float* p1, float* p2) /* 0xADB57E5B663CCA8B */
{
	uint64_t val;

	native_init(0xADB57E5B663CCA8B);

	*(Player*)(&val) = p0;
	native_push(val);
	*(float**)(&val) = p1;
	native_push(val);
	*(float**)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0xAEAB987727C5A8A4(Any p0) /* 0xAEAB987727C5A8A4 */
{
	uint64_t val;

	native_init(0xAEAB987727C5A8A4);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0xAEEF48CDF5B6CE7C(Any p0, Any p1) /* 0xAEEF48CDF5B6CE7C */
{
	uint64_t val;

	native_init(0xAEEF48CDF5B6CE7C);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_CAN_ACCESS_MULTIPLAYER(int* loadingState) /* 0xAF50DA1A3F8B1BA4 */
{
	uint64_t val;

	native_init(0xAF50DA1A3F8B1BA4);

	*(int**)(&val) = loadingState;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_OVERRIDE_TRANSITION_CHAT(BOOL p0) /* 0xAF66059A131AA269 */
{
	uint64_t val;

	native_init(0xAF66059A131AA269);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int NETWORK_NETWORK_GET_MAX_FRIENDS() /* 0xAFEBB0D5D8F687D2 */
{
	native_init(0xAFEBB0D5D8F687D2);
	return *(int*)(native_call());
}

inline BOOL NETWORK_NETWORK_GAMERTAG_FROM_HANDLE_PENDING() /* 0xB071E27958EF4CF0 */
{
	native_init(0xB071E27958EF4CF0);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0xB07D3185E11657A5(Entity p0) /* 0xB07D3185E11657A5 */
{
	uint64_t val;

	native_init(0xB07D3185E11657A5);

	*(Entity*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_CLAN_PLAYER_IS_ACTIVE(int* networkHandle) /* 0xB124B57F571D8F18 */
{
	uint64_t val;

	native_init(0xB124B57F571D8F18);

	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0xB13E88E655E5A3BC() /* 0xB13E88E655E5A3BC */
{
	native_init(0xB13E88E655E5A3BC);
	native_call();
}

inline Any NETWORK_0xB309EBEA797E001F(Any p0) /* 0xB309EBEA797E001F */
{
	uint64_t val;

	native_init(0xB309EBEA797E001F);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any NETWORK_0xB37E4E6A2388CA7B() /* 0xB37E4E6A2388CA7B */
{
	native_init(0xB37E4E6A2388CA7B);
	return *(Any*)(native_call());
}

inline BOOL NETWORK__NETWORK_IS_CLAN_MEMBERSHIP_FINISHED_DOWNLOADING() /* 0xB3F64A6A91432477 */
{
	native_init(0xB3F64A6A91432477);
	return *(BOOL*)(native_call());
}

inline Any NETWORK_0xB4271092CA7EDF48(Any p0) /* 0xB4271092CA7EDF48 */
{
	uint64_t val;

	native_init(0xB4271092CA7EDF48);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_SESSION_CHANGE_SLOTS(int p0, BOOL p1) /* 0xB4AB419E0D86ACAE */
{
	uint64_t val;

	native_init(0xB4AB419E0D86ACAE);

	*(int*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline int NETWORK_VEH_TO_NET(Vehicle vehicle) /* 0xB4C94523F023419C */
{
	uint64_t val;

	native_init(0xB4C94523F023419C);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	return *(int*)(native_call());
}

inline Any NETWORK_NETWORK_GET_PRIMARY_CLAN_DATA_PENDING() /* 0xB5074DB804E28CE7 */
{
	native_init(0xB5074DB804E28CE7);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_0xB57A49545BA53CE7(Any* p0) /* 0xB57A49545BA53CE7 */
{
	uint64_t val;

	native_init(0xB57A49545BA53CE7);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0xB5D3453C98456528() /* 0xB5D3453C98456528 */
{
	native_init(0xB5D3453C98456528);
	return *(Any*)(native_call());
}

inline void NETWORK_0xB606E6CC59664972(Any p0) /* 0xB606E6CC59664972 */
{
	uint64_t val;

	native_init(0xB606E6CC59664972);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK_RESERVE_NETWORK_MISSION_PEDS(int amount) /* 0xB60FEBA45333D36F */
{
	uint64_t val;

	native_init(0xB60FEBA45333D36F);

	*(int*)(&val) = amount;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entity) /* 0xB69317BF5E782347 */
{
	uint64_t val;

	native_init(0xB69317BF5E782347);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0xB746D20B17F2A229(Any* p0, Any* p1) /* 0xB746D20B17F2A229 */
{
	uint64_t val;

	native_init(0xB746D20B17F2A229);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK__NETWORK_UPDATE_PLAYER_SCARS() /* 0xB7C7F6AD6424304B */
{
	native_init(0xB7C7F6AD6424304B);
	native_call();
}

inline BOOL NETWORK_SET_BALANCE_ADD_MACHINES(Any* p0, Any p1, Any* p2) /* 0xB8322EEB38BE7C26 */
{
	uint64_t val;

	native_init(0xB8322EEB38BE7C26);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_PLAYER_ACTIVE(Player player) /* 0xB8DFD30D6973E135 */
{
	uint64_t val;

	native_init(0xB8DFD30D6973E135);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_SESSION_HOST_FRIENDS_ONLY(int p0, int maxPlayers) /* 0xB9CFD27A5D578D83 */
{
	uint64_t val;

	native_init(0xB9CFD27A5D578D83);

	*(int*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = maxPlayers;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_SESSION_IS_VISIBLE() /* 0xBA416D68C631496A */
{
	native_init(0xBA416D68C631496A);
	return *(BOOL*)(native_call());
}

inline void NETWORK_0xBA96394A0EECFA65() /* 0xBA96394A0EECFA65 */
{
	native_init(0xBA96394A0EECFA65);
	native_call();
}

inline Any NETWORK_0xBA9775570DB788CF() /* 0xBA9775570DB788CF */
{
	native_init(0xBA9775570DB788CF);
	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_SET_VOICE_ACTIVE(BOOL toggle) /* 0xBABEC9E69A91C57B */
{
	uint64_t val;

	native_init(0xBABEC9E69A91C57B);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_IS_FRIEND_INDEX_ONLINE(int friendIndex) /* 0xBAD8F2A42B844821 */
{
	uint64_t val;

	native_init(0xBAD8F2A42B844821);

	*(int*)(&val) = friendIndex;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0xBAF6BABF9E7CCC13(int p0, Any* p1) /* 0xBAF6BABF9E7CCC13 */
{
	uint64_t val;

	native_init(0xBAF6BABF9E7CCC13);

	*(int*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_CLAN_REMOTE_MEMBERSHIPS_ARE_IN_CACHE(int* p0) /* 0xBB6E6FEE99D866B2 */
{
	uint64_t val;

	native_init(0xBB6E6FEE99D866B2);

	*(int**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0xBBDF066252829606(Any p0, BOOL p1) /* 0xBBDF066252829606 */
{
	uint64_t val;

	native_init(0xBBDF066252829606);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Hash NETWORK__NETWORK_HASH_FROM_PLAYER_HANDLE(Player player) /* 0xBC1D768F2F5D6C05 */
{
	uint64_t val;

	native_init(0xBC1D768F2F5D6C05);

	*(Player*)(&val) = player;
	native_push(val);

	return *(Hash*)(native_call());
}

inline BOOL NETWORK_CAN_REGISTER_MISSION_PEDS(int amount) /* 0xBCBF4FEF9FA5D781 */
{
	uint64_t val;

	native_init(0xBCBF4FEF9FA5D781);

	*(int*)(&val) = amount;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK__NETWORK_CACHE_LOCAL_PLAYER_HEAD_BLEND_DATA() /* 0xBD0BE0BFC927EAC1 */
{
	native_init(0xBD0BE0BFC927EAC1);
	native_call();
}

inline BOOL NETWORK_0xBD545D44CCE70597() /* 0xBD545D44CCE70597 */
{
	native_init(0xBD545D44CCE70597);
	return *(BOOL*)(native_call());
}

inline Any NETWORK_0xBDB6F89C729CF388() /* 0xBDB6F89C729CF388 */
{
	native_init(0xBDB6F89C729CF388);
	return *(Any*)(native_call());
}

inline Ped NETWORK_NET_TO_PED(int netHandle) /* 0xBDCD95FC216A8B3E */
{
	uint64_t val;

	native_init(0xBDCD95FC216A8B3E);

	*(int*)(&val) = netHandle;
	native_push(val);

	return *(Ped*)(native_call());
}

inline BOOL NETWORK_NETWORK_SESSION_ACTIVITY_QUICKMATCH(Any p0, Any p1, Any p2, Any p3) /* 0xBE3E347A87ACEB82 */
{
	uint64_t val;

	native_init(0xBE3E347A87ACEB82);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0xBF09786A7FCAB582(Any p0) /* 0xBF09786A7FCAB582 */
{
	uint64_t val;

	native_init(0xBF09786A7FCAB582);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK__NETWORK_RESPAWN_PLAYER(Player player, BOOL p1) /* 0xBF22E0F32968E967 */
{
	uint64_t val;

	native_init(0xBF22E0F32968E967);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Entity NETWORK_NET_TO_ENT(int netHandle) /* 0xBFFEAB45A9A9094A */
{
	uint64_t val;

	native_init(0xBFFEAB45A9A9094A);

	*(int*)(&val) = netHandle;
	native_push(val);

	return *(Entity*)(native_call());
}

inline const char *NETWORK__GET_ROOT_CONTENT_ID(Any p0) /* 0xC0173D6BFF4E0348 */
{
	uint64_t val;

	native_init(0xC0173D6BFF4E0348);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(const char**)(native_call());
}

inline BOOL NETWORK__NETWORK_HAS_CONTROL_OF_PAVEMENT_STATS(Hash doorHash) /* 0xC01E93FAC20C3346 */
{
	uint64_t val;

	native_init(0xC01E93FAC20C3346);

	*(Hash*)(&val) = doorHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_GET_PRIMARY_CLAN_DATA_NEW(Any* p0, Any* p1) /* 0xC080FF658B2E41DA */
{
	uint64_t val;

	native_init(0xC080FF658B2E41DA);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0xC0D2AF00BCC234CA() /* 0xC0D2AF00BCC234CA */
{
	native_init(0xC0D2AF00BCC234CA);
	return *(Any*)(native_call());
}

inline BOOL NETWORK__NETWORK_SEND_PRESENCE_TRANSITION_INVITE(Any* p0, Any* p1, Any p2, Any p3) /* 0xC116FF9B4D488291 */
{
	uint64_t val;

	native_init(0xC116FF9B4D488291);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK__NETWORK_SESSION_HOSTED(BOOL p0) /* 0xC19F6C8E7865A6FF */
{
	uint64_t val;

	native_init(0xC19F6C8E7865A6FF);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0xC22912B1D85F26B1(int p0, int* p1, Any* p2) /* 0xC22912B1D85F26B1 */
{
	uint64_t val;

	native_init(0xC22912B1D85F26B1);

	*(int*)(&val) = p0;
	native_push(val);
	*(int**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_STOP_SYNCHRONISED_SCENE(int netScene) /* 0xC254481A4574CB2F */
{
	uint64_t val;

	native_init(0xC254481A4574CB2F);

	*(int*)(&val) = netScene;
	native_push(val);

	native_call();
}

inline void NETWORK_NETWORK_CLEAR_PROPERTY_ID() /* 0xC2B82527CA77053E */
{
	native_init(0xC2B82527CA77053E);
	native_call();
}

inline Any NETWORK_0xC32EA7A2F6CA7557() /* 0xC32EA7A2F6CA7557 */
{
	native_init(0xC32EA7A2F6CA7557);
	return *(Any*)(native_call());
}

inline BOOL NETWORK__NETWORK_SEND_PRESENCE_INVITE(int* networkHandle, Any* p1, Any p2, Any p3) /* 0xC3C7A6AFDB244624 */
{
	uint64_t val;

	native_init(0xC3C7A6AFDB244624);

	*(int**)(&val) = networkHandle;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0xC42DD763159F3461() /* 0xC42DD763159F3461 */
{
	native_init(0xC42DD763159F3461);
	return *(Any*)(native_call());
}

inline void NETWORK_0xC505036A35AFD01B(BOOL p0) /* 0xC505036A35AFD01B */
{
	uint64_t val;

	native_init(0xC505036A35AFD01B);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any NETWORK_0xC55A0B40FFB1ED23() /* 0xC55A0B40FFB1ED23 */
{
	native_init(0xC55A0B40FFB1ED23);
	return *(Any*)(native_call());
}

inline Any NETWORK_0xC571D0E77D8BBC29() /* 0xC571D0E77D8BBC29 */
{
	native_init(0xC571D0E77D8BBC29);
	return *(Any*)(native_call());
}

inline Any NETWORK_0xC64DED7EF0D2FE37(Any* p0) /* 0xC64DED7EF0D2FE37 */
{
	uint64_t val;

	native_init(0xC64DED7EF0D2FE37);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_IS_PLAYER_ANIMATION_DRAWING_SYNCHRONIZED() /* 0xC6F8AB8A4189CF3A */
{
	native_init(0xC6F8AB8A4189CF3A);
	native_call();
}

inline BOOL NETWORK_0xC7397A83F7A2A462(Any* p0, Any p1, BOOL p2, Any* p3) /* 0xC7397A83F7A2A462 */
{
	uint64_t val;

	native_init(0xC7397A83F7A2A462);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__NETWORK_ACCESS_TUNABLE_BOOL_HASH_FAIL_VAL(Hash tunableContext, Hash tunableName, BOOL defaultValue) /* 0xC7420099936CE286 */
{
	uint64_t val;

	native_init(0xC7420099936CE286);

	*(Hash*)(&val) = tunableContext;
	native_push(val);
	*(Hash*)(&val) = tunableName;
	native_push(val);
	*(BOOL*)(&val) = defaultValue;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SESSION_HOST_SINGLE_PLAYER(int p0) /* 0xC74C33FCA52856D5 */
{
	uint64_t val;

	native_init(0xC74C33FCA52856D5);

	*(int*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_GET_ENTITY_IS_NETWORKED(Entity entity) /* 0xC7827959479DCC78 */
{
	uint64_t val;

	native_init(0xC7827959479DCC78);

	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0xC7ABAC5DE675EE3B() /* 0xC7ABAC5DE675EE3B */
{
	native_init(0xC7ABAC5DE675EE3B);
	return *(Any*)(native_call());
}

inline Any NETWORK_NETWORK_GET_HOST_OF_THIS_SCRIPT() /* 0xC7B4D79B01FA7A5C */
{
	native_init(0xC7B4D79B01FA7A5C);
	return *(Any*)(native_call());
}

inline Any NETWORK_0xC7BE335216B5EC7C() /* 0xC7BE335216B5EC7C */
{
	native_init(0xC7BE335216B5EC7C);
	return *(Any*)(native_call());
}

inline const char *NETWORK_NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(int* networkHandle) /* 0xC82630132081BB6F */
{
	uint64_t val;

	native_init(0xC82630132081BB6F);

	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(const char**)(native_call());
}

inline Any NETWORK_0xC87E740D9F3872CC() /* 0xC87E740D9F3872CC */
{
	native_init(0xC87E740D9F3872CC);
	return *(Any*)(native_call());
}

inline Any NETWORK_NETWORK_ACTION_FOLLOW_INVITE() /* 0xC88156EBB786F8D5 */
{
	native_init(0xC88156EBB786F8D5);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_CLAN_GET_MEMBERSHIP(int* p0, int* clanMembership, int p2) /* 0xC8BC2011F67B3411 */
{
	uint64_t val;

	native_init(0xC8BC2011F67B3411);

	*(int**)(&val) = p0;
	native_push(val);
	*(int**)(&val) = clanMembership;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_CAN_SET_WAYPOINT() /* 0xC927EC229934AF60 */
{
	native_init(0xC927EC229934AF60);
	return *(BOOL*)(native_call());
}

inline void NETWORK_0xC9B43A33D09CADA7(Any p0) /* 0xC9B43A33D09CADA7 */
{
	uint64_t val;

	native_init(0xC9B43A33D09CADA7);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK_NETWORK_SET_GAMER_INVITED_TO_TRANSITION(int* networkHandle) /* 0xCA2C8073411ECDB6 */
{
	uint64_t val;

	native_init(0xCA2C8073411ECDB6);

	*(int**)(&val) = networkHandle;
	native_push(val);

	native_call();
}

inline void NETWORK_0xCA575C391FEA25CC(Any p0) /* 0xCA575C391FEA25CC */
{
	uint64_t val;

	native_init(0xCA575C391FEA25CC);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any NETWORK_0xCA94551B50B4932C(Any p0) /* 0xCA94551B50B4932C */
{
	uint64_t val;

	native_init(0xCA94551B50B4932C);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_IN_SESSION() /* 0xCA97246103B63917 */
{
	native_init(0xCA97246103B63917);
	return *(BOOL*)(native_call());
}

inline void NETWORK_0xCAE55F48D3D7875C(Any p0) /* 0xCAE55F48D3D7875C */
{
	uint64_t val;

	native_init(0xCAE55F48D3D7875C);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int NETWORK_0xCB215C4B56A7FAE7(BOOL p0) /* 0xCB215C4B56A7FAE7 */
{
	uint64_t val;

	native_init(0xCB215C4B56A7FAE7);

	*(BOOL*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL NETWORK_IS_TIME_LESS_THAN(int timeA, int timeB) /* 0xCB2CF5148012C8D0 */
{
	uint64_t val;

	native_init(0xCB2CF5148012C8D0);

	*(int*)(&val) = timeA;
	native_push(val);
	*(int*)(&val) = timeB;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_HAS_CONTROL_OF_DOOR(Hash doorHash) /* 0xCB3C68ADB06195DF */
{
	uint64_t val;

	native_init(0xCB3C68ADB06195DF);

	*(Hash*)(&val) = doorHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_FILLOUT_PM_PLAYER_LIST(int* networkHandle, Any p1, Any p2) /* 0xCBBD7C4991B64809 */
{
	uint64_t val;

	native_init(0xCBBD7C4991B64809);

	*(int**)(&val) = networkHandle;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SET_TALKER_PROXIMITY(float p0) /* 0xCBF12D65F95AD686 */
{
	uint64_t val;

	native_init(0xCBF12D65F95AD686);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0xCCA4318E1AB03F1F(Any* p0) /* 0xCCA4318E1AB03F1F */
{
	uint64_t val;

	native_init(0xCCA4318E1AB03F1F);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline const char *NETWORK_GET_PLAYER_ADVANCED_MODIFIER_PRIVILEGES(int p0) /* 0xCD67AD041A394C9C */
{
	uint64_t val;

	native_init(0xCD67AD041A394C9C);

	*(int*)(&val) = p0;
	native_push(val);

	return *(const char**)(native_call());
}

inline void NETWORK_0xCD71A4ECAB22709E(Entity entity) /* 0xCD71A4ECAB22709E */
{
	uint64_t val;

	native_init(0xCD71A4ECAB22709E);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline Entity NETWORK_NETWORK_GET_ENTITY_FROM_NETWORK_ID(int netId) /* 0xCE4E5D9B0A4FF560 */
{
	uint64_t val;

	native_init(0xCE4E5D9B0A4FF560);

	*(int*)(&val) = netId;
	native_push(val);

	return *(Entity*)(native_call());
}

inline Player NETWORK_NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(int* networkHandle) /* 0xCE5F689CF5A0A49D */
{
	uint64_t val;

	native_init(0xCE5F689CF5A0A49D);

	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(Player*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_GAMER_MUTED_BY_ME(int* p0) /* 0xCE60DE011B6C7978 */
{
	uint64_t val;

	native_init(0xCE60DE011B6C7978);

	*(int**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_GET_PRIMARY_CLAN_DATA_START(Any* p0, Any p1) /* 0xCE86D8191B762107 */
{
	uint64_t val;

	native_init(0xCE86D8191B762107);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_SESSION_IS_PRIVATE() /* 0xCEF70AA5B3F89BA1 */
{
	native_init(0xCEF70AA5B3F89BA1);
	return *(BOOL*)(native_call());
}

inline int NETWORK_NETWORK_GET_NUM_PRESENCE_INVITES() /* 0xCEFA968912D0F78D */
{
	native_init(0xCEFA968912D0F78D);
	return *(int*)(native_call());
}

inline int NETWORK_GET_NUM_RESERVED_MISSION_VEHICLES(BOOL p0) /* 0xCF3A965906452031 */
{
	uint64_t val;

	native_init(0xCF3A965906452031);

	*(BOOL*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline int NETWORK_0xCF61D4B4702EE9EB() /* 0xCF61D4B4702EE9EB */
{
	native_init(0xCF61D4B4702EE9EB);
	return *(int*)(native_call());
}

inline void NETWORK__NETWORK_FORCE_LOCAL_USE_OF_SYNCED_SCENE_CAMERA(int netScene, const char* animDict, const char* animName) /* 0xCF8BD3B0BD6D42D7 */
{
	uint64_t val;

	native_init(0xCF8BD3B0BD6D42D7);

	*(int*)(&val) = netScene;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);

	native_call();
}

inline void NETWORK_0xCFD115B373C0DF63(Any p0, Any* p1) /* 0xCFD115B373C0DF63 */
{
	uint64_t val;

	native_init(0xCFD115B373C0DF63);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	native_call();
}

inline void NETWORK_0xCFEB46DCD7D8D5EB(BOOL p0) /* 0xCFEB46DCD7D8D5EB */
{
	uint64_t val;

	native_init(0xCFEB46DCD7D8D5EB);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK_0xCFEB8AF24FC1D0BB(BOOL p0) /* 0xCFEB8AF24FC1D0BB */
{
	uint64_t val;

	native_init(0xCFEB8AF24FC1D0BB);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0xD05D1A6C74DA3498(Any* p0, BOOL p1, Any* p2) /* 0xD05D1A6C74DA3498 */
{
	uint64_t val;

	native_init(0xD05D1A6C74DA3498);

	*(Any**)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0xD0A484CB2F829FBE() /* 0xD0A484CB2F829FBE */
{
	native_init(0xD0A484CB2F829FBE);
	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_END_TUTORIAL_SESSION() /* 0xD0AFAFF5A51D72F7 */
{
	native_init(0xD0AFAFF5A51D72F7);
	native_call();
}

inline void NETWORK_SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(BOOL p0, BOOL p1) /* 0xD1065D68947E7B6E */
{
	uint64_t val;

	native_init(0xD1065D68947E7B6E);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL NETWORK__NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT_2(int numPlayers, BOOL p1, int instanceId) /* 0xD1110739EEADB592 */
{
	uint64_t val;

	native_init(0xD1110739EEADB592);

	*(int*)(&val) = numPlayers;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = instanceId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_NETWORK_LEAVE_TRANSITION() /* 0xD23A1A815D21DB19 */
{
	native_init(0xD23A1A815D21DB19);
	return *(Any*)(native_call());
}

inline Any NETWORK_0xD313DE83394AF134() /* 0xD313DE83394AF134 */
{
	native_init(0xD313DE83394AF134);
	return *(Any*)(native_call());
}

inline Any NETWORK_0xD38C4A6D047C019D() /* 0xD38C4A6D047C019D */
{
	native_init(0xD38C4A6D047C019D);
	return *(Any*)(native_call());
}

inline Any NETWORK_0xD39B3FFF8FFDD5BF(Any p0) /* 0xD39B3FFF8FFDD5BF */
{
	uint64_t val;

	native_init(0xD39B3FFF8FFDD5BF);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int netID, BOOL p1) /* 0xD45B1FFCCD52FF19 */
{
	uint64_t val;

	native_init(0xD45B1FFCCD52FF19);

	*(int*)(&val) = netID;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void NETWORK_NETWORK_HANDLE_FROM_FRIEND(Player friendIndex, int* networkHandle, int bufferSize) /* 0xD45CB817D7E177D2 */
{
	uint64_t val;

	native_init(0xD45CB817D7E177D2);

	*(Player*)(&val) = friendIndex;
	native_push(val);
	*(int**)(&val) = networkHandle;
	native_push(val);
	*(int*)(&val) = bufferSize;
	native_push(val);

	native_call();
}

inline Any NETWORK_0xD53ACDBEF24A46E8() /* 0xD53ACDBEF24A46E8 */
{
	native_init(0xD53ACDBEF24A46E8);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_0xD5A4B59980401588(Any p0, Any p1, Any* p2, Any* p3) /* 0xD5A4B59980401588 */
{
	uint64_t val;

	native_init(0xD5A4B59980401588);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SET_TEAM_ONLY_CHAT(BOOL toggle) /* 0xD5B4883AC32F24C3 */
{
	uint64_t val;

	native_init(0xD5B4883AC32F24C3);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int NETWORK_0xD66C9E72B3CC4982(Any* p0, Any p1) /* 0xD66C9E72B3CC4982 */
{
	uint64_t val;

	native_init(0xD66C9E72B3CC4982);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL NETWORK__NETWORK_SESSION_IS_PLAYER_VOTED_TO_KICK(Player player) /* 0xD6D09A6F32F49EF1 */
{
	uint64_t val;

	native_init(0xD6D09A6F32F49EF1);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_CLOCK_TIME_OVERRIDDEN() /* 0xD7C95D322FF57522 */
{
	native_init(0xD7C95D322FF57522);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float p0, float p1, float p2, float p3) /* 0xD82CF8E64C8729D8 */
{
	uint64_t val;

	native_init(0xD82CF8E64C8729D8);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SET_ENTITY_CAN_BLEND(Entity entity, BOOL toggle) /* 0xD830567D88A1E873 */
{
	uint64_t val;

	native_init(0xD830567D88A1E873);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_IS_SESSION_ACTIVE() /* 0xD83C2B94E7508980 */
{
	native_init(0xD83C2B94E7508980);
	return *(BOOL*)(native_call());
}

inline Object NETWORK_NET_TO_OBJ(int netHandle) /* 0xD8515F5FEA14CB3F */
{
	uint64_t val;

	native_init(0xD8515F5FEA14CB3F);

	*(int*)(&val) = netHandle;
	native_push(val);

	return *(Object*)(native_call());
}

inline void NETWORK_NETWORK_CLEAR_CLOCK_TIME_OVERRIDE() /* 0xD972DF67326F966E */
{
	native_init(0xD972DF67326F966E);
	native_call();
}

inline BOOL NETWORK_IS_NETWORK_VEHICLE_BEEN_DAMAGED_BY_ANY_OBJECT(float x, float y, float z) /* 0xDBD2056652689917 */
{
	uint64_t val;

	native_init(0xDBD2056652689917);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_IS_SPHERE_VISIBLE_TO_PLAYER(Player player, float x, float y, float z, float scale) /* 0xDC3A310219E5DA62 */
{
	uint64_t val;

	native_init(0xDC3A310219E5DA62);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK__FACEBOOK_SET_CREATE_CHARACTER_COMPLETE() /* 0xDC48473142545431 */
{
	native_init(0xDC48473142545431);
	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_HANDLE_FROM_USER_ID(const char* userId, int* networkHandle, int bufferSize) /* 0xDCD51DD8F87AEC5C */
{
	uint64_t val;

	native_init(0xDCD51DD8F87AEC5C);

	*(const char**)(&val) = userId;
	native_push(val);
	*(int**)(&val) = networkHandle;
	native_push(val);
	*(int*)(&val) = bufferSize;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_IS_FINDING_GAMERS() /* 0xDDDF64C91BFCF0AA */
{
	native_init(0xDDDF64C91BFCF0AA);
	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS(Player player, BOOL toggle) /* 0xDDF73E2B1FEC5AB4 */
{
	uint64_t val;

	native_init(0xDDF73E2B1FEC5AB4);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_IS_TIME_MORE_THAN(int timeA, int timeB) /* 0xDE350F8651E4346C */
{
	uint64_t val;

	native_init(0xDE350F8651E4346C);

	*(int*)(&val) = timeA;
	native_push(val);
	*(int*)(&val) = timeB;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_FADE_OUT_ENTITY(Entity entity, BOOL normal, BOOL slow) /* 0xDE564951F95E09ED */
{
	uint64_t val;

	native_init(0xDE564951F95E09ED);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = normal;
	native_push(val);
	*(BOOL*)(&val) = slow;
	native_push(val);

	native_call();
}

inline Any NETWORK_0xDEB2B99A1AF1A2A6(Any p0) /* 0xDEB2B99A1AF1A2A6 */
{
	uint64_t val;

	native_init(0xDEB2B99A1AF1A2A6);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_AM_I_MUTED_BY_GAMER(Any* p0) /* 0xDF02A2C93F1F26DA */
{
	uint64_t val;

	native_init(0xDF02A2C93F1F26DA);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_NETWORK_GET_PRESENCE_INVITE_ID(Any p0) /* 0xDFF09646E12EC386 */
{
	uint64_t val;

	native_init(0xDFF09646E12EC386);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_SET_ENTITY_VISIBLE_IN_CUTSCENE(Any p0, BOOL p1, BOOL p2) /* 0xE0031D3C8F36AB82 */
{
	uint64_t val;

	native_init(0xE0031D3C8F36AB82);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORK_NETWORK_CLEAR_VOICE_CHANNEL() /* 0xE036A705F989E049 */
{
	native_init(0xE036A705F989E049);
	native_call();
}

inline void NETWORK_SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int netId, BOOL toggle) /* 0xE05E81A888FA63C8 */
{
	uint64_t val;

	native_init(0xE05E81A888FA63C8);

	*(int*)(&val) = netId;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Any NETWORK_0xE0A6138401BCB837() /* 0xE0A6138401BCB837 */
{
	native_init(0xE0A6138401BCB837);
	return *(Any*)(native_call());
}

inline const char *NETWORK_NETWORK_GET_FRIEND_NAME(int friendIndex) /* 0xE11EBBB2A783FE8B */
{
	uint64_t val;

	native_init(0xE11EBBB2A783FE8B);

	*(int*)(&val) = friendIndex;
	native_push(val);

	return *(const char**)(native_call());
}

inline void NETWORK_SET_ENTITY_LOCALLY_INVISIBLE(Entity entity) /* 0xE135A9FF3F5D05D8 */
{
	uint64_t val;

	native_init(0xE135A9FF3F5D05D8);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_USING_NETWORK_WEAPONTYPE(Any p0) /* 0xE26CCFF8094D8C74 */
{
	uint64_t val;

	native_init(0xE26CCFF8094D8C74);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int NETWORK__NETWORK_GET_RANDOM_INT_IN_RANGE(int rangeStart, int rangeEnd) /* 0xE30CF56F1EFA5F43 */
{
	uint64_t val;

	native_init(0xE30CF56F1EFA5F43);

	*(int*)(&val) = rangeStart;
	native_push(val);
	*(int*)(&val) = rangeEnd;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL NETWORK__NETWORK_DOES_TUNABLE_EXIST_HASH(Hash tunableContext, Hash tunableName) /* 0xE4E53E1419D81127 */
{
	uint64_t val;

	native_init(0xE4E53E1419D81127);

	*(Hash*)(&val) = tunableContext;
	native_push(val);
	*(Hash*)(&val) = tunableName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_X_AFFECTS_GAMERS(Any p0) /* 0xE532D6811B3A4D2A */
{
	uint64_t val;

	native_init(0xE532D6811B3A4D2A);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_ACCESS_TUNABLE_FLOAT(const char* tunableContext, const char* tunableName, float* value) /* 0xE5608CA7BC163A5F */
{
	uint64_t val;

	native_init(0xE5608CA7BC163A5F);

	*(const char**)(&val) = tunableContext;
	native_push(val);
	*(const char**)(&val) = tunableName;
	native_push(val);
	*(float**)(&val) = value;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SESSION_GET_INVITER(int* networkHandle) /* 0xE57397B4A3429DD0 */
{
	uint64_t val;

	native_init(0xE57397B4A3429DD0);

	*(int**)(&val) = networkHandle;
	native_push(val);

	native_call();
}

inline void NETWORK_SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(BOOL p0) /* 0xE5F773C1A1D9D168 */
{
	uint64_t val;

	native_init(0xE5F773C1A1D9D168);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0xE64A3CA08DFA37A9(Any p0) /* 0xE64A3CA08DFA37A9 */
{
	uint64_t val;

	native_init(0xE64A3CA08DFA37A9);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0xE66C690248F11150(Entity p0, Any p1) /* 0xE66C690248F11150 */
{
	uint64_t val;

	native_init(0xE66C690248F11150);

	*(Entity*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void NETWORK_NETWORK_OVERRIDE_CLOCK_TIME(int Hours, int Minutes, int Seconds) /* 0xE679E3E06E363892 */
{
	uint64_t val;

	native_init(0xE679E3E06E363892);

	*(int*)(&val) = Hours;
	native_push(val);
	*(int*)(&val) = Minutes;
	native_push(val);
	*(int*)(&val) = Seconds;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_IS_PLAYER_IN_CUTSCENE(Player player) /* 0xE73092F4157CD126 */
{
	uint64_t val;

	native_init(0xE73092F4157CD126);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_GET_LOCAL_HANDLE(int* networkHandle, int bufferSize) /* 0xE86051786B66CD8E */
{
	uint64_t val;

	native_init(0xE86051786B66CD8E);

	*(int**)(&val) = networkHandle;
	native_push(val);
	*(int*)(&val) = bufferSize;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_HAS_HEADSET() /* 0xE870F9F1F7B4F1FA */
{
	native_init(0xE870F9F1F7B4F1FA);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_GAMER_BLOCKED_BY_ME(Any* p0) /* 0xE944C4F5AF1B5883 */
{
	uint64_t val;

	native_init(0xE944C4F5AF1B5883);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0xE9B99B6853181409() /* 0xE9B99B6853181409 */
{
	native_init(0xE9B99B6853181409);
	native_call();
}

inline Any NETWORK_0xEA14EEF5B7CD2C30() /* 0xEA14EEF5B7CD2C30 */
{
	native_init(0xEA14EEF5B7CD2C30);
	return *(Any*)(native_call());
}

inline BOOL NETWORK__NETWORK_ACCESS_TUNABLE_BOOL_HASH(Hash tunableContext, Hash tunableName) /* 0xEA16B69D93D71A45 */
{
	uint64_t val;

	native_init(0xEA16B69D93D71A45);

	*(Hash*)(&val) = tunableContext;
	native_push(val);
	*(Hash*)(&val) = tunableName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_RESURRECT_LOCAL_PLAYER(float x, float y, float z, float heading, BOOL unk, BOOL changetime) /* 0xEA23C49EAA83ACFB */
{
	uint64_t val;

	native_init(0xEA23C49EAA83ACFB);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);
	*(BOOL*)(&val) = unk;
	native_push(val);
	*(BOOL*)(&val) = changetime;
	native_push(val);

	native_call();
}

inline void NETWORK_NETWORK_BAIL_TRANSITION() /* 0xEAA572036990CD1B */
{
	native_init(0xEAA572036990CD1B);
	native_call();
}

inline BOOL NETWORK_0xEBCAB9E5048434F4() /* 0xEBCAB9E5048434F4 */
{
	native_init(0xEBCAB9E5048434F4);
	return *(BOOL*)(native_call());
}

inline void NETWORK_0xEBEFC2E77084F599(Any p0, const char* p1, BOOL p2) /* 0xEBEFC2E77084F599 */
{
	uint64_t val;

	native_init(0xEBEFC2E77084F599);

	*(Any*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORK_0xEBF8284D8CADEB53() /* 0xEBF8284D8CADEB53 */
{
	native_init(0xEBF8284D8CADEB53);
	native_call();
}

inline BOOL NETWORK_0xEBFA8D50ADDC54C4(Any p0) /* 0xEBFA8D50ADDC54C4 */
{
	uint64_t val;

	native_init(0xEBFA8D50ADDC54C4);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_SET_NETWORK_VEHICLE_RESPOT_TIMER(int netId, int time) /* 0xEC51713AB6EC36E8 */
{
	uint64_t val;

	native_init(0xEC51713AB6EC36E8);

	*(int*)(&val) = netId;
	native_push(val);
	*(int*)(&val) = time;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_BAD_SPORT_PLAYER_LEFT_DETECTED(int* networkHandle, int p1, int p2) /* 0xEC5E3AF5289DCA81 */
{
	uint64_t val;

	native_init(0xEC5E3AF5289DCA81);

	*(int**)(&val) = networkHandle;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_SESSION_HOST_CLOSED(int p0, int maxPlayers) /* 0xED34C0C02C098BB7 */
{
	uint64_t val;

	native_init(0xED34C0C02C098BB7);

	*(int*)(&val) = p0;
	native_push(val);
	*(int*)(&val) = maxPlayers;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any NETWORK_0xEDF7F927136C224B() /* 0xEDF7F927136C224B */
{
	native_init(0xEDF7F927136C224B);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_CLAN_PLAYER_GET_DESC(int* clanDesc, int bufferSize, int* networkHandle) /* 0xEEE6EACBE8874FBA */
{
	uint64_t val;

	native_init(0xEEE6EACBE8874FBA);

	*(int**)(&val) = clanDesc;
	native_push(val);
	*(int*)(&val) = bufferSize;
	native_push(val);
	*(int**)(&val) = networkHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_CHANGE_TRANSITION_SLOTS(Any p0, Any p1) /* 0xEEEDA5E6D7080987 */
{
	uint64_t val;

	native_init(0xEEEDA5E6D7080987);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0xEF0912DDF7C4CB4B() /* 0xEF0912DDF7C4CB4B */
{
	native_init(0xEF0912DDF7C4CB4B);
	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SET_TRANSITION_CREATOR_HANDLE(Any* p0) /* 0xEF26739BCD9907D5 */
{
	uint64_t val;

	native_init(0xEF26739BCD9907D5);

	*(Any**)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK_NETWORK_SET_VOICE_CHANNEL(Any p0) /* 0xEF6212C2EFEF1A23 */
{
	uint64_t val;

	native_init(0xEF6212C2EFEF1A23);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_IS_CABLE_CONNECTED() /* 0xEFFB25453D8600F9 */
{
	native_init(0xEFFB25453D8600F9);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_REMOVE_PRESENCE_INVITE(Any p0) /* 0xF0210268DB0974B1 */
{
	uint64_t val;

	native_init(0xF0210268DB0974B1);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0xF03755696450470C() /* 0xF03755696450470C */
{
	native_init(0xF03755696450470C);
	native_call();
}

inline void NETWORK_0xF083835B70BA9BFE() /* 0xF083835B70BA9BFE */
{
	native_init(0xF083835B70BA9BFE);
	native_call();
}

inline void NETWORK_0xF1B84178F8674195(Any p0) /* 0xF1B84178F8674195 */
{
	uint64_t val;

	native_init(0xF1B84178F8674195);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK__NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(Entity entity, BOOL toggle) /* 0xF1CA12B18AEF5298 */
{
	uint64_t val;

	native_init(0xF1CA12B18AEF5298);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void NETWORK_0xF1EEA2DDA9FFA69D(Any p0) /* 0xF1EEA2DDA9FFA69D */
{
	uint64_t val;

	native_init(0xF1EEA2DDA9FFA69D);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK_NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Entity entity, int netScene, const char* animDict, const char* animName, float speed, float speedMulitiplier, int flag) /* 0xF2404D68CBC855FA */
{
	uint64_t val;

	native_init(0xF2404D68CBC855FA);

	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = netScene;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(float*)(&val) = speedMulitiplier;
	native_push(val);
	*(int*)(&val) = flag;
	native_push(val);

	native_call();
}

inline Any NETWORK_0xF2EAC213D5EA0623() /* 0xF2EAC213D5EA0623 */
{
	native_init(0xF2EAC213D5EA0623);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_GAMER_HAS_HEADSET(Any* p0) /* 0xF2FD55CB574BCC55 */
{
	uint64_t val;

	native_init(0xF2FD55CB574BCC55);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_SESSION_IS_SOLO() /* 0xF3929C2379B60CCE */
{
	native_init(0xF3929C2379B60CCE);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_IS_SESSION_BUSY() /* 0xF4435D66A8E2905E */
{
	native_init(0xF4435D66A8E2905E);
	return *(BOOL*)(native_call());
}

inline void NETWORK_0xF45352426FF3A4F0(int* clanDesc, int bufferSize, int* networkHandle) /* 0xF45352426FF3A4F0 */
{
	uint64_t val;

	native_init(0xF45352426FF3A4F0);

	*(int**)(&val) = clanDesc;
	native_push(val);
	*(int*)(&val) = bufferSize;
	native_push(val);
	*(int**)(&val) = networkHandle;
	native_push(val);

	native_call();
}

inline void NETWORK_0xF46A1E03E8755980(BOOL p0) /* 0xF46A1E03E8755980 */
{
	uint64_t val;

	native_init(0xF46A1E03E8755980);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void NETWORK_0xF49ABC20D8552257(Any p0) /* 0xF49ABC20D8552257 */
{
	uint64_t val;

	native_init(0xF49ABC20D8552257);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0xF53E48461B71EECB(Any p0) /* 0xF53E48461B71EECB */
{
	uint64_t val;

	native_init(0xF53E48461B71EECB);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_IS_TIME_EQUAL_TO(int timeA, int timeB) /* 0xF5BC95857BD6D512 */
{
	uint64_t val;

	native_init(0xF5BC95857BD6D512);

	*(int*)(&val) = timeA;
	native_push(val);
	*(int*)(&val) = timeB;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_NETWORK_FIND_MATCHED_GAMERS(int attribute, float p1, float lowerLimit, float upperLimit) /* 0xF7B2CFDE5C9F700D */
{
	uint64_t val;

	native_init(0xF7B2CFDE5C9F700D);

	*(int*)(&val) = attribute;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = lowerLimit;
	native_push(val);
	*(float*)(&val) = upperLimit;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_NETWORK_SET_FRIENDLY_FIRE_OPTION(BOOL toggle) /* 0xF808475FA571D823 */
{
	uint64_t val;

	native_init(0xF808475FA571D823);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void NETWORK_0xF814FEC6A19FD6E0() /* 0xF814FEC6A19FD6E0 */
{
	native_init(0xF814FEC6A19FD6E0);
	native_call();
}

inline void NETWORK_0xF98DDE0A8ED09323(BOOL p0) /* 0xF98DDE0A8ED09323 */
{
	uint64_t val;

	native_init(0xF98DDE0A8ED09323);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_0xF9B83B77929D8863() /* 0xF9B83B77929D8863 */
{
	native_init(0xF9B83B77929D8863);
	return *(BOOL*)(native_call());
}

inline BOOL NETWORK_0xF9E1CCAE8BA4C281(Any p0, Any p1, Any* p2, Any* p3) /* 0xF9E1CCAE8BA4C281 */
{
	uint64_t val;

	native_init(0xF9E1CCAE8BA4C281);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_0xFA2888E3833C8E96() /* 0xFA2888E3833C8E96 */
{
	native_init(0xFA2888E3833C8E96);
	native_call();
}

inline void NETWORK_NETWORK_SESSION_KICK_PLAYER(Player player) /* 0xFA8904DC5F304220 */
{
	uint64_t val;

	native_init(0xFA8904DC5F304220);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_ACCEPT_PRESENCE_INVITE(Any p0) /* 0xFA91550DF9318B22 */
{
	uint64_t val;

	native_init(0xFA91550DF9318B22);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORK_SET_PLAYER_VISIBLE_LOCALLY(Player player, BOOL toggle) /* 0xFAA10F1FAFB11AF2 */
{
	uint64_t val;

	native_init(0xFAA10F1FAFB11AF2);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void NETWORK_0xFAE628F1E9ADB239(Any p0, Any p1, Any p2) /* 0xFAE628F1E9ADB239 */
{
	uint64_t val;

	native_init(0xFAE628F1E9ADB239);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	native_call();
}

inline Any NETWORK_0xFB1F9381E80FA13F(int p0, Any* p1) /* 0xFB1F9381E80FA13F */
{
	uint64_t val;

	native_init(0xFB1F9381E80FA13F);

	*(int*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORK_NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() /* 0xFB3272229A82C759 */
{
	native_init(0xFB3272229A82C759);
	native_call();
}

inline void NETWORK_0xFB680D403909DC70(Any p0, Any p1) /* 0xFB680D403909DC70 */
{
	uint64_t val;

	native_init(0xFB680D403909DC70);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void NETWORK_0xFB8F2A6F3DF08CBE() /* 0xFB8F2A6F3DF08CBE */
{
	native_init(0xFB8F2A6F3DF08CBE);
	native_call();
}

inline Any NETWORK_0xFBC5E768C7A77A6A() /* 0xFBC5E768C7A77A6A */
{
	native_init(0xFBC5E768C7A77A6A);
	return *(Any*)(native_call());
}

inline BOOL NETWORK_NETWORK_SESSION_IS_CLOSED_FRIENDS() /* 0xFBCFA2EA2E206890 */
{
	native_init(0xFBCFA2EA2E206890);
	return *(BOOL*)(native_call());
}

inline void NETWORK_0xFC18DB55AE19E046(BOOL p0) /* 0xFC18DB55AE19E046 */
{
	uint64_t val;

	native_init(0xFC18DB55AE19E046);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORK_NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() /* 0xFD00798DBA7523DD */
{
	native_init(0xFD00798DBA7523DD);
	return *(BOOL*)(native_call());
}

inline void NETWORK_0xFD75DABC0957BF33(BOOL p0) /* 0xFD75DABC0957BF33 */
{
	uint64_t val;

	native_init(0xFD75DABC0957BF33);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any NETWORK_0xFD8B834A8BA05048() /* 0xFD8B834A8BA05048 */
{
	native_init(0xFD8B834A8BA05048);
	return *(Any*)(native_call());
}

inline Any NETWORK_0xFFE1E5B792D92B34() /* 0xFFE1E5B792D92B34 */
{
	native_init(0xFFE1E5B792D92B34);
	return *(Any*)(native_call());
}

inline void NETWORKCASH_NETWORK_EARN_FROM_ROCKSTAR(int amount) /* 0x02CE1D6AC0FC73EA */
{
	uint64_t val;

	native_init(0x02CE1D6AC0FC73EA);

	*(int*)(&val) = amount;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_DELETE_CHARACTER(int characterIndex, BOOL p1, BOOL p2) /* 0x05A50AF38947EB8D */
{
	uint64_t val;

	native_init(0x05A50AF38947EB8D);

	*(int*)(&val) = characterIndex;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_EARN_FROM_BOUNTY(int amount, int* networkHandle, Any* p2, Any p3) /* 0x131BB5DA15453ACF */
{
	uint64_t val;

	native_init(0x131BB5DA15453ACF);

	*(int*)(&val) = amount;
	native_push(val);
	*(int**)(&val) = networkHandle;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_TAXI(int amount, BOOL p1, BOOL p2) /* 0x17C3A7D31EAE39F9 */
{
	uint64_t val;

	native_init(0x17C3A7D31EAE39F9);

	*(int*)(&val) = amount;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL NETWORKCASH_NETWORK_CAN_SHARE_JOB_CASH() /* 0x1C2473301B1C66BA */
{
	native_init(0x1C2473301B1C66BA);
	return *(BOOL*)(native_call());
}

inline void NETWORKCASH_NETWORK_SPENT_BETTING(Any p0, Any p1, Any* p2, BOOL p3, BOOL p4) /* 0x1C436FD11FFA692F */
{
	uint64_t val;

	native_init(0x1C436FD11FFA692F);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	native_call();
}

inline const char *NETWORKCASH_PROCESS_CASH_GIFT(int* p0, int* p1, const char* p2) /* 0x20194D48EAEC9A41 */
{
	uint64_t val;

	native_init(0x20194D48EAEC9A41);

	*(int**)(&val) = p0;
	native_push(val);
	*(int**)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = p2;
	native_push(val);

	return *(const char**)(native_call());
}

inline void NETWORKCASH_NETWORK_SPENT_CASH_DROP(int amount, BOOL p1, BOOL p2) /* 0x289016EC778D60E0 */
{
	uint64_t val;

	native_init(0x289016EC778D60E0);

	*(int*)(&val) = amount;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_BOUNTY(Any p0, BOOL p1, BOOL p2) /* 0x29B260B84947DFCC */
{
	uint64_t val;

	native_init(0x29B260B84947DFCC);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_EARN_FROM_CHALLENGE_WIN(Any p0, Any* p1, BOOL p2) /* 0x2B171E6B2F64D8DF */
{
	uint64_t val;

	native_init(0x2B171E6B2F64D8DF);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL NETWORKCASH_NETWORK_CAN_BET(Any p0) /* 0x3A54E33660DED67F */
{
	uint64_t val;

	native_init(0x3A54E33660DED67F);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORKCASH_NETWORK_INITIALIZE_CASH(int p1, int p2) /* 0x3DA5ECD1A56CBA6D */
{
	uint64_t val;

	native_init(0x3DA5ECD1A56CBA6D);

	*(int*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_EARN_FROM_PERSONAL_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) /* 0x3F4D00167E41E0AD */
{
	uint64_t val;

	native_init(0x3F4D00167E41E0AD);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);
	*(Any*)(&val) = p7;
	native_push(val);
	*(Any*)(&val) = p8;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_EARN_FROM_NOT_BADSPORT(int amount) /* 0x4337511FA8221D36 */
{
	uint64_t val;

	native_init(0x4337511FA8221D36);

	*(int*)(&val) = amount;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_EARN_FROM_HOLDUPS(int amount) /* 0x45B8154E077D9E4D */
{
	uint64_t val;

	native_init(0x45B8154E077D9E4D);

	*(int*)(&val) = amount;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_EARN_FROM_AI_TARGET_KILL(Any p0, Any p1) /* 0x515B4A22E4D3C6D7 */
{
	uint64_t val;

	native_init(0x515B4A22E4D3C6D7);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_BOAT_PICKUP(Any p0, BOOL p1, BOOL p2) /* 0x524EE43A37232C00 */
{
	uint64_t val;

	native_init(0x524EE43A37232C00);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(int value, int* networkHandle) /* 0x56A3B51944C50598 */
{
	uint64_t val;

	native_init(0x56A3B51944C50598);

	*(int*)(&val) = value;
	native_push(val);
	*(int**)(&val) = networkHandle;
	native_push(val);

	native_call();
}

inline int NETWORKCASH_NETWORK_GET_VC_BALANCE() /* 0x5CBAD97E059E1B94 */
{
	native_init(0x5CBAD97E059E1B94);
	return *(int*)(native_call());
}

inline BOOL NETWORKCASH_NETWORK_CAN_RECEIVE_PLAYER_CASH(Any p0, Any p1, Any p2, Any p3) /* 0x5D17BE59D2123284 */
{
	uint64_t val;

	native_init(0x5D17BE59D2123284);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORKCASH_NETWORK_PAY_EMPLOYEE_WAGE(Any p0, BOOL p1, BOOL p2) /* 0x5FD5ED82CBBE9989 */
{
	uint64_t val;

	native_init(0x5FD5ED82CBBE9989);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH__NETWORK_EARN_FROM_BEND_JOB(int amount, const char* heistHash) /* 0x61326EE6DF15B0CA */
{
	uint64_t val;

	native_init(0x61326EE6DF15B0CA);

	*(int*)(&val) = amount;
	native_push(val);
	*(const char**)(&val) = heistHash;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_BUY_PROPERTY(float propertyCost, Hash propertyName, BOOL p2, BOOL p3) /* 0x650A08A280870AF6 */
{
	uint64_t val;

	native_init(0x650A08A280870AF6);

	*(float*)(&val) = propertyCost;
	native_push(val);
	*(Hash*)(&val) = propertyName;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void NETWORKCASH__NETWORK_EARN_FROM_JOB_BONUS(Any p0, Any* p1, Any* p2) /* 0x6816FB4416760775 */
{
	uint64_t val;

	native_init(0x6816FB4416760775);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_FROM_ROCKSTAR(int bank, BOOL p1, BOOL p2) /* 0x6A445B64ED7ABEB5 */
{
	uint64_t val;

	native_init(0x6A445B64ED7ABEB5);

	*(int*)(&val) = bank;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_CINEMA(Any p0, Any p1, BOOL p2, BOOL p3) /* 0x6B38ECB05A63A685 */
{
	uint64_t val;

	native_init(0x6B38ECB05A63A685);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_BUY_PASSIVE_MODE(Any p0, BOOL p1, BOOL p2) /* 0x6D3A430D1A809179 */
{
	uint64_t val;

	native_init(0x6D3A430D1A809179);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_BUY_REVEAL_PLAYERS(Any p0, BOOL p1, BOOL p2) /* 0x6E176F1B18BC0637 */
{
	uint64_t val;

	native_init(0x6E176F1B18BC0637);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH__NETWORK_EARN_FROM_DAILY_OBJECTIVE(int p0, const char* p1, int p2) /* 0x6EA318C91C1A8786 */
{
	uint64_t val;

	native_init(0x6EA318C91C1A8786);

	*(int*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL NETWORKCASH_0x6FCF8DDEA146C45B(int p0) /* 0x6FCF8DDEA146C45B */
{
	uint64_t val;

	native_init(0x6FCF8DDEA146C45B);

	*(int*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORKCASH_0x7303E27CC6532080(Any p0, BOOL p1, BOOL p2, BOOL p3, Any* p4, Any p5) /* 0x7303E27CC6532080 */
{
	uint64_t val;

	native_init(0x7303E27CC6532080);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(Any**)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORKCASH_NETWORK_BUY_AIRSTRIKE(int cost, BOOL p1, BOOL p2) /* 0x763B4BD305338F19 */
{
	uint64_t val;

	native_init(0x763B4BD305338F19);

	*(int*)(&val) = cost;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline int NETWORKCASH_NETWORK_GET_VC_BANK_BALANCE() /* 0x76EF28DA05EA395A */
{
	native_init(0x76EF28DA05EA395A);
	return *(int*)(native_call());
}

inline void NETWORKCASH_NETWORK_BUY_BOUNTY(int amount, Player victim, BOOL p2, BOOL p3) /* 0x7B718E197453F2D9 */
{
	uint64_t val;

	native_init(0x7B718E197453F2D9);

	*(int*)(&val) = amount;
	native_push(val);
	*(Player*)(&val) = victim;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_HELI_PICKUP(Any p0, BOOL p1, BOOL p2) /* 0x7BF1D73DB2ECA492 */
{
	uint64_t val;

	native_init(0x7BF1D73DB2ECA492);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL NETWORKCASH_0x7C4FCCD2E4DEB394() /* 0x7C4FCCD2E4DEB394 */
{
	native_init(0x7C4FCCD2E4DEB394);
	return *(BOOL*)(native_call());
}

inline void NETWORKCASH_NETWORK_SPENT_PLAYER_HEALTHCARE(Any p0, Any p1, BOOL p2, BOOL p3) /* 0x7C99101F7FCE2EE5 */
{
	uint64_t val;

	native_init(0x7C99101F7FCE2EE5);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_TELESCOPE(Any p0, BOOL p1, BOOL p2) /* 0x7FE61782AD94CC09 */
{
	uint64_t val;

	native_init(0x7FE61782AD94CC09);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_ARREST_BAIL(Any p0, BOOL p1, BOOL p2) /* 0x812F5488B1B2A299 */
{
	uint64_t val;

	native_init(0x812F5488B1B2A299);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL NETWORKCASH_NETWORK_MONEY_CAN_BET(Any p0, BOOL p1, BOOL p2) /* 0x81404F3DC124FE5B */
{
	uint64_t val;

	native_init(0x81404F3DC124FE5B);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORKCASH_NETWORK_BUY_HELI_STRIKE(int cost, BOOL p1, BOOL p2) /* 0x81AA4610E3FD3A69 */
{
	uint64_t val;

	native_init(0x81AA4610E3FD3A69);

	*(int*)(&val) = cost;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_REQUEST_JOB(Any p0, BOOL p1, BOOL p2) /* 0x8204DA7934DF3155 */
{
	uint64_t val;

	native_init(0x8204DA7934DF3155);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_EARN_FROM_BETTING(int amount, const char* p1) /* 0x827A5BA1A44ACA6D */
{
	uint64_t val;

	native_init(0x827A5BA1A44ACA6D);

	*(int*)(&val) = amount;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_EARN_FROM_PROPERTY(int amount, Hash propertyName) /* 0x849648349D77F5C5 */
{
	uint64_t val;

	native_init(0x849648349D77F5C5);

	*(int*)(&val) = amount;
	native_push(val);
	*(Hash*)(&val) = propertyName;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_BUY_FAIRGROUND_RIDE(int amountSpent, Any p1, BOOL p2, BOOL p3) /* 0x8A7B3952DD64D2B5 */
{
	uint64_t val;

	native_init(0x8A7B3952DD64D2B5);

	*(int*)(&val) = amountSpent;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_PAY_MATCH_ENTRY_FEE(int value, int* p1, BOOL p2, BOOL p3) /* 0x9346E14F2AF74D46 */
{
	uint64_t val;

	native_init(0x9346E14F2AF74D46);

	*(int*)(&val) = value;
	native_push(val);
	*(int**)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_ROBBED_BY_MUGGER(int amount, BOOL p1, BOOL p2) /* 0x995A65F15F581359 */
{
	uint64_t val;

	native_init(0x995A65F15F581359);

	*(int*)(&val) = amount;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH__NETWORK_SPENT_REQUEST_HEIST(Any p0, BOOL p1, BOOL p2) /* 0x9D26502BB97BFE62 */
{
	uint64_t val;

	native_init(0x9D26502BB97BFE62);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(int amount, Hash vehicleModel, int* networkHandle, BOOL notBankrupt, BOOL hasTheMoney) /* 0x9FF28D88C766E3E8 */
{
	uint64_t val;

	native_init(0x9FF28D88C766E3E8);

	*(int*)(&val) = amount;
	native_push(val);
	*(Hash*)(&val) = vehicleModel;
	native_push(val);
	*(int**)(&val) = networkHandle;
	native_push(val);
	*(BOOL*)(&val) = notBankrupt;
	native_push(val);
	*(BOOL*)(&val) = hasTheMoney;
	native_push(val);

	native_call();
}

inline void NETWORKCASH__NETWORK_EARN_FROM_GANG_PICKUP(int amount) /* 0xA03D4ACE0A3284CE */
{
	uint64_t val;

	native_init(0xA03D4ACE0A3284CE);

	*(int*)(&val) = amount;
	native_push(val);

	native_call();
}

inline int NETWORKCASH_NETWORK_GET_VC_WALLET_BALANCE(int character) /* 0xA40F9C2623F6A8B5 */
{
	uint64_t val;

	native_init(0xA40F9C2623F6A8B5);

	*(int*)(&val) = character;
	native_push(val);

	return *(int*)(native_call());
}

inline void NETWORKCASH_NETWORK_SPENT_BUY_OFFTHERADAR(Any p0, BOOL p1, BOOL p2) /* 0xA628A745E2275C5D */
{
	uint64_t val;

	native_init(0xA628A745E2275C5D);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_BULL_SHARK(int amount, BOOL p1, BOOL p2) /* 0xA6DD8458CE24012C */
{
	uint64_t val;

	native_init(0xA6DD8458CE24012C);

	*(int*)(&val) = amount;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline const char *NETWORKCASH__NETWORK_GET_BANK_BALANCE_STRING() /* 0xA6FA3979BED01B81 */
{
	native_init(0xA6FA3979BED01B81);
	return *(const char**)(native_call());
}

inline void NETWORKCASH_NETWORK_CLEAR_CHARACTER_WALLET(Any p0) /* 0xA921DED15FDF28F5 */
{
	uint64_t val;

	native_init(0xA921DED15FDF28F5);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL NETWORKCASH_NETWORK_CAN_SPEND_MONEY(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4) /* 0xAB3CAA6B422164DA */
{
	uint64_t val;

	native_init(0xAB3CAA6B422164DA);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORKCASH_NETWORK_SPENT_CALL_PLAYER(Any p0, Any* p1, BOOL p2, BOOL p3) /* 0xACDE7185B374177C */
{
	uint64_t val;

	native_init(0xACDE7185B374177C);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_PAY_UTILITY_BILL(Any p0, BOOL p1, BOOL p2) /* 0xAFE08B35EC0C9EAE */
{
	uint64_t val;

	native_init(0xAFE08B35EC0C9EAE);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_AMMO_DROP(Any p0, BOOL p1, BOOL p2) /* 0xB162DC95C0A3317B */
{
	uint64_t val;

	native_init(0xB162DC95C0A3317B);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_EARN_FROM_CRATE_DROP(int amount) /* 0xB1CC1B9EC3007A2A */
{
	uint64_t val;

	native_init(0xB1CC1B9EC3007A2A);

	*(int*)(&val) = amount;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_PROSTITUTES(Any p0, BOOL p1, BOOL p2) /* 0xB21B89501CFAC79E */
{
	uint64_t val;

	native_init(0xB21B89501CFAC79E);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_EARN_FROM_JOB(int amount, const char* p1) /* 0xB2CC4836834E8A98 */
{
	uint64_t val;

	native_init(0xB2CC4836834E8A98);

	*(int*)(&val) = amount;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_EARN_FROM_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) /* 0xB539BD8A4C1EECF8 */
{
	uint64_t val;

	native_init(0xB539BD8A4C1EECF8);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);
	*(Any*)(&val) = p7;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_NO_COPS(Any p0, BOOL p1, BOOL p2) /* 0xD5BB406F4E04019F */
{
	uint64_t val;

	native_init(0xD5BB406F4E04019F);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_BUY_HEALTHCARE(int cost, BOOL p1, BOOL p2) /* 0xD9B067E55253E3DD */
{
	uint64_t val;

	native_init(0xD9B067E55253E3DD);

	*(int*)(&val) = cost;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_HOLDUPS(Any p0, BOOL p1, BOOL p2) /* 0xD9B86B9872039763 */
{
	uint64_t val;

	native_init(0xD9B86B9872039763);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL NETWORKCASH_0xDC18531D7019A535(Any p0, Any p1) /* 0xDC18531D7019A535 */
{
	uint64_t val;

	native_init(0xDC18531D7019A535);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL NETWORKCASH_0xE154B48B68EF72BC(Any p0) /* 0xE154B48B68EF72BC */
{
	uint64_t val;

	native_init(0xE154B48B68EF72BC);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORKCASH_NETWORK_SPENT_BUY_WANTEDLEVEL(Any p0, Any* p1, BOOL p2, BOOL p3) /* 0xE1B13771A843C4F6 */
{
	uint64_t val;

	native_init(0xE1B13771A843C4F6);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline BOOL NETWORKCASH_0xE260E0BB9CD995AC(Any p0) /* 0xE260E0BB9CD995AC */
{
	uint64_t val;

	native_init(0xE260E0BB9CD995AC);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void NETWORKCASH_NETWORK_SPENT_HIRE_MUGGER(Any p0, BOOL p1, BOOL p2) /* 0xE404BFB981665BF0 */
{
	uint64_t val;

	native_init(0xE404BFB981665BF0);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_HIRE_MERCENARY(Any p0, BOOL p1, BOOL p2) /* 0xE7B80E2BF9D80BD6 */
{
	uint64_t val;

	native_init(0xE7B80E2BF9D80BD6);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_SPENT_CARWASH(Any p0, Any p1, Any p2, BOOL p3, BOOL p4) /* 0xEC03C719DB2F4306 */
{
	uint64_t val;

	native_init(0xEC03C719DB2F4306);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	native_call();
}

inline Any NETWORKCASH_NETWORK_EARN_FROM_PICKUP(int amount) /* 0xED1517D3AF17C698 */
{
	uint64_t val;

	native_init(0xED1517D3AF17C698);

	*(int*)(&val) = amount;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORKCASH_NETWORK_SPENT_IN_STRIPCLUB(Any p0, BOOL p1, Any p2, BOOL p3) /* 0xEE99784E4467689C */
{
	uint64_t val;

	native_init(0xEE99784E4467689C);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_BUY_ITEM(Ped player, Hash item, Any p2, Any p3, BOOL p4, const char* item_name, Any p6, Any p7, Any p8, BOOL p9) /* 0xF0077C797F66A355 */
{
	uint64_t val;

	native_init(0xF0077C797F66A355);

	*(Ped*)(&val) = player;
	native_push(val);
	*(Hash*)(&val) = item;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(const char**)(&val) = item_name;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);
	*(Any*)(&val) = p7;
	native_push(val);
	*(Any*)(&val) = p8;
	native_push(val);
	*(BOOL*)(&val) = p9;
	native_push(val);

	native_call();
}

inline void NETWORKCASH__NETWORK_EARN_FROM_ARMOUR_TRUCK(int amount) /* 0xF514621E8EA463D0 */
{
	uint64_t val;

	native_init(0xF514621E8EA463D0);

	*(int*)(&val) = amount;
	native_push(val);

	native_call();
}

inline Any NETWORKCASH_0xF70EFA14FE091429(Any p0) /* 0xF70EFA14FE091429 */
{
	uint64_t val;

	native_init(0xF70EFA14FE091429);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void NETWORKCASH_NETWORK_EARN_FROM_IMPORT_EXPORT(Any p0, Any p1) /* 0xF92A014A634442D6 */
{
	uint64_t val;

	native_init(0xF92A014A634442D6);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_REFUND_CASH(int m_Index, const char* szType, const char* szReason, BOOL bUnk) /* 0xF9C812CD7C46E817 */
{
	uint64_t val;

	native_init(0xF9C812CD7C46E817);

	*(int*)(&val) = m_Index;
	native_push(val);
	*(const char**)(&val) = szType;
	native_push(val);
	*(const char**)(&val) = szReason;
	native_push(val);
	*(BOOL*)(&val) = bUnk;
	native_push(val);

	native_call();
}

inline void NETWORKCASH_NETWORK_GIVE_PLAYER_JOBSHARE_CASH(int amount, int* networkHandle) /* 0xFB18DF9CB95E0105 */
{
	uint64_t val;

	native_init(0xFB18DF9CB95E0105);

	*(int*)(&val) = amount;
	native_push(val);
	*(int**)(&val) = networkHandle;
	native_push(val);

	native_call();
}

inline void NETWORKCASH__NETWORK_EARN_FROM_AMBIENT_JOB(int p0, const char* p1, Any* p2) /* 0xFB6DB092FBAE29E6 */
{
	uint64_t val;

	native_init(0xFB6DB092FBAE29E6);

	*(int*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL OBJECT_0x024A60DEB0EA69F0(Any p0, Player player, float p2, int p3) /* 0x024A60DEB0EA69F0 */
{
	uint64_t val;

	native_init(0x024A60DEB0EA69F0);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL OBJECT_0x0378C08504160D0D(Any p0) /* 0x0378C08504160D0D */
{
	uint64_t val;

	native_init(0x0378C08504160D0D);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT_0x03C27E13B42A0E82(Hash doorHash, float p1, BOOL p2, BOOL p3) /* 0x03C27E13B42A0E82 */
{
	uint64_t val;

	native_init(0x03C27E13B42A0E82);

	*(Hash*)(&val) = doorHash;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void OBJECT_CREATE_MONEY_PICKUPS(float x, float y, float z, int value, int amount, Hash model) /* 0x0589B5E791CE9B2B */
{
	uint64_t val;

	native_init(0x0589B5E791CE9B2B);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = value;
	native_push(val);
	*(int*)(&val) = amount;
	native_push(val);
	*(Hash*)(&val) = model;
	native_push(val);

	native_call();
}

inline Hash OBJECT__GET_WEAPON_HASH_FROM_PICKUP(Pickup pickupHash) /* 0x08F96CA6C551AD51 */
{
	uint64_t val;

	native_init(0x08F96CA6C551AD51);

	*(Pickup*)(&val) = pickupHash;
	native_push(val);

	return *(Hash*)(native_call());
}

inline void OBJECT_0x0BF3B3BD47D79C08(Hash hash, int p1) /* 0x0BF3B3BD47D79C08 */
{
	uint64_t val;

	native_init(0x0BF3B3BD47D79C08);

	*(Hash*)(&val) = hash;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL OBJECT_0x11D1E53A726891FE(Object object) /* 0x11D1E53A726891FE */
{
	uint64_t val;

	native_init(0x11D1E53A726891FE);

	*(Object*)(&val) = object;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Pickup OBJECT__CREATE_PORTABLE_PICKUP_2(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) /* 0x125494B98A21AAF7 */
{
	uint64_t val;

	native_init(0x125494B98A21AAF7);

	*(Hash*)(&val) = pickupHash;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = placeOnGround;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	return *(Pickup*)(native_call());
}

inline int OBJECT_0x160AA1B32F6139B8(Hash doorHash) /* 0x160AA1B32F6139B8 */
{
	uint64_t val;

	native_init(0x160AA1B32F6139B8);

	*(Hash*)(&val) = doorHash;
	native_push(val);

	return *(int*)(native_call());
}

inline Vector3 OBJECT__GET_OBJECT_OFFSET_FROM_COORDS(float xPos, float yPos, float zPos, float heading, float xOffset, float yOffset, float zOffset) /* 0x163E252DE035A133 */
{
	uint64_t val;

	native_init(0x163E252DE035A133);

	*(float*)(&val) = xPos;
	native_push(val);
	*(float*)(&val) = yPos;
	native_push(val);
	*(float*)(&val) = zPos;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);
	*(float*)(&val) = xOffset;
	native_push(val);
	*(float*)(&val) = yOffset;
	native_push(val);
	*(float*)(&val) = zOffset;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline Any OBJECT_0x163F8B586BC95F2A(Any coords, float radius, Hash modelHash, float x, float y, float z, Vector3* p6, int p7) /* 0x163F8B586BC95F2A */
{
	uint64_t val;

	native_init(0x163F8B586BC95F2A);

	*(Any*)(&val) = coords;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(Vector3**)(&val) = p6;
	native_push(val);
	*(int*)(&val) = p7;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL OBJECT_0x1761DC5D8471CBAA(Any p0, Player player, int p2) /* 0x1761DC5D8471CBAA */
{
	uint64_t val;

	native_init(0x1761DC5D8471CBAA);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT_0x190428512B240692(Any p0, BOOL p1, BOOL p2, BOOL p3, BOOL p4) /* 0x190428512B240692 */
{
	uint64_t val;

	native_init(0x190428512B240692);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	native_call();
}

inline Vector3 OBJECT_GET_PICKUP_COORDS(Pickup pickup) /* 0x225B8B35C88029B3 */
{
	uint64_t val;

	native_init(0x225B8B35C88029B3);

	*(Pickup*)(&val) = pickup;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline float OBJECT_0x260EE4FDBDF4DB01(Any p0) /* 0x260EE4FDBDF4DB01 */
{
	uint64_t val;

	native_init(0x260EE4FDBDF4DB01);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(float*)(native_call());
}

inline void OBJECT_REMOVE_ALL_PICKUPS_OF_TYPE(Hash pickupHash) /* 0x27F9D613092159CF */
{
	uint64_t val;

	native_init(0x27F9D613092159CF);

	*(Hash*)(&val) = pickupHash;
	native_push(val);

	native_call();
}

inline BOOL OBJECT_IS_POINT_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, BOOL p10, BOOL p11) /* 0x2A70BAE8883E4C81 */
{
	uint64_t val;

	native_init(0x2A70BAE8883E4C81);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);
	*(BOOL*)(&val) = p10;
	native_push(val);
	*(BOOL*)(&val) = p11;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Pickup OBJECT_CREATE_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) /* 0x2EAF1FDB2FB55698 */
{
	uint64_t val;

	native_init(0x2EAF1FDB2FB55698);

	*(Hash*)(&val) = pickupHash;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = placeOnGround;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	return *(Pickup*)(native_call());
}

inline BOOL OBJECT_SLIDE_OBJECT(Object object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, BOOL collision) /* 0x2FDFF4107B8C1147 */
{
	uint64_t val;

	native_init(0x2FDFF4107B8C1147);

	*(Object*)(&val) = object;
	native_push(val);
	*(float*)(&val) = toX;
	native_push(val);
	*(float*)(&val) = toY;
	native_push(val);
	*(float*)(&val) = toZ;
	native_push(val);
	*(float*)(&val) = speedX;
	native_push(val);
	*(float*)(&val) = speedY;
	native_push(val);
	*(float*)(&val) = speedZ;
	native_push(val);
	*(BOOL*)(&val) = collision;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT_0x318516E02DE3ECE2(float p0) /* 0x318516E02DE3ECE2 */
{
	uint64_t val;

	native_init(0x318516E02DE3ECE2);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void OBJECT_0x31F924B53EADDF65(BOOL p0) /* 0x31F924B53EADDF65 */
{
	uint64_t val;

	native_init(0x31F924B53EADDF65);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void OBJECT_REMOVE_PICKUP(Pickup pickup) /* 0x3288D8ACAECD2AB2 */
{
	uint64_t val;

	native_init(0x3288D8ACAECD2AB2);

	*(Pickup*)(&val) = pickup;
	native_push(val);

	native_call();
}

inline void OBJECT__HIGHLIGHT_PLACEMENT_COORDS(float x, float y, float z, int colorIndex) /* 0x3430676B11CDF21D */
{
	uint64_t val;

	native_init(0x3430676B11CDF21D);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = colorIndex;
	native_push(val);

	native_call();
}

inline BOOL OBJECT_0x372EF6699146A1E4(Any p0, Entity entity, float p2, int p3) /* 0x372EF6699146A1E4 */
{
	uint64_t val;

	native_init(0x372EF6699146A1E4);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL OBJECT_IS_ANY_OBJECT_NEAR_POINT(float x, float y, float z, float range, BOOL p4) /* 0x397DC58FF00298D1 */
{
	uint64_t val;

	native_init(0x397DC58FF00298D1);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = range;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT_SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Object object, BOOL toggle) /* 0x406137F8EF90EAF5 */
{
	uint64_t val;

	native_init(0x406137F8EF90EAF5);

	*(Object*)(&val) = object;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL OBJECT_0x46494A2475701343(float p0, float p1, float p2, float p3, Hash modelHash, BOOL p5) /* 0x46494A2475701343 */
{
	uint64_t val;

	native_init(0x46494A2475701343);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT_REMOVE_DOOR_FROM_SYSTEM(Hash doorHash) /* 0x464D8E1427156FE4 */
{
	uint64_t val;

	native_init(0x464D8E1427156FE4);

	*(Hash*)(&val) = doorHash;
	native_push(val);

	native_call();
}

inline void OBJECT_0x4A39DB43E47CF3AA(Any p0) /* 0x4A39DB43E47CF3AA */
{
	uint64_t val;

	native_init(0x4A39DB43E47CF3AA);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int OBJECT_0x4BC2854478F3A749(Hash doorHash) /* 0x4BC2854478F3A749 */
{
	uint64_t val;

	native_init(0x4BC2854478F3A749);

	*(Hash*)(&val) = doorHash;
	native_push(val);

	return *(int*)(native_call());
}

inline void OBJECT_0x4D89D607CB3DD1D2(Object object, BOOL toggle) /* 0x4D89D607CB3DD1D2 */
{
	uint64_t val;

	native_init(0x4D89D607CB3DD1D2);

	*(Object*)(&val) = object;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Object OBJECT_GET_PICKUP_OBJECT(Pickup pickup) /* 0x5099BC55630B25AE */
{
	uint64_t val;

	native_init(0x5099BC55630B25AE);

	*(Pickup*)(&val) = pickup;
	native_push(val);

	return *(Object*)(native_call());
}

inline Object OBJECT_CREATE_OBJECT(Object modelHash, float x, float y, float z, BOOL isNetwork, BOOL thisScriptCheck, BOOL dynamic) /* 0x509D5878EB39E842 */
{
	uint64_t val;

	native_init(0x509D5878EB39E842);

	*(Object*)(&val) = modelHash;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = isNetwork;
	native_push(val);
	*(BOOL*)(&val) = thisScriptCheck;
	native_push(val);
	*(BOOL*)(&val) = dynamic;
	native_push(val);

	return *(Object*)(native_call());
}

inline BOOL OBJECT__DOES_DES_OBJECT_EXIST(int handle) /* 0x52AF537A0C5B8AAD */
{
	uint64_t val;

	native_init(0x52AF537A0C5B8AAD);

	*(int*)(&val) = handle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT_DELETE_OBJECT(Object* object) /* 0x539E0AE3E6634B9F */
{
	uint64_t val;

	native_init(0x539E0AE3E6634B9F);

	*(Object**)(&val) = object;
	native_push(val);

	native_call();
}

inline void OBJECT_SET_TEAM_PICKUP_OBJECT(Object object, Any p1, BOOL p2) /* 0x53E0DF1A2A3CF0CA */
{
	uint64_t val;

	native_init(0x53E0DF1A2A3CF0CA);

	*(Object*)(&val) = object;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL OBJECT_0x589F80B325CC82C5(float p0, float p1, float p2, Any p3, Any* p4) /* 0x589F80B325CC82C5 */
{
	uint64_t val;

	native_init(0x589F80B325CC82C5);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any**)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL OBJECT_PLACE_OBJECT_ON_GROUND_PROPERLY(Object object) /* 0x58A850EAEE20FAA3 */
{
	uint64_t val;

	native_init(0x58A850EAEE20FAA3);

	*(Object*)(&val) = object;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT__SET_DES_OBJECT_STATE(int handle, int state) /* 0x5C29F698D404C5E1 */
{
	uint64_t val;

	native_init(0x5C29F698D404C5E1);

	*(int*)(&val) = handle;
	native_push(val);
	*(int*)(&val) = state;
	native_push(val);

	native_call();
}

inline Hash OBJECT__GET_PICKUP_HASH(Pickup pickupHash) /* 0x5EAAD83F8CFB4575 */
{
	uint64_t val;

	native_init(0x5EAAD83F8CFB4575);

	*(Pickup*)(&val) = pickupHash;
	native_push(val);

	return *(Hash*)(native_call());
}

inline void OBJECT_0x616093EC6B139DD9(Player player, Hash pickupHash, BOOL p2) /* 0x616093EC6B139DD9 */
{
	uint64_t val;

	native_init(0x616093EC6B139DD9);

	*(Player*)(&val) = player;
	native_push(val);
	*(Hash*)(&val) = pickupHash;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline float OBJECT_0x65499865FCA6E5EC(Hash doorHash) /* 0x65499865FCA6E5EC */
{
	uint64_t val;

	native_init(0x65499865FCA6E5EC);

	*(Hash*)(&val) = doorHash;
	native_push(val);

	return *(float*)(native_call());
}

inline void OBJECT_0x66A49D021870FE88() /* 0x66A49D021870FE88 */
{
	native_init(0x66A49D021870FE88);
	native_call();
}

inline Pickup OBJECT_CREATE_AMBIENT_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int flag, int value, Hash modelHash, BOOL returnHandle, BOOL p8) /* 0x673966A0C0FD7171 */
{
	uint64_t val;

	native_init(0x673966A0C0FD7171);

	*(Hash*)(&val) = pickupHash;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(int*)(&val) = flag;
	native_push(val);
	*(int*)(&val) = value;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);
	*(BOOL*)(&val) = returnHandle;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);

	return *(Pickup*)(native_call());
}

inline BOOL OBJECT_0x673ED815D6E323B7(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4) /* 0x673ED815D6E323B7 */
{
	uint64_t val;

	native_init(0x673ED815D6E323B7);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT__SET_DOOR_ACCELERATION_LIMIT(Hash doorHash, int limit, BOOL p2, BOOL p3) /* 0x6BAB9442830C7F53 */
{
	uint64_t val;

	native_init(0x6BAB9442830C7F53);

	*(Hash*)(&val) = doorHash;
	native_push(val);
	*(int*)(&val) = limit;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline Vector3 OBJECT_GET_SAFE_PICKUP_COORDS(float x, float y, float z, Any p3, Any p4) /* 0x6E16BC2503FF1FF0 */
{
	uint64_t val;

	native_init(0x6E16BC2503FF1FF0);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline void OBJECT_ADD_DOOR_TO_SYSTEM(Hash doorHash, Hash modelHash, float x, float y, float z, BOOL p5, BOOL p6, BOOL p7) /* 0x6F8838D03D1DC226 */
{
	uint64_t val;

	native_init(0x6F8838D03D1DC226);

	*(Hash*)(&val) = doorHash;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);

	native_call();
}

inline void OBJECT_0x701FDA1E82076BA4() /* 0x701FDA1E82076BA4 */
{
	native_init(0x701FDA1E82076BA4);
	native_call();
}

inline BOOL OBJECT_HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float p0, float p1, float p2, float p3, Hash modelHash, Any p5) /* 0x761B0E69AC4D007E */
{
	uint64_t val;

	native_init(0x761B0E69AC4D007E);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT_0x762DB2D380B48D04(Any p0) /* 0x762DB2D380B48D04 */
{
	uint64_t val;

	native_init(0x762DB2D380B48D04);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void OBJECT__SET_OBJECT_LOD(Object object, BOOL toggle) /* 0x77F33F2CCF64B3AA */
{
	uint64_t val;

	native_init(0x77F33F2CCF64B3AA);

	*(Object*)(&val) = object;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void OBJECT_SET_PICKUP_REGENERATION_TIME(Pickup pickup, int duration) /* 0x78015C9B4B3ECC9D */
{
	uint64_t val;

	native_init(0x78015C9B4B3ECC9D);

	*(Pickup*)(&val) = pickup;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);

	native_call();
}

inline void OBJECT_0x78857FC65CADB909(BOOL p0) /* 0x78857FC65CADB909 */
{
	uint64_t val;

	native_init(0x78857FC65CADB909);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL OBJECT_HAS_PICKUP_BEEN_COLLECTED(Pickup pickup) /* 0x80EC48E6679313F9 */
{
	uint64_t val;

	native_init(0x80EC48E6679313F9);

	*(Pickup*)(&val) = pickup;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL OBJECT_0x85B6C850546FDDE2(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4) /* 0x85B6C850546FDDE2 */
{
	uint64_t val;

	native_init(0x85B6C850546FDDE2);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT_0x88EAEC617CD26926(Hash p0, BOOL p1) /* 0x88EAEC617CD26926 */
{
	uint64_t val;

	native_init(0x88EAEC617CD26926);

	*(Hash*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Pickup OBJECT_CREATE_PICKUP_ROTATE(Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int flag, int amount, Any p9, BOOL p10, Hash modelHash) /* 0x891804727E0A98B7 */
{
	uint64_t val;

	native_init(0x891804727E0A98B7);

	*(Hash*)(&val) = pickupHash;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = rotX;
	native_push(val);
	*(float*)(&val) = rotY;
	native_push(val);
	*(float*)(&val) = rotZ;
	native_push(val);
	*(int*)(&val) = flag;
	native_push(val);
	*(int*)(&val) = amount;
	native_push(val);
	*(Any*)(&val) = p9;
	native_push(val);
	*(BOOL*)(&val) = p10;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	return *(Pickup*)(native_call());
}

inline Any OBJECT__GET_DES_OBJECT_STATE(int handle) /* 0x899BA936634A322E */
{
	uint64_t val;

	native_init(0x899BA936634A322E);

	*(int*)(&val) = handle;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any OBJECT_SET_OBJECT_TARGETTABLE(Object object, BOOL targettable) /* 0x8A7391690F5AFD81 */
{
	uint64_t val;

	native_init(0x8A7391690F5AFD81);

	*(Object*)(&val) = object;
	native_push(val);
	*(BOOL*)(&val) = targettable;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL OBJECT_HAS_OBJECT_BEEN_BROKEN(Object object) /* 0x8ABFB70C49CC43E2 */
{
	uint64_t val;

	native_init(0x8ABFB70C49CC43E2);

	*(Object*)(&val) = object;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL OBJECT_IS_OBJECT_VISIBLE(Object object) /* 0x8B32ACE6326A7546 */
{
	uint64_t val;

	native_init(0x8B32ACE6326A7546);

	*(Object*)(&val) = object;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL OBJECT_IS_OBJECT_NEAR_POINT(Hash objectHash, float x, float y, float z, float range) /* 0x8C90FE4B381BA60A */
{
	uint64_t val;

	native_init(0x8C90FE4B381BA60A);

	*(Hash*)(&val) = objectHash;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = range;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT_ATTACH_PORTABLE_PICKUP_TO_PED(Ped ped, Any p1) /* 0x8DC39368BDD57755 */
{
	uint64_t val;

	native_init(0x8DC39368BDD57755);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL OBJECT_IS_GARAGE_EMPTY(Any garage, BOOL p1, int p2) /* 0x90E47239EA1980B8 */
{
	uint64_t val;

	native_init(0x90E47239EA1980B8);

	*(Any*)(&val) = garage;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT_0x92AEFB5F6E294023(Object object, BOOL p1, BOOL p2) /* 0x92AEFB5F6E294023 */
{
	uint64_t val;

	native_init(0x92AEFB5F6E294023);

	*(Object*)(&val) = object;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void OBJECT__SET_OBJECT_TEXTURE_VARIANT(Object object, int paintIndex) /* 0x971DA0055324D033 */
{
	uint64_t val;

	native_init(0x971DA0055324D033);

	*(Object*)(&val) = object;
	native_push(val);
	*(int*)(&val) = paintIndex;
	native_push(val);

	native_call();
}

inline float OBJECT_CREATE_OBJECT_NO_OFFSET(int* modelfwgaHash, float x, float y, float z, BOOL isNetwork, BOOL thisScriptCheck, BOOL dynamic) /* 0x9A294B2138ABB884 */
{
	uint64_t val;

	native_init(0x9A294B2138ABB884);

	*(int**)(&val) = modelfwgaHash;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = isNetwork;
	native_push(val);
	*(BOOL*)(&val) = thisScriptCheck;
	native_push(val);
	*(BOOL*)(&val) = dynamic;
	native_push(val);

	return *(float*)(native_call());
}

inline void OBJECT__DOOR_CONTROL(Hash doorHash, float x, float y, float z, BOOL locked, float xRotMult, float yRotMult, float zRotMult) /* 0x9B12F9A24FABEDB0 */
{
	uint64_t val;

	native_init(0x9B12F9A24FABEDB0);

	*(Hash*)(&val) = doorHash;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = locked;
	native_push(val);
	*(float*)(&val) = xRotMult;
	native_push(val);
	*(float*)(&val) = yRotMult;
	native_push(val);
	*(float*)(&val) = zRotMult;
	native_push(val);

	native_call();
}

inline void OBJECT_0x9BA001CB45CBF627(Hash doorHash, float heading, BOOL p2, BOOL p3) /* 0x9BA001CB45CBF627 */
{
	uint64_t val;

	native_init(0x9BA001CB45CBF627);

	*(Hash*)(&val) = doorHash;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void OBJECT_0xA08FE5E49BDC39DD(Any p0, float p1, BOOL p2) /* 0xA08FE5E49BDC39DD */
{
	uint64_t val;

	native_init(0xA08FE5E49BDC39DD);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void OBJECT_0xA2C1F5E92AFE49ED() /* 0xA2C1F5E92AFE49ED */
{
	native_init(0xA2C1F5E92AFE49ED);
	native_call();
}

inline void OBJECT_0xA85A21582451E951(Hash doorHash, BOOL p1) /* 0xA85A21582451E951 */
{
	uint64_t val;

	native_init(0xA85A21582451E951);

	*(Hash*)(&val) = doorHash;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void OBJECT__MARK_OBJECT_FOR_DELETION(Object object) /* 0xADBE4809F19F927A */
{
	uint64_t val;

	native_init(0xADBE4809F19F927A);

	*(Object*)(&val) = object;
	native_push(val);

	native_call();
}

inline BOOL OBJECT_DOES_PICKUP_EXIST(Pickup pickup) /* 0xAFC1CA75AD4074D1 */
{
	uint64_t val;

	native_init(0xAFC1CA75AD4074D1);

	*(Pickup*)(&val) = pickup;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT_TRACK_OBJECT_VISIBILITY(Any p0) /* 0xB252BC036B525623 */
{
	uint64_t val;

	native_init(0xB252BC036B525623);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void OBJECT_0xB2D0BDE54F0E8E5A(Object object, BOOL toggle) /* 0xB2D0BDE54F0E8E5A */
{
	uint64_t val;

	native_init(0xB2D0BDE54F0E8E5A);

	*(Object*)(&val) = object;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int OBJECT__GET_DES_OBJECT(float x, float y, float z, float rotation, const char* name) /* 0xB48FCED898292E52 */
{
	uint64_t val;

	native_init(0xB48FCED898292E52);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = rotation;
	native_push(val);
	*(const char**)(&val) = name;
	native_push(val);

	return *(int*)(native_call());
}

inline void OBJECT__SET_DOOR_AJAR_ANGLE(Hash doorHash, float ajar, BOOL p2, BOOL p3) /* 0xB6E6FBA95C7324AC */
{
	uint64_t val;

	native_init(0xB6E6FBA95C7324AC);

	*(Hash*)(&val) = doorHash;
	native_push(val);
	*(float*)(&val) = ajar;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline float OBJECT_GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Any p0, BOOL p1) /* 0xB6FBFD079B8D0596 */
{
	uint64_t val;

	native_init(0xB6FBFD079B8D0596);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	return *(float*)(native_call());
}

inline void OBJECT_0xBCE595371A5FBAAF(Any p0, BOOL p1) /* 0xBCE595371A5FBAAF */
{
	uint64_t val;

	native_init(0xBCE595371A5FBAAF);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL OBJECT_DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, Hash hash, BOOL p5) /* 0xBFA48E2FF417213F */
{
	uint64_t val;

	native_init(0xBFA48E2FF417213F);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(Hash*)(&val) = hash;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL OBJECT__DOES_DOOR_EXIST(Hash doorHash) /* 0xC153C43EA202C8C1 */
{
	uint64_t val;

	native_init(0xC153C43EA202C8C1);

	*(Hash*)(&val) = doorHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT_0xC485E07E4F0B7958(Hash doorHash, BOOL p1, BOOL p2, BOOL p3) /* 0xC485E07E4F0B7958 */
{
	uint64_t val;

	native_init(0xC485E07E4F0B7958);

	*(Hash*)(&val) = doorHash;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline BOOL OBJECT_IS_DOOR_CLOSED(Hash door) /* 0xC531EE8A1145A149 */
{
	uint64_t val;

	native_init(0xC531EE8A1145A149);

	*(Hash*)(&val) = door;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT_0xC6033D32241F6FB5(Any p0, BOOL p1) /* 0xC6033D32241F6FB5 */
{
	uint64_t val;

	native_init(0xC6033D32241F6FB5);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void OBJECT_0xC7F29CA00F46350E(BOOL p0) /* 0xC7F29CA00F46350E */
{
	uint64_t val;

	native_init(0xC7F29CA00F46350E);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void OBJECT_DETACH_PORTABLE_PICKUP_FROM_PED(Ped ped) /* 0xCF463D1E9A0AECB1 */
{
	uint64_t val;

	native_init(0xCF463D1E9A0AECB1);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void OBJECT_0xD9B71952F78A2640(Hash doorHash, BOOL p1) /* 0xD9B71952F78A2640 */
{
	uint64_t val;

	native_init(0xD9B71952F78A2640);

	*(Hash*)(&val) = doorHash;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL OBJECT_DOES_PICKUP_OBJECT_EXIST(Object pickupObject) /* 0xD9EFB6DBF7DAAEA3 */
{
	uint64_t val;

	native_init(0xD9EFB6DBF7DAAEA3);

	*(Object*)(&val) = pickupObject;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int* OBJECT_0xDB41D07A45A6D4B7(Hash pickupHash) /* 0xDB41D07A45A6D4B7 */
{
	uint64_t val;

	native_init(0xDB41D07A45A6D4B7);

	*(Hash*)(&val) = pickupHash;
	native_push(val);

	return *(int**)(native_call());
}

inline BOOL OBJECT_0xDF97CDD4FC08FD34(Any p0) /* 0xDF97CDD4FC08FD34 */
{
	uint64_t val;

	native_init(0xDF97CDD4FC08FD34);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Object OBJECT_GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, BOOL isMission, BOOL p6, BOOL p7) /* 0xE143FA2249364369 */
{
	uint64_t val;

	native_init(0xE143FA2249364369);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);
	*(BOOL*)(&val) = isMission;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);

	return *(Object*)(native_call());
}

inline void OBJECT_0xE7E4C198B0185900(Object p0, Any p1, BOOL p2) /* 0xE7E4C198B0185900 */
{
	uint64_t val;

	native_init(0xE7E4C198B0185900);

	*(Object*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void OBJECT_0xEB6F1A9B5510A5D2(Any p0, BOOL p1) /* 0xEB6F1A9B5510A5D2 */
{
	uint64_t val;

	native_init(0xEB6F1A9B5510A5D2);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void OBJECT_GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL* locked, float* heading) /* 0xEDC1A5B84AEF33FF */
{
	uint64_t val;

	native_init(0xEDC1A5B84AEF33FF);

	*(Hash*)(&val) = type;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL**)(&val) = locked;
	native_push(val);
	*(float**)(&val) = heading;
	native_push(val);

	native_call();
}

inline BOOL OBJECT_0xF0EED5A6BC7B237A(Any p0, Entity entity, int p2) /* 0xF0EED5A6BC7B237A */
{
	uint64_t val;

	native_init(0xF0EED5A6BC7B237A);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void OBJECT_0xF2E1A7133DD356A6(Hash hash, BOOL toggle) /* 0xF2E1A7133DD356A6 */
{
	uint64_t val;

	native_init(0xF2E1A7133DD356A6);

	*(Hash*)(&val) = hash;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void OBJECT_SET_FORCE_OBJECT_THIS_FRAME(Any p0, Any p1, Any p2, Any p3) /* 0xF538081986E49E9D */
{
	uint64_t val;

	native_init(0xF538081986E49E9D);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void OBJECT_SET_OBJECT_PHYSICS_PARAMS(Object object, float mass, float gravityFactor, float dampingLinearC, float dampingLinearV, float dampingLinearV2, float dampingAngularC, float dampingAngularV, float dampingAngularV2, float margin, float default2Pi, float buoyancyFactor) /* 0xF6DF6E90DE7DF90F */
{
	uint64_t val;

	native_init(0xF6DF6E90DE7DF90F);

	*(Object*)(&val) = object;
	native_push(val);
	*(float*)(&val) = mass;
	native_push(val);
	*(float*)(&val) = gravityFactor;
	native_push(val);
	*(float*)(&val) = dampingLinearC;
	native_push(val);
	*(float*)(&val) = dampingLinearV;
	native_push(val);
	*(float*)(&val) = dampingLinearV2;
	native_push(val);
	*(float*)(&val) = dampingAngularC;
	native_push(val);
	*(float*)(&val) = dampingAngularV;
	native_push(val);
	*(float*)(&val) = dampingAngularV2;
	native_push(val);
	*(float*)(&val) = margin;
	native_push(val);
	*(float*)(&val) = default2Pi;
	native_push(val);
	*(float*)(&val) = buoyancyFactor;
	native_push(val);

	native_call();
}

inline void OBJECT_SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL locked, float heading, BOOL p6) /* 0xF82D8F1926A02C3D */
{
	uint64_t val;

	native_init(0xF82D8F1926A02C3D);

	*(Hash*)(&val) = type;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = locked;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);

	native_call();
}

inline void OBJECT_0xF92099527DB8E2A7(Any p0, Any p1) /* 0xF92099527DB8E2A7 */
{
	uint64_t val;

	native_init(0xF92099527DB8E2A7);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void OBJECT_0xF9C1681347C8BD15(Object object) /* 0xF9C1681347C8BD15 */
{
	uint64_t val;

	native_init(0xF9C1681347C8BD15);

	*(Object*)(&val) = object;
	native_push(val);

	native_call();
}

inline BOOL OBJECT__IS_PICKUP_WITHIN_RADIUS(Hash pickupHash, float x, float y, float z, float radius) /* 0xF9C36251F6E48E33 */
{
	uint64_t val;

	native_init(0xF9C36251F6E48E33);

	*(Hash*)(&val) = pickupHash;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Pickup OBJECT_CREATE_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, BOOL p6, Hash modelHash) /* 0xFBA08C503DD5FA58 */
{
	uint64_t val;

	native_init(0xFBA08C503DD5FA58);

	*(Hash*)(&val) = pickupHash;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(int*)(&val) = p4;
	native_push(val);
	*(int*)(&val) = value;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	return *(Pickup*)(native_call());
}

inline void PATHFIND_SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float p6) /* 0x0027501B9F3B407E */
{
	uint64_t val;

	native_init(0x0027501B9F3B407E);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);

	native_call();
}

inline Any PATHFIND_0x01708E8DD3FF8C65(float p0, float p1, float p2, float p3, float p4, float p5) /* 0x01708E8DD3FF8C65 */
{
	uint64_t val;

	native_init(0x01708E8DD3FF8C65);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL PATHFIND_GET_VEHICLE_NODE_PROPERTIES(float x, float y, float z, int* density, int* flags) /* 0x0568566ACBB5DEDC */
{
	uint64_t val;

	native_init(0x0568566ACBB5DEDC);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int**)(&val) = density;
	native_push(val);
	*(int**)(&val) = flags;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PATHFIND_0x07FB139B592FA687(float p0, float p1, float p2, float p3) /* 0x07FB139B592FA687 */
{
	uint64_t val;

	native_init(0x07FB139B592FA687);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PATHFIND_0x0B919E1FB47CC4E0(float p0) /* 0x0B919E1FB47CC4E0 */
{
	uint64_t val;

	native_init(0x0B919E1FB47CC4E0);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL PATHFIND_DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Any p0) /* 0x0EAEB0DB4B132399 */
{
	uint64_t val;

	native_init(0x0EAEB0DB4B132399);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PATHFIND_UPDATE_NAVMESH_BLOCKING_OBJECT(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) /* 0x109E99373F290687 */
{
	uint64_t val;

	native_init(0x109E99373F290687);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(Any*)(&val) = p8;
	native_push(val);

	native_call();
}

inline BOOL PATHFIND_IS_POINT_ON_ROAD(float x, float y, float z, Vehicle vehicle) /* 0x125BF4ABFC536B09 */
{
	uint64_t val;

	native_init(0x125BF4ABFC536B09);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any PATHFIND_GET_CLOSEST_ROAD(float posX, float posY, float posZ, float p3, int p4, Vector3* p5, Vector3* p6, int* p7, int* p8, float* p9, int p10) /* 0x132F52BBA570FE92 */
{
	uint64_t val;

	native_init(0x132F52BBA570FE92);

	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(int*)(&val) = p4;
	native_push(val);
	*(Vector3**)(&val) = p5;
	native_push(val);
	*(Vector3**)(&val) = p6;
	native_push(val);
	*(int**)(&val) = p7;
	native_push(val);
	*(int**)(&val) = p8;
	native_push(val);
	*(float**)(&val) = p9;
	native_push(val);
	*(int*)(&val) = p10;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any PATHFIND_0x16F46FB18C8009E4(Any p0, Any p1, Any p2, Any p3, Any p4) /* 0x16F46FB18C8009E4 */
{
	uint64_t val;

	native_init(0x16F46FB18C8009E4);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	return *(Any*)(native_call());
}

inline void PATHFIND_SET_ROADS_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float angle, BOOL unknown1, BOOL unknown2, BOOL unknown3) /* 0x1A5AA1208AF5DB59 */
{
	uint64_t val;

	native_init(0x1A5AA1208AF5DB59);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(float*)(&val) = angle;
	native_push(val);
	*(BOOL*)(&val) = unknown1;
	native_push(val);
	*(BOOL*)(&val) = unknown2;
	native_push(val);
	*(BOOL*)(&val) = unknown3;
	native_push(val);

	native_call();
}

inline BOOL PATHFIND_IS_VEHICLE_NODE_ID_VALID(int vehicleNodeId) /* 0x1EAF30FCFBF5AF74 */
{
	uint64_t val;

	native_init(0x1EAF30FCFBF5AF74);

	*(int*)(&val) = vehicleNodeId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PATHFIND_SET_ROADS_BACK_TO_ORIGINAL(float p0, float p1, float p2, float p3, float p4, float p5) /* 0x1EE7063B80FFC77C */
{
	uint64_t val;

	native_init(0x1EE7063B80FFC77C);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);

	native_call();
}

inline Any PATHFIND_0x1FC289A0C3FF470F(BOOL p0) /* 0x1FC289A0C3FF470F */
{
	uint64_t val;

	native_init(0x1FC289A0C3FF470F);

	*(BOOL*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void PATHFIND_0x228E5C6AD4D74BFD(BOOL p0) /* 0x228E5C6AD4D74BFD */
{
	uint64_t val;

	native_init(0x228E5C6AD4D74BFD);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int PATHFIND_GET_NTH_CLOSEST_VEHICLE_NODE_ID(float x, float y, float z, int nth, int nodetype, float p5, float p6) /* 0x22D7275A79FE8215 */
{
	uint64_t val;

	native_init(0x22D7275A79FE8215);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = nth;
	native_push(val);
	*(int*)(&val) = nodetype;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL PATHFIND_GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, int nodeType, float p5, float p6) /* 0x240A18690AE96513 */
{
	uint64_t val;

	native_init(0x240A18690AE96513);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(Vector3**)(&val) = outPosition;
	native_push(val);
	*(int*)(&val) = nodeType;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PATHFIND_0x2801D0012266DF07(Any p0) /* 0x2801D0012266DF07 */
{
	uint64_t val;

	native_init(0x2801D0012266DF07);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline float PATHFIND_0x29C24BFBED8AB8FB(float p0, float p1) /* 0x29C24BFBED8AB8FB */
{
	uint64_t val;

	native_init(0x29C24BFBED8AB8FB);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL PATHFIND_GET_CLOSEST_MAJOR_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, float p5, int p6) /* 0x2EABE3B06F58C1BE */
{
	uint64_t val;

	native_init(0x2EABE3B06F58C1BE);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(Vector3**)(&val) = outPosition;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(int*)(&val) = p6;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PATHFIND_GET_STREET_NAME_AT_COORD(float x, float y, float z, Hash* streetName, Hash* crossingRoad) /* 0x2EB41072B4C1E4C0 */
{
	uint64_t val;

	native_init(0x2EB41072B4C1E4C0);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(Hash**)(&val) = streetName;
	native_push(val);
	*(Hash**)(&val) = crossingRoad;
	native_push(val);

	native_call();
}

inline float PATHFIND_0x336511A34F2E5185(float left, float right) /* 0x336511A34F2E5185 */
{
	uint64_t val;

	native_init(0x336511A34F2E5185);

	*(float*)(&val) = left;
	native_push(val);
	*(float*)(&val) = right;
	native_push(val);

	return *(float*)(native_call());
}

inline void PATHFIND_SET_PED_PATHS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown) /* 0x34F060F4BF92E018 */
{
	uint64_t val;

	native_init(0x34F060F4BF92E018);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(BOOL*)(&val) = unknown;
	native_push(val);

	native_call();
}

inline float PATHFIND_0x3599D741C9AC6310(float p0, float p1, float p2, float p3) /* 0x3599D741C9AC6310 */
{
	uint64_t val;

	native_init(0x3599D741C9AC6310);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	return *(float*)(native_call());
}

inline void PATHFIND_ADD_NAVMESH_REQUIRED_REGION(float x, float y, float radius) /* 0x387EAD7EE42F6685 */
{
	uint64_t val;

	native_init(0x387EAD7EE42F6685);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);

	native_call();
}

inline BOOL PATHFIND_GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(float x, float y, float z, float desiredX, float desiredY, float desiredZ, int nthClosest, Vector3* outPosition, float* outHeading, int nodetype, Any p10, Any p11) /* 0x45905BE8654AE067 */
{
	uint64_t val;

	native_init(0x45905BE8654AE067);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = desiredX;
	native_push(val);
	*(float*)(&val) = desiredY;
	native_push(val);
	*(float*)(&val) = desiredZ;
	native_push(val);
	*(int*)(&val) = nthClosest;
	native_push(val);
	*(Vector3**)(&val) = outPosition;
	native_push(val);
	*(float**)(&val) = outHeading;
	native_push(val);
	*(int*)(&val) = nodetype;
	native_push(val);
	*(Any*)(&val) = p10;
	native_push(val);
	*(Any*)(&val) = p11;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PATHFIND_REMOVE_NAVMESH_BLOCKING_OBJECT(Any p0) /* 0x46399A7895957C0E */
{
	uint64_t val;

	native_init(0x46399A7895957C0E);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void PATHFIND_DISABLE_NAVMESH_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL disable) /* 0x4C8872D8CDBE1B8B */
{
	uint64_t val;

	native_init(0x4C8872D8CDBE1B8B);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(BOOL*)(&val) = disable;
	native_push(val);

	native_call();
}

inline BOOL PATHFIND__GET_IS_SLOW_ROAD_FLAG(int nodeID) /* 0x4F5070AA58F69279 */
{
	uint64_t val;

	native_init(0x4F5070AA58F69279);

	*(int*)(&val) = nodeID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any PATHFIND_GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* outHeading, int nodeType, float p7, float p8) /* 0x6448050E9C2A7207 */
{
	uint64_t val;

	native_init(0x6448050E9C2A7207);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = nthClosest;
	native_push(val);
	*(Vector3**)(&val) = outPosition;
	native_push(val);
	*(float**)(&val) = outHeading;
	native_push(val);
	*(int*)(&val) = nodeType;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);

	return *(Any*)(native_call());
}

inline void PATHFIND_GET_VEHICLE_NODE_POSITION(int nodeId, Vector3* outPosition) /* 0x703123E5E7D429C2 */
{
	uint64_t val;

	native_init(0x703123E5E7D429C2);

	*(int*)(&val) = nodeId;
	native_push(val);
	*(Vector3**)(&val) = outPosition;
	native_push(val);

	native_call();
}

inline void PATHFIND_SET_IGNORE_NO_GPS_FLAG(BOOL ignore) /* 0x72751156E7678833 */
{
	uint64_t val;

	native_init(0x72751156E7678833);

	*(BOOL*)(&val) = ignore;
	native_push(val);

	native_call();
}

inline BOOL PATHFIND_GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* outHeading, int* outInt, int p6, float p7, float p8) /* 0x80CA6A8B6C094CC4 */
{
	uint64_t val;

	native_init(0x80CA6A8B6C094CC4);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = nthClosest;
	native_push(val);
	*(Vector3**)(&val) = outPosition;
	native_push(val);
	*(float**)(&val) = outHeading;
	native_push(val);
	*(int**)(&val) = outInt;
	native_push(val);
	*(int*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PATHFIND_LOAD_ALL_PATH_NODES(BOOL keepInMemory) /* 0x80E4A6EDDB0BE8D9 */
{
	uint64_t val;

	native_init(0x80E4A6EDDB0BE8D9);

	*(BOOL*)(&val) = keepInMemory;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PATHFIND_ARE_ALL_NAVMESH_REGIONS_LOADED() /* 0x8415D95B194A3AEA */
{
	native_init(0x8415D95B194A3AEA);
	return *(BOOL*)(native_call());
}

inline Any PATHFIND_0x869DAACBBE9FA006() /* 0x869DAACBBE9FA006 */
{
	native_init(0x869DAACBBE9FA006);
	return *(Any*)(native_call());
}

inline float PATHFIND_0x8ABE8608576D9CE3(float p0, float p1, float p2, float p3) /* 0x8ABE8608576D9CE3 */
{
	uint64_t val;

	native_init(0x8ABE8608576D9CE3);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	return *(float*)(native_call());
}

inline void PATHFIND_REMOVE_NAVMESH_REQUIRED_REGIONS() /* 0x916F0A3CDEC3445E */
{
	native_init(0x916F0A3CDEC3445E);
	native_call();
}

inline BOOL PATHFIND_GET_RANDOM_VEHICLE_NODE(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, Vector3* outPosition, int* nodeId) /* 0x93E0DB8440B73A7D */
{
	uint64_t val;

	native_init(0x93E0DB8440B73A7D);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(Vector3**)(&val) = outPosition;
	native_push(val);
	*(int**)(&val) = nodeId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PATHFIND__GET_SUPPORTS_GPS_ROUTE_FLAG(int nodeID) /* 0xA2AE5C478B96E3B6 */
{
	uint64_t val;

	native_init(0xA2AE5C478B96E3B6);

	*(int*)(&val) = nodeID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PATHFIND_0xAA76052DDA9BFC3E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) /* 0xAA76052DDA9BFC3E */
{
	uint64_t val;

	native_init(0xAA76052DDA9BFC3E);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);

	native_call();
}

inline float PATHFIND_CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(float x1, float y1, float z1, float x2, float y2, float z2) /* 0xADD95C7005C4A197 */
{
	uint64_t val;

	native_init(0xADD95C7005C4A197);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL PATHFIND_GET_SAFE_COORD_FOR_PED(float x, float y, float z, BOOL onGround, Vector3* outPosition, int flags) /* 0xB61C8E878A4199CA */
{
	uint64_t val;

	native_init(0xB61C8E878A4199CA);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = onGround;
	native_push(val);
	*(Vector3**)(&val) = outPosition;
	native_push(val);
	*(int*)(&val) = flags;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any PATHFIND_0xBBB45C3CF5C8AA85() /* 0xBBB45C3CF5C8AA85 */
{
	native_init(0xBBB45C3CF5C8AA85);
	return *(Any*)(native_call());
}

inline void PATHFIND_SET_ROADS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown1, BOOL unknown2) /* 0xBF1A602B5BA52FEE */
{
	uint64_t val;

	native_init(0xBF1A602B5BA52FEE);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(BOOL*)(&val) = unknown1;
	native_push(val);
	*(BOOL*)(&val) = unknown2;
	native_push(val);

	native_call();
}

inline void PATHFIND_0xD0BC1C6FB18EE154(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) /* 0xD0BC1C6FB18EE154 */
{
	uint64_t val;

	native_init(0xD0BC1C6FB18EE154);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);

	native_call();
}

inline Any PATHFIND_0xD3A6A0EF48823A8C() /* 0xD3A6A0EF48823A8C */
{
	native_init(0xD3A6A0EF48823A8C);
	return *(Any*)(native_call());
}

inline void PATHFIND_SET_GPS_DISABLED_ZONE(float x1, float y1, float z1, float x2, float y2, float z2) /* 0xDC20483CD3DD5201 */
{
	uint64_t val;

	native_init(0xDC20483CD3DD5201);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);

	native_call();
}

inline void PATHFIND_SET_PED_PATHS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) /* 0xE04B48F2CC926253 */
{
	uint64_t val;

	native_init(0xE04B48F2CC926253);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);

	native_call();
}

inline BOOL PATHFIND_GET_NTH_CLOSEST_VEHICLE_NODE(float x, float y, float z, int nthClosest, Vector3* outPosition, BOOL p6, float p7, float p8) /* 0xE50E52416CCF948B */
{
	uint64_t val;

	native_init(0xE50E52416CCF948B);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(int*)(&val) = nthClosest;
	native_push(val);
	*(Vector3**)(&val) = outPosition;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PATHFIND_0xF7B79A50B905A30D(float p0, float p1, float p2, float p3) /* 0xF7B79A50B905A30D */
{
	uint64_t val;

	native_init(0xF7B79A50B905A30D);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PATHFIND_IS_NAVMESH_LOADED_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) /* 0xF813C7E63F9062A5 */
{
	uint64_t val;

	native_init(0xF813C7E63F9062A5);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PATHFIND_GENERATE_DIRECTIONS_TO_COORD(float x, float y, float z, BOOL p3, float* direction, float* vehicle, float* distToNxJunction) /* 0xF90125F1F79ECDF8 */
{
	uint64_t val;

	native_init(0xF90125F1F79ECDF8);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(float**)(&val) = direction;
	native_push(val);
	*(float**)(&val) = vehicle;
	native_push(val);
	*(float**)(&val) = distToNxJunction;
	native_push(val);

	return *(int*)(native_call());
}

inline Any PATHFIND_ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, Any p8) /* 0xFCD5C8E06E502F5A */
{
	uint64_t val;

	native_init(0xFCD5C8E06E502F5A);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(Any*)(&val) = p8;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL PATHFIND_GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, Vector3* outPosition, float* outHeading, int nodeType, float p6, int p7) /* 0xFF071FB798B803B0 */
{
	uint64_t val;

	native_init(0xFF071FB798B803B0);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(Vector3**)(&val) = outPosition;
	native_push(val);
	*(float**)(&val) = outHeading;
	native_push(val);
	*(int*)(&val) = nodeType;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(int*)(&val) = p7;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_PED_USING_ACTION_MODE(Ped ped) /* 0x00E73468D085F745 */
{
	uint64_t val;

	native_init(0x00E73468D085F745);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED__GET_LIPSTICK_COLOR(int colorID, int* R, int* G, Any* B) /* 0x013E5CFC38CD5387 */
{
	uint64_t val;

	native_init(0x013E5CFC38CD5387);

	*(int*)(&val) = colorID;
	native_push(val);
	*(int**)(&val) = R;
	native_push(val);
	*(int**)(&val) = G;
	native_push(val);
	*(Any**)(&val) = B;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_MIN_MOVE_BLEND_RATIO(Ped ped, float value) /* 0x01A898D26E2333DD */
{
	uint64_t val;

	native_init(0x01A898D26E2333DD);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_RAGDOLL_FORCE_FALL(Ped ped) /* 0x01F6594B923B9251 */
{
	uint64_t val;

	native_init(0x01F6594B923B9251);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_ON_FOOT(Ped ped) /* 0x01FEE67DB37F59B2 */
{
	uint64_t val;

	native_init(0x01FEE67DB37F59B2);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_AS_ENEMY(Ped ped, BOOL toggle) /* 0x02A0C9720B854BFA */
{
	uint64_t val;

	native_init(0x02A0C9720B854BFA);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_DUCKING(Ped ped, BOOL toggle) /* 0x030983CA930B692D */
{
	uint64_t val;

	native_init(0x030983CA930B692D);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PED_0x03EA03AF85A85CB7(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, Any p8) /* 0x03EA03AF85A85CB7 */
{
	uint64_t val;

	native_init(0x03EA03AF85A85CB7);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(Any*)(&val) = p8;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PED_GET_PED_TEXTURE_VARIATION(Ped ped, int componentId) /* 0x04A355E041E004E6 */
{
	uint64_t val;

	native_init(0x04A355E041E004E6);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = componentId;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL PED__IS_PED_LIPSTICK_COLOR_VALID(int colorID) /* 0x0525A2C2562F3CD4 */
{
	uint64_t val;

	native_init(0x0525A2C2562F3CD4);

	*(int*)(&val) = colorID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_0x06087579E7AA85A9(Any p0, Any p1, float p2, float p3, float p4, float p5) /* 0x06087579E7AA85A9 */
{
	uint64_t val;

	native_init(0x06087579E7AA85A9);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0x061CB768363D6424(Any p0, BOOL p1) /* 0x061CB768363D6424 */
{
	uint64_t val;

	native_init(0x061CB768363D6424);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_TARGET_LOSS_RESPONSE(Ped ped, int responseType) /* 0x0703B9079823DA4A */
{
	uint64_t val;

	native_init(0x0703B9079823DA4A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = responseType;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_ANY_PED_NEAR_POINT(float x, float y, float z, float radius) /* 0x083961498679DC9F */
{
	uint64_t val;

	native_init(0x083961498679DC9F);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_MOVE_RATE_OVERRIDE(Ped ped, float value) /* 0x085BF80FA50A39D1 */
{
	uint64_t val;

	native_init(0x085BF80FA50A39D1);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline void PED_CLEAR_PED_PROP(Ped ped, int propId) /* 0x0943E5B8E078E76E */
{
	uint64_t val;

	native_init(0x0943E5B8E078E76E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = propId;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_MOTION_BLUR(Ped ped, BOOL toggle) /* 0x0A986918B102B448 */
{
	uint64_t val;

	native_init(0x0A986918B102B448);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_IN_ANY_POLICE_VEHICLE(Ped ped) /* 0x0BD04E29640C9C12 */
{
	uint64_t val;

	native_init(0x0BD04E29640C9C12);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Ped ped, int index) /* 0x0BDDB8D9EC6BCF3C */
{
	uint64_t val;

	native_init(0x0BDDB8D9EC6BCF3C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = index;
	native_push(val);

	native_call();
}

inline void PED_CLEAR_PED_DECORATIONS(Ped ped) /* 0x0E5173C163976E38 */
{
	uint64_t val;

	native_init(0x0E5173C163976E38);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Ped ped, BOOL toggle) /* 0x0EB0585D15254740 */
{
	uint64_t val;

	native_init(0x0EB0585D15254740);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_CREATE_RANDOM_COPS(BOOL toggle) /* 0x102E68B2024D536D */
{
	uint64_t val;

	native_init(0x102E68B2024D536D);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_0x110F526AB784111F(Ped ped, float p1) /* 0x110F526AB784111F */
{
	uint64_t val;

	native_init(0x110F526AB784111F);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_TO_INFORM_RESPECTED_FRIENDS(Ped ped, float radius, int maxFriends) /* 0x112942C6E708F70B */
{
	uint64_t val;

	native_init(0x112942C6E708F70B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(int*)(&val) = maxFriends;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_VAULTING(Ped ped) /* 0x117C70D1F5730B5E */
{
	uint64_t val;

	native_init(0x117C70D1F5730B5E);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_WAS_PED_SKELETON_UPDATED(Ped ped) /* 0x11B499C1E0FF8559 */
{
	uint64_t val;

	native_init(0x11B499C1E0FF8559);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0x1216E0BFA72CC703(Any p0, Any p1) /* 0x1216E0BFA72CC703 */
{
	uint64_t val;

	native_init(0x1216E0BFA72CC703);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_A_PLAYER(Ped ped) /* 0x12534C348C6CB68B */
{
	uint64_t val;

	native_init(0x12534C348C6CB68B);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0x1280804F7CFD2D6C(Any p0) /* 0x1280804F7CFD2D6C */
{
	uint64_t val;

	native_init(0x1280804F7CFD2D6C);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL PED_CAN_PED_RAGDOLL(Ped ped) /* 0x128F79EDCECE4FD5 */
{
	uint64_t val;

	native_init(0x128F79EDCECE4FD5);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0x129466ED55140F8D(Ped ped, BOOL toggle) /* 0x129466ED55140F8D */
{
	uint64_t val;

	native_init(0x129466ED55140F8D);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_BLEND_FROM_PARENTS(Ped ped, Ped father, Ped mother, float fathersSide, float mothersSide) /* 0x137BBD05230DB22D */
{
	uint64_t val;

	native_init(0x137BBD05230DB22D);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = father;
	native_push(val);
	*(Ped*)(&val) = mother;
	native_push(val);
	*(float*)(&val) = fathersSide;
	native_push(val);
	*(float*)(&val) = mothersSide;
	native_push(val);

	native_call();
}

inline void PED_REMOVE_ACTION_MODE_ASSET(const char* asset) /* 0x13E940F88470FA51 */
{
	uint64_t val;

	native_init(0x13E940F88470FA51);

	*(const char**)(&val) = asset;
	native_push(val);

	native_call();
}

inline BOOL PED_0x14590DDBEDB1EC85(Ped ped) /* 0x14590DDBEDB1EC85 */
{
	uint64_t val;

	native_init(0x14590DDBEDB1EC85);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(BOOL value) /* 0x14F19A8782C8071E */
{
	uint64_t val;

	native_init(0x14F19A8782C8071E);

	*(BOOL*)(&val) = value;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_STEERS_AROUND_OBJECTS(Ped ped, BOOL toggle) /* 0x1509C089ADC208BF */
{
	uint64_t val;

	native_init(0x1509C089ADC208BF);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_FORCE_PED_TO_OPEN_PARACHUTE(Ped ped) /* 0x16E42E800B472221 */
{
	uint64_t val;

	native_init(0x16E42E800B472221);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_COP_PED_IN_AREA_3D(float x1, float y1, float z1, float x2, float y2, float z2) /* 0x16EC4839969F9F5E */
{
	uint64_t val;

	native_init(0x16EC4839969F9F5E);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Hash PED_GET_PED_CAUSE_OF_DEATH(Ped ped) /* 0x16FFE42AB2D2DC59 */
{
	uint64_t val;

	native_init(0x16FFE42AB2D2DC59);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Hash*)(native_call());
}

inline Vector3 PED_GET_PED_BONE_COORDS(Ped ped, int boneId, float offsetX, float offsetY, float offsetZ) /* 0x17C07FC640E86B4E */
{
	uint64_t val;

	native_init(0x17C07FC640E86B4E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = boneId;
	native_push(val);
	*(float*)(&val) = offsetX;
	native_push(val);
	*(float*)(&val) = offsetY;
	native_push(val);
	*(float*)(&val) = offsetZ;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline Ped PED_GET_MELEE_TARGET_FOR_PED(Ped ped) /* 0x18A3E9EE1297FD39 */
{
	uint64_t val;

	native_init(0x18A3E9EE1297FD39);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Ped*)(native_call());
}

inline void PED_SET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL value) /* 0x1913FE4CBF41C463 */
{
	uint64_t val;

	native_init(0x1913FE4CBF41C463);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = flagId;
	native_push(val);
	*(BOOL*)(&val) = value;
	native_push(val);

	native_call();
}

inline void PED_0x1A330D297AAC6BC1(Ped ped, int p1) /* 0x1A330D297AAC6BC1 */
{
	uint64_t val;

	native_init(0x1A330D297AAC6BC1);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_SET_AI_WEAPON_DAMAGE_MODIFIER(float value) /* 0x1B1E2A40A65B8521 */
{
	uint64_t val;

	native_init(0x1B1E2A40A65B8521);

	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline int PED_ADD_SCENARIO_BLOCKING_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7, BOOL p8, BOOL p9) /* 0x1B5C85C612E5256E */
{
	uint64_t val;

	native_init(0x1B5C85C612E5256E);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(BOOL*)(&val) = p9;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL PED_IS_PED_USING_SCENARIO(Ped ped, const char* scenario) /* 0x1BF094736DD62C2E */
{
	uint64_t val;

	native_init(0x1BF094736DD62C2E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = scenario;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_PED_HANGING_ON_TO_VEHICLE(Ped ped) /* 0x1C86D8AEF8254B78 */
{
	uint64_t val;

	native_init(0x1C86D8AEF8254B78);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_CAN_SMASH_GLASS(Ped ped, BOOL p1, BOOL p2) /* 0x1CCE141467FF42A2 */
{
	uint64_t val;

	native_init(0x1CCE141467FF42A2);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void PED_SET_GROUP_FORMATION_SPACING(int groupId, float p1, float p2, float p3) /* 0x1D9D45004C28C916 */
{
	uint64_t val;

	native_init(0x1D9D45004C28C916);

	*(int*)(&val) = groupId;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);

	native_call();
}

inline Any PED_0x1E77FA7A62EE6C4C(Any p0) /* 0x1E77FA7A62EE6C4C */
{
	uint64_t val;

	native_init(0x1E77FA7A62EE6C4C);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline int PED_0x1E98817B311AE98A(Ped ped) /* 0x1E98817B311AE98A */
{
	uint64_t val;

	native_init(0x1E98817B311AE98A);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_0x2016C603D6B8987C(Any p0, BOOL p1) /* 0x2016C603D6B8987C */
{
	uint64_t val;

	native_init(0x2016C603D6B8987C);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_RESET_PED_STRAFE_CLIPSET(Ped ped) /* 0x20510814175EA477 */
{
	uint64_t val;

	native_init(0x20510814175EA477);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline int PED_GET_PED_RAGDOLL_BONE_INDEX(Ped ped, int bone) /* 0x2057EF813397A772 */
{
	uint64_t val;

	native_init(0x2057EF813397A772);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = bone;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_0x2208438012482A1A(Ped ped, BOOL p1, BOOL p2) /* 0x2208438012482A1A */
{
	uint64_t val;

	native_init(0x2208438012482A1A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void PED_RESET_PED_IN_VEHICLE_CONTEXT(Ped ped) /* 0x22EF8FF8778030EB */
{
	uint64_t val;

	native_init(0x22EF8FF8778030EB);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline int PED_GET_PED_NEARBY_PEDS(Ped ped, int* sizeAndPeds, int ignore) /* 0x23F8F5FC7E8C4A6B */
{
	uint64_t val;

	native_init(0x23F8F5FC7E8C4A6B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int**)(&val) = sizeAndPeds;
	native_push(val);
	*(int*)(&val) = ignore;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL PED_IS_PED_RELOADING(Ped ped) /* 0x24B100C68C645951 */
{
	uint64_t val;

	native_init(0x24B100C68C645951);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any PED_0x25361A96E0F7E419(Any p0, Any p1, Any p2, Any p3) /* 0x25361A96E0F7E419 */
{
	uint64_t val;

	native_init(0x25361A96E0F7E419);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL PED_IS_SYNCHRONIZED_SCENE_RUNNING(int sceneId) /* 0x25D39B935A038A26 */
{
	uint64_t val;

	native_init(0x25D39B935A038A26);

	*(int*)(&val) = sceneId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped, const char* clipSet) /* 0x2622E35B77D3ACA2 */
{
	uint64_t val;

	native_init(0x2622E35B77D3ACA2);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = clipSet;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_COMPONENT_VARIATION(Ped ped, int componentId, int drawableId, int textureId, int paletteId) /* 0x262B14F48D29DE80 */
{
	uint64_t val;

	native_init(0x262B14F48D29DE80);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = componentId;
	native_push(val);
	*(int*)(&val) = drawableId;
	native_push(val);
	*(int*)(&val) = textureId;
	native_push(val);
	*(int*)(&val) = paletteId;
	native_push(val);

	native_call();
}

inline void PED__SET_PED_RAGDOLL_BLOCKING_FLAGS(Ped ped, int flags) /* 0x26695EC767728D84 */
{
	uint64_t val;

	native_init(0x26695EC767728D84);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = flags;
	native_push(val);

	native_call();
}

inline BOOL PED_0x26AF0E8E30BD2A2C(Ped ped) /* 0x26AF0E8E30BD2A2C */
{
	uint64_t val;

	native_init(0x26AF0E8E30BD2A2C);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_HELMET_PROP_INDEX(Ped ped, int propIndex) /* 0x26D83693ED99291C */
{
	uint64_t val;

	native_init(0x26D83693ED99291C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = propIndex;
	native_push(val);

	native_call();
}

inline void PED_ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(int sceneID, Entity entity, int boneIndex) /* 0x272E4723B56A3B96 */
{
	uint64_t val;

	native_init(0x272E4723B56A3B96);

	*(int*)(&val) = sceneID;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(int*)(&val) = boneIndex;
	native_push(val);

	native_call();
}

inline void PED_0x2735233A786B1BEF(Ped ped, float p1) /* 0x2735233A786B1BEF */
{
	uint64_t val;

	native_init(0x2735233A786B1BEF);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL PED__GET_PED_HEAD_BLEND_DATA(Ped ped, Any* headBlendData) /* 0x2746BD9D88C5C5D0 */
{
	uint64_t val;

	native_init(0x2746BD9D88C5C5D0);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any**)(&val) = headBlendData;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PED_GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(Ped SC, int sc) /* 0x27561561732A7842 */
{
	uint64_t val;

	native_init(0x27561561732A7842);

	*(Ped*)(&val) = SC;
	native_push(val);
	*(int*)(&val) = sc;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_SET_PED_SWEAT(Ped ped, float sweat) /* 0x27B0405F59637D1F */
{
	uint64_t val;

	native_init(0x27B0405F59637D1F);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = sweat;
	native_push(val);

	native_call();
}

inline void PED_0x280C7E3AC7F56E90(Any p0, Any* p1, Any* p2, Any* p3) /* 0x280C7E3AC7F56E90 */
{
	uint64_t val;

	native_init(0x280C7E3AC7F56E90);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);

	native_call();
}

inline void PED_SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(float x, float y, float z, float range, int p4) /* 0x28157D43CF600981 */
{
	uint64_t val;

	native_init(0x28157D43CF600981);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = range;
	native_push(val);
	*(int*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void PED_0x288DF530C92DAD6F(Any p0, float p1) /* 0x288DF530C92DAD6F */
{
	uint64_t val;

	native_init(0x288DF530C92DAD6F);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_REQUEST_ACTION_MODE_ASSET(const char* asset) /* 0x290E2780BB7AA598 */
{
	uint64_t val;

	native_init(0x290E2780BB7AA598);

	*(const char**)(&val) = asset;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_IN_ANY_HELI(Ped ped) /* 0x298B91AE825E5705 */
{
	uint64_t val;

	native_init(0x298B91AE825E5705);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_STRAFE_CLIPSET(Ped ped, const char* clipSet) /* 0x29A28F3F8CF6D854 */
{
	uint64_t val;

	native_init(0x29A28F3F8CF6D854);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = clipSet;
	native_push(val);

	native_call();
}

inline void PED_REQUEST_STEALTH_MODE_ASSET(const char* asset) /* 0x2A0A62FCDEE16D4F */
{
	uint64_t val;

	native_init(0x2A0A62FCDEE16D4F);

	*(const char**)(&val) = asset;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_DIES_IN_VEHICLE(Ped ped, BOOL toggle) /* 0x2A30922C90C9B42C */
{
	uint64_t val;

	native_init(0x2A30922C90C9B42C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_AS_GROUP_LEADER(Ped ped, int groupId) /* 0x2A7819605465FBCE */
{
	uint64_t val;

	native_init(0x2A7819605465FBCE);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = groupId;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_RUNNING_MOBILE_PHONE_TASK(Ped ped) /* 0x2AFE52F782F25775 */
{
	uint64_t val;

	native_init(0x2AFE52F782F25775);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED__IS_PED_PROP_VALID(Ped ped, int componentId, int drawableId, int TextureId) /* 0x2B16A3BFF1FBCE49 */
{
	uint64_t val;

	native_init(0x2B16A3BFF1FBCE49);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = componentId;
	native_push(val);
	*(int*)(&val) = drawableId;
	native_push(val);
	*(int*)(&val) = TextureId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0x2B5AA717A181FB4C(Ped ped, BOOL p1) /* 0x2B5AA717A181FB4C */
{
	uint64_t val;

	native_init(0x2B5AA717A181FB4C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_0x2B694AFCF64E6994(Ped ped, BOOL p1) /* 0x2B694AFCF64E6994 */
{
	uint64_t val;

	native_init(0x2B694AFCF64E6994);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_GET_PED_FLOOD_INVINCIBILITY(Ped ped, BOOL p1) /* 0x2BC338A7B21F4608 */
{
	uint64_t val;

	native_init(0x2BC338A7B21F4608);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_EXPLODE_PED_HEAD(Ped ped, Hash weaponHash) /* 0x2D05CED3A38D0F3A */
{
	uint64_t val;

	native_init(0x2D05CED3A38D0F3A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = weaponHash;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_VISUAL_FIELD_MIN_ANGLE(Ped ped, float value) /* 0x2DB492222FB21E26 */
{
	uint64_t val;

	native_init(0x2DB492222FB21E26);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline void PED_0x2DF9038C90AD5264(float p0, float p1, float p2, float p3, float p4, int interiorFlags, float scale, int duration) /* 0x2DF9038C90AD5264 */
{
	uint64_t val;

	native_init(0x2DF9038C90AD5264);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(int*)(&val) = interiorFlags;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);

	native_call();
}

inline void PED_CLEAR_PED_NON_CREATION_AREA() /* 0x2E05208086BA0651 */
{
	native_init(0x2E05208086BA0651);
	native_call();
}

inline BOOL PED_IS_PED_IN_ANY_BOAT(Ped ped) /* 0x2E0E1C2B4F6CB339 */
{
	uint64_t val;

	native_init(0x2E0E1C2B4F6CB339);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Ped pedHandle, int groupHandle, BOOL toggle) /* 0x2E2F4240B3F24647 */
{
	uint64_t val;

	native_init(0x2E2F4240B3F24647);

	*(Ped*)(&val) = pedHandle;
	native_push(val);
	*(int*)(&val) = groupHandle;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_REGISTER_TARGET(Ped ped, Ped target) /* 0x2F25D9AEFA34FBA2 */
{
	uint64_t val;

	native_init(0x2F25D9AEFA34FBA2);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = target;
	native_push(val);

	native_call();
}

inline void PED_0x2F3C3D9F50681DE4(Any p0, BOOL p1) /* 0x2F3C3D9F50681DE4 */
{
	uint64_t val;

	native_init(0x2F3C3D9F50681DE4);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_REMOVE_SCENARIO_BLOCKING_AREA(int areaHandle, BOOL p1) /* 0x31D16B74C6E29D66 */
{
	uint64_t val;

	native_init(0x31D16B74C6E29D66);

	*(int*)(&val) = areaHandle;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_APPLY_PED_BLOOD_BY_ZONE(Ped ped, Any p1, float p2, float p3, Any* p4) /* 0x3311E47B91EDCBBC */
{
	uint64_t val;

	native_init(0x3311E47B91EDCBBC);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(Any**)(&val) = p4;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_DEAD_OR_DYING(Ped ped, BOOL p1) /* 0x3317DEDB88C95038 */
{
	uint64_t val;

	native_init(0x3317DEDB88C95038);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_TO_LOAD_COVER(Ped ped, BOOL toggle) /* 0x332B562EEDA62399 */
{
	uint64_t val;

	native_init(0x332B562EEDA62399);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_PARACHUTE_TINT_INDEX(Ped ped, int tintIndex) /* 0x333FC8DB079B7186 */
{
	uint64_t val;

	native_init(0x333FC8DB079B7186);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = tintIndex;
	native_push(val);

	native_call();
}

inline BOOL PED__IS_ENEMY_IN_RANGE(Ped ped, float x, float y, float z, float range) /* 0x336B3D200AB007CB */
{
	uint64_t val;

	native_init(0x336B3D200AB007CB);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = range;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED__SET_PED_CAN_PLAY_INJURED_ANIMS(Ped ped, BOOL p1) /* 0x33A60D8BDD6E508C */
{
	uint64_t val;

	native_init(0x33A60D8BDD6E508C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_HEARING_RANGE(Ped ped, float value) /* 0x33A8F7F7D5F7F33C */
{
	uint64_t val;

	native_init(0x33A8F7F7D5F7F33C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_SHOOTING(Ped ped) /* 0x34616828CD07F1A1 */
{
	uint64_t val;

	native_init(0x34616828CD07F1A1);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_CAPSULE(Ped ped, float value) /* 0x364DF566EC833DE2 */
{
	uint64_t val;

	native_init(0x364DF566EC833DE2);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline Any PED_0x36B77BB84687C318(Ped ped, Any p1) /* 0x36B77BB84687C318 */
{
	uint64_t val;

	native_init(0x36B77BB84687C318);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline void PED_0x36C6984C3ED0C911(Any p0) /* 0x36C6984C3ED0C911 */
{
	uint64_t val;

	native_init(0x36C6984C3ED0C911);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline int PED_GET_PED_ACCURACY(Ped ped) /* 0x37F4AD56ECBC0CD6 */
{
	uint64_t val;

	native_init(0x37F4AD56ECBC0CD6);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED__SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(int sceneID, BOOL p1) /* 0x394B9CD12435C981 */
{
	uint64_t val;

	native_init(0x394B9CD12435C981);

	*(int*)(&val) = sceneID;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_APPLY_PED_DAMAGE_DECAL(Ped ped, int p1, float p2, float p3, float p4, float p5, float p6, int p7, BOOL p8, const char* p9) /* 0x397C38AA7B4A5F83 */
{
	uint64_t val;

	native_init(0x397C38AA7B4A5F83);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(int*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(const char**)(&val) = p9;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_AIMING_FROM_COVER(Ped ped) /* 0x3998B1276A3300E5 */
{
	uint64_t val;

	native_init(0x3998B1276A3300E5);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any PED_0x39D55A620FCB6A3A(Ped ped, int slot, int drawableId, int textureId) /* 0x39D55A620FCB6A3A */
{
	uint64_t val;

	native_init(0x39D55A620FCB6A3A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = slot;
	native_push(val);
	*(int*)(&val) = drawableId;
	native_push(val);
	*(int*)(&val) = textureId;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any PED_RESET_PED_VISIBLE_DAMAGE(Ped ped) /* 0x3AC1F7B898F30C05 */
{
	uint64_t val;

	native_init(0x3AC1F7B898F30C05);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Any*)(native_call());
}

inline void PED_SET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped, float angle) /* 0x3B6405E8AB34A907 */
{
	uint64_t val;

	native_init(0x3B6405E8AB34A907);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = angle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_ALLOW_VEHICLES_OVERRIDE(Ped ped, BOOL toggle) /* 0x3C028C636A414ED9 */
{
	uint64_t val;

	native_init(0x3C028C636A414ED9);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Vector3 PED_GET_PED_DEFENSIVE_AREA_POSITION(Ped ped, BOOL p1) /* 0x3C06B8786DD94CD1 */
{
	uint64_t val;

	native_init(0x3C06B8786DD94CD1);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline void PED_SET_PED_COMBAT_RANGE(Ped ped, int p1) /* 0x3C606747B23E497B */
{
	uint64_t val;

	native_init(0x3C606747B23E497B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Any PED_0x3C67506996001F5E() /* 0x3C67506996001F5E */
{
	native_init(0x3C67506996001F5E);
	return *(Any*)(native_call());
}

inline void PED_SET_PED_NEVER_LEAVES_GROUP(Ped ped, BOOL toggle) /* 0x3DBFC55D5C9BB447 */
{
	uint64_t val;

	native_init(0x3DBFC55D5C9BB447);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PED_0x3E802F11FBE27674(Any p0) /* 0x3E802F11FBE27674 */
{
	uint64_t val;

	native_init(0x3E802F11FBE27674);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_CAN_CREATE_RANDOM_PED(BOOL unk) /* 0x3E8349C08E4B82E4 */
{
	uint64_t val;

	native_init(0x3E8349C08E4B82E4);

	*(BOOL*)(&val) = unk;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PED_GET_PED_BONE_INDEX(Ped ped, int boneId) /* 0x3F428D08BE5AAE31 */
{
	uint64_t val;

	native_init(0x3F428D08BE5AAE31);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = boneId;
	native_push(val);

	return *(int*)(native_call());
}

inline int PED_GET_PED_MONEY(Ped ped) /* 0x3F69145BBA87BAE7 */
{
	uint64_t val;

	native_init(0x3F69145BBA87BAE7);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_SET_GROUP_SEPARATION_RANGE(int groupHandle, float separationRange) /* 0x4102C7858CFEE4E4 */
{
	uint64_t val;

	native_init(0x4102C7858CFEE4E4);

	*(int*)(&val) = groupHandle;
	native_push(val);
	*(float*)(&val) = separationRange;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_DEFENSIVE_AREA_DIRECTION(Ped ped, float p1, float p2, float p3, BOOL p4) /* 0x413C6C763A4AFFAD */
{
	uint64_t val;

	native_init(0x413C6C763A4AFFAD);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_EVASIVE_DIVING(Ped ped, Entity* evadingEntity) /* 0x414641C26E105898 */
{
	uint64_t val;

	native_init(0x414641C26E105898);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Entity**)(&val) = evadingEntity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_CREATE_NM_MESSAGE(BOOL startImmediately, int messageId) /* 0x418EF2A1BCE56685 */
{
	uint64_t val;

	native_init(0x418EF2A1BCE56685);

	*(BOOL*)(&val) = startImmediately;
	native_push(val);
	*(int*)(&val) = messageId;
	native_push(val);

	native_call();
}

inline void PED_0x425AECF167663F48(Ped ped, BOOL p1) /* 0x425AECF167663F48 */
{
	uint64_t val;

	native_init(0x425AECF167663F48);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Hash PED_GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped) /* 0x42FDD0F017B1E38E */
{
	uint64_t val;

	native_init(0x42FDD0F017B1E38E);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Hash*)(native_call());
}

inline void PED_SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(Ped ped, BOOL toggle) /* 0x4328652AE5769C71 */
{
	uint64_t val;

	native_init(0x4328652AE5769C71);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_MAX_MOVE_BLEND_RATIO(Ped ped, float value) /* 0x433083750C5E064A */
{
	uint64_t val;

	native_init(0x433083750C5E064A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_JUMPING_OUT_OF_VEHICLE(Ped ped) /* 0x433DDFFE2044B636 */
{
	uint64_t val;

	native_init(0x433DDFFE2044B636);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_MAX_TIME_IN_WATER(Ped ped, float value) /* 0x43C851690662113D */
{
	uint64_t val;

	native_init(0x43C851690662113D);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline void PED_SET_CREATE_RANDOM_COPS_ON_SCENARIOS(BOOL toggle) /* 0x444CB7D7DBE6973D */
{
	uint64_t val;

	native_init(0x444CB7D7DBE6973D);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int PED_REGISTER_PEDHEADSHOT(Ped ped) /* 0x4462658788425076 */
{
	uint64_t val;

	native_init(0x4462658788425076);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_SET_PED_WETNESS_HEIGHT(Ped ped, float height) /* 0x44CB6447D2571AA0 */
{
	uint64_t val;

	native_init(0x44CB6447D2571AA0);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = height;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(Ped ped) /* 0x44D28D5DDFE5F68C */
{
	uint64_t val;

	native_init(0x44D28D5DDFE5F68C);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_0x451294E859ECC018(int p0) /* 0x451294E859ECC018 */
{
	uint64_t val;

	native_init(0x451294E859ECC018);

	*(int*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_KNOCK_PED_OFF_VEHICLE(Ped ped) /* 0x45BBCBA77C29A841 */
{
	uint64_t val;

	native_init(0x45BBCBA77C29A841);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_DEFAULT_COMPONENT_VARIATION(Ped ped) /* 0x45EEE61580806D63 */
{
	uint64_t val;

	native_init(0x45EEE61580806D63);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_ON_MOUNT(Ped ped) /* 0x460BC76A0E10655E */
{
	uint64_t val;

	native_init(0x460BC76A0E10655E);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0x4668D80430D6C299(Ped ped) /* 0x4668D80430D6C299 */
{
	uint64_t val;

	native_init(0x4668D80430D6C299);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline BOOL PED_0x46B05BCAE43856B0(Ped ped, int flag) /* 0x46B05BCAE43856B0 */
{
	uint64_t val;

	native_init(0x46B05BCAE43856B0);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = flag;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_APPLY_PED_DAMAGE_PACK(Ped ped, const char* damagePack, float damage, float mult) /* 0x46DF918788CB093F */
{
	uint64_t val;

	native_init(0x46DF918788CB093F);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = damagePack;
	native_push(val);
	*(float*)(&val) = damage;
	native_push(val);
	*(float*)(&val) = mult;
	native_push(val);

	native_call();
}

inline void PED_RESET_AI_MELEE_WEAPON_DAMAGE_MODIFIER() /* 0x46E56A7CD1D63C3F */
{
	native_init(0x46E56A7CD1D63C3F);
	native_call();
}

inline void PED_SET_PED_STEERS_AROUND_PEDS(Ped ped, BOOL toggle) /* 0x46F2193B3AD1D891 */
{
	uint64_t val;

	native_init(0x46F2193B3AD1D891);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int PED_GET_PED_MAX_HEALTH(Ped ped) /* 0x4700A416E8324EF3 */
{
	uint64_t val;

	native_init(0x4700A416E8324EF3);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_0x4759CC730F947C81() /* 0x4759CC730F947C81 */
{
	native_init(0x4759CC730F947C81);
	native_call();
}

inline BOOL PED_IS_PED_RAGDOLL(Ped ped) /* 0x47E4E977581C5B55 */
{
	uint64_t val;

	native_init(0x47E4E977581C5B55);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED__GET_HAIR_COLOR(int colorID, int* R, int* G, int* B) /* 0x4852FC386E2E1BB5 */
{
	uint64_t val;

	native_init(0x4852FC386E2E1BB5);

	*(int*)(&val) = colorID;
	native_push(val);
	*(int**)(&val) = R;
	native_push(val);
	*(int**)(&val) = G;
	native_push(val);
	*(int**)(&val) = B;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_IN_COMBAT(Ped ped, Ped target) /* 0x4859F1FC66A6278E */
{
	uint64_t val;

	native_init(0x4859F1FC66A6278E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = target;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_HEAD_OVERLAY(Ped ped, int overlayID, int index, float opacity) /* 0x48F44967FA05CC1E */
{
	uint64_t val;

	native_init(0x48F44967FA05CC1E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = overlayID;
	native_push(val);
	*(int*)(&val) = index;
	native_push(val);
	*(float*)(&val) = opacity;
	native_push(val);

	native_call();
}

inline void PED__SET_PED_HEAD_OVERLAY_COLOR(Ped ped, int overlayID, int colorType, int colorID, int secondColorID) /* 0x497BF74A7B9CB952 */
{
	uint64_t val;

	native_init(0x497BF74A7B9CB952);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = overlayID;
	native_push(val);
	*(int*)(&val) = colorType;
	native_push(val);
	*(int*)(&val) = colorID;
	native_push(val);
	*(int*)(&val) = secondColorID;
	native_push(val);

	native_call();
}

inline void PED_0x49E50BDB8BA4DAB2(Ped ped, BOOL p1) /* 0x49E50BDB8BA4DAB2 */
{
	uint64_t val;

	native_init(0x49E50BDB8BA4DAB2);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_JACKING(Ped ped) /* 0x4AE4FF911DFB61DA */
{
	uint64_t val;

	native_init(0x4AE4FF911DFB61DA);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped) /* 0x4AFE3690D7E0B5AC */
{
	uint64_t val;

	native_init(0x4AFE3690D7E0B5AC);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline Vector3 PED_GET_ANIM_INITIAL_OFFSET_ROTATION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) /* 0x4B805E6046EE9E47 */
{
	uint64_t val;

	native_init(0x4B805E6046EE9E47);

	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(int*)(&val) = p9;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline BOOL PED_IS_PED_TRACKED(Ped ped) /* 0x4C5E1F087CD10BB7 */
{
	uint64_t val;

	native_init(0x4C5E1F087CD10BB7);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED__SET_PED_HAIR_COLOR(Ped ped, int colorID, int highlightColorID) /* 0x4CFFC65454C93A49 */
{
	uint64_t val;

	native_init(0x4CFFC65454C93A49);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = colorID;
	native_push(val);
	*(int*)(&val) = highlightColorID;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_COMBAT_MOVEMENT(Ped ped, int combatMovement) /* 0x4D9CA1009AFBD057 */
{
	uint64_t val;

	native_init(0x4D9CA1009AFBD057);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = combatMovement;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_IN_MELEE_COMBAT(Ped ped) /* 0x4E209B2C1EAD5159 */
{
	uint64_t val;

	native_init(0x4E209B2C1EAD5159);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Ped ped, Ped attachPed, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9, BOOL p10) /* 0x4EF47FE21698A8B6 */
{
	uint64_t val;

	native_init(0x4EF47FE21698A8B6);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = attachPed;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(BOOL*)(&val) = p9;
	native_push(val);
	*(BOOL*)(&val) = p10;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_BOUNDS_ORIENTATION(Ped ped, float p1, float p2, float p3, float p4, float p5) /* 0x4F5F651ACCC9C4CF */
{
	uint64_t val;

	native_init(0x4F5F651ACCC9C4CF);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_BEING_STUNNED(Ped ped, int p1) /* 0x4FBACCE3B4138EE8 */
{
	uint64_t val;

	native_init(0x4FBACCE3B4138EE8);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(float x, float y, float z) /* 0x5086C7843552CF85 */
{
	uint64_t val;

	native_init(0x5086C7843552CF85);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void PED__SET_PED_EYE_COLOR(Ped ped, int index) /* 0x50B56988B170AFDF */
{
	uint64_t val;

	native_init(0x50B56988B170AFDF);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = index;
	native_push(val);

	native_call();
}

inline Any PED_0x511F1A683387C7E2(Any p0) /* 0x511F1A683387C7E2 */
{
	uint64_t val;

	native_init(0x511F1A683387C7E2);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline Ped PED_GET_PED_AS_GROUP_MEMBER(int groupID, int memberNumber) /* 0x51455483CF23ED97 */
{
	uint64_t val;

	native_init(0x51455483CF23ED97);

	*(int*)(&val) = groupID;
	native_push(val);
	*(int*)(&val) = memberNumber;
	native_push(val);

	return *(Ped*)(native_call());
}

inline BOOL PED_CAN_KNOCK_PED_OFF_VEHICLE(Ped ped) /* 0x51AC07A44D4F5B8A */
{
	uint64_t val;

	native_init(0x51AC07A44D4F5B8A);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Ped ped, int p1, const char* p2) /* 0x523C79AEEFCC4A2A */
{
	uint64_t val;

	native_init(0x523C79AEEFCC4A2A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = p2;
	native_push(val);

	native_call();
}

inline void PED_0x52D59AB61DDC05DD(Ped ped, BOOL p1) /* 0x52D59AB61DDC05DD */
{
	uint64_t val;

	native_init(0x52D59AB61DDC05DD);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline float PED_GET_COMBAT_FLOAT(Ped ped, int p1) /* 0x52DFF8A10508090A */
{
	uint64_t val;

	native_init(0x52DFF8A10508090A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	return *(float*)(native_call());
}

inline void PED_SET_PED_IN_VEHICLE_CONTEXT(Ped ped, Hash context) /* 0x530071295899A8C6 */
{
	uint64_t val;

	native_init(0x530071295899A8C6);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = context;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_STOPPED(Ped ped) /* 0x530944F6F4B8A214 */
{
	uint64_t val;

	native_init(0x530944F6F4B8A214);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_PED_CLIMBING(Ped ped) /* 0x53E8CB4F48BFE623 */
{
	uint64_t val;

	native_init(0x53E8CB4F48BFE623);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PED_0x5407B7288D0478B7(Any p0) /* 0x5407B7288D0478B7 */
{
	uint64_t val;

	native_init(0x5407B7288D0478B7);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline Ped PED_GET_JACK_TARGET(Ped ped) /* 0x5486A79D9FBD342D */
{
	uint64_t val;

	native_init(0x5486A79D9FBD342D);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Ped*)(native_call());
}

inline void PED_GIVE_PED_HELMET(Ped ped, BOOL cannotRemove, int helmetFlag, int textureIndex) /* 0x54C7C4A94367717E */
{
	uint64_t val;

	native_init(0x54C7C4A94367717E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = cannotRemove;
	native_push(val);
	*(int*)(&val) = helmetFlag;
	native_push(val);
	*(int*)(&val) = textureIndex;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_DIVING(Ped ped) /* 0x5527B8246FEF9B11 */
{
	uint64_t val;

	native_init(0x5527B8246FEF9B11);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_HELMET(Ped ped, BOOL canWearHelmet) /* 0x560A43136EB58105 */
{
	uint64_t val;

	native_init(0x560A43136EB58105);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = canWearHelmet;
	native_push(val);

	native_call();
}

inline void PED__SET_PED_FACIAL_DECORATION(Ped ped, Hash collection, Hash overlay) /* 0x5619BFA07CFD7833 */
{
	uint64_t val;

	native_init(0x5619BFA07CFD7833);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = collection;
	native_push(val);
	*(Hash*)(&val) = overlay;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_DIES_IN_WATER(Ped ped, BOOL toggle) /* 0x56CEF0AC79073BDE */
{
	uint64_t val;

	native_init(0x56CEF0AC79073BDE);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, int p1) /* 0x56E3B78C5408D9F4 */
{
	uint64_t val;

	native_init(0x56E3B78C5408D9F4);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_0x570389D1C3DE3C6B(Any p0) /* 0x570389D1C3DE3C6B */
{
	uint64_t val;

	native_init(0x570389D1C3DE3C6B);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void PED_0x576594E8D64375E2(Any p0, BOOL p1) /* 0x576594E8D64375E2 */
{
	uint64_t val;

	native_init(0x576594E8D64375E2);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_USING_ANY_SCENARIO(Ped ped) /* 0x57AB4A3080F85143 */
{
	uint64_t val;

	native_init(0x57AB4A3080F85143);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_PED_IN_GROUP(Ped ped) /* 0x5891CAC5D4ACFF74 */
{
	uint64_t val;

	native_init(0x5891CAC5D4ACFF74);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_SCRIPTED_ANIM_SEAT_OFFSET(Ped ped, float p1) /* 0x5917BBA32D06C230 */
{
	uint64_t val;

	native_init(0x5917BBA32D06C230);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_HURT(Ped ped) /* 0x5983BB449D7FDB12 */
{
	uint64_t val;

	native_init(0x5983BB449D7FDB12);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0x5A7F62FDA59759BD() /* 0x5A7F62FDA59759BD */
{
	native_init(0x5A7F62FDA59759BD);
	native_call();
}

inline void PED_0x5AAB586FFEC0FD96(Any p0) /* 0x5AAB586FFEC0FD96 */
{
	uint64_t val;

	native_init(0x5AAB586FFEC0FD96);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void PED_0x5B6010B3CBC29095(Any p0, BOOL p1) /* 0x5B6010B3CBC29095 */
{
	uint64_t val;

	native_init(0x5B6010B3CBC29095);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_ADD_ARMOUR_TO_PED(Ped ped, int amount) /* 0x5BA652A0CD14DF2F */
{
	uint64_t val;

	native_init(0x5BA652A0CD14DF2F);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = amount;
	native_push(val);

	native_call();
}

inline Any PED_SET_PED_DIES_WHEN_INJURED(Ped ped, BOOL toggle) /* 0x5BA7919BED300023 */
{
	uint64_t val;

	native_init(0x5BA7919BED300023);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	return *(Any*)(native_call());
}

inline Ped PED__GET_PED_AS_GROUP_LEADER(int groupID) /* 0x5CCE68DBD5FE93EC */
{
	uint64_t val;

	native_init(0x5CCE68DBD5FE93EC);

	*(int*)(&val) = groupID;
	native_push(val);

	return *(Ped*)(native_call());
}

inline BOOL PED_IS_PED_HEADTRACKING_PED(Ped ped1, Ped ped2) /* 0x5CD3CB88A7F8850D */
{
	uint64_t val;

	native_init(0x5CD3CB88A7F8850D);

	*(Ped*)(&val) = ped1;
	native_push(val);
	*(Ped*)(&val) = ped2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0x5D517B27CF6ECD04(Any p0) /* 0x5D517B27CF6ECD04 */
{
	uint64_t val;

	native_init(0x5D517B27CF6ECD04);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void PED_CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) /* 0x5E29243FB56FC6D4 */
{
	uint64_t val;

	native_init(0x5E29243FB56FC6D4);

	*(int*)(&val) = relationship;
	native_push(val);
	*(Hash*)(&val) = group1;
	native_push(val);
	*(Hash*)(&val) = group2;
	native_push(val);

	native_call();
}

inline BOOL PED_CAN_CREATE_RANDOM_COPS() /* 0x5EE2CAFF7F17770D */
{
	native_init(0x5EE2CAFF7F17770D);
	return *(BOOL*)(native_call());
}

inline int PED__GET_NUM_PARENT_PEDS_OF_TYPE(int type) /* 0x5EF37013A6539C9D */
{
	uint64_t val;

	native_init(0x5EF37013A6539C9D);

	*(int*)(&val) = type;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED__SET_PED_DECORATION(Ped ped, Hash collection, Hash overlay) /* 0x5F5D1665E352A839 */
{
	uint64_t val;

	native_init(0x5F5D1665E352A839);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = collection;
	native_push(val);
	*(Hash*)(&val) = overlay;
	native_push(val);

	native_call();
}

inline int PED_GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(Ped ped, int propId) /* 0x5FAF9754E789FB47 */
{
	uint64_t val;

	native_init(0x5FAF9754E789FB47);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = propId;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL PED_IS_PED_IN_ANY_PLANE(Ped ped) /* 0x5FFF4CFC74D8FB80 */
{
	uint64_t val;

	native_init(0x5FFF4CFC74D8FB80);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0x600048C60D5C2C51(Any p0) /* 0x600048C60D5C2C51 */
{
	uint64_t val;

	native_init(0x600048C60D5C2C51);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL PED__IS_PED_BLUSH_COLOR_VALID(int colorID) /* 0x604E810189EE3A59 */
{
	uint64_t val;

	native_init(0x604E810189EE3A59);

	*(int*)(&val) = colorID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Vehicle PED_GET_VEHICLE_PED_IS_USING(Ped ped) /* 0x6094AD011A2EA87D */
{
	uint64_t val;

	native_init(0x6094AD011A2EA87D);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Vehicle*)(native_call());
}

inline BOOL PED_IS_PED_IN_COVER(Ped ped, BOOL exceptUseWeapon) /* 0x60DFD0691A170B88 */
{
	uint64_t val;

	native_init(0x60DFD0691A170B88);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = exceptUseWeapon;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_SHOOT_RATE(Ped ped, int shootRate) /* 0x614DA022990752DC */
{
	uint64_t val;

	native_init(0x614DA022990752DC);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = shootRate;
	native_push(val);

	native_call();
}

inline BOOL PED_0x61767F73EACEED21(Ped ped) /* 0x61767F73EACEED21 */
{
	uint64_t val;

	native_init(0x61767F73EACEED21);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_SYNCHRONIZED_SCENE_LOOPED(int sceneID) /* 0x62522002E0C391BA */
{
	uint64_t val;

	native_init(0x62522002E0C391BA);

	*(int*)(&val) = sceneID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_PED_RESPONDING_TO_EVENT(Ped ped, Any event) /* 0x625B774D75C87068 */
{
	uint64_t val;

	native_init(0x625B774D75C87068);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any*)(&val) = event;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_HIDE_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, BOOL p2) /* 0x62AB793144DE75DC */
{
	uint64_t val;

	native_init(0x62AB793144DE75DC);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline int PED__CREATE_SYNCHRONIZED_SCENE_2(float x, float y, float z, float radius, Hash object) /* 0x62EC273D00187DCA */
{
	uint64_t val;

	native_init(0x62EC273D00187DCA);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(Hash*)(&val) = object;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_SET_PED_CAN_PLAY_AMBIENT_ANIMS(Ped ped, BOOL toggle) /* 0x6373D1349925A70E */
{
	uint64_t val;

	native_init(0x6373D1349925A70E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_BE_TARGETED_WHEN_INJURED(Ped ped, BOOL toggle) /* 0x638C03B0F9878F57 */
{
	uint64_t val;

	native_init(0x638C03B0F9878F57);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_RESET_GROUP_FORMATION_DEFAULT_SPACING(int groupId) /* 0x63DAB4CCB3273205 */
{
	uint64_t val;

	native_init(0x63DAB4CCB3273205);

	*(int*)(&val) = groupId;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_BE_TARGETTED(Ped ped, BOOL toggle) /* 0x63F58F7C80513AAD */
{
	uint64_t val;

	native_init(0x63F58F7C80513AAD);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PED_HAS_PED_HEAD_BLEND_FINISHED(Ped ped) /* 0x654CD0A825161131 */
{
	uint64_t val;

	native_init(0x654CD0A825161131);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any PED_0x6585D955A68452A5(Ped ped) /* 0x6585D955A68452A5 */
{
	uint64_t val;

	native_init(0x6585D955A68452A5);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Any*)(native_call());
}

inline void PED_SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(float modifier) /* 0x66460DEDDD417254 */
{
	uint64_t val;

	native_init(0x66460DEDDD417254);

	*(float*)(&val) = modifier;
	native_push(val);

	native_call();
}

inline void PED_0x6647C5F6F5792496(Ped ped, BOOL p1) /* 0x6647C5F6F5792496 */
{
	uint64_t val;

	native_init(0x6647C5F6F5792496);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL PED_0x66680A92700F43DF(Ped p0) /* 0x66680A92700F43DF */
{
	uint64_t val;

	native_init(0x66680A92700F43DF);

	*(Ped*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Ped ped, Player player, BOOL toggle) /* 0x66B57B72E0836A76 */
{
	uint64_t val;

	native_init(0x66B57B72E0836A76);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_ON_VEHICLE(Ped ped) /* 0x67722AEB798E5FAB */
{
	uint64_t val;

	native_init(0x67722AEB798E5FAB);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PED_GET_PED_DRAWABLE_VARIATION(Ped ped, int componentId) /* 0x67F3780DD425D4FC */
{
	uint64_t val;

	native_init(0x67F3780DD425D4FC);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = componentId;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL PED_0x68772DB2B2526F9F(Ped ped, float x, float y, float z, float range) /* 0x68772DB2B2526F9F */
{
	uint64_t val;

	native_init(0x68772DB2B2526F9F);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = range;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0x687C0B594907D2E8(Ped ped) /* 0x687C0B594907D2E8 */
{
	uint64_t val;

	native_init(0x687C0B594907D2E8);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline int PED__GET_FIRST_PARENT_ID_FOR_PED_TYPE(int type) /* 0x68D353AB88B97E0C */
{
	uint64_t val;

	native_init(0x68D353AB88B97E0C);

	*(int*)(&val) = type;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_APPLY_DAMAGE_TO_PED(Ped ped, int damageAmount, BOOL armorFirst) /* 0x697157CED63F18D4 */
{
	uint64_t val;

	native_init(0x697157CED63F18D4);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = damageAmount;
	native_push(val);
	*(BOOL*)(&val) = armorFirst;
	native_push(val);

	native_call();
}

inline BOOL PED__IS_PED_STANDING_IN_COVER(Ped ped) /* 0x6A03BF943D767C93 */
{
	uint64_t val;

	native_init(0x6A03BF943D767C93);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Player PED_GET_PLAYER_PED_IS_FOLLOWING(Ped ped) /* 0x6A3975DEA89F9A17 */
{
	uint64_t val;

	native_init(0x6A3975DEA89F9A17);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Player*)(native_call());
}

inline void PED_SET_SYNCHRONIZED_SCENE_ORIGIN(int sceneID, float x, float y, float z, float roll, float pitch, float yaw, int unk) /* 0x6ACF6B7225801CD7 */
{
	uint64_t val;

	native_init(0x6ACF6B7225801CD7);

	*(int*)(&val) = sceneID;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = roll;
	native_push(val);
	*(float*)(&val) = pitch;
	native_push(val);
	*(float*)(&val) = yaw;
	native_push(val);
	*(int*)(&val) = unk;
	native_push(val);

	native_call();
}

inline void PED_0x6B0E6172C9A4D902(BOOL p0) /* 0x6B0E6172C9A4D902 */
{
	uint64_t val;

	native_init(0x6B0E6172C9A4D902);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_EVASIVE_DIVE(Ped ped, BOOL toggle) /* 0x6B7A646C242A7059 */
{
	uint64_t val;

	native_init(0x6B7A646C242A7059);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_MAX_TIME_UNDERWATER(Ped ped, float value) /* 0x6BA428C528D9E522 */
{
	uint64_t val;

	native_init(0x6BA428C528D9E522);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_ARM_IK(Ped ped, BOOL toggle) /* 0x6C3B4D6D13B4C841 */
{
	uint64_t val;

	native_init(0x6C3B4D6D13B4C841);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_ALTERNATE_WALK_ANIM(Ped ped, const char* animDict, const char* animName, float p3, BOOL p4) /* 0x6C60394CB4F75E9A */
{
	uint64_t val;

	native_init(0x6C60394CB4F75E9A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	native_call();
}

inline BOOL PED__CAN_PED_SEE_PED(Ped ped1, Ped ped2) /* 0x6CD5A433374D4CFB */
{
	uint64_t val;

	native_init(0x6CD5A433374D4CFB);

	*(Ped*)(&val) = ped1;
	native_push(val);
	*(Ped*)(&val) = ped2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_DETACH_SYNCHRONIZED_SCENE(int sceneID) /* 0x6D38F1F04CBB37EA */
{
	uint64_t val;

	native_init(0x6D38F1F04CBB37EA);

	*(int*)(&val) = sceneID;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_MALE(Ped ped) /* 0x6D9F5FAA7488BA46 */
{
	uint64_t val;

	native_init(0x6D9F5FAA7488BA46);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_PED_IN_ANY_TAXI(Ped ped) /* 0x6E575D6A898AB852 */
{
	uint64_t val;

	native_init(0x6E575D6A898AB852);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(Ped ped, const char* animDict, const char* anim) /* 0x6EC47A344923E1ED */
{
	uint64_t val;

	native_init(0x6EC47A344923E1ED);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = anim;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PED_GET_SEAT_PED_IS_TRYING_TO_ENTER(Ped ped) /* 0x6F4C85ACD641BCD2 */
{
	uint64_t val;

	native_init(0x6F4C85ACD641BCD2);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL PED_IS_PED_IN_ANY_TRAIN(Ped ped) /* 0x6F972C1AB75A1ED0 */
{
	uint64_t val;

	native_init(0x6F972C1AB75A1ED0);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_KNOCK_OFF_PED_PROP(Ped ped, BOOL p1, BOOL knockOff, BOOL p2, BOOL p3) /* 0x6FD7816A36615F48 */
{
	uint64_t val;

	native_init(0x6FD7816A36615F48);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = knockOff;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_VISUAL_FIELD_MAX_ANGLE(Ped ped, float value) /* 0x70793BDCA1E854D4 */
{
	uint64_t val;

	native_init(0x70793BDCA1E854D4);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PEDHEADSHOT_READY(int handle) /* 0x7085228842B13A67 */
{
	uint64_t val;

	native_init(0x7085228842B13A67);

	*(int*)(&val) = handle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_FLEE_ATTRIBUTES(Ped ped, int attributes, BOOL p2) /* 0x70A2D1137C8ED7C9 */
{
	uint64_t val;

	native_init(0x70A2D1137C8ED7C9);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = attributes;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void PED__SET_PED_FACE_FEATURE(Ped ped, int index, float scale) /* 0x71A5C1DBA060049E */
{
	uint64_t val;

	native_init(0x71A5C1DBA060049E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = index;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);

	native_call();
}

inline void PED_RESURRECT_PED(Ped ped) /* 0x71BC8E838B9C6035 */
{
	uint64_t val;

	native_init(0x71BC8E838B9C6035);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline BOOL PED_GET_PED_DECORATIONS_STATE(Ped ped) /* 0x71EAB450D86954A1 */
{
	uint64_t val;

	native_init(0x71EAB450D86954A1);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_UPDATE_PED_HEAD_BLEND_DATA(Ped ped, float shapeMix, float skinMix, float thirdMix) /* 0x723538F61C647C5A */
{
	uint64_t val;

	native_init(0x723538F61C647C5A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = shapeMix;
	native_push(val);
	*(float*)(&val) = skinMix;
	native_push(val);
	*(float*)(&val) = thirdMix;
	native_push(val);

	native_call();
}

inline void PED_CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped) /* 0x726256CC1EEB182F */
{
	uint64_t val;

	native_init(0x726256CC1EEB182F);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_0x733C87D4CE22BEA2(Any p0) /* 0x733C87D4CE22BEA2 */
{
	uint64_t val;

	native_init(0x733C87D4CE22BEA2);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void PED_SET_SYNCHRONIZED_SCENE_PHASE(int sceneID, float phase) /* 0x734292F4F0ABF6D0 */
{
	uint64_t val;

	native_init(0x734292F4F0ABF6D0);

	*(int*)(&val) = sceneID;
	native_push(val);
	*(float*)(&val) = phase;
	native_push(val);

	native_call();
}

inline BOOL PED_0x7350823473013C02(Ped ped) /* 0x7350823473013C02 */
{
	uint64_t val;

	native_init(0x7350823473013C02);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_CAN_LEG_IK(Ped ped, BOOL toggle) /* 0x73518ECE2485412B */
{
	uint64_t val;

	native_init(0x73518ECE2485412B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_REMOVE_PED_DEFENSIVE_AREA(Ped ped, BOOL toggle) /* 0x74D4E028107450A9 */
{
	uint64_t val;

	native_init(0x74D4E028107450A9);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_0x75BA1CB3B7D40CAF(Ped ped, BOOL p1) /* 0x75BA1CB3B7D40CAF */
{
	uint64_t val;

	native_init(0x75BA1CB3B7D40CAF);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_0x781DE8FA214E87D2(Ped ped, const char* p1) /* 0x781DE8FA214E87D2 */
{
	uint64_t val;

	native_init(0x781DE8FA214E87D2);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL PED_0x784002A632822099(Ped ped) /* 0x784002A632822099 */
{
	uint64_t val;

	native_init(0x784002A632822099);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0x78C4E9961DB3EB5B(Any p0, Any p1) /* 0x78C4E9961DB3EB5B */
{
	uint64_t val;

	native_init(0x78C4E9961DB3EB5B);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(Ped ped, float angle) /* 0x78D0B67629D75856 */
{
	uint64_t val;

	native_init(0x78D0B67629D75856);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = angle;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_IN_MODEL(Ped ped, Hash modelHash) /* 0x796D90EFB19AA332 */
{
	uint64_t val;

	native_init(0x796D90EFB19AA332);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PED_GET_PED_PARACHUTE_STATE(Ped ped) /* 0x79CFD9827CC979B6 */
{
	uint64_t val;

	native_init(0x79CFD9827CC979B6);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(Ped ped, float angle) /* 0x7A276EB2C224D70F */
{
	uint64_t val;

	native_init(0x7A276EB2C224D70F);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = angle;
	native_push(val);

	native_call();
}

inline void PED_SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0, float p1) /* 0x7A556143A1C03898 */
{
	uint64_t val;

	native_init(0x7A556143A1C03898);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped ped, int state) /* 0x7A6535691B477C48 */
{
	uint64_t val;

	native_init(0x7A6535691B477C48);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = state;
	native_push(val);

	native_call();
}

inline Any PED_SET_PED_ACCURACY(Ped ped, int accuracy) /* 0x7AEFB85C1D49DEB6 */
{
	uint64_t val;

	native_init(0x7AEFB85C1D49DEB6);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = accuracy;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL PED_GET_PED_STEALTH_MOVEMENT(Ped ped) /* 0x7C2AC9CA66575FBF */
{
	uint64_t val;

	native_init(0x7C2AC9CA66575FBF);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_DOES_GROUP_EXIST(int groupId) /* 0x7C6B0C22F9F40BBE */
{
	uint64_t val;

	native_init(0x7C6B0C22F9F40BBE);

	*(int*)(&val) = groupId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED__TRACK_PED_VISIBILITY(Ped ped) /* 0x7D7A2E43E74E2EB8 */
{
	uint64_t val;

	native_init(0x7D7A2E43E74E2EB8);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline Hash PED_GET_PED_RELATIONSHIP_GROUP_HASH(Ped ped) /* 0x7DBDD04862D95F04 */
{
	uint64_t val;

	native_init(0x7DBDD04862D95F04);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Hash*)(native_call());
}

inline BOOL PED_IS_PED_IN_PARACHUTE_FREE_FALL(Ped ped) /* 0x7DCE8BDA0F1C1200 */
{
	uint64_t val;

	native_init(0x7DCE8BDA0F1C1200);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Ped PED_CREATE_PED_INSIDE_VEHICLE(Vehicle vehicle, int pedType, Hash modelHash, int seat, BOOL isNetwork, BOOL thisScriptCheck) /* 0x7DD959874C1FD534 */
{
	uint64_t val;

	native_init(0x7DD959874C1FD534);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(int*)(&val) = pedType;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);
	*(int*)(&val) = seat;
	native_push(val);
	*(BOOL*)(&val) = isNetwork;
	native_push(val);
	*(BOOL*)(&val) = thisScriptCheck;
	native_push(val);

	return *(Ped*)(native_call());
}

inline BOOL PED_IS_PED_SHOOTING_IN_AREA(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8) /* 0x7E9DFE24AC1E58EF */
{
	uint64_t val;

	native_init(0x7E9DFE24AC1E58EF);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_GET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL p2) /* 0x7EE53118C892B513 */
{
	uint64_t val;

	native_init(0x7EE53118C892B513);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = flagId;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_WAS_PED_KILLED_BY_TAKEDOWN(Ped ped) /* 0x7F08E26039C7347C */
{
	uint64_t val;

	native_init(0x7F08E26039C7347C);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_0x7F2F4F13AC5257EF(int SceneID) /* 0x7F2F4F13AC5257EF */
{
	uint64_t val;

	native_init(0x7F2F4F13AC5257EF);

	*(int*)(&val) = SceneID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_GENERATES_DEAD_BODY_EVENTS(Ped ped, BOOL toggle) /* 0x7FB17BA2E7DECA5B */
{
	uint64_t val;

	native_init(0x7FB17BA2E7DECA5B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_0x80054D7FCC70EEC6(Any p0) /* 0x80054D7FCC70EEC6 */
{
	uint64_t val;

	native_init(0x80054D7FCC70EEC6);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_HEADTRACKING_ENTITY(Ped ped, Entity entity) /* 0x813A0A7C9D2E831F */
{
	uint64_t val;

	native_init(0x813A0A7C9D2E831F);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Vehicle PED_GET_VEHICLE_PED_IS_TRYING_TO_ENTER(Ped ped) /* 0x814FA8BE5449445D */
{
	uint64_t val;

	native_init(0x814FA8BE5449445D);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Vehicle*)(native_call());
}

inline void PED_APPLY_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, float p2, float p3, Any p4) /* 0x816F6981C60BF53B */
{
	uint64_t val;

	native_init(0x816F6981C60BF53B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_SITTING_IN_ANY_VEHICLE(Ped ped) /* 0x826AA586EDB9FEF8 */
{
	uint64_t val;

	native_init(0x826AA586EDB9FEF8);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_CLOTH_PRONE(Any p0, Any p1) /* 0x82A3D6D9CC2CB8E3 */
{
	uint64_t val;

	native_init(0x82A3D6D9CC2CB8E3);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_0x83A169EABCDB10A2(Any p0, Any p1) /* 0x83A169EABCDB10A2 */
{
	uint64_t val;

	native_init(0x83A169EABCDB10A2);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_APPLY_PED_BLOOD(Ped ped, int boneIndex, float xRot, float yRot, float zRot, const char* woundType) /* 0x83F7E01C7B769A26 */
{
	uint64_t val;

	native_init(0x83F7E01C7B769A26);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = boneIndex;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(const char**)(&val) = woundType;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_PREFERRED_COVER_SET(Ped ped, Any itemSet) /* 0x8421EB4DA7E391B9 */
{
	uint64_t val;

	native_init(0x8421EB4DA7E391B9);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any*)(&val) = itemSet;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_IN_COVER_FACING_LEFT(Ped ped) /* 0x845333B3150583AB */
{
	uint64_t val;

	native_init(0x845333B3150583AB);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_PED_INJURED(Ped ped) /* 0x84A2DD9AC37C35C1 */
{
	uint64_t val;

	native_init(0x84A2DD9AC37C35C1);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_HAS_PED_RECEIVED_EVENT(Ped ped, Any p1) /* 0x8507BCB710FA6DC0 */
{
	uint64_t val;

	native_init(0x8507BCB710FA6DC0);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_PED_BEING_STEALTH_KILLED(Ped ped) /* 0x863B23EFDE9C5DF2 */
{
	uint64_t val;

	native_init(0x863B23EFDE9C5DF2);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_COORDS_NO_GANG(Ped ped, float posX, float posY, float posZ) /* 0x87052FE446E07247 */
{
	uint64_t val;

	native_init(0x87052FE446E07247);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);

	native_call();
}

inline Ped PED_GET_RANDOM_PED_AT_COORD(float x, float y, float z, float xRadius, float yRadius, float zRadius, int pedType) /* 0x876046A8E3A4B71C */
{
	uint64_t val;

	native_init(0x876046A8E3A4B71C);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = xRadius;
	native_push(val);
	*(float*)(&val) = yRadius;
	native_push(val);
	*(float*)(&val) = zRadius;
	native_push(val);
	*(int*)(&val) = pedType;
	native_push(val);

	return *(Ped*)(native_call());
}

inline Any PED_0x876928DDDFCCC9CD() /* 0x876928DDDFCCC9CD */
{
	native_init(0x876928DDDFCCC9CD);
	return *(Any*)(native_call());
}

inline void PED_CLEAR_PED_ALTERNATE_WALK_ANIM(Ped ped, float p1) /* 0x8844BBFCE30AA9E9 */
{
	uint64_t val;

	native_init(0x8844BBFCE30AA9E9);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_STEALTH_MOVEMENT(Ped ped, BOOL p1, const char* action) /* 0x88CBB5CEB96B7BD2 */
{
	uint64_t val;

	native_init(0x88CBB5CEB96B7BD2);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(const char**)(&val) = action;
	native_push(val);

	native_call();
}

inline int PED_GET_PED_PROP_INDEX(Ped ped, int componentId) /* 0x898CC20EA75BACD8 */
{
	uint64_t val;

	native_init(0x898CC20EA75BACD8);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = componentId;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS(BOOL toggle) /* 0x8A4986851C4EF6E7 */
{
	uint64_t val;

	native_init(0x8A4986851C4EF6E7);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int PED_GET_PED_PARACHUTE_LANDING_TYPE(Ped ped) /* 0x8B9F1FC6AE8166C0 */
{
	uint64_t val;

	native_init(0x8B9F1FC6AE8166C0);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline int PED_CREATE_SYNCHRONIZED_SCENE(float posX, float posY, float posZ, float roll, float pitch, float yaw, int p6) /* 0x8C18E0F9080ADD73 */
{
	uint64_t val;

	native_init(0x8C18E0F9080ADD73);

	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = roll;
	native_push(val);
	*(float*)(&val) = pitch;
	native_push(val);
	*(float*)(&val) = yaw;
	native_push(val);
	*(int*)(&val) = p6;
	native_push(val);

	return *(int*)(native_call());
}

inline Entity PED_0x8C4F3BF23B6237DB(Ped ped, BOOL p1, BOOL p2) /* 0x8C4F3BF23B6237DB */
{
	uint64_t val;

	native_init(0x8C4F3BF23B6237DB);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	return *(Entity*)(native_call());
}

inline void PED_REVIVE_INJURED_PED(Ped ped) /* 0x8D8ACD8388CD99CE */
{
	uint64_t val;

	native_init(0x8D8ACD8388CD99CE);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_GET_GROUP_SIZE(int groupID, Any* unknown, int* sizeInMembers) /* 0x8DE69FE35CA09A45 */
{
	uint64_t val;

	native_init(0x8DE69FE35CA09A45);

	*(int*)(&val) = groupID;
	native_push(val);
	*(Any**)(&val) = unknown;
	native_push(val);
	*(int**)(&val) = sizeInMembers;
	native_push(val);

	native_call();
}

inline void PED_REMOVE_GROUP(int groupId) /* 0x8EB2F69076AF7053 */
{
	uint64_t val;

	native_init(0x8EB2F69076AF7053);

	*(int*)(&val) = groupId;
	native_push(val);

	native_call();
}

inline void PED_CLEAR_PED_LAST_DAMAGE_BONE(Ped ped) /* 0x8EF6B7AC68E2F01B */
{
	uint64_t val;

	native_init(0x8EF6B7AC68E2F01B);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline int PED_GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(Ped mp_f_freemode_01, int Te, int DrawableID) /* 0x8F7156A3142A6BAD */
{
	uint64_t val;

	native_init(0x8F7156A3142A6BAD);

	*(Ped*)(&val) = mp_f_freemode_01;
	native_push(val);
	*(int*)(&val) = Te;
	native_push(val);
	*(int*)(&val) = DrawableID;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_CLEAR_PED_BLOOD_DAMAGE(Ped ped) /* 0x8FE22675A5A45817 */
{
	uint64_t val;

	native_init(0x8FE22675A5A45817);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline int PED_CREATE_GROUP(int unused) /* 0x90370EBE0FEE1A3D */
{
	uint64_t val;

	native_init(0x90370EBE0FEE1A3D);

	*(int*)(&val) = unused;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_SET_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, const char* animDictionary, const char* animationName, float p4, BOOL p5) /* 0x90A43CC281FFAB46 */
{
	uint64_t val;

	native_init(0x90A43CC281FFAB46);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = stance;
	native_push(val);
	*(const char**)(&val) = animDictionary;
	native_push(val);
	*(const char**)(&val) = animationName;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_IN_FLYING_VEHICLE(Ped ped) /* 0x9134873537FA419C */
{
	uint64_t val;

	native_init(0x9134873537FA419C);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_TRACKED_PED_VISIBLE(Ped ped) /* 0x91C8E617F64188AC */
{
	uint64_t val;

	native_init(0x91C8E617F64188AC);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_REMOVE_STEALTH_MODE_ASSET(const char* asset) /* 0x9219857D21F0E842 */
{
	uint64_t val;

	native_init(0x9219857D21F0E842);

	*(const char**)(&val) = asset;
	native_push(val);

	native_call();
}

inline void PED_REGISTER_HATED_TARGETS_AROUND_PED(Ped ped, float radius) /* 0x9222F300BF8354FE */
{
	uint64_t val;

	native_init(0x9222F300BF8354FE);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_PROP_INDEX(Ped ped, int componentId, int drawableId, int TextureId, BOOL isNetworkGame) /* 0x93376B65A266EB5F */
{
	uint64_t val;

	native_init(0x93376B65A266EB5F);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = componentId;
	native_push(val);
	*(int*)(&val) = drawableId;
	native_push(val);
	*(int*)(&val) = TextureId;
	native_push(val);
	*(BOOL*)(&val) = isNetworkGame;
	native_push(val);

	native_call();
}

inline Entity PED_GET_PED_SOURCE_OF_DEATH(Ped ped) /* 0x93C8B64DEB84728C */
{
	uint64_t val;

	native_init(0x93C8B64DEB84728C);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Entity*)(native_call());
}

inline void PED_SET_PED_HEAD_BLEND_DATA(Ped ped, int shapeFirstID, int shapeSecondID, int shapeThirdID, int skinFirstID, int skinSecondID, int skinThirdID, float shapeMix, float skinMix, float thirdMix, BOOL isParent) /* 0x9414E18B9434C2FE */
{
	uint64_t val;

	native_init(0x9414E18B9434C2FE);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = shapeFirstID;
	native_push(val);
	*(int*)(&val) = shapeSecondID;
	native_push(val);
	*(int*)(&val) = shapeThirdID;
	native_push(val);
	*(int*)(&val) = skinFirstID;
	native_push(val);
	*(int*)(&val) = skinSecondID;
	native_push(val);
	*(int*)(&val) = skinThirdID;
	native_push(val);
	*(float*)(&val) = shapeMix;
	native_push(val);
	*(float*)(&val) = skinMix;
	native_push(val);
	*(float*)(&val) = thirdMix;
	native_push(val);
	*(BOOL*)(&val) = isParent;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_ON_ANY_BIKE(Ped ped) /* 0x94495889E22C6479 */
{
	uint64_t val;

	native_init(0x94495889E22C6479);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PED_GET_PED_ARMOUR(Ped ped) /* 0x9483AF821605B1D8 */
{
	uint64_t val;

	native_init(0x9483AF821605B1D8);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Ped ped, BOOL toggle) /* 0x94D94BF1A75AED3D */
{
	uint64_t val;

	native_init(0x94D94BF1A75AED3D);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_0x952F06BEECD775CC(Any p0, Any p1, Any p2, Any p3) /* 0x952F06BEECD775CC */
{
	uint64_t val;

	native_init(0x952F06BEECD775CC);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline Any PED_GET_QUADBIKE_DISPLAY_VARIATIONS(Any p0) /* 0x953563CE563143AF */
{
	uint64_t val;

	native_init(0x953563CE563143AF);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void PED_SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) /* 0x95E3D6257B166CF2 */
{
	uint64_t val;

	native_init(0x95E3D6257B166CF2);

	*(float*)(&val) = multiplier;
	native_push(val);

	native_call();
}

inline void PED_DELETE_PED(Ped* ped) /* 0x9614299DCB53E54B */
{
	uint64_t val;

	native_init(0x9614299DCB53E54B);

	*(Ped**)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_SHOOTS_AT_COORD(Ped ped, float x, float y, float z, BOOL toggle) /* 0x96A05E4FB321B1BA */
{
	uint64_t val;

	native_init(0x96A05E4FB321B1BA);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_UNREGISTER_PEDHEADSHOT(int handle) /* 0x96B1361D9B24C2FF */
{
	uint64_t val;

	native_init(0x96B1361D9B24C2FF);

	*(int*)(&val) = handle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_KEEP_TASK(Ped ped, BOOL toggle) /* 0x971D38760FBC02EF */
{
	uint64_t val;

	native_init(0x971D38760FBC02EF);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Any PED_SET_PED_ENABLE_WEAPON_BLOCKING(Ped ped, BOOL toggle) /* 0x97A790315D3831FD */
{
	uint64_t val;

	native_init(0x97A790315D3831FD);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	return *(Any*)(native_call());
}

inline void PED_RESET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped) /* 0x97B0DB5B4AA74E77 */
{
	uint64_t val;

	native_init(0x97B0DB5B4AA74E77);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_NAME_DEBUG(Ped ped, const char* name) /* 0x98EFA132A4117BE1 */
{
	uint64_t val;

	native_init(0x98EFA132A4117BE1);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = name;
	native_push(val);

	native_call();
}

inline void PED_0x9911F4A24485F653(BOOL p0) /* 0x9911F4A24485F653 */
{
	uint64_t val;

	native_init(0x9911F4A24485F653);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_IN_ANY_VEHICLE(Ped ped, BOOL atGetIn) /* 0x997ABD671D25CA0B */
{
	uint64_t val;

	native_init(0x997ABD671D25CA0B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = atGetIn;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_PED_BEING_JACKED(Ped ped) /* 0x9A497FE2DF198913 */
{
	uint64_t val;

	native_init(0x9A497FE2DF198913);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0x9A77DFD295E29B09(Any p0, BOOL p1) /* 0x9A77DFD295E29B09 */
{
	uint64_t val;

	native_init(0x9A77DFD295E29B09);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Vehicle PED_GET_VEHICLE_PED_IS_IN(Ped ped, BOOL lastVehicle) /* 0x9A9112A0FE9A4713 */
{
	uint64_t val;

	native_init(0x9A9112A0FE9A4713);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = lastVehicle;
	native_push(val);

	return *(Vehicle*)(native_call());
}

inline void PED_SET_PED_FIRING_PATTERN(Ped ped, Hash patternHash) /* 0x9AC577F5A12AD8A9 */
{
	uint64_t val;

	native_init(0x9AC577F5A12AD8A9);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = patternHash;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_COORDS_KEEP_VEHICLE(Ped ped, float posX, float posY, float posZ) /* 0x9AFEFF481A85AB2E */
{
	uint64_t val;

	native_init(0x9AFEFF481A85AB2E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);

	native_call();
}

inline Ped PED_GET_PEDS_JACKER(Ped ped) /* 0x9B128DC36C1E04CF */
{
	uint64_t val;

	native_init(0x9B128DC36C1E04CF);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Ped*)(native_call());
}

inline Ped PED_CREATE_RANDOM_PED_AS_DRIVER(Vehicle vehicle, BOOL returnHandle) /* 0x9B62392B474F44A0 */
{
	uint64_t val;

	native_init(0x9B62392B474F44A0);

	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(BOOL*)(&val) = returnHandle;
	native_push(val);

	return *(Ped*)(native_call());
}

inline BOOL PED_IS_PED_GROUP_MEMBER(Ped ped, int groupId) /* 0x9BB01E3834671191 */
{
	uint64_t val;

	native_init(0x9BB01E3834671191);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = groupId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline float PED_GET_PED_ENVEFF_SCALE(Ped ped) /* 0x9C14D30395A51A3C */
{
	uint64_t val;

	native_init(0x9C14D30395A51A3C);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL PED_0x9C6A6C19B6C0C496(Ped p0, Any* p1) /* 0x9C6A6C19B6C0C496 */
{
	uint64_t val;

	native_init(0x9C6A6C19B6C0C496);

	*(Ped*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_CLEAR_PED_WETNESS(Ped ped) /* 0x9C720776DAA43E7E */
{
	uint64_t val;

	native_init(0x9C720776DAA43E7E);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Ped ped, float range) /* 0x9C74B0BC831B753A */
{
	uint64_t val;

	native_init(0x9C74B0BC831B753A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = range;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius, BOOL p5, BOOL p6) /* 0x9D3151A373974804 */
{
	uint64_t val;

	native_init(0x9D3151A373974804);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);

	native_call();
}

inline Any PED_0x9D728C1E12BF5518(Any p0) /* 0x9D728C1E12BF5518 */
{
	uint64_t val;

	native_init(0x9D728C1E12BF5518);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void PED__SET_PED_COVER_CLIPSET_OVERRIDE(Ped ped, const char* clipset) /* 0x9DBA107B4937F809 */
{
	uint64_t val;

	native_init(0x9DBA107B4937F809);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = clipset;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_SWIMMING(Ped ped) /* 0x9DE327631295B4C2 */
{
	uint64_t val;

	native_init(0x9DE327631295B4C2);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_0x9E30E91FB03A2CAF(Any* p0, Any* p1) /* 0x9E30E91FB03A2CAF */
{
	uint64_t val;

	native_init(0x9E30E91FB03A2CAF);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PED_GET_RELATIONSHIP_BETWEEN_GROUPS(Hash group1, Hash group2) /* 0x9E6B70061662AE5C */
{
	uint64_t val;

	native_init(0x9E6B70061662AE5C);

	*(Hash*)(&val) = group1;
	native_push(val);
	*(Hash*)(&val) = group2;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_SET_PED_MOVE_ANIMS_BLEND_OUT(Ped ped) /* 0x9E8C908F41584ECD */
{
	uint64_t val;

	native_init(0x9E8C908F41584ECD);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_AS_GROUP_MEMBER(Ped ped, int groupId) /* 0x9F3480FE65DB31B5 */
{
	uint64_t val;

	native_init(0x9F3480FE65DB31B5);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = groupId;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_GOING_INTO_COVER(Ped ped) /* 0x9F65DBC537E59AD5 */
{
	uint64_t val;

	native_init(0x9F65DBC537E59AD5);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_COMBAT_ATTRIBUTES(Ped ped, int attributeIndex, BOOL enabled) /* 0x9F7794730795E019 */
{
	uint64_t val;

	native_init(0x9F7794730795E019);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = attributeIndex;
	native_push(val);
	*(BOOL*)(&val) = enabled;
	native_push(val);

	native_call();
}

inline void PED_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) /* 0x9F8AA94D6D97DBF4 */
{
	uint64_t val;

	native_init(0x9F8AA94D6D97DBF4);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_RESET_PED_RAGDOLL_TIMER(Ped ped) /* 0x9FA4664CF62E47E8 */
{
	uint64_t val;

	native_init(0x9FA4664CF62E47E8);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline int PED__GET_TATTOO_ZONE(Hash collection, Hash overlay) /* 0x9FD452BFBE7A7A8B */
{
	uint64_t val;

	native_init(0x9FD452BFBE7A7A8B);

	*(Hash*)(&val) = collection;
	native_push(val);
	*(Hash*)(&val) = overlay;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_SET_PED_GRAVITY(Ped ped, BOOL toggle) /* 0x9FF447B6B6AD960A */
{
	uint64_t val;

	native_init(0x9FF447B6B6AD960A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PEDHEADSHOT_VALID(int handle) /* 0xA0A9668F158129A2 */
{
	uint64_t val;

	native_init(0xA0A9668F158129A2);

	*(int*)(&val) = handle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_ANY_PED_SHOOTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) /* 0xA0D3D71EA1086C55 */
{
	uint64_t val;

	native_init(0xA0D3D71EA1086C55);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0xA21C118553BBDF02(Ped ped) /* 0xA21C118553BBDF02 */
{
	uint64_t val;

	native_init(0xA21C118553BBDF02);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_0xA3A9299C4F2ADB98(Any p0) /* 0xA3A9299C4F2ADB98 */
{
	uint64_t val;

	native_init(0xA3A9299C4F2ADB98);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_IN_VEHICLE(Ped ped, Vehicle vehicle, BOOL atGetIn) /* 0xA3EE4A07279BB9DB */
{
	uint64_t val;

	native_init(0xA3EE4A07279BB9DB);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(BOOL*)(&val) = atGetIn;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_0xA3F3564A5B3646C0(Ped ped) /* 0xA3F3564A5B3646C0 */
{
	uint64_t val;

	native_init(0xA3F3564A5B3646C0);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0xA52D5247A4227E14(Any p0) /* 0xA52D5247A4227E14 */
{
	uint64_t val;

	native_init(0xA52D5247A4227E14);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_COWER_HASH(Ped ped, const char* p1) /* 0xA549131166868ED3 */
{
	uint64_t val;

	native_init(0xA549131166868ED3);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);

	native_call();
}

inline Any PED_0xA586FBEB32A53DBB() /* 0xA586FBEB32A53DBB */
{
	native_init(0xA586FBEB32A53DBB);
	return *(Any*)(native_call());
}

inline int PED__GET_PED_HEAD_OVERLAY_VALUE(Ped ped, int overlayID) /* 0xA60EF3B6461A4D43 */
{
	uint64_t val;

	native_init(0xA60EF3B6461A4D43);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = overlayID;
	native_push(val);

	return *(int*)(native_call());
}

inline Any PED_0xA635C11B8C44AFC2() /* 0xA635C11B8C44AFC2 */
{
	native_init(0xA635C11B8C44AFC2);
	return *(Any*)(native_call());
}

inline void PED_0xA660FAF550EB37E5(Any p0, BOOL p1) /* 0xA660FAF550EB37E5 */
{
	uint64_t val;

	native_init(0xA660FAF550EB37E5);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline int PED_GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(Ped ped, int propId, int drawableId) /* 0xA6E7F1CEB523E171 */
{
	uint64_t val;

	native_init(0xA6E7F1CEB523E171);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = propId;
	native_push(val);
	*(int*)(&val) = drawableId;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_SET_DRIVER_AGGRESSIVENESS(Ped driver, float aggressiveness) /* 0xA731F608CA104E3C */
{
	uint64_t val;

	native_init(0xA731F608CA104E3C);

	*(Ped*)(&val) = driver;
	native_push(val);
	*(float*)(&val) = aggressiveness;
	native_push(val);

	native_call();
}

inline void PED_REMOVE_PED_HELMET(Ped ped, BOOL instantly) /* 0xA7B2458D0AD6DED8 */
{
	uint64_t val;

	native_init(0xA7B2458D0AD6DED8);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = instantly;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_SITTING_IN_VEHICLE(Ped ped, Vehicle vehicle) /* 0xA808AA1D79230FC2 */
{
	uint64_t val;

	native_init(0xA808AA1D79230FC2);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0xA9B61A329BFDCBEA(Any p0, BOOL p1) /* 0xA9B61A329BFDCBEA */
{
	uint64_t val;

	native_init(0xA9B61A329BFDCBEA);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_MONEY(Ped ped, int amount) /* 0xA9C8960E8684C1B5 */
{
	uint64_t val;

	native_init(0xA9C8960E8684C1B5);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = amount;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_DESIRED_HEADING(Ped ped, float heading) /* 0xAA5A7ECE2AA8FE70 */
{
	uint64_t val;

	native_init(0xAA5A7ECE2AA8FE70);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);

	native_call();
}

inline void PED_RESET_PED_MOVEMENT_CLIPSET(Ped ped, float p1) /* 0xAA74EC0CB0AAEA2C */
{
	uint64_t val;

	native_init(0xAA74EC0CB0AAEA2C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Any PED_0xAAA6A3698A69E048(Any p0) /* 0xAAA6A3698A69E048 */
{
	uint64_t val;

	native_init(0xAAA6A3698A69E048);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any PED_SET_PED_PINNED_DOWN(Ped player, BOOL pinned, int p2) /* 0xAAD6D1ACF08F4612 */
{
	uint64_t val;

	native_init(0xAAD6D1ACF08F4612);

	*(Ped*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = pinned;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);

	return *(Any*)(native_call());
}

inline void PED_REMOVE_PED_ELEGANTLY(Ped* ped) /* 0xAC6D445B994DF95E */
{
	uint64_t val;

	native_init(0xAC6D445B994DF95E);

	*(Ped**)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped, Hash hash) /* 0xADB3F206518799E8 */
{
	uint64_t val;

	native_init(0xADB3F206518799E8);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = hash;
	native_push(val);

	native_call();
}

inline BOOL PED_SET_PED_TO_RAGDOLL(Ped ped, int time1, int time2, int ragdollType, BOOL p4, BOOL p5, BOOL p6) /* 0xAE99FB955581844A */
{
	uint64_t val;

	native_init(0xAE99FB955581844A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = time1;
	native_push(val);
	*(int*)(&val) = time2;
	native_push(val);
	*(int*)(&val) = ragdollType;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_MOVEMENT_CLIPSET(Player* player, const char* clipSet, float blendTime) /* 0xAF8A94EDE7712BEF */
{
	uint64_t val;

	native_init(0xAF8A94EDE7712BEF);

	*(Player**)(&val) = player;
	native_push(val);
	*(const char**)(&val) = clipSet;
	native_push(val);
	*(float*)(&val) = blendTime;
	native_push(val);

	native_call();
}

inline BOOL PED_GET_PED_RESET_FLAG(Ped ped, int flagId) /* 0xAF9E59B1B1FBF2A0 */
{
	uint64_t val;

	native_init(0xAF9E59B1B1FBF2A0);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = flagId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0xAFC976FD0580C7B3(Ped ped, BOOL toggle) /* 0xAFC976FD0580C7B3 */
{
	uint64_t val;

	native_init(0xAFC976FD0580C7B3);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_0xAFF4710E2A0A6C12(Ped ped) /* 0xAFF4710E2A0A6C12 */
{
	uint64_t val;

	native_init(0xAFF4710E2A0A6C12);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_RAGDOLL(Ped ped, BOOL toggle) /* 0xB128377056A54E2A */
{
	uint64_t val;

	native_init(0xB128377056A54E2A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_GIVE_PED_NM_MESSAGE(Ped ped) /* 0xB158DFCCC56E5C5B */
{
	uint64_t val;

	native_init(0xB158DFCCC56E5C5B);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_DRIVER_ABILITY(Ped driver, float ability) /* 0xB195FFA8042FC5C3 */
{
	uint64_t val;

	native_init(0xB195FFA8042FC5C3);

	*(Ped*)(&val) = driver;
	native_push(val);
	*(float*)(&val) = ability;
	native_push(val);

	native_call();
}

inline void PED_0xB2AFF10216DEFA2F(float x, float y, float z, float p3, float p4, float p5, float p6, int interiorFlags, float scale, int duration) /* 0xB2AFF10216DEFA2F */
{
	uint64_t val;

	native_init(0xB2AFF10216DEFA2F);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(int*)(&val) = interiorFlags;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(int*)(&val) = duration;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_DOING_DRIVEBY(Ped ped) /* 0xB2C086CC1BF8F2BF */
{
	uint64_t val;

	native_init(0xB2C086CC1BF8F2BF);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_CAN_ATTACK_FRIENDLY(Ped ped, BOOL toggle, BOOL p2) /* 0xB3B1CB349FF9C75D */
{
	uint64_t val;

	native_init(0xB3B1CB349FF9C75D);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void PED_STOP_ANY_PED_MODEL_BEING_SUPPRESSED() /* 0xB47BD05FA66B40CF */
{
	native_init(0xB47BD05FA66B40CF);
	native_call();
}

inline Ped PED_CREATE_RANDOM_PED(float posX, float posY, float posZ) /* 0xB4AC7D0CF06BFE8F */
{
	uint64_t val;

	native_init(0xB4AC7D0CF06BFE8F);

	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);

	return *(Ped*)(native_call());
}

inline void PED_0xB50EB4CCB29704AC(Any p0) /* 0xB50EB4CCB29704AC */
{
	uint64_t val;

	native_init(0xB50EB4CCB29704AC);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_WETNESS_ENABLED_THIS_FRAME(Ped ped) /* 0xB5485E4907B53019 */
{
	uint64_t val;

	native_init(0xB5485E4907B53019);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_REMOVE_RELATIONSHIP_GROUP(Hash groupHash) /* 0xB6BA2444AB393DA2 */
{
	uint64_t val;

	native_init(0xB6BA2444AB393DA2);

	*(Hash*)(&val) = groupHash;
	native_push(val);

	native_call();
}

inline void PED_SET_SYNCHRONIZED_SCENE_RATE(int sceneID, float rate) /* 0xB6C49F8A5E295A5D */
{
	uint64_t val;

	native_init(0xB6C49F8A5E295A5D);

	*(int*)(&val) = sceneID;
	native_push(val);
	*(float*)(&val) = rate;
	native_push(val);

	native_call();
}

inline void PED_0xB782F8238512BAD5(Any p0, Any* p1) /* 0xB782F8238512BAD5 */
{
	uint64_t val;

	native_init(0xB782F8238512BAD5);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL PED_0xB8B52E498014F5B0(Ped ped) /* 0xB8B52E498014F5B0 */
{
	uint64_t val;

	native_init(0xB8B52E498014F5B0);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_CAN_CREATE_RANDOM_DRIVER() /* 0xB8EB95E5B4E56978 */
{
	native_init(0xB8EB95E5B4E56978);
	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_PED_HUMAN(Ped ped) /* 0xB980061DA992779D */
{
	uint64_t val;

	native_init(0xB980061DA992779D);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_0xBA63D9FE45412247(Ped ped, BOOL p1) /* 0xBA63D9FE45412247 */
{
	uint64_t val;

	native_init(0xBA63D9FE45412247);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_CAN_PLAY_GESTURE_ANIMS(Ped ped, BOOL toggle) /* 0xBAF20C5432058024 */
{
	uint64_t val;

	native_init(0xBAF20C5432058024);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_AS_COP(Ped ped, BOOL toggle) /* 0xBB03C38DD3FB7FFD */
{
	uint64_t val;

	native_init(0xBB03C38DD3FB7FFD);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_GETTING_INTO_A_VEHICLE(Ped ped) /* 0xBB062B2B5722478E */
{
	uint64_t val;

	native_init(0xBB062B2B5722478E);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_RESET_PED_LAST_VEHICLE(Ped ped) /* 0xBB8DE8CF6A8DD8BB */
{
	uint64_t val;

	native_init(0xBB8DE8CF6A8DD8BB);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_FLEEING(Ped ped) /* 0xBBCCE00B381F8482 */
{
	uint64_t val;

	native_init(0xBBCCE00B381F8482);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Ped ped, BOOL toggle) /* 0xBC0ED94165A48BC2 */
{
	uint64_t val;

	native_init(0xBC0ED94165A48BC2);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Vector3 PED_GET_ANIM_INITIAL_OFFSET_POSITION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) /* 0xBE22B26DD764C040 */
{
	uint64_t val;

	native_init(0xBE22B26DD764C040);

	*(const char**)(&val) = animDict;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = xRot;
	native_push(val);
	*(float*)(&val) = yRot;
	native_push(val);
	*(float*)(&val) = zRot;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(int*)(&val) = p9;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline void PED_SET_PED_CAN_BE_TARGETTED_BY_TEAM(Ped ped, int team, BOOL toggle) /* 0xBF1CA77833E58F2C */
{
	uint64_t val;

	native_init(0xBF1CA77833E58F2C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = team;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) /* 0xBF25EB89375A37AD */
{
	uint64_t val;

	native_init(0xBF25EB89375A37AD);

	*(int*)(&val) = relationship;
	native_push(val);
	*(Hash*)(&val) = group1;
	native_push(val);
	*(Hash*)(&val) = group2;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_ENVEFF_SCALE(Ped ped, float value) /* 0xBF29516833893561 */
{
	uint64_t val;

	native_init(0xBF29516833893561);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_SWIMMING_UNDER_WATER(Ped ped) /* 0xC024869A53992F34 */
{
	uint64_t val;

	native_init(0xC024869A53992F34);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_HELMET_FLAG(Ped ped, int helmetFlag) /* 0xC0E78D5C2CE3EB25 */
{
	uint64_t val;

	native_init(0xC0E78D5C2CE3EB25);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = helmetFlag;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_HEAD_IK(Ped ped, BOOL toggle) /* 0xC11C18092C5530DC */
{
	uint64_t val;

	native_init(0xC11C18092C5530DC);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Ped ped) /* 0xC158D28142A34608 */
{
	uint64_t val;

	native_init(0xC158D28142A34608);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_BE_DRAGGED_OUT(Ped ped, BOOL toggle) /* 0xC1670E958EEE24E5 */
{
	uint64_t val;

	native_init(0xC1670E958EEE24E5);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_RESET_FLAG(Ped ped, int flagId, BOOL value) /* 0xC1E8A365BF3B29F2 */
{
	uint64_t val;

	native_init(0xC1E8A365BF3B29F2);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = flagId;
	native_push(val);
	*(BOOL*)(&val) = value;
	native_push(val);

	native_call();
}

inline void PED_0xC1F6EBF9A3D55538(Any p0, Any p1) /* 0xC1F6EBF9A3D55538 */
{
	uint64_t val;

	native_init(0xC1F6EBF9A3D55538);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_0xC2EE020F5FB4DB53(Ped ped) /* 0xC2EE020F5FB4DB53 */
{
	uint64_t val;

	native_init(0xC2EE020F5FB4DB53);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_IK_TARGET(Ped ped, int ikIndex, Entity entityLookAt, int boneLookAt, float offsetX, float offsetY, float offsetZ, Any p7, int blendInDuration, int blendOutDuration) /* 0xC32779C16FCEECD9 */
{
	uint64_t val;

	native_init(0xC32779C16FCEECD9);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = ikIndex;
	native_push(val);
	*(Entity*)(&val) = entityLookAt;
	native_push(val);
	*(int*)(&val) = boneLookAt;
	native_push(val);
	*(float*)(&val) = offsetX;
	native_push(val);
	*(float*)(&val) = offsetY;
	native_push(val);
	*(float*)(&val) = offsetZ;
	native_push(val);
	*(Any*)(&val) = p7;
	native_push(val);
	*(int*)(&val) = blendInDuration;
	native_push(val);
	*(int*)(&val) = blendOutDuration;
	native_push(val);

	native_call();
}

inline BOOL PED_GET_CLOSEST_PED(float x, float y, float z, float radius, BOOL p4, BOOL p5, Ped* outPed, BOOL p7, BOOL p8, int pedType) /* 0xC33AB876A77F8164 */
{
	uint64_t val;

	native_init(0xC33AB876A77F8164);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);
	*(Ped**)(&val) = outPed;
	native_push(val);
	*(BOOL*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(int*)(&val) = pedType;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_LEG_IK_MODE(Ped ped, int mode) /* 0xC396F5B86FF9FEBD */
{
	uint64_t val;

	native_init(0xC396F5B86FF9FEBD);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = mode;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_RANDOM_PROPS(Ped ped) /* 0xC44AA05345C992C6 */
{
	uint64_t val;

	native_init(0xC44AA05345C992C6);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_PEEK_IN_COVER(Ped player, BOOL aim) /* 0xC514825C507E3736 */
{
	uint64_t val;

	native_init(0xC514825C507E3736);

	*(Ped*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = aim;
	native_push(val);

	native_call();
}

inline void PED_SET_ENABLE_BOUND_ANKLES(Ped ped, BOOL toggle) /* 0xC52E0F855C58FC2E */
{
	uint64_t val;

	native_init(0xC52E0F855C58FC2E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Any PED_0xC56FBF2F228E1DAC(Hash modelHash, Any p1, Any p2) /* 0xC56FBF2F228E1DAC */
{
	uint64_t val;

	native_init(0xC56FBF2F228E1DAC);

	*(Hash*)(&val) = modelHash;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL PED_IS_PED_PLANTING_BOMB(Ped ped) /* 0xC70B5FAE151982D8 */
{
	uint64_t val;

	native_init(0xC70B5FAE151982D8);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_COMBAT_ABILITY(Ped ped, int p1) /* 0xC7622C0D36B2FDA8 */
{
	uint64_t val;

	native_init(0xC7622C0D36B2FDA8);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED__CLEAR_PED_COVER_CLIPSET_OVERRIDE(Ped ped) /* 0xC79196DCB36F6121 */
{
	uint64_t val;

	native_init(0xC79196DCB36F6121);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_BE_SHOT_IN_VEHICLE(Ped ped, BOOL toggle) /* 0xC7EF1BA83230BA07 */
{
	uint64_t val;

	native_init(0xC7EF1BA83230BA07);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_ANGLED_DEFENSIVE_AREA(Ped ped, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9) /* 0xC7F76DF27A5045A1 */
{
	uint64_t val;

	native_init(0xC7F76DF27A5045A1);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(BOOL*)(&val) = p8;
	native_push(val);
	*(BOOL*)(&val) = p9;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_RELATIONSHIP_GROUP_HASH(Ped ped, Hash hash) /* 0xC80A74AC829DDD92 */
{
	uint64_t val;

	native_init(0xC80A74AC829DDD92);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = hash;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_RANDOM_COMPONENT_VARIATION(Ped ped, BOOL p1) /* 0xC8A9481A01E63C28 */
{
	uint64_t val;

	native_init(0xC8A9481A01E63C28);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_MODEL(Ped ped, Hash modelHash) /* 0xC9D55B1A358A5BF7 */
{
	uint64_t val;

	native_init(0xC9D55B1A358A5BF7);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_CAN_COWER_IN_COVER(Ped ped, BOOL toggle) /* 0xCB7553CDCEF4A735 */
{
	uint64_t val;

	native_init(0xCB7553CDCEF4A735);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_0xCB968B53FC7F916D(Any p0, BOOL p1, Any p2, Any p3) /* 0xCB968B53FC7F916D */
{
	uint64_t val;

	native_init(0xCB968B53FC7F916D);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void PED_0xCC9682B8951C5229(Ped ped, int r, int g, int b, int p4) /* 0xCC9682B8951C5229 */
{
	uint64_t val;

	native_init(0xCC9682B8951C5229);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = r;
	native_push(val);
	*(int*)(&val) = g;
	native_push(val);
	*(int*)(&val) = b;
	native_push(val);
	*(int*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void PED_0xCD018C591F94CB43(Any p0, BOOL p1) /* 0xCD018C591F94CB43 */
{
	uint64_t val;

	native_init(0xCD018C591F94CB43);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_PRIMARY_LOOKAT(Ped ped, Ped lookAt) /* 0xCD17B554996A8D9E */
{
	uint64_t val;

	native_init(0xCD17B554996A8D9E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = lookAt;
	native_push(val);

	native_call();
}

inline Vector3 PED_GET_DEAD_PED_PICKUP_COORDS(Ped ped, float p1, float p2) /* 0xCD5003B097200F36 */
{
	uint64_t val;

	native_init(0xCD5003B097200F36);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline void PED_CLEAR_ALL_PED_PROPS(Ped ped) /* 0xCD8A7537A9B52F06 */
{
	uint64_t val;

	native_init(0xCD8A7537A9B52F06);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED__DISPOSE_SYNCHRONIZED_SCENE(int scene) /* 0xCD9CC7E200A52A6F */
{
	uint64_t val;

	native_init(0xCD9CC7E200A52A6F);

	*(int*)(&val) = scene;
	native_push(val);

	native_call();
}

inline void PED_SET_GROUP_FORMATION(int groupId, int formationType) /* 0xCE2F5FC3AF7E8C1E */
{
	uint64_t val;

	native_init(0xCE2F5FC3AF7E8C1E);

	*(int*)(&val) = groupId;
	native_push(val);
	*(int*)(&val) = formationType;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_ARMOUR(Ped ped, int amount) /* 0xCEA04D83135264CC */
{
	uint64_t val;

	native_init(0xCEA04D83135264CC);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = amount;
	native_push(val);

	native_call();
}

inline void PED_0xCEDA60A74219D064(Any p0, BOOL p1) /* 0xCEDA60A74219D064 */
{
	uint64_t val;

	native_init(0xCEDA60A74219D064);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_JUMPING(Ped ped) /* 0xCEDABC5900A0BF97 */
{
	uint64_t val;

	native_init(0xCEDABC5900A0BF97);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PED__GET_NUM_HEAD_OVERLAY_VALUES(int overlayID) /* 0xCF1CE768BB43480E */
{
	uint64_t val;

	native_init(0xCF1CE768BB43480E);

	*(int*)(&val) = overlayID;
	native_push(val);

	return *(int*)(native_call());
}

inline int PED_GET_PED_NEARBY_VEHICLES(Ped ped, int* sizeAndVehs) /* 0xCFF869CBFA210D82 */
{
	uint64_t val;

	native_init(0xCFF869CBFA210D82);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int**)(&val) = sizeAndVehs;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL PED_IS_PED_DUCKING(Ped ped) /* 0xD125AE748725C6BC */
{
	uint64_t val;

	native_init(0xD125AE748725C6BC);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_0xD1871251F3B5ACD7(Ped ped) /* 0xD1871251F3B5ACD7 */
{
	uint64_t val;

	native_init(0xD1871251F3B5ACD7);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PED__GET_NUM_MAKEUP_COLORS() /* 0xD1F7CA1535D22818 */
{
	native_init(0xD1F7CA1535D22818);
	return *(int*)(native_call());
}

inline void PED_SET_ENABLE_PED_ENVEFF_SCALE(Ped ped, BOOL toggle) /* 0xD2C5AA0C0E8D0F1E */
{
	uint64_t val;

	native_init(0xD2C5AA0C0E8D0F1E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_0xD33DAA36272177C4(Ped ped) /* 0xD33DAA36272177C4 */
{
	uint64_t val;

	native_init(0xD33DAA36272177C4);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_REMOVE_SCENARIO_BLOCKING_AREAS() /* 0xD37401D78A929A49 */
{
	native_init(0xD37401D78A929A49);
	native_call();
}

inline Ped PED_CREATE_PED(int pedType, Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL thisScriptCheck) /* 0xD49F9B0955C367DE */
{
	uint64_t val;

	native_init(0xD49F9B0955C367DE);

	*(int*)(&val) = pedType;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);
	*(BOOL*)(&val) = isNetwork;
	native_push(val);
	*(BOOL*)(&val) = thisScriptCheck;
	native_push(val);

	return *(Ped*)(native_call());
}

inline void PED_0xD69411AA0CEBF9E9(Ped ped, int p1, int p2, int p3) /* 0xD69411AA0CEBF9E9 */
{
	uint64_t val;

	native_init(0xD69411AA0CEBF9E9);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);
	*(int*)(&val) = p3;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_PRONE(Ped ped) /* 0xD6A86331A537A7B9 */
{
	uint64_t val;

	native_init(0xD6A86331A537A7B9);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_PED_FACING_PED(Ped ped, Ped otherPed, float angle) /* 0xD71649DB0A545AA3 */
{
	uint64_t val;

	native_init(0xD71649DB0A545AA3);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = otherPed;
	native_push(val);
	*(float*)(&val) = angle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_DIES_IN_SINKING_VEHICLE(Ped ped, BOOL toggle) /* 0xD718A22995E2B4BC */
{
	uint64_t val;

	native_init(0xD718A22995E2B4BC);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PED_GET_PED_LAST_DAMAGE_BONE(Ped ped, int* outBone) /* 0xD75960F6BD9EA49C */
{
	uint64_t val;

	native_init(0xD75960F6BD9EA49C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int**)(&val) = outBone;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_USING_ACTION_MODE(Ped ped, BOOL p1, Any p2, const char* action) /* 0xD75ACCF5E0FB5367 */
{
	uint64_t val;

	native_init(0xD75ACCF5E0FB5367);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(const char**)(&val) = action;
	native_push(val);

	native_call();
}

inline BOOL PED_SET_PED_TO_RAGDOLL_WITH_FALL(Ped ped, int time, int p2, int ragdollType, float x, float y, float z, float p7, float p8, float p9, float p10, float p11, float p12, float p13) /* 0xD76632D99E4966C8 */
{
	uint64_t val;

	native_init(0xD76632D99E4966C8);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = time;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);
	*(int*)(&val) = ragdollType;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(float*)(&val) = p9;
	native_push(val);
	*(float*)(&val) = p10;
	native_push(val);
	*(float*)(&val) = p11;
	native_push(val);
	*(float*)(&val) = p12;
	native_push(val);
	*(float*)(&val) = p13;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline float PED_GET_SYNCHRONIZED_SCENE_RATE(int sceneID) /* 0xD80932D577274D40 */
{
	uint64_t val;

	native_init(0xD80932D577274D40);

	*(int*)(&val) = sceneID;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL PED_IS_PED_FATALLY_INJURED(Ped ped) /* 0xD839450756ED5A80 */
{
	uint64_t val;

	native_init(0xD839450756ED5A80);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED__RESET_PED_RAGDOLL_BLOCKING_FLAGS(Ped ped, int flags) /* 0xD86D101FCFD00A4B */
{
	uint64_t val;

	native_init(0xD86D101FCFD00A4B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = flags;
	native_push(val);

	native_call();
}

inline void PED_0xD8C3BE3EE94CAF2D(Any p0, Any p1, Any p2, Any p3, Any p4) /* 0xD8C3BE3EE94CAF2D */
{
	uint64_t val;

	native_init(0xD8C3BE3EE94CAF2D);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void PED_CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, float p2) /* 0xD8D19675ED5FBDCE */
{
	uint64_t val;

	native_init(0xD8D19675ED5FBDCE);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = stance;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void PED_SET_SYNCHRONIZED_SCENE_LOOPED(int sceneID, BOOL toggle) /* 0xD9A897A4C6C2974F */
{
	uint64_t val;

	native_init(0xD9A897A4C6C2974F);

	*(int*)(&val) = sceneID;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_ALLOWED_TO_DUCK(Ped ped, BOOL toggle) /* 0xDA1F1B7BE1A8766F */
{
	uint64_t val;

	native_init(0xDA1F1B7BE1A8766F);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline const char *PED_GET_PEDHEADSHOT_TXD_STRING(int handle) /* 0xDB4EACD4AD0A5D6B */
{
	uint64_t val;

	native_init(0xDB4EACD4AD0A5D6B);

	*(int*)(&val) = handle;
	native_push(val);

	return *(const char**)(native_call());
}

inline void PED_SET_PED_ALERTNESS(Ped ped, int value) /* 0xDBA71115ED9941A6 */
{
	uint64_t val;

	native_init(0xDBA71115ED9941A6);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = value;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_LOD_MULTIPLIER(Ped ped, float multiplier) /* 0xDC2C5C242AAC342B */
{
	uint64_t val;

	native_init(0xDC2C5C242AAC342B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = multiplier;
	native_push(val);

	native_call();
}

inline BOOL PED_0xDCCA191DF9980FD7(Ped ped) /* 0xDCCA191DF9980FD7 */
{
	uint64_t val;

	native_init(0xDCCA191DF9980FD7);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_GESTURE_GROUP(Ped ped, const char* animGroupGesture) /* 0xDDF803377F94AAA8 */
{
	uint64_t val;

	native_init(0xDDF803377F94AAA8);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = animGroupGesture;
	native_push(val);

	native_call();
}

inline int PED_GET_PED_COMBAT_MOVEMENT(Ped ped) /* 0xDEA92412FCAEB3F5 */
{
	uint64_t val;

	native_init(0xDEA92412FCAEB3F5);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_SET_DRIVER_RACING_MODIFIER(Ped driver, float racingModifier) /* 0xDED5AF5A0EA4B297 */
{
	uint64_t val;

	native_init(0xDED5AF5A0EA4B297);

	*(Ped*)(&val) = driver;
	native_push(val);
	*(float*)(&val) = racingModifier;
	native_push(val);

	native_call();
}

inline void PED_SET_ENABLE_HANDCUFFS(Ped ped, BOOL toggle) /* 0xDF1AF8B5D56542FA */
{
	uint64_t val;

	native_init(0xDF1AF8B5D56542FA);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Ped ped, BOOL toggle) /* 0xDF993EE5E90ABA25 */
{
	uint64_t val;

	native_init(0xDF993EE5E90ABA25);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_CONVERSATION_PED_DEAD(Ped ped) /* 0xE0A0AEC214B1FABA */
{
	uint64_t val;

	native_init(0xE0A0AEC214B1FABA);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Vector3 PED_GET_PED_EXTRACTED_DISPLACEMENT(Ped ped, BOOL worldSpace) /* 0xE0AF41401ADF87E3 */
{
	uint64_t val;

	native_init(0xE0AF41401ADF87E3);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = worldSpace;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline BOOL PED__IS_PED_HAIR_COLOR_VALID(int colorID) /* 0xE0D36E5D9E99CC21 */
{
	uint64_t val;

	native_init(0xE0D36E5D9E99CC21);

	*(int*)(&val) = colorID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PED_GET_PED_PROP_TEXTURE_INDEX(Ped ped, int componentId) /* 0xE131A28626F81AB2 */
{
	uint64_t val;

	native_init(0xE131A28626F81AB2);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = componentId;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_SET_PED_MODEL_IS_SUPPRESSED(Ped ped, BOOL toggle) /* 0xE163A4BCE4DE6F11 */
{
	uint64_t val;

	native_init(0xE163A4BCE4DE6F11);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_PLAY_FACIAL_ANIM(Ped ped, const char* animName, const char* animDict) /* 0xE1E65CA8AC9C00ED */
{
	uint64_t val;

	native_init(0xE1E65CA8AC9C00ED);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);

	native_call();
}

inline void PED__CLEAR_PED_FACIAL_DECORATIONS(Ped ped) /* 0xE3B27E70CEAB9F0C */
{
	uint64_t val;

	native_init(0xE3B27E70CEAB9F0C);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_RUNNING_RAGDOLL_TASK(Ped ped) /* 0xE3B6097CC25AA69E */
{
	uint64_t val;

	native_init(0xE3B6097CC25AA69E);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PED_GET_PED_PALETTE_VARIATION(Ped ped, int componentId) /* 0xE3DD5F2A84B42281 */
{
	uint64_t val;

	native_init(0xE3DD5F2A84B42281);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = componentId;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_0xE43A13C9E4CCCBCF(Ped ped, BOOL p1) /* 0xE43A13C9E4CCCBCF */
{
	uint64_t val;

	native_init(0xE43A13C9E4CCCBCF);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_0xE4723DB6E736CCFF(Ped ped, Any p1, float p2, float p3, float p4, float p5, BOOL p6) /* 0xE4723DB6E736CCFF */
{
	uint64_t val;

	native_init(0xE4723DB6E736CCFF);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);

	native_call();
}

inline float PED_GET_SYNCHRONIZED_SCENE_PHASE(int sceneID) /* 0xE4A310B1D7FA73CC */
{
	uint64_t val;

	native_init(0xE4A310B1D7FA73CC);

	*(int*)(&val) = sceneID;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL PED_HAS_ACTION_MODE_ASSET_LOADED(const char* asset) /* 0xE4B5F4BF2CB24E65 */
{
	uint64_t val;

	native_init(0xE4B5F4BF2CB24E65);

	*(const char**)(&val) = asset;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PED__GET_NUM_HAIR_COLORS() /* 0xE5C0CF872C2AD150 */
{
	native_init(0xE5C0CF872C2AD150);
	return *(int*)(native_call());
}

inline void PED_0xE6CA85E7259CE16B(Any p0) /* 0xE6CA85E7259CE16B */
{
	uint64_t val;

	native_init(0xE6CA85E7259CE16B);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Ped PED_GET_MOUNT(Ped ped) /* 0xE7E11B8DCBED1058 */
{
	uint64_t val;

	native_init(0xE7E11B8DCBED1058);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Ped*)(native_call());
}

inline BOOL PED_IS_PED_COMPONENT_VARIATION_VALID(Ped ped, int componentId, int drawableId, int textureId) /* 0xE825F6B6CEA7671D */
{
	uint64_t val;

	native_init(0xE825F6B6CEA7671D);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = componentId;
	native_push(val);
	*(int*)(&val) = drawableId;
	native_push(val);
	*(int*)(&val) = textureId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0xE861D0B05C7662B8(Pickup p0, Any p1, Blip* p2) /* 0xE861D0B05C7662B8 */
{
	uint64_t val;

	native_init(0xE861D0B05C7662B8);

	*(Pickup*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Blip**)(&val) = p2;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_RESERVE_PARACHUTE_TINT_INDEX(Ped ped, Any p1) /* 0xE88DA0751C22A2AD */
{
	uint64_t val;

	native_init(0xE88DA0751C22A2AD);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Any PED_0xE8A169E666CBC541() /* 0xE8A169E666CBC541 */
{
	native_init(0xE8A169E666CBC541);
	return *(Any*)(native_call());
}

inline void PED_CLONE_PED_TO_TARGET(Ped ped, Ped targetPed) /* 0xE952D6431689AD9A */
{
	uint64_t val;

	native_init(0xE952D6431689AD9A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = targetPed;
	native_push(val);

	native_call();
}

inline BOOL PED_HAS_STEALTH_MODE_ASSET_LOADED(const char* asset) /* 0xE977FC5B08AF3441 */
{
	uint64_t val;

	native_init(0xE977FC5B08AF3441);

	*(const char**)(&val) = asset;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_RESET_AI_WEAPON_DAMAGE_MODIFIER() /* 0xEA16670E7BA4743C */
{
	native_init(0xEA16670E7BA4743C);
	native_call();
}

inline int PED_0xEA9960D07DADCF10(Any p0) /* 0xEA9960D07DADCF10 */
{
	uint64_t val;

	native_init(0xEA9960D07DADCF10);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL PED_CAN_CREATE_RANDOM_BIKE_RIDER() /* 0xEACEEDA81751915C */
{
	native_init(0xEACEEDA81751915C);
	return *(BOOL*)(native_call());
}

inline BOOL PED_CAN_PED_IN_COMBAT_SEE_TARGET(Ped ped, Ped target) /* 0xEAD42DE3610D0721 */
{
	uint64_t val;

	native_init(0xEAD42DE3610D0721);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = target;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_GET_PED_PARACHUTE_TINT_INDEX(Ped ped, int* outTintIndex) /* 0xEAF5F7E5AE7C6C9D */
{
	uint64_t val;

	native_init(0xEAF5F7E5AE7C6C9D);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int**)(&val) = outTintIndex;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_STEERS_AROUND_VEHICLES(Ped ped, BOOL toggle) /* 0xEB6FB9D48DDE23EC */
{
	uint64_t val;

	native_init(0xEB6FB9D48DDE23EC);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int PED_GET_RELATIONSHIP_BETWEEN_PEDS(Ped ped1, Ped ped2) /* 0xEBA5AD3A0EAF7121 */
{
	uint64_t val;

	native_init(0xEBA5AD3A0EAF7121);

	*(Ped*)(&val) = ped1;
	native_push(val);
	*(Ped*)(&val) = ped2;
	native_push(val);

	return *(int*)(native_call());
}

inline Any PED_0xEBB376779A760AA8() /* 0xEBB376779A760AA8 */
{
	native_init(0xEBB376779A760AA8);
	return *(Any*)(native_call());
}

inline BOOL PED_0xEBD0EDBA5BE957CF(Ped ped) /* 0xEBD0EDBA5BE957CF */
{
	uint64_t val;

	native_init(0xEBD0EDBA5BE957CF);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_SUFFERS_CRITICAL_HITS(Ped ped, BOOL toggle) /* 0xEBD76F2359F190AC */
{
	uint64_t val;

	native_init(0xEBD76F2359F190AC);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Ped ped, BOOL toggle) /* 0xEC4686EC06434678 */
{
	uint64_t val;

	native_init(0xEC4686EC06434678);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_0xEC4B4B3B9908052A(Ped ped, float unk) /* 0xEC4B4B3B9908052A */
{
	uint64_t val;

	native_init(0xEC4B4B3B9908052A);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = unk;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_ON_SPECIFIC_VEHICLE(Ped ped, Vehicle vehicle) /* 0xEC5F66E459AF3BB2 */
{
	uint64_t val;

	native_init(0xEC5F66E459AF3BB2);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any PED_0xEC6935EBE0847B90(Any p0, Any p1, Any p2, Any p3) /* 0xEC6935EBE0847B90 */
{
	uint64_t val;

	native_init(0xEC6935EBE0847B90);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	return *(Any*)(native_call());
}

inline void PED_SET_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped, const char* clipset) /* 0xED34AB6C5CB36520 */
{
	uint64_t val;

	native_init(0xED34AB6C5CB36520);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = clipset;
	native_push(val);

	native_call();
}

inline void PED_0xED3C76ADFA6D07C4(Ped ped) /* 0xED3C76ADFA6D07C4 */
{
	uint64_t val;

	native_init(0xED3C76ADFA6D07C4);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline BOOL PED_0xED6D8E27A43B8CDE(int ColorID) /* 0xED6D8E27A43B8CDE */
{
	uint64_t val;

	native_init(0xED6D8E27A43B8CDE);

	*(int*)(&val) = ColorID;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_REMOVE_PED_FROM_GROUP(Ped ped) /* 0xED74007FFB146BC2 */
{
	uint64_t val;

	native_init(0xED74007FFB146BC2);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_SWITCH_WEAPON(Ped ped, BOOL toggle) /* 0xED7F7EFE9FABF340 */
{
	uint64_t val;

	native_init(0xED7F7EFE9FABF340);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Ped ped, BOOL toggle) /* 0xEDF4079F9D54C9A1 */
{
	uint64_t val;

	native_init(0xEDF4079F9D54C9A1);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_NON_CREATION_AREA(float x1, float y1, float z1, float x2, float y2, float z2) /* 0xEE01041D559983EA */
{
	uint64_t val;

	native_init(0xEE01041D559983EA);

	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_DIES_INSTANTLY_IN_WATER(Ped ped, BOOL toggle) /* 0xEEB64139BA29A7CF */
{
	uint64_t val;

	native_init(0xEEB64139BA29A7CF);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline Any PED_0xEEED8FAFEC331A70(Any p0, Any p1, Any p2, Any p3) /* 0xEEED8FAFEC331A70 */
{
	uint64_t val;

	native_init(0xEEED8FAFEC331A70);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	return *(Any*)(native_call());
}

inline void PED_APPLY_PED_BLOOD_SPECIFIC(Ped ped, Any p1, float xOffset, float yOffset, float zOffset, float scale, Any p6, float p7, const char* bloodType) /* 0xEF0D582CBF2D9B0F */
{
	uint64_t val;

	native_init(0xEF0D582CBF2D9B0F);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = xOffset;
	native_push(val);
	*(float*)(&val) = yOffset;
	native_push(val);
	*(float*)(&val) = zOffset;
	native_push(val);
	*(float*)(&val) = scale;
	native_push(val);
	*(Any*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);
	*(const char**)(&val) = bloodType;
	native_push(val);

	native_call();
}

inline Ped PED_CLONE_PED(Ped ped, float heading, BOOL isNetwork, BOOL thisScriptCheck) /* 0xEF29A16337FACADB */
{
	uint64_t val;

	native_init(0xEF29A16337FACADB);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);
	*(BOOL*)(&val) = isNetwork;
	native_push(val);
	*(BOOL*)(&val) = thisScriptCheck;
	native_push(val);

	return *(Ped*)(native_call());
}

inline Any PED_0xF033419D1B81FAE8(Any p0) /* 0xF033419D1B81FAE8 */
{
	uint64_t val;

	native_init(0xF033419D1B81FAE8);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void PED_SET_PED_RAGDOLL_ON_COLLISION(Ped ped, BOOL toggle) /* 0xF0A4F1BBF4FA7497 */
{
	uint64_t val;

	native_init(0xF0A4F1BBF4FA7497);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PED_0xF0DAEF2F545BEE25(int headshotHandle) /* 0xF0DAEF2F545BEE25 */
{
	uint64_t val;

	native_init(0xF0DAEF2F545BEE25);

	*(int*)(&val) = headshotHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_ID_RANGE(Ped ped, float value) /* 0xF107E836A70DCE05 */
{
	uint64_t val;

	native_init(0xF107E836A70DCE05);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_HELMET_TEXTURE_INDEX(Ped ped, int textureIndex) /* 0xF1550C4BD22582E2 */
{
	uint64_t val;

	native_init(0xF1550C4BD22582E2);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = textureIndex;
	native_push(val);

	native_call();
}

inline int PED_GET_PED_GROUP_INDEX(Ped ped) /* 0xF162E133B4E7A675 */
{
	uint64_t val;

	native_init(0xF162E133B4E7A675);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_0xF1C03A5352243A30(Any p0) /* 0xF1C03A5352243A30 */
{
	uint64_t val;

	native_init(0xF1C03A5352243A30);

	*(Any*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL PED_0xF2385935BFFD4D92(Any p0) /* 0xF2385935BFFD4D92 */
{
	uint64_t val;

	native_init(0xF2385935BFFD4D92);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_FORCE_PED_MOTION_STATE(Ped ped, Hash motionStateHash, BOOL p2, BOOL p3, BOOL p4) /* 0xF28965D04F570DCA */
{
	uint64_t val;

	native_init(0xF28965D04F570DCA);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Hash*)(&val) = motionStateHash;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_PED_SEEING_RANGE(Ped ped, float value) /* 0xF29CF591C4BF6CEE */
{
	uint64_t val;

	native_init(0xF29CF591C4BF6CEE);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_TORSO_IK(Ped ped, BOOL toggle) /* 0xF2B7106D37947CE0 */
{
	uint64_t val;

	native_init(0xF2B7106D37947CE0);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_0xF2BEBCDFAFDAA19E(BOOL toggle) /* 0xF2BEBCDFAFDAA19E */
{
	uint64_t val;

	native_init(0xF2BEBCDFAFDAA19E);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_WEARING_HELMET(Ped ped) /* 0xF33BDFE19B309B19 */
{
	uint64_t val;

	native_init(0xF33BDFE19B309B19);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any PED_ADD_RELATIONSHIP_GROUP(const char* name, Hash* groupHash) /* 0xF372BC22FCB88606 */
{
	uint64_t val;

	native_init(0xF372BC22FCB88606);

	*(const char**)(&val) = name;
	native_push(val);
	*(Hash**)(&val) = groupHash;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL PED_0xF41B5D290C99A3D6(Any p0) /* 0xF41B5D290C99A3D6 */
{
	uint64_t val;

	native_init(0xF41B5D290C99A3D6);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any PED_0xF445DE8DA80A1792() /* 0xF445DE8DA80A1792 */
{
	native_init(0xF445DE8DA80A1792);
	return *(Any*)(native_call());
}

inline void PED_0xF5846EDB26A98A24(Ped ped, BOOL p1) /* 0xF5846EDB26A98A24 */
{
	uint64_t val;

	native_init(0xF5846EDB26A98A24);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_MAX_HEALTH(Ped ped, int value) /* 0xF5F6378C4F3419D3 */
{
	uint64_t val;

	native_init(0xF5F6378C4F3419D3);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = value;
	native_push(val);

	native_call();
}

inline BOOL PED_0xF60165E1D2C5370B(Ped ped, Any* p1, Any* p2) /* 0xF60165E1D2C5370B */
{
	uint64_t val;

	native_init(0xF60165E1D2C5370B);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PED_GET_PED_ALERTNESS(Ped ped) /* 0xF6AA118530443FD2 */
{
	uint64_t val;

	native_init(0xF6AA118530443FD2);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED_SET_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seatIndex) /* 0xF75B0D629E1C063D */
{
	uint64_t val;

	native_init(0xF75B0D629E1C063D);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);
	*(int*)(&val) = seatIndex;
	native_push(val);

	native_call();
}

inline void PED_0xF79F9DEF0AADE61A(Ped ped) /* 0xF79F9DEF0AADE61A */
{
	uint64_t val;

	native_init(0xF79F9DEF0AADE61A);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_CAN_PLAY_VISEME_ANIMS(Ped ped, BOOL toggle, BOOL p2) /* 0xF833DDBA3B104D43 */
{
	uint64_t val;

	native_init(0xF833DDBA3B104D43);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline Vehicle PED_SET_EXCLUSIVE_PHONE_RELATIONSHIPS(Ped ped) /* 0xF92691AED837A5FC */
{
	uint64_t val;

	native_init(0xF92691AED837A5FC);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Vehicle*)(native_call());
}

inline BOOL PED_WAS_PED_KILLED_BY_STEALTH(Ped ped) /* 0xF9800AA1A771B000 */
{
	uint64_t val;

	native_init(0xF9800AA1A771B000);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_ENABLE_SCUBA(Ped ped, BOOL toggle) /* 0xF99F62004024D506 */
{
	uint64_t val;

	native_init(0xF99F62004024D506);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PED_0xF9ACF4A08098EA25(Ped ped, BOOL p1) /* 0xF9ACF4A08098EA25 */
{
	uint64_t val;

	native_init(0xF9ACF4A08098EA25);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Ped ped, Ped target, float xOffset, float yOffset, float zOffset, float radius, BOOL p6) /* 0xF9B8F91AAD3B953E */
{
	uint64_t val;

	native_init(0xF9B8F91AAD3B953E);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Ped*)(&val) = target;
	native_push(val);
	*(float*)(&val) = xOffset;
	native_push(val);
	*(float*)(&val) = yOffset;
	native_push(val);
	*(float*)(&val) = zOffset;
	native_push(val);
	*(float*)(&val) = radius;
	native_push(val);
	*(BOOL*)(&val) = p6;
	native_push(val);

	native_call();
}

inline Any PED_GET_PED_COMBAT_RANGE(Ped ped) /* 0xF9D9F7F2DB8E2FA0 */
{
	uint64_t val;

	native_init(0xF9D9F7F2DB8E2FA0);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(Any*)(native_call());
}

inline void PED_SET_PED_MIN_GROUND_TIME_FOR_STUNGUN(Ped ped, int ms1000000) /* 0xFA0675AB151073FA */
{
	uint64_t val;

	native_init(0xFA0675AB151073FA);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = ms1000000;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_FALLING(Ped ped) /* 0xFB92A102F1C4DFA3 */
{
	uint64_t val;

	native_init(0xFB92A102F1C4DFA3);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_IS_PED_IN_ANY_SUB(Ped ped) /* 0xFBFC01CCFB35D99E */
{
	uint64_t val;

	native_init(0xFBFC01CCFB35D99E);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PED_0xFCF37A457CB96DC0(Any p0, float p1, float p2, float p3, float p4) /* 0xFCF37A457CB96DC0 */
{
	uint64_t val;

	native_init(0xFCF37A457CB96DC0);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_SET_TIME_EXCLUSIVE_DISPLAY_TEXTURE(Any p0, BOOL p1) /* 0xFD325494792302D7 */
{
	uint64_t val;

	native_init(0xFD325494792302D7);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL PED_IS_PED_PERFORMING_STEALTH_KILL(Ped ped) /* 0xFD4CCDBCC59941B7 */
{
	uint64_t val;

	native_init(0xFD4CCDBCC59941B7);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_REMOVE_PED_PREFERRED_COVER_SET(Ped ped) /* 0xFDDB234CF74073D9 */
{
	uint64_t val;

	native_init(0xFDDB234CF74073D9);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline Any PED_0xFE07FF6495D52E2A(Any p0, Any p1, Any p2, Any p3) /* 0xFE07FF6495D52E2A */
{
	uint64_t val;

	native_init(0xFE07FF6495D52E2A);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL PED_0xFEC9A3B1820F3331(Any p0) /* 0xFEC9A3B1820F3331 */
{
	uint64_t val;

	native_init(0xFEC9A3B1820F3331);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PED_0xFEE4A5459472A9F8() /* 0xFEE4A5459472A9F8 */
{
	native_init(0xFEE4A5459472A9F8);
	native_call();
}

inline int PED_GET_PED_TYPE(Ped ped) /* 0xFF059E1E4C01E63C */
{
	uint64_t val;

	native_init(0xFF059E1E4C01E63C);

	*(Ped*)(&val) = ped;
	native_push(val);

	return *(int*)(native_call());
}

inline void PED__FREEZE_PED_CAMERA_ROTATION(Ped ped) /* 0xFF287323B0E2C69A */
{
	uint64_t val;

	native_init(0xFF287323B0E2C69A);

	*(Ped*)(&val) = ped;
	native_push(val);

	native_call();
}

inline void PED_SET_COMBAT_FLOAT(Ped ped, int combatType, float p2) /* 0xFF41B4B141ED981C */
{
	uint64_t val;

	native_init(0xFF41B4B141ED981C);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(int*)(&val) = combatType;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void PED_0xFF4803BC019852D9(float p0, Any p1) /* 0xFF4803BC019852D9 */
{
	uint64_t val;

	native_init(0xFF4803BC019852D9);

	*(float*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PED_SET_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped, const char* animName, const char* animDict) /* 0xFFC24B988B938B38 */
{
	uint64_t val;

	native_init(0xFFC24B988B938B38);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(const char**)(&val) = animName;
	native_push(val);
	*(const char**)(&val) = animDict;
	native_push(val);

	native_call();
}

inline void PLAYER_0x0032A6DBA562C518() /* 0x0032A6DBA562C518 */
{
	native_init(0x0032A6DBA562C518);
	native_call();
}

inline void PLAYER_SET_PLAYER_MODEL(Player player, Hash modelHash) /* 0x00A1CADD00108836 */
{
	uint64_t val;

	native_init(0x00A1CADD00108836);

	*(Player*)(&val) = player;
	native_push(val);
	*(Hash*)(&val) = modelHash;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_WANTED_LEVEL_MULTIPLIER(float multiplier) /* 0x020E5F00CDA207BA */
{
	uint64_t val;

	native_init(0x020E5F00CDA207BA);

	*(float*)(&val) = multiplier;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_TEAM(Player player, int team) /* 0x0299FA38396A4940 */
{
	uint64_t val;

	native_init(0x0299FA38396A4940);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = team;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_PLAYER_TELEPORT_ACTIVE() /* 0x02B15662D7F8886F */
{
	native_init(0x02B15662D7F8886F);
	return *(BOOL*)(native_call());
}

inline void PLAYER_CHANGE_PLAYER_PED(Player player, Ped ped, BOOL p, BOOL p3) /* 0x048189FAC643DEEE */
{
	uint64_t val;

	native_init(0x048189FAC643DEEE);

	*(Player*)(&val) = player;
	native_push(val);
	*(Ped*)(&val) = ped;
	native_push(val);
	*(BOOL*)(&val) = p;
	native_push(val);
	*(BOOL*)(&val) = p3;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_ALL_RANDOM_PEDS_FLEE(Player* player, Any toggle) /* 0x056E0FE8534C2949 */
{
	uint64_t val;

	native_init(0x056E0FE8534C2949);

	*(Player**)(&val) = player;
	native_push(val);
	*(Any*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_SPECIAL_ABILITY_METER_FULL(Player player) /* 0x05A1FE504B7F2587 */
{
	uint64_t val;

	native_init(0x05A1FE504B7F2587);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PLAYER_GET_WANTED_LEVEL_RADIUS(BOOL player) /* 0x085DEB493BE80812 */
{
	uint64_t val;

	native_init(0x085DEB493BE80812);

	*(BOOL*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PLAYER_ARE_PLAYER_STARS_GREYED_OUT(Player player) /* 0x0A6EB355EE14A2DB */
{
	uint64_t val;

	native_init(0x0A6EB355EE14A2DB);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Vector3 PLAYER_GET_PLAYER_WANTED_CENTRE_POSITION(Player player) /* 0x0C92BA89F1AF26F8 */
{
	uint64_t val;

	native_init(0x0C92BA89F1AF26F8);

	*(Player*)(&val) = player;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline int PLAYER_GET_PLAYER_GROUP(Player player) /* 0x0D127585F77030AF */
{
	uint64_t val;

	native_init(0x0D127585F77030AF);

	*(Player*)(&val) = player;
	native_push(val);

	return *(int*)(native_call());
}

inline void PLAYER_CLEAR_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player) /* 0x0F4CC924CF8C7B21 */
{
	uint64_t val;

	native_init(0x0F4CC924CF8C7B21);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_FORCED_AIM(Player player, BOOL toggle) /* 0x0FEE4F80AC44A726 */
{
	uint64_t val;

	native_init(0x0FEE4F80AC44A726);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PLAYER_CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player) /* 0x10C54E4389C12B42 */
{
	uint64_t val;

	native_init(0x10C54E4389C12B42);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(Player player, int flags) /* 0x11D5F725F0E780E0 */
{
	uint64_t val;

	native_init(0x11D5F725F0E780E0);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = flags;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_GET_PLAYER_TARGET_ENTITY(Player player, Entity* entity) /* 0x13EDE1A5DBF797C9 */
{
	uint64_t val;

	native_init(0x13EDE1A5DBF797C9);

	*(Player*)(&val) = player;
	native_push(val);
	*(Entity**)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_SET_PLAYER_CLOTH_LOCK_COUNTER(int value) /* 0x14D913B777DFF5DA */
{
	uint64_t val;

	native_init(0x14D913B777DFF5DA);

	*(int*)(&val) = value;
	native_push(val);

	native_call();
}

inline void PLAYER_ENABLE_SPECIAL_ABILITY(Player* player, BOOL toggle) /* 0x181EC197DAEFE121 */
{
	uint64_t val;

	native_init(0x181EC197DAEFE121);

	*(Player**)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline float PLAYER_GET_PLAYER_SPRINT_TIME_REMAINING(Player player) /* 0x1885BC9B108B4C99 */
{
	uint64_t val;

	native_init(0x1885BC9B108B4C99);

	*(Player*)(&val) = player;
	native_push(val);

	return *(float*)(native_call());
}

inline void PLAYER_RESET_PLAYER_INPUT_GAIT(Player player) /* 0x19531C47A2ABD691 */
{
	uint64_t val;

	native_init(0x19531C47A2ABD691);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline int PLAYER__GET_ACHIEVEMENT_PROGRESSION(int achId) /* 0x1C186837D0619335 */
{
	uint64_t val;

	native_init(0x1C186837D0619335);

	*(int*)(&val) = achId;
	native_push(val);

	return *(int*)(native_call());
}

inline void PLAYER_SPECIAL_ABILITY_DEPLETE_METER(Player player, BOOL p1) /* 0x1D506DBBBC51E64B */
{
	uint64_t val;

	native_init(0x1D506DBBBC51E64B);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PLAYER_PLAYER_DETACH_VIRTUAL_BOUND() /* 0x1DD5897E2FA6E7C9 */
{
	native_init(0x1DD5897E2FA6E7C9);
	native_call();
}

inline void PLAYER_SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(Player* player) /* 0x1DE37BBF9E9CC14A */
{
	uint64_t val;

	native_init(0x1DE37BBF9E9CC14A);

	*(Player**)(&val) = player;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player player) /* 0x20CE80B0C2BF4ACC */
{
	uint64_t val;

	native_init(0x20CE80B0C2BF4ACC);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PLAYER_IS_PLAYER_WANTED_LEVEL_GREATER(Player player, int wantedLevel) /* 0x238DB2A2C23EE9EF */
{
	uint64_t val;

	native_init(0x238DB2A2C23EE9EF);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = wantedLevel;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_SET_PLAYER_INVINCIBLE(Player player, BOOL toggle) /* 0x239528EACDC3E7DE */
{
	uint64_t val;

	native_init(0x239528EACDC3E7DE);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(Player player, Entity* entity) /* 0x2975C866E6713290 */
{
	uint64_t val;

	native_init(0x2975C866E6713290);

	*(Player*)(&val) = player;
	native_push(val);
	*(Entity**)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_SET_PLAYER_LOCKON_RANGE_OVERRIDE(Player player, float range) /* 0x29961D490E5814FD */
{
	uint64_t val;

	native_init(0x29961D490E5814FD);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = range;
	native_push(val);

	native_call();
}

inline void PLAYER_RESET_PLAYER_ARREST_STATE(Player player) /* 0x2D03E13C460760D6 */
{
	uint64_t val;

	native_init(0x2D03E13C460760D6);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) /* 0x2D83BC011CA14A3C */
{
	uint64_t val;

	native_init(0x2D83BC011CA14A3C);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = modifier;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_PLAYER_FREE_AIMING(Player player) /* 0x2E397FD2ECD37C87 */
{
	uint64_t val;

	native_init(0x2E397FD2ECD37C87);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_SPECIAL_ABILITY_CHARGE_SMALL(Player player, BOOL p1, BOOL p2) /* 0x2E7B9B683481687D */
{
	uint64_t val;

	native_init(0x2E7B9B683481687D);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_DISABLE_AMBIENT_MELEE_MOVE(Player player, BOOL toggle) /* 0x2E8AABFA40A84F8C */
{
	uint64_t val;

	native_init(0x2E8AABFA40A84F8C);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline float PLAYER_GET_PLAYER_CURRENT_STEALTH_NOISE(Player player) /* 0x2F395D61F3A1F877 */
{
	uint64_t val;

	native_init(0x2F395D61F3A1F877);

	*(Player*)(&val) = player;
	native_push(val);

	return *(float*)(native_call());
}

inline void PLAYER_0x2F7CEB6520288061(BOOL p0) /* 0x2F7CEB6520288061 */
{
	uint64_t val;

	native_init(0x2F7CEB6520288061);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_POLICE_IGNORE_PLAYER(Player player, BOOL toggle) /* 0x32C62AA929C2DA6A */
{
	uint64_t val;

	native_init(0x32C62AA929C2DA6A);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_WANTED_LEVEL_NO_DROP(Player player, int wantedLevel, BOOL p2) /* 0x340E61DE7F471565 */
{
	uint64_t val;

	native_init(0x340E61DE7F471565);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = wantedLevel;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void PLAYER_0x36F1B38855F2A8DF(Player player) /* 0x36F1B38855F2A8DF */
{
	uint64_t val;

	native_init(0x36F1B38855F2A8DF);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline int PLAYER_GET_PLAYER_TEAM(Player player) /* 0x37039302F4E0A008 */
{
	uint64_t val;

	native_init(0x37039302F4E0A008);

	*(Player*)(&val) = player;
	native_push(val);

	return *(int*)(native_call());
}

inline void PLAYER_SPECIAL_ABILITY_RESET(Player player) /* 0x375F0E738F861A94 */
{
	uint64_t val;

	native_init(0x375F0E738F861A94);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_PLAYER_BEING_ARRESTED(Player player, BOOL atArresting) /* 0x388A47C51ABDAC8E */
{
	uint64_t val;

	native_init(0x388A47C51ABDAC8E);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = atArresting;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PLAYER_0x38D28DA81E4E9BF9(Player player) /* 0x38D28DA81E4E9BF9 */
{
	uint64_t val;

	native_init(0x38D28DA81E4E9BF9);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_SET_PLAYER_WANTED_LEVEL(Player player, int wantedLevel, BOOL disableNoMission) /* 0x39FF19C64EF7DA5B */
{
	uint64_t val;

	native_init(0x39FF19C64EF7DA5B);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = wantedLevel;
	native_push(val);
	*(BOOL*)(&val) = disableNoMission;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_PLAYER_FREE_AIMING_AT_ENTITY(Player player, Entity entity) /* 0x3C06B5C839B38F7B */
{
	uint64_t val;

	native_init(0x3C06B5C839B38F7B);

	*(Player*)(&val) = player;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_GIVE_PLAYER_RAGDOLL_CONTROL(Player player, BOOL toggle) /* 0x3C49C870E66F0A28 */
{
	uint64_t val;

	native_init(0x3C49C870E66F0A28);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PLAYER_SPECIAL_ABILITY_FILL_METER(Player player, BOOL p1) /* 0x3DACA8DDC6FD4980 */
{
	uint64_t val;

	native_init(0x3DACA8DDC6FD4980);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_SPECIAL_ABILITY_ACTIVE(Ped player) /* 0x3E5F7FC85D854E15 */
{
	uint64_t val;

	native_init(0x3E5F7FC85D854E15);

	*(Ped*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline float PLAYER_GET_PLAYER_SPRINT_STAMINA_REMAINING(Player player) /* 0x3F9F16F8E65A7ED7 */
{
	uint64_t val;

	native_init(0x3F9F16F8E65A7ED7);

	*(Player*)(&val) = player;
	native_push(val);

	return *(float*)(native_call());
}

inline BOOL PLAYER_GET_NUMBER_OF_PLAYERS() /* 0x407C7F91DDB46C16 */
{
	native_init(0x407C7F91DDB46C16);
	return *(BOOL*)(native_call());
}

inline Player PLAYER_INT_TO_PLAYERINDEX(int value) /* 0x41BD2A6B006AF756 */
{
	uint64_t val;

	native_init(0x41BD2A6B006AF756);

	*(int*)(&val) = value;
	native_push(val);

	return *(Player*)(native_call());
}

inline BOOL PLAYER_IS_PLAYER_DEAD(Player player) /* 0x424D4687FA1E5652 */
{
	uint64_t val;

	native_init(0x424D4687FA1E5652);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_SET_POLICE_RADAR_BLIPS(Player test) /* 0x43286D561B72B8BF */
{
	uint64_t val;

	native_init(0x43286D561B72B8BF);

	*(Player*)(&val) = test;
	native_push(val);

	native_call();
}

inline Ped PLAYER_GET_PLAYER_PED(Player player) /* 0x43A66C31C68491C0 */
{
	uint64_t val;

	native_init(0x43A66C31C68491C0);

	*(Player*)(&val) = player;
	native_push(val);

	return *(Ped*)(native_call());
}

inline int PLAYER_GET_MAX_WANTED_LEVEL() /* 0x462E0DB9B137DC5F */
{
	native_init(0x462E0DB9B137DC5F);
	return *(int*)(native_call());
}

inline Any PLAYER_0x4669B3ED80F24B4E(Player player) /* 0x4669B3ED80F24B4E */
{
	uint64_t val;

	native_init(0x4669B3ED80F24B4E);

	*(Player*)(&val) = player;
	native_push(val);

	return *(Any*)(native_call());
}

inline void PLAYER_SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) /* 0x471D2FF42A94B4F2 */
{
	uint64_t val;

	native_init(0x471D2FF42A94B4F2);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void PLAYER_SIMULATE_PLAYER_INPUT_GAIT(Player control, float amount, int gaitType, float speed, BOOL p4, BOOL p5) /* 0x477D5D63E63ECA5D */
{
	uint64_t val;

	native_init(0x477D5D63E63ECA5D);

	*(Player*)(&val) = control;
	native_push(val);
	*(float*)(&val) = amount;
	native_push(val);
	*(int*)(&val) = gaitType;
	native_push(val);
	*(float*)(&val) = speed;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_PLAYER_CONTROL_ON(Player player) /* 0x49C32D60007AFA47 */
{
	uint64_t val;

	native_init(0x49C32D60007AFA47);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(Player player, float modifier) /* 0x4A3DC7ECCC321032 */
{
	uint64_t val;

	native_init(0x4A3DC7ECCC321032);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = modifier;
	native_push(val);

	native_call();
}

inline void PLAYER_CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) /* 0x4AACB96203D11A31 */
{
	uint64_t val;

	native_init(0x4AACB96203D11A31);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(Player player, float modifier) /* 0x4C60E6EFDAFF2462 */
{
	uint64_t val;

	native_init(0x4C60E6EFDAFF2462);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = modifier;
	native_push(val);

	native_call();
}

inline void PLAYER_FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(const char* name, int cleanupFlags) /* 0x4C68DDDDF0097317 */
{
	uint64_t val;

	native_init(0x4C68DDDDF0097317);

	*(const char**)(&val) = name;
	native_push(val);
	*(int*)(&val) = cleanupFlags;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(Player player, float value) /* 0x4E9021C1FCDD507A */
{
	uint64_t val;

	native_init(0x4E9021C1FCDD507A);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_PLAYER_RIDING_TRAIN(Player player) /* 0x4EC12697209F2196 */
{
	uint64_t val;

	native_init(0x4EC12697209F2196);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Player PLAYER_PLAYER_ID() /* 0x4F8644AF03D0E0D6 */
{
	native_init(0x4F8644AF03D0E0D6);
	return *(Player*)(native_call());
}

inline void PLAYER__EXPAND_WORLD_LIMITS(float x, float y, float z) /* 0x5006D96C995A5827 */
{
	uint64_t val;

	native_init(0x5006D96C995A5827);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline int PLAYER_GET_TIME_SINCE_LAST_ARREST() /* 0x5063F92F07C2A316 */
{
	native_init(0x5063F92F07C2A316);
	return *(int*)(native_call());
}

inline Ped PLAYER_GET_PLAYER_PED_SCRIPT_INDEX(Player player) /* 0x50FAC3A3E030A6E1 */
{
	uint64_t val;

	native_init(0x50FAC3A3E030A6E1);

	*(Player*)(&val) = player;
	native_push(val);

	return *(Ped*)(native_call());
}

inline void PLAYER_SET_PLAYER_WANTED_CENTRE_POSITION(Player player, float x, float y, float z) /* 0x520E541A97A13354 */
{
	uint64_t val;

	native_init(0x520E541A97A13354);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void PLAYER_0x5501B7A5CDB79D37(Player player) /* 0x5501B7A5CDB79D37 */
{
	uint64_t val;

	native_init(0x5501B7A5CDB79D37);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline Player PLAYER_0x56105E599CAB0EFA(int* p0) /* 0x56105E599CAB0EFA */
{
	uint64_t val;

	native_init(0x56105E599CAB0EFA);

	*(int**)(&val) = p0;
	native_push(val);

	return *(Player*)(native_call());
}

inline void PLAYER_0x5702B917B99DB1CD(int p0) /* 0x5702B917B99DB1CD */
{
	uint64_t val;

	native_init(0x5702B917B99DB1CD);

	*(int*)(&val) = p0;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(Player player, BOOL toggle) /* 0x596976B02B6B5700 */
{
	uint64_t val;

	native_init(0x596976B02B6B5700);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_LOCKON(Player player, BOOL toggle) /* 0x5C8B2F450EE4328E */
{
	uint64_t val;

	native_init(0x5C8B2F450EE4328E);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int PLAYER_GET_TIME_SINCE_PLAYER_HIT_VEHICLE(Player player) /* 0x5D35ECF3A81A0EE0 */
{
	uint64_t val;

	native_init(0x5D35ECF3A81A0EE0);

	*(Player*)(&val) = player;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL PLAYER_IS_SYSTEM_UI_BEING_DISPLAYED() /* 0x5D511E3867C87139 */
{
	native_init(0x5D511E3867C87139);
	return *(BOOL*)(native_call());
}

inline void PLAYER_SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(Player player, float regenRate) /* 0x5DB660B38DD98A31 */
{
	uint64_t val;

	native_init(0x5DB660B38DD98A31);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = regenRate;
	native_push(val);

	native_call();
}

inline void PLAYER_0x5DC40A8869C22141(BOOL p0, ScrHandle p1) /* 0x5DC40A8869C22141 */
{
	uint64_t val;

	native_init(0x5DC40A8869C22141);

	*(BOOL*)(&val) = p0;
	native_push(val);
	*(ScrHandle*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_GET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) /* 0x5DDFE2FF727F3CA3 */
{
	uint64_t val;

	native_init(0x5DDFE2FF727F3CA3);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_DISABLE_PLAYER_FIRING(Player player, BOOL toggle) /* 0x5E6CC07646BBEAB8 */
{
	uint64_t val;

	native_init(0x5E6CC07646BBEAB8);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_PLAYER_PLAYING(Player player) /* 0x5E9564D8246B909A */
{
	uint64_t val;

	native_init(0x5E9564D8246B909A);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PLAYER_0x5FC472C501CCADB3(Player player) /* 0x5FC472C501CCADB3 */
{
	uint64_t val;

	native_init(0x5FC472C501CCADB3);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PLAYER_0x65FAEE425DE637B0(Player player) /* 0x65FAEE425DE637B0 */
{
	uint64_t val;

	native_init(0x65FAEE425DE637B0);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PLAYER_0x690A61A6D13583F6(Ped p0) /* 0x690A61A6D13583F6 */
{
	uint64_t val;

	native_init(0x690A61A6D13583F6);

	*(Ped*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_SPECIAL_ABILITY_LOCK(Hash playerModel) /* 0x6A09D0D590A47D13 */
{
	uint64_t val;

	native_init(0x6A09D0D590A47D13);

	*(Hash*)(&val) = playerModel;
	native_push(val);

	native_call();
}

inline const char *PLAYER_GET_PLAYER_NAME(Player player) /* 0x6D0DE6A7B5DA71F8 */
{
	uint64_t val;

	native_init(0x6D0DE6A7B5DA71F8);

	*(Player*)(&val) = player;
	native_push(val);

	return *(const char**)(native_call());
}

inline void PLAYER_SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) /* 0x6DB47AA77FD94E09 */
{
	uint64_t val;

	native_init(0x6DB47AA77FD94E09);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = multiplier;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_CAN_DO_DRIVE_BY(Player player, BOOL toggle) /* 0x6E8834B52EC20C77 */
{
	uint64_t val;

	native_init(0x6E8834B52EC20C77);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PLAYER_GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int* tintIndex) /* 0x6E9C742F340CE5A2 */
{
	uint64_t val;

	native_init(0x6E9C742F340CE5A2);

	*(Player*)(&val) = player;
	native_push(val);
	*(int**)(&val) = tintIndex;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_PLAYER_LOGGING_IN_NP() /* 0x74556E1420867ECA */
{
	native_init(0x74556E1420867ECA);
	return *(BOOL*)(native_call());
}

inline void PLAYER_SET_PLAYER_CLOTH_PIN_FRAMES(Player player, BOOL toggle) /* 0x749FADDF97DFE930 */
{
	uint64_t val;

	native_init(0x749FADDF97DFE930);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PLAYER_GET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int* tintIndex) /* 0x75D3F7A1B0D9B145 */
{
	uint64_t val;

	native_init(0x75D3F7A1B0D9B145);

	*(Player*)(&val) = player;
	native_push(val);
	*(int**)(&val) = tintIndex;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_FORCED_ZOOM(Player player, BOOL toggle) /* 0x75E7D505F2B15902 */
{
	uint64_t val;

	native_init(0x75E7D505F2B15902);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_FORCE_SKIP_AIM_INTRO(Player player, BOOL toggle) /* 0x7651BC64AE59E128 */
{
	uint64_t val;

	native_init(0x7651BC64AE59E128);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_MAX_ARMOUR(Player player, int value) /* 0x77DFCCF5948B8C71 */
{
	uint64_t val;

	native_init(0x77DFCCF5948B8C71);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = value;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_PLAYER_TARGETTING_ANYTHING(Player player) /* 0x78CFE51896B6B8A4 */
{
	uint64_t val;

	native_init(0x78CFE51896B6B8A4);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PLAYER_IS_PLAYER_TARGETTING_ENTITY(Player player, Entity entity) /* 0x7912F7FC4F6264B6 */
{
	uint64_t val;

	native_init(0x7912F7FC4F6264B6);

	*(Player*)(&val) = player;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL PLAYER__IS_PLAYER_CAM_CONTROL_DISABLED() /* 0x7C814D2FB49F40C0 */
{
	native_init(0x7C814D2FB49F40C0);
	return *(BOOL*)(native_call());
}

inline void PLAYER_SET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) /* 0x7DDAB28D31FAC363 */
{
	uint64_t val;

	native_init(0x7DDAB28D31FAC363);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(Player player, Vehicle vehicle) /* 0x8026FF78F208978A */
{
	uint64_t val;

	native_init(0x8026FF78F208978A);

	*(Player*)(&val) = player;
	native_push(val);
	*(Vehicle*)(&val) = vehicle;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int r, int g, int b) /* 0x8217FD371A4625CF */
{
	uint64_t val;

	native_init(0x8217FD371A4625CF);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = r;
	native_push(val);
	*(int*)(&val) = g;
	native_push(val);
	*(int*)(&val) = b;
	native_push(val);

	native_call();
}

inline void PLAYER_ASSISTED_MOVEMENT_FLUSH_ROUTE() /* 0x8621390F0CDCFE1F */
{
	native_init(0x8621390F0CDCFE1F);
	native_call();
}

inline BOOL PLAYER_HAS_ACHIEVEMENT_BEEN_PASSED(int achievement) /* 0x867365E111A3B6EB */
{
	uint64_t val;

	native_init(0x867365E111A3B6EB);

	*(int*)(&val) = achievement;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player) /* 0x8753997EB5F6EE3F */
{
	uint64_t val;

	native_init(0x8753997EB5F6EE3F);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_PLAYER_SCRIPT_CONTROL_ON(Player player) /* 0x8A876A65283DD7D7 */
{
	uint64_t val;

	native_init(0x8A876A65283DD7D7);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_SET_PLAYER_CONTROL(Player player, BOOL toggle, int flags) /* 0x8D32347D6D4C40A2 */
{
	uint64_t val;

	native_init(0x8D32347D6D4C40A2);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);
	*(int*)(&val) = flags;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_EVERYONE_IGNORE_PLAYER(Player player, BOOL toggle) /* 0x8EEDA153AD141BA4 */
{
	uint64_t val;

	native_init(0x8EEDA153AD141BA4);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_PLAYER_READY_FOR_CUTSCENE(Player player) /* 0x908CBECC2CAA3690 */
{
	uint64_t val;

	native_init(0x908CBECC2CAA3690);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PLAYER_GET_PLAYER_MAX_ARMOUR(Player player) /* 0x92659B4CE1863CB3 */
{
	uint64_t val;

	native_init(0x92659B4CE1863CB3);

	*(Player*)(&val) = player;
	native_push(val);

	return *(int*)(native_call());
}

inline void PLAYER_SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int tintIndex) /* 0x93B0FB27C9A04060 */
{
	uint64_t val;

	native_init(0x93B0FB27C9A04060);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = tintIndex;
	native_push(val);

	native_call();
}

inline void PLAYER_DISPLAY_SYSTEM_SIGNIN_UI(BOOL unk) /* 0x94DD7888C10A979E */
{
	uint64_t val;

	native_init(0x94DD7888C10A979E);

	*(BOOL*)(&val) = unk;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_PLAYER_CLIMBING(Player player) /* 0x95E8F73DC65EFB9C */
{
	uint64_t val;

	native_init(0x95E8F73DC65EFB9C);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player, Hash model) /* 0x977DB4641F6FC3DB */
{
	uint64_t val;

	native_init(0x977DB4641F6FC3DB);

	*(Player*)(&val) = player;
	native_push(val);
	*(Hash*)(&val) = model;
	native_push(val);

	native_call();
}

inline Vehicle* PLAYER_GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() /* 0x9A41CF4674A12272 */
{
	native_init(0x9A41CF4674A12272);
	return *(Vehicle**)(native_call());
}

inline void PLAYER__SWITCH_CRIME_TYPE(Player player, int p1) /* 0x9A987297ED8BD838 */
{
	uint64_t val;

	native_init(0x9A987297ED8BD838);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_WANTED_LEVEL_DIFFICULTY(Player player, float difficulty) /* 0x9B0BB33B04405E7A */
{
	uint64_t val;

	native_init(0x9B0BB33B04405E7A);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = difficulty;
	native_push(val);

	native_call();
}

inline void PLAYER_SPECIAL_ABILITY_DEACTIVATE_FAST(Player player) /* 0x9CB5CE07A3968D5A */
{
	uint64_t val;

	native_init(0x9CB5CE07A3968D5A);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline int PLAYER_INT_TO_PARTICIPANTINDEX(Player value) /* 0x9EC6603812C24710 */
{
	uint64_t val;

	native_init(0x9EC6603812C24710);

	*(Player*)(&val) = value;
	native_push(val);

	return *(int*)(native_call());
}

inline void PLAYER_0x9EDD76E87D5D51BA(Player player) /* 0x9EDD76E87D5D51BA */
{
	uint64_t val;

	native_init(0x9EDD76E87D5D51BA);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(Player player, BOOL toggle) /* 0x9F343285A00B4BB6 */
{
	uint64_t val;

	native_init(0x9F343285A00B4BB6);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_CLOTH_PACKAGE_INDEX(int index) /* 0x9F7BBA2EA6372500 */
{
	uint64_t val;

	native_init(0x9F7BBA2EA6372500);

	*(int*)(&val) = index;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_SPRINT(Player player, BOOL toggle) /* 0xA01B8075D8B92DF4 */
{
	uint64_t val;

	native_init(0xA01B8075D8B92DF4);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PLAYER_SPECIAL_ABILITY_CHARGE_NORMALIZED(Player player, float normalizedValue, BOOL p2) /* 0xA0696A65F009EE18 */
{
	uint64_t val;

	native_init(0xA0696A65F009EE18);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = normalizedValue;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline float PLAYER_GET_PLAYER_UNDERWATER_TIME_REMAINING(Player player) /* 0xA1FCF8E6AF40B731 */
{
	uint64_t val;

	native_init(0xA1FCF8E6AF40B731);

	*(Player*)(&val) = player;
	native_push(val);

	return *(float*)(native_call());
}

inline void PLAYER_RESTORE_PLAYER_STAMINA(Player player, float p1) /* 0xA352C1B864CAFD33 */
{
	uint64_t val;

	native_init(0xA352C1B864CAFD33);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_PARACHUTE_TINT_INDEX(Ped ped, Vehicle* vehicleindex) /* 0xA3D0E54541D9A5E5 */
{
	uint64_t val;

	native_init(0xA3D0E54541D9A5E5);

	*(Ped*)(&val) = ped;
	native_push(val);
	*(Vehicle**)(&val) = vehicleindex;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_SPECIAL_ABILITY_MULTIPLIER(float multiplier) /* 0xA49C426ED0CA4AB7 */
{
	uint64_t val;

	native_init(0xA49C426ED0CA4AB7);

	*(float*)(&val) = multiplier;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(Player player, float damageAmount) /* 0xA50E117CDDF82F0C */
{
	uint64_t val;

	native_init(0xA50E117CDDF82F0C);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = damageAmount;
	native_push(val);

	native_call();
}

inline Player PLAYER_GET_PLAYER_INDEX() /* 0xA5EDC40EF369B48D */
{
	native_init(0xA5EDC40EF369B48D);
	return *(Player*)(native_call());
}

inline void PLAYER_RESET_PLAYER_STAMINA(Player player) /* 0xA6F312FCCE9C1DFE */
{
	uint64_t val;

	native_init(0xA6F312FCCE9C1DFE);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_SWIM_MULTIPLIER_FOR_PLAYER(Ped player, float multiplier) /* 0xA91C6F0FF7D16A13 */
{
	uint64_t val;

	native_init(0xA91C6F0FF7D16A13);

	*(Ped*)(&val) = player;
	native_push(val);
	*(float*)(&val) = multiplier;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_MAX_WANTED_LEVEL(int maxWantedLevel) /* 0xAA5F02DB48D704B9 */
{
	uint64_t val;

	native_init(0xAA5F02DB48D704B9);

	*(int*)(&val) = maxWantedLevel;
	native_push(val);

	native_call();
}

inline void PLAYER_START_PLAYER_TELEPORT(Player player, float x, float y, float z, float heading, Any keepVehicle, Any keepVelocity, Any p7) /* 0xAD15F075A4DA0FDE */
{
	uint64_t val;

	native_init(0xAD15F075A4DA0FDE);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = heading;
	native_push(val);
	*(Any*)(&val) = keepVehicle;
	native_push(val);
	*(Any*)(&val) = keepVelocity;
	native_push(val);
	*(Any*)(&val) = p7;
	native_push(val);

	native_call();
}

inline void PLAYER_0xAD73CE5A09E42D12(Player player) /* 0xAD73CE5A09E42D12 */
{
	uint64_t val;

	native_init(0xAD73CE5A09E42D12);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) /* 0xAE540335B4ABC4E2 */
{
	uint64_t val;

	native_init(0xAE540335B4ABC4E2);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = modifier;
	native_push(val);

	native_call();
}

inline void PLAYER_ASSISTED_MOVEMENT_CLOSE_ROUTE() /* 0xAEBF081FFC0A0E5E */
{
	native_init(0xAEBF081FFC0A0E5E);
	native_call();
}

inline void PLAYER_SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int index) /* 0xAF04C87F5DC1DF38 */
{
	uint64_t val;

	native_init(0xAF04C87F5DC1DF38);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = index;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(Player player) /* 0xAFAF86043E5874E9 */
{
	uint64_t val;

	native_init(0xAFAF86043E5874E9);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_SET_PLAYER_TARGETING_MODE(int targetMode) /* 0xB1906895227793F3 */
{
	uint64_t val;

	native_init(0xB1906895227793F3);

	*(int*)(&val) = targetMode;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_SPECIAL_ABILITY_ENABLED(Player player) /* 0xB1D200FE26AEF3CB */
{
	uint64_t val;

	native_init(0xB1D200FE26AEF3CB);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(Player player, float multiplier) /* 0xB2C1A29588A9F47C */
{
	uint64_t val;

	native_init(0xB2C1A29588A9F47C);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = multiplier;
	native_push(val);

	native_call();
}

inline void PLAYER_CLEAR_PLAYER_WANTED_LEVEL(Player player) /* 0xB302540597885499 */
{
	uint64_t val;

	native_init(0xB302540597885499);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void PLAYER_0xB45EFF719D8427A6(float p0) /* 0xB45EFF719D8427A6 */
{
	uint64_t val;

	native_init(0xB45EFF719D8427A6);

	*(float*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Vehicle PLAYER_GET_PLAYERS_LAST_VEHICLE() /* 0xB6997A7EB3F5C8C0 */
{
	native_init(0xB6997A7EB3F5C8C0);
	return *(Vehicle*)(native_call());
}

inline BOOL PLAYER_GET_PLAYER_INVINCIBLE(Player player) /* 0xB721981B2B939E07 */
{
	uint64_t val;

	native_init(0xB721981B2B939E07);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_SPECIAL_ABILITY_CHARGE_ABSOLUTE(Player player, int p1, BOOL p2) /* 0xB7B0870EB531D08D */
{
	uint64_t val;

	native_init(0xB7B0870EB531D08D);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void PLAYER_0xB885852C39CC265D() /* 0xB885852C39CC265D */
{
	native_init(0xB885852C39CC265D);
	native_call();
}

inline BOOL PLAYER_0xB9CF1F793A9F1BF1() /* 0xB9CF1F793A9F1BF1 */
{
	native_init(0xB9CF1F793A9F1BF1);
	return *(BOOL*)(native_call());
}

inline void PLAYER_RESET_WANTED_LEVEL_DIFFICULTY(Player player) /* 0xB9D0DD990DC141DD */
{
	uint64_t val;

	native_init(0xB9D0DD990DC141DD);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_0xBC0753C9CA14B506(Player player, int p1, BOOL p2) /* 0xBC0753C9CA14B506 */
{
	uint64_t val;

	native_init(0xBC0753C9CA14B506);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_FORCE_CLEANUP(int cleanupFlags) /* 0xBC8983F38F78ED51 */
{
	uint64_t val;

	native_init(0xBC8983F38F78ED51);

	*(int*)(&val) = cleanupFlags;
	native_push(val);

	native_call();
}

inline void PLAYER_0xBC9490CA15AEA8FB(Player player) /* 0xBC9490CA15AEA8FB */
{
	uint64_t val;

	native_init(0xBC9490CA15AEA8FB);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline int PLAYER_GIVE_ACHIEVEMENT_TO_PLAYER(int achievement) /* 0xBEC7076D64130195 */
{
	uint64_t val;

	native_init(0xBEC7076D64130195);

	*(int*)(&val) = achievement;
	native_push(val);

	return *(int*)(native_call());
}

inline void PLAYER_START_FIRING_AMNESTY(int duration) /* 0xBF9BD71691857E48 */
{
	uint64_t val;

	native_init(0xBF9BD71691857E48);

	*(int*)(&val) = duration;
	native_push(val);

	native_call();
}

inline void PLAYER_DISABLE_PLAYER_VEHICLE_REWARDS(Player player) /* 0xC142BE3BB9CE125F */
{
	uint64_t val;

	native_init(0xC142BE3BB9CE125F);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline BOOL PLAYER__SET_ACHIEVEMENT_PROGRESSION(int achId, int progression) /* 0xC2AFFFDABBDC2C5C */
{
	uint64_t val;

	native_init(0xC2AFFFDABBDC2C5C);

	*(int*)(&val) = achId;
	native_push(val);
	*(int*)(&val) = progression;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_0xC3376F42B1FACCC6(Player player) /* 0xC3376F42B1FACCC6 */
{
	uint64_t val;

	native_init(0xC3376F42B1FACCC6);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void PLAYER_STOP_PLAYER_TELEPORT() /* 0xC449EDED9D73009C */
{
	native_init(0xC449EDED9D73009C);
	native_call();
}

inline void PLAYER_SET_PLAYER_SIMULATE_AIMING(Player player, BOOL toggle) /* 0xC54C95DA968EC5B5 */
{
	uint64_t val;

	native_init(0xC54C95DA968EC5B5);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_SPECIAL_ABILITY_UNLOCKED(Hash playerModel) /* 0xC6017F6A6CDFA694 */
{
	uint64_t val;

	native_init(0xC6017F6A6CDFA694);

	*(Hash*)(&val) = playerModel;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PLAYER_GET_TIME_SINCE_LAST_DEATH() /* 0xC7034807558DDFCA */
{
	native_init(0xC7034807558DDFCA);
	return *(int*)(native_call());
}

inline BOOL PLAYER_HAS_FORCE_CLEANUP_OCCURRED(int cleanupFlags) /* 0xC968670BFACE42D9 */
{
	uint64_t val;

	native_init(0xC968670BFACE42D9);

	*(int*)(&val) = cleanupFlags;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_0xC9A763D8FE87436A(Player player) /* 0xC9A763D8FE87436A */
{
	uint64_t val;

	native_init(0xC9A763D8FE87436A);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(Player player, float multiplier) /* 0xCA7DC8329F0A1E9E */
{
	uint64_t val;

	native_init(0xCA7DC8329F0A1E9E);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = multiplier;
	native_push(val);

	native_call();
}

inline void PLAYER_0xCAC57395B151135F(Player player, BOOL p1) /* 0xCAC57395B151135F */
{
	uint64_t val;

	native_init(0xCAC57395B151135F);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_WEAPON_DAMAGE_MODIFIER(Player player, Pickup* damageAmount) /* 0xCE07B9F7817AADA3 */
{
	uint64_t val;

	native_init(0xCE07B9F7817AADA3);

	*(Player*)(&val) = player;
	native_push(val);
	*(Pickup**)(&val) = damageAmount;
	native_push(val);

	native_call();
}

inline void PLAYER_0xD2B315B6689D537D(Player player, BOOL p1) /* 0xD2B315B6689D537D */
{
	uint64_t val;

	native_init(0xD2B315B6689D537D);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline Any PLAYER_SET_PLAYER_CAN_USE_COVER(Player player, BOOL toggle) /* 0xD465A8599DFF6814 */
{
	uint64_t val;

	native_init(0xD465A8599DFF6814);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	return *(Any*)(native_call());
}

inline int PLAYER_GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(Player player) /* 0xD559D2BE9E37853B */
{
	uint64_t val;

	native_init(0xD559D2BE9E37853B);

	*(Player*)(&val) = player;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL PLAYER_HAS_PLAYER_LEFT_THE_WORLD(Player player) /* 0xD55DDFB47991A294 */
{
	uint64_t val;

	native_init(0xD55DDFB47991A294);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int* index) /* 0xD5A016BC3C09CF40 */
{
	uint64_t val;

	native_init(0xD5A016BC3C09CF40);

	*(Player*)(&val) = player;
	native_push(val);
	*(int**)(&val) = index;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Player player, BOOL toggle) /* 0xD5E460AD7020A246 */
{
	uint64_t val;

	native_init(0xD5E460AD7020A246);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void PLAYER_SPECIAL_ABILITY_DEACTIVATE(Player player) /* 0xD6A953C6D1492057 */
{
	uint64_t val;

	native_init(0xD6A953C6D1492057);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(Player player) /* 0xD705740BB0A1CF4C */
{
	uint64_t val;

	native_init(0xD705740BB0A1CF4C);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Ped PLAYER_PLAYER_PED_ID() /* 0xD80958FC74E988A6 */
{
	native_init(0xD80958FC74E988A6);
	return *(Ped*)(native_call());
}

inline void PLAYER_SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player, int p1, Any p2, Any p3, BOOL p4) /* 0xD9284A8C0D48352C */
{
	uint64_t val;

	native_init(0xD9284A8C0D48352C);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(BOOL*)(&val) = p4;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_DISPATCH_COPS_FOR_PLAYER(Player player, BOOL toggle) /* 0xDB172424876553F4 */
{
	uint64_t val;

	native_init(0xDB172424876553F4);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline int PLAYER_GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(Player player) /* 0xDB89591E290D9182 */
{
	uint64_t val;

	native_init(0xDB89591E290D9182);

	*(Player*)(&val) = player;
	native_push(val);

	return *(int*)(native_call());
}

inline void PLAYER_SET_PLAYER_NOISE_MULTIPLIER(Player player, float multiplier) /* 0xDB89EF50FF25FCE9 */
{
	uint64_t val;

	native_init(0xDB89EF50FF25FCE9);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = multiplier;
	native_push(val);

	native_call();
}

inline void PLAYER_0xDC64D2C53493ED12(Player player) /* 0xDC64D2C53493ED12 */
{
	uint64_t val;

	native_init(0xDC64D2C53493ED12);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player, Hash model) /* 0xDC80A4C2F18A2B64 */
{
	uint64_t val;

	native_init(0xDC80A4C2F18A2B64);

	*(Player*)(&val) = player;
	native_push(val);
	*(Hash*)(&val) = model;
	native_push(val);

	native_call();
}

inline Player PLAYER_IS_PLAYER_FREE_FOR_AMBIENT_TASK(Player player) /* 0xDCCFD3F106C36AB4 */
{
	uint64_t val;

	native_init(0xDCCFD3F106C36AB4);

	*(Player*)(&val) = player;
	native_push(val);

	return *(Player*)(native_call());
}

inline BOOL PLAYER__IS_PLAYER_WITHIN_TEST_CAPSULE(Player player, float p1) /* 0xDD2620B7B9D16FF1 */
{
	uint64_t val;

	native_init(0xDD2620B7B9D16FF1);

	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_0xDE45D1A1EF45EE61(Player player, BOOL toggle) /* 0xDE45D1A1EF45EE61 */
{
	uint64_t val;

	native_init(0xDE45D1A1EF45EE61);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_CAN_PLAYER_START_MISSION(Player player) /* 0xDE7465A27D403C06 */
{
	uint64_t val;

	native_init(0xDE7465A27D403C06);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_SET_PLAYER_WANTED_LEVEL_NOW(Player player, BOOL p1) /* 0xE0A7D1E497FFCD6F */
{
	uint64_t val;

	native_init(0xE0A7D1E497FFCD6F);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL PLAYER__HAS_PLAYER_TELEPORT_FINISHED(Player player) /* 0xE23D5873C2394C61 */
{
	uint64_t val;

	native_init(0xE23D5873C2394C61);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PLAYER_GET_PLAYER_WANTED_LEVEL(Player player) /* 0xE28E54788CE8F12D */
{
	uint64_t val;

	native_init(0xE28E54788CE8F12D);

	*(Player*)(&val) = player;
	native_push(val);

	return *(int*)(native_call());
}

inline int PLAYER_GET_TIME_SINCE_PLAYER_HIT_PED(Player player) /* 0xE36A25322DC35F42 */
{
	uint64_t val;

	native_init(0xE36A25322DC35F42);

	*(Player*)(&val) = player;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL PLAYER_HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) /* 0xE4B90F367BD81752 */
{
	uint64_t val;

	native_init(0xE4B90F367BD81752);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_GET_PLAYER_RGB_COLOUR(Player player, int* r, int* g, int* b) /* 0xE902EF951DCE178F */
{
	uint64_t val;

	native_init(0xE902EF951DCE178F);

	*(Player*)(&val) = player;
	native_push(val);
	*(int**)(&val) = r;
	native_push(val);
	*(int**)(&val) = g;
	native_push(val);
	*(int**)(&val) = b;
	native_push(val);

	native_call();
}

inline void PLAYER_REPORT_CRIME(Player player, int crimeType, int wantedLvlThresh) /* 0xE9B09589827545E7 */
{
	uint64_t val;

	native_init(0xE9B09589827545E7);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = crimeType;
	native_push(val);
	*(int*)(&val) = wantedLvlThresh;
	native_push(val);

	native_call();
}

inline void PLAYER_SPECIAL_ABILITY_CHARGE_CONTINUOUS(Player player, Ped p2) /* 0xED481732DFF7E997 */
{
	uint64_t val;

	native_init(0xED481732DFF7E997);

	*(Player*)(&val) = player;
	native_push(val);
	*(Ped*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void PLAYER_PLAYER_ATTACH_VIRTUAL_BOUND(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) /* 0xED51733DC73AED51 */
{
	uint64_t val;

	native_init(0xED51733DC73AED51);

	*(float*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);
	*(float*)(&val) = p3;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = p5;
	native_push(val);
	*(float*)(&val) = p6;
	native_push(val);
	*(float*)(&val) = p7;
	native_push(val);

	native_call();
}

inline int PLAYER_NETWORK_PLAYER_ID_TO_INT() /* 0xEE68096F9F37341E */
{
	native_init(0xEE68096F9F37341E);
	return *(int*)(native_call());
}

inline void PLAYER_GET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int* r, int* g, int* b) /* 0xEF56DBABD3CD4887 */
{
	uint64_t val;

	native_init(0xEF56DBABD3CD4887);

	*(Player*)(&val) = player;
	native_push(val);
	*(int**)(&val) = r;
	native_push(val);
	*(int**)(&val) = g;
	native_push(val);
	*(int**)(&val) = b;
	native_push(val);

	native_call();
}

inline void PLAYER_CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player player) /* 0xF0B67A4DE6AB5F98 */
{
	uint64_t val;

	native_init(0xF0B67A4DE6AB5F98);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_0xF10B44FD479D69F3(Player player, int p1) /* 0xF10B44FD479D69F3 */
{
	uint64_t val;

	native_init(0xF10B44FD479D69F3);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_SPECIAL_ABILITY_CHARGE_MEDIUM(Player player, Vehicle p1, Vehicle p2) /* 0xF113E3AA9BC54613 */
{
	uint64_t val;

	native_init(0xF113E3AA9BC54613);

	*(Player*)(&val) = player;
	native_push(val);
	*(Vehicle*)(&val) = p1;
	native_push(val);
	*(Vehicle*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void PLAYER_SPECIAL_ABILITY_UNLOCK(Hash playerModel) /* 0xF145F3BE2EFA9A3B */
{
	uint64_t val;

	native_init(0xF145F3BE2EFA9A3B);

	*(Hash*)(&val) = playerModel;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_PLAYER_ONLINE() /* 0xF25D331DC2627BBC */
{
	native_init(0xF25D331DC2627BBC);
	return *(BOOL*)(native_call());
}

inline BOOL PLAYER_CAN_PED_HEAR_PLAYER(Player player, Ped ped) /* 0xF297383AA91DCA29 */
{
	uint64_t val;

	native_init(0xF297383AA91DCA29);

	*(Player*)(&val) = player;
	native_push(val);
	*(Ped*)(&val) = ped;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void PLAYER_REMOVE_PLAYER_HELMET(Player player, BOOL p2) /* 0xF3AC26D3CC576528 */
{
	uint64_t val;

	native_init(0xF3AC26D3CC576528);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void PLAYER_SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(Player player, BOOL enabled) /* 0xF401B182DBA8AF53 */
{
	uint64_t val;

	native_init(0xF401B182DBA8AF53);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = enabled;
	native_push(val);

	native_call();
}

inline void PLAYER_SPECIAL_ABILITY_CHARGE_LARGE(Player player, int p1, Hash p2) /* 0xF733F45FA4497D93 */
{
	uint64_t val;

	native_init(0xF733F45FA4497D93);

	*(Player*)(&val) = player;
	native_push(val);
	*(int*)(&val) = p1;
	native_push(val);
	*(Hash*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void PLAYER_FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int id, int cleanupFlags) /* 0xF745B37630DF176B */
{
	uint64_t val;

	native_init(0xF745B37630DF176B);

	*(int*)(&val) = id;
	native_push(val);
	*(int*)(&val) = cleanupFlags;
	native_push(val);

	native_call();
}

inline BOOL PLAYER_IS_PLAYER_PRESSING_HORN(Player player) /* 0xFA1E2BF8B10598F9 */
{
	uint64_t val;

	native_init(0xFA1E2BF8B10598F9);

	*(Player*)(&val) = player;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int PLAYER_GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) /* 0xFDD179EAF45B556C */
{
	uint64_t val;

	native_init(0xFDD179EAF45B556C);

	*(int*)(&val) = wantedLevel;
	native_push(val);

	return *(int*)(native_call());
}

inline void PLAYER_0xFF300C7649724A0B(Player player, BOOL p1) /* 0xFF300C7649724A0B */
{
	uint64_t val;

	native_init(0xFF300C7649724A0B);

	*(Player*)(&val) = player;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void PLAYER_0xFFEE8FA29AB9A18E(Player player) /* 0xFFEE8FA29AB9A18E */
{
	uint64_t val;

	native_init(0xFFEE8FA29AB9A18E);

	*(Player*)(&val) = player;
	native_push(val);

	native_call();
}

inline void ROPE_SET_DISABLE_FRAG_DAMAGE(Object object, BOOL toggle) /* 0x01BA3AED21C16CFB */
{
	uint64_t val;

	native_init(0x01BA3AED21C16CFB);

	*(Object*)(&val) = object;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void ROPE_START_ROPE_WINDING(Object rope) /* 0x1461C72C889E343E */
{
	uint64_t val;

	native_init(0x1461C72C889E343E);

	*(Object*)(&val) = rope;
	native_push(val);

	native_call();
}

inline Any ROPE_GET_ROPE_LAST_VERTEX_COORD(Object rope) /* 0x21BB0FBD3E217C2D */
{
	uint64_t val;

	native_init(0x21BB0FBD3E217C2D);

	*(Object*)(&val) = rope;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL ROPE_0x271C9D3ACA5D6409(Object rope) /* 0x271C9D3ACA5D6409 */
{
	uint64_t val;

	native_init(0x271C9D3ACA5D6409);

	*(Object*)(&val) = rope;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ROPE_PIN_ROPE_VERTEX(Object rope, int vertex, float x, float y, float z) /* 0x2B320CF14146B69A */
{
	uint64_t val;

	native_init(0x2B320CF14146B69A);

	*(Object*)(&val) = rope;
	native_push(val);
	*(int*)(&val) = vertex;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void ROPE_BREAK_ENTITY_GLASS(Object object, float posX, float posY, float posZ, float p4, float offsetX, float offsetY, float offsetZ, float p8, int p9, BOOL p10) /* 0x2E648D16F6E308F3 */
{
	uint64_t val;

	native_init(0x2E648D16F6E308F3);

	*(Object*)(&val) = object;
	native_push(val);
	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = p4;
	native_push(val);
	*(float*)(&val) = offsetX;
	native_push(val);
	*(float*)(&val) = offsetY;
	native_push(val);
	*(float*)(&val) = offsetZ;
	native_push(val);
	*(float*)(&val) = p8;
	native_push(val);
	*(int*)(&val) = p9;
	native_push(val);
	*(BOOL*)(&val) = p10;
	native_push(val);

	native_call();
}

inline int ROPE_GET_ROPE_VERTEX_COUNT(Object rope) /* 0x3655F544CD30F0B5 */
{
	uint64_t val;

	native_init(0x3655F544CD30F0B5);

	*(Object*)(&val) = rope;
	native_push(val);

	return *(int*)(native_call());
}

inline void ROPE_0x36CCB9BE67B970FD(Object rope, BOOL p1) /* 0x36CCB9BE67B970FD */
{
	uint64_t val;

	native_init(0x36CCB9BE67B970FD);

	*(Object*)(&val) = rope;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void ROPE_ATTACH_ENTITIES_TO_ROPE(Object rope, Entity ent1, Entity ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, BOOL p10, BOOL p11, const char* boneName1, const char* boneName2) /* 0x3D95EC8B6D940AC3 */
{
	uint64_t val;

	native_init(0x3D95EC8B6D940AC3);

	*(Object*)(&val) = rope;
	native_push(val);
	*(Entity*)(&val) = ent1;
	native_push(val);
	*(Entity*)(&val) = ent2;
	native_push(val);
	*(float*)(&val) = ent1_x;
	native_push(val);
	*(float*)(&val) = ent1_y;
	native_push(val);
	*(float*)(&val) = ent1_z;
	native_push(val);
	*(float*)(&val) = ent2_x;
	native_push(val);
	*(float*)(&val) = ent2_y;
	native_push(val);
	*(float*)(&val) = ent2_z;
	native_push(val);
	*(float*)(&val) = length;
	native_push(val);
	*(BOOL*)(&val) = p10;
	native_push(val);
	*(BOOL*)(&val) = p11;
	native_push(val);
	*(const char**)(&val) = boneName1;
	native_push(val);
	*(const char**)(&val) = boneName2;
	native_push(val);

	native_call();
}

inline void ROPE_ATTACH_ROPE_TO_ENTITY(Object rope, Entity entity, float x, float y, float z, BOOL p5) /* 0x4B490A6832559A65 */
{
	uint64_t val;

	native_init(0x4B490A6832559A65);

	*(Object*)(&val) = rope;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(BOOL*)(&val) = p5;
	native_push(val);

	native_call();
}

inline Any ROPE_UNPIN_ROPE_VERTEX(Object rope, int vertex) /* 0x4B5AE2EEE4A8F180 */
{
	uint64_t val;

	native_init(0x4B5AE2EEE4A8F180);

	*(Object*)(&val) = rope;
	native_push(val);
	*(int*)(&val) = vertex;
	native_push(val);

	return *(Any*)(native_call());
}

inline void ROPE_DELETE_ROPE(Object* rope) /* 0x52B4829281364649 */
{
	uint64_t val;

	native_init(0x52B4829281364649);

	*(Object**)(&val) = rope;
	native_push(val);

	native_call();
}

inline void ROPE_ROPE_CONVERT_TO_SIMPLE(Object rope) /* 0x5389D48EFA2F079A */
{
	uint64_t val;

	native_init(0x5389D48EFA2F079A);

	*(Object*)(&val) = rope;
	native_push(val);

	native_call();
}

inline void ROPE_START_ROPE_UNWINDING_FRONT(Object rope) /* 0x538D1179EC1AA9A9 */
{
	uint64_t val;

	native_init(0x538D1179EC1AA9A9);

	*(Object*)(&val) = rope;
	native_push(val);

	native_call();
}

inline Any ROPE_SET_DISABLE_BREAKING(Object rope, BOOL enabled) /* 0x5CEC1A84620E7D5B */
{
	uint64_t val;

	native_init(0x5CEC1A84620E7D5B);

	*(Object*)(&val) = rope;
	native_push(val);
	*(BOOL*)(&val) = enabled;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any ROPE_ROPE_UNLOAD_TEXTURES() /* 0x6CE36C35C1AC8163 */
{
	native_init(0x6CE36C35C1AC8163);
	return *(Any*)(native_call());
}

inline void ROPE_ACTIVATE_PHYSICS(Entity entity) /* 0x710311ADF0E20730 */
{
	uint64_t val;

	native_init(0x710311ADF0E20730);

	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline float ROPE__GET_ROPE_LENGTH(Object rope) /* 0x73040398DFF9A4A6 */
{
	uint64_t val;

	native_init(0x73040398DFF9A4A6);

	*(Object*)(&val) = rope;
	native_push(val);

	return *(float*)(native_call());
}

inline Vector3 ROPE_GET_CGOFFSET(Object rope) /* 0x8214A4B5A7A33612 */
{
	uint64_t val;

	native_init(0x8214A4B5A7A33612);

	*(Object*)(&val) = rope;
	native_push(val);

	return *(Vector3*)(native_call());
}

inline BOOL ROPE_0x84DE3B5FB3E666F0(Object rope) /* 0x84DE3B5FB3E666F0 */
{
	uint64_t val;

	native_init(0x84DE3B5FB3E666F0);

	*(Object*)(&val) = rope;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any ROPE_ROPE_LOAD_TEXTURES() /* 0x9B9039DBF2D258C1 */
{
	native_init(0x9B9039DBF2D258C1);
	return *(Any*)(native_call());
}

inline Any ROPE_DELETE_CHILD_ROPE(Object rope) /* 0xAA5D6B1888E4DB20 */
{
	uint64_t val;

	native_init(0xAA5D6B1888E4DB20);

	*(Object*)(&val) = rope;
	native_push(val);

	return *(Any*)(native_call());
}

inline void ROPE_0xB1B6216CA2E7B55E(Any p0, BOOL p1, BOOL p2) /* 0xB1B6216CA2E7B55E */
{
	uint64_t val;

	native_init(0xB1B6216CA2E7B55E);

	*(Any*)(&val) = p0;
	native_push(val);
	*(BOOL*)(&val) = p1;
	native_push(val);
	*(BOOL*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void ROPE_0xB743F735C03D7810(Any p0, Any p1) /* 0xB743F735C03D7810 */
{
	uint64_t val;

	native_init(0xB743F735C03D7810);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline void ROPE_0xBC0CE682D4D05650(Object rope, int unk, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float x4, float y4, float z4) /* 0xBC0CE682D4D05650 */
{
	uint64_t val;

	native_init(0xBC0CE682D4D05650);

	*(Object*)(&val) = rope;
	native_push(val);
	*(int*)(&val) = unk;
	native_push(val);
	*(float*)(&val) = x1;
	native_push(val);
	*(float*)(&val) = y1;
	native_push(val);
	*(float*)(&val) = z1;
	native_push(val);
	*(float*)(&val) = x2;
	native_push(val);
	*(float*)(&val) = y2;
	native_push(val);
	*(float*)(&val) = z2;
	native_push(val);
	*(float*)(&val) = x3;
	native_push(val);
	*(float*)(&val) = y3;
	native_push(val);
	*(float*)(&val) = z3;
	native_push(val);
	*(float*)(&val) = x4;
	native_push(val);
	*(float*)(&val) = y4;
	native_push(val);
	*(float*)(&val) = z4;
	native_push(val);

	native_call();
}

inline void ROPE_DETACH_ROPE_FROM_ENTITY(Object rope, Entity entity) /* 0xBCF3026912A8647D */
{
	uint64_t val;

	native_init(0xBCF3026912A8647D);

	*(Object*)(&val) = rope;
	native_push(val);
	*(Entity*)(&val) = entity;
	native_push(val);

	native_call();
}

inline void ROPE_SET_CG_AT_BOUNDCENTER(Object rope) /* 0xBE520D9761FF811F */
{
	uint64_t val;

	native_init(0xBE520D9761FF811F);

	*(Object*)(&val) = rope;
	native_push(val);

	native_call();
}

inline void ROPE_ROPE_RESET_LENGTH(Object rope, float length) /* 0xC16DE94D9BEA14A0 */
{
	uint64_t val;

	native_init(0xC16DE94D9BEA14A0);

	*(Object*)(&val) = rope;
	native_push(val);
	*(float*)(&val) = length;
	native_push(val);

	native_call();
}

inline void ROPE_ROPE_SET_UPDATE_PINVERTS(Object rope) /* 0xC8D667EE52114ABA */
{
	uint64_t val;

	native_init(0xC8D667EE52114ABA);

	*(Object*)(&val) = rope;
	native_push(val);

	native_call();
}

inline void ROPE_STOP_ROPE_WINDING(Object rope) /* 0xCB2D4AB84A19AA7C */
{
	uint64_t val;

	native_init(0xCB2D4AB84A19AA7C);

	*(Object*)(&val) = rope;
	native_push(val);

	native_call();
}

inline Any ROPE_LOAD_ROPE_DATA(Object rope, const char* rope_preset) /* 0xCBB203C04D1ABD27 */
{
	uint64_t val;

	native_init(0xCBB203C04D1ABD27);

	*(Object*)(&val) = rope;
	native_push(val);
	*(const char**)(&val) = rope_preset;
	native_push(val);

	return *(Any*)(native_call());
}

inline void ROPE_0xCC6E963682533882(Object object) /* 0xCC6E963682533882 */
{
	uint64_t val;

	native_init(0xCC6E963682533882);

	*(Object*)(&val) = object;
	native_push(val);

	native_call();
}

inline Any ROPE_ROPE_FORCE_LENGTH(Object rope, float length) /* 0xD009F759A723DB1B */
{
	uint64_t val;

	native_init(0xD009F759A723DB1B);

	*(Object*)(&val) = rope;
	native_push(val);
	*(float*)(&val) = length;
	native_push(val);

	return *(Any*)(native_call());
}

inline void ROPE_SET_CGOFFSET(Object rope, float x, float y, float z) /* 0xD8FA3908D7B86904 */
{
	uint64_t val;

	native_init(0xD8FA3908D7B86904);

	*(Object*)(&val) = rope;
	native_push(val);
	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);

	native_call();
}

inline void ROPE__HIDE_ROPE(Object rope, int value) /* 0xDC57A637A20006ED */
{
	uint64_t val;

	native_init(0xDC57A637A20006ED);

	*(Object*)(&val) = rope;
	native_push(val);
	*(int*)(&val) = value;
	native_push(val);

	native_call();
}

inline void ROPE_APPLY_IMPULSE_TO_CLOTH(float posX, float posY, float posZ, float vecX, float vecY, float vecZ, float impulse) /* 0xE37F721824571784 */
{
	uint64_t val;

	native_init(0xE37F721824571784);

	*(float*)(&val) = posX;
	native_push(val);
	*(float*)(&val) = posY;
	native_push(val);
	*(float*)(&val) = posZ;
	native_push(val);
	*(float*)(&val) = vecX;
	native_push(val);
	*(float*)(&val) = vecY;
	native_push(val);
	*(float*)(&val) = vecZ;
	native_push(val);
	*(float*)(&val) = impulse;
	native_push(val);

	native_call();
}

inline Object ROPE_ADD_ROPE(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float p10, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, Any* unkPtr) /* 0xE832D760399EB220 */
{
	uint64_t val;

	native_init(0xE832D760399EB220);

	*(float*)(&val) = x;
	native_push(val);
	*(float*)(&val) = y;
	native_push(val);
	*(float*)(&val) = z;
	native_push(val);
	*(float*)(&val) = rotX;
	native_push(val);
	*(float*)(&val) = rotY;
	native_push(val);
	*(float*)(&val) = rotZ;
	native_push(val);
	*(float*)(&val) = length;
	native_push(val);
	*(int*)(&val) = ropeType;
	native_push(val);
	*(float*)(&val) = maxLength;
	native_push(val);
	*(float*)(&val) = minLength;
	native_push(val);
	*(float*)(&val) = p10;
	native_push(val);
	*(BOOL*)(&val) = p11;
	native_push(val);
	*(BOOL*)(&val) = p12;
	native_push(val);
	*(BOOL*)(&val) = rigid;
	native_push(val);
	*(float*)(&val) = p14;
	native_push(val);
	*(BOOL*)(&val) = breakWhenShot;
	native_push(val);
	*(Any**)(&val) = unkPtr;
	native_push(val);

	return *(Object*)(native_call());
}

inline Any ROPE_GET_ROPE_VERTEX_COORD(Object rope, int vertex) /* 0xEA61CA8E80F09E4D */
{
	uint64_t val;

	native_init(0xEA61CA8E80F09E4D);

	*(Object*)(&val) = rope;
	native_push(val);
	*(int*)(&val) = vertex;
	native_push(val);

	return *(Any*)(native_call());
}

inline void ROPE_SET_DAMPING(Object ropeorobject, int vertex, float value) /* 0xEEA3B200A6FEB65B */
{
	uint64_t val;

	native_init(0xEEA3B200A6FEB65B);

	*(Object*)(&val) = ropeorobject;
	native_push(val);
	*(int*)(&val) = vertex;
	native_push(val);
	*(float*)(&val) = value;
	native_push(val);

	native_call();
}

inline void ROPE_ROPE_DRAW_SHADOW_ENABLED(Object* rope, BOOL toggle) /* 0xF159A63806BB5BA8 */
{
	uint64_t val;

	native_init(0xF159A63806BB5BA8);

	*(Object**)(&val) = rope;
	native_push(val);
	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline BOOL ROPE_ROPE_ARE_TEXTURES_LOADED() /* 0xF2D0E6A75CC05597 */
{
	native_init(0xF2D0E6A75CC05597);
	return *(BOOL*)(native_call());
}

inline BOOL ROPE_DOES_ROPE_EXIST(Object* rope) /* 0xFD5448BE3111ED96 */
{
	uint64_t val;

	native_init(0xFD5448BE3111ED96);

	*(Object**)(&val) = rope;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void ROPE_STOP_ROPE_UNWINDING_FRONT(Object rope) /* 0xFFF3A50779EFBBB3 */
{
	uint64_t val;

	native_init(0xFFF3A50779EFBBB3);

	*(Object*)(&val) = rope;
	native_push(val);

	native_call();
}

inline const char *SCRIPT__GET_NAME_OF_THREAD(int threadId) /* 0x05A42BA9FC8DA96B */
{
	uint64_t val;

	native_init(0x05A42BA9FC8DA96B);

	*(int*)(&val) = threadId;
	native_push(val);

	return *(const char**)(native_call());
}

inline void SCRIPT_SHUTDOWN_LOADING_SCREEN() /* 0x078EBE9809CCD637 */
{
	native_init(0x078EBE9809CCD637);
	native_call();
}

inline void SCRIPT_TERMINATE_THIS_THREAD() /* 0x1090044AD1DA76FA */
{
	native_init(0x1090044AD1DA76FA);
	native_call();
}

inline BOOL SCRIPT__GET_NO_LOADING_SCREEN() /* 0x18C1270EA7F199BC */
{
	native_init(0x18C1270EA7F199BC);
	return *(BOOL*)(native_call());
}

inline BOOL SCRIPT_GET_EVENT_DATA(int eventGroup, int eventIndex, int* argStruct, int argStructSize) /* 0x2902843FCD2B2D79 */
{
	uint64_t val;

	native_init(0x2902843FCD2B2D79);

	*(int*)(&val) = eventGroup;
	native_push(val);
	*(int*)(&val) = eventIndex;
	native_push(val);
	*(int**)(&val) = argStruct;
	native_push(val);
	*(int*)(&val) = argStructSize;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int SCRIPT__GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Hash scriptHash) /* 0x2C83A9DA6BFFC4F9 */
{
	uint64_t val;

	native_init(0x2C83A9DA6BFFC4F9);

	*(Hash*)(&val) = scriptHash;
	native_push(val);

	return *(int*)(native_call());
}

inline int SCRIPT__GET_ID_OF_NEXT_THREAD_IN_ENUMERATION() /* 0x30B4FA1C82DD4B9F */
{
	native_init(0x30B4FA1C82DD4B9F);
	return *(int*)(native_call());
}

inline const char *SCRIPT_GET_THIS_SCRIPT_NAME() /* 0x442E0A7EDE4A738A */
{
	native_init(0x442E0A7EDE4A738A);
	return *(const char**)(native_call());
}

inline BOOL SCRIPT_IS_THREAD_ACTIVE(int threadId) /* 0x46E9AE36D8FA6417 */
{
	uint64_t val;

	native_init(0x46E9AE36D8FA6417);

	*(int*)(&val) = threadId;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void SCRIPT_SET_NO_LOADING_SCREEN(BOOL toggle) /* 0x5262CC1995D07E09 */
{
	uint64_t val;

	native_init(0x5262CC1995D07E09);

	*(BOOL*)(&val) = toggle;
	native_push(val);

	native_call();
}

inline void SCRIPT_TRIGGER_SCRIPT_EVENT(int eventGroup, Any* args, int argCount, Any bit) /* 0x5AE99C571D5BBE5D */
{
	uint64_t val;

	native_init(0x5AE99C571D5BBE5D);

	*(int*)(&val) = eventGroup;
	native_push(val);
	*(Any**)(&val) = args;
	native_push(val);
	*(int*)(&val) = argCount;
	native_push(val);
	*(Any*)(&val) = bit;
	native_push(val);

	native_call();
}

inline BOOL SCRIPT_HAS_SCRIPT_WITH_NAME_HASH_LOADED(Hash scriptHash) /* 0x5F0F0C783EB16C04 */
{
	uint64_t val;

	native_init(0x5F0F0C783EB16C04);

	*(Hash*)(&val) = scriptHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int SCRIPT_GET_NUMBER_OF_EVENTS(int eventGroup) /* 0x5F92A689A06620AA */
{
	uint64_t val;

	native_init(0x5F92A689A06620AA);

	*(int*)(&val) = eventGroup;
	native_push(val);

	return *(int*)(native_call());
}

inline void SCRIPT_REQUEST_SCRIPT(const char* scriptName) /* 0x6EB5F71AA68F2E8E */
{
	uint64_t val;

	native_init(0x6EB5F71AA68F2E8E);

	*(const char**)(&val) = scriptName;
	native_push(val);

	native_call();
}

inline Hash SCRIPT_GET_HASH_OF_THIS_SCRIPT_NAME() /* 0x8A1C8B1738FFE87E */
{
	native_init(0x8A1C8B1738FFE87E);
	return *(Hash*)(native_call());
}

inline BOOL SCRIPT_GET_EVENT_EXISTS(int eventGroup, int eventIndex) /* 0x936E6168A9BCEDB5 */
{
	uint64_t val;

	native_init(0x936E6168A9BCEDB5);

	*(int*)(&val) = eventGroup;
	native_push(val);
	*(int*)(&val) = eventIndex;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void SCRIPT_0xB1577667C3708F9B() /* 0xB1577667C3708F9B */
{
	native_init(0xB1577667C3708F9B);
	native_call();
}

inline int SCRIPT_GET_ID_OF_THIS_THREAD() /* 0xC30338E8088E2E21 */
{
	native_init(0xC30338E8088E2E21);
	return *(int*)(native_call());
}

inline void SCRIPT_SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Hash scriptHash) /* 0xC5BC038960E9DB27 */
{
	uint64_t val;

	native_init(0xC5BC038960E9DB27);

	*(Hash*)(&val) = scriptHash;
	native_push(val);

	native_call();
}

inline void SCRIPT_TERMINATE_THREAD(int threadId) /* 0xC8B189ED9138BCD4 */
{
	uint64_t val;

	native_init(0xC8B189ED9138BCD4);

	*(int*)(&val) = threadId;
	native_push(val);

	native_call();
}

inline void SCRIPT_SET_SCRIPT_AS_NO_LONGER_NEEDED(const char* scriptName) /* 0xC90D2DCACD56184C */
{
	uint64_t val;

	native_init(0xC90D2DCACD56184C);

	*(const char**)(&val) = scriptName;
	native_push(val);

	native_call();
}

inline void SCRIPT_REQUEST_SCRIPT_WITH_NAME_HASH(Hash scriptHash) /* 0xD62A67D26D9653E6 */
{
	uint64_t val;

	native_init(0xD62A67D26D9653E6);

	*(Hash*)(&val) = scriptHash;
	native_push(val);

	native_call();
}

inline int SCRIPT_GET_EVENT_AT_INDEX(int eventGroup, int eventIndex) /* 0xD8F66A3A60C62153 */
{
	uint64_t val;

	native_init(0xD8F66A3A60C62153);

	*(int*)(&val) = eventGroup;
	native_push(val);
	*(int*)(&val) = eventIndex;
	native_push(val);

	return *(int*)(native_call());
}

inline void SCRIPT__BEGIN_ENUMERATING_THREADS() /* 0xDADFADA5A20143A8 */
{
	native_init(0xDADFADA5A20143A8);
	native_call();
}

inline BOOL SCRIPT_HAS_SCRIPT_LOADED(const char* scriptName) /* 0xE6CC9F3BA0FB9EF1 */
{
	uint64_t val;

	native_init(0xE6CC9F3BA0FB9EF1);

	*(const char**)(&val) = scriptName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL SCRIPT__DOES_SCRIPT_WITH_NAME_HASH_EXIST(Hash scriptHash) /* 0xF86AA3C56BA31381 */
{
	uint64_t val;

	native_init(0xF86AA3C56BA31381);

	*(Hash*)(&val) = scriptHash;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL SCRIPT_DOES_SCRIPT_EXIST(const char* scriptName) /* 0xFC04745FBE67C19A */
{
	uint64_t val;

	native_init(0xFC04745FBE67C19A);

	*(const char**)(&val) = scriptName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int SOCIALCLUB__GET_TOTAL_SC_INBOX_IDS() /* 0x03A93FF1A2CA0864 */
{
	native_init(0x03A93FF1A2CA0864);
	return *(int*)(native_call());
}

inline void SOCIALCLUB__SC_INBOX_GET_EMAILS(int offset, int limit) /* 0x040ADDCBAFA1018A */
{
	uint64_t val;

	native_init(0x040ADDCBAFA1018A);

	*(int*)(&val) = offset;
	native_push(val);
	*(int*)(&val) = limit;
	native_push(val);

	native_call();
}

inline Any SOCIALCLUB_0x07C61676E5BB52CD(Any p0) /* 0x07C61676E5BB52CD */
{
	uint64_t val;

	native_init(0x07C61676E5BB52CD);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL SOCIALCLUB_0x0F73393BAC7E6730(Any* p0, int* p1) /* 0x0F73393BAC7E6730 */
{
	uint64_t val;

	native_init(0x0F73393BAC7E6730);

	*(Any**)(&val) = p0;
	native_push(val);
	*(int**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void SOCIALCLUB_0x116FB94DC4B79F17(const char* p0) /* 0x116FB94DC4B79F17 */
{
	uint64_t val;

	native_init(0x116FB94DC4B79F17);

	*(const char**)(&val) = p0;
	native_push(val);

	native_call();
}

inline Any SOCIALCLUB_0x16DA8172459434AA() /* 0x16DA8172459434AA */
{
	native_init(0x16DA8172459434AA);
	return *(Any*)(native_call());
}

inline BOOL SOCIALCLUB__SC_HAS_CHECK_STRING_TASK_COMPLETED(int taskHandle) /* 0x1753344C770358AE */
{
	uint64_t val;

	native_init(0x1753344C770358AE);

	*(int*)(&val) = taskHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL SOCIALCLUB_0x19853B5B17D77BCA(Any p0, Any* p1) /* 0x19853B5B17D77BCA */
{
	uint64_t val;

	native_init(0x19853B5B17D77BCA);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL SOCIALCLUB_0x1989C6E6F67E76A8(Any* p0, Any* p1, Any* p2) /* 0x1989C6E6F67E76A8 */
{
	uint64_t val;

	native_init(0x1989C6E6F67E76A8);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline const char *SOCIALCLUB__SC_GET_NICKNAME() /* 0x198D161F458ECC7F */
{
	native_init(0x198D161F458ECC7F);
	return *(const char**)(native_call());
}

inline Any SOCIALCLUB_0x1D4446A62D35B0D0(Any p0, Any p1) /* 0x1D4446A62D35B0D0 */
{
	uint64_t val;

	native_init(0x1D4446A62D35B0D0);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL SOCIALCLUB_0x1F1E9682483697C7(Any p0, Any p1) /* 0x1F1E9682483697C7 */
{
	uint64_t val;

	native_init(0x1F1E9682483697C7);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL SOCIALCLUB_0x225798743970412B(int* p0) /* 0x225798743970412B */
{
	uint64_t val;

	native_init(0x225798743970412B);

	*(int**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void SOCIALCLUB_SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST(Player* player) /* 0x2330C12A7A605D16 */
{
	uint64_t val;

	native_init(0x2330C12A7A605D16);

	*(Player**)(&val) = player;
	native_push(val);

	native_call();
}

inline BOOL SOCIALCLUB_0x287F1F75D2803595(Any p0, Any* p1) /* 0x287F1F75D2803595 */
{
	uint64_t val;

	native_init(0x287F1F75D2803595);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL SOCIALCLUB__SC_INBOX_MESSAGE_POP(int p0) /* 0x2C015348CF19CA1D */
{
	uint64_t val;

	native_init(0x2C015348CF19CA1D);

	*(int*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any SOCIALCLUB_0x2E89990DDFF670C3(Any p0, Any p1) /* 0x2E89990DDFF670C3 */
{
	uint64_t val;

	native_init(0x2E89990DDFF670C3);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL SOCIALCLUB_0x3001BEF2FECA3680() /* 0x3001BEF2FECA3680 */
{
	native_init(0x3001BEF2FECA3680);
	return *(BOOL*)(native_call());
}

inline BOOL SOCIALCLUB_0x418DC16FAE452C1C(int p0) /* 0x418DC16FAE452C1C */
{
	uint64_t val;

	native_init(0x418DC16FAE452C1C);

	*(int*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void SOCIALCLUB_0x44ACA259D67651DB(Any* p0, Any p1) /* 0x44ACA259D67651DB */
{
	uint64_t val;

	native_init(0x44ACA259D67651DB);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL SOCIALCLUB_0x4737980E8A283806(int p0, Any* p1) /* 0x4737980E8A283806 */
{
	uint64_t val;

	native_init(0x4737980E8A283806);

	*(int*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL SOCIALCLUB_0x487912FD248EFDDF(Any p0, float p1) /* 0x487912FD248EFDDF */
{
	uint64_t val;

	native_init(0x487912FD248EFDDF);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any SOCIALCLUB_0x4A7D6E727F941747(Any* p0) /* 0x4A7D6E727F941747 */
{
	uint64_t val;

	native_init(0x4A7D6E727F941747);

	*(Any**)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void SOCIALCLUB_SC_EMAIL_MESSAGE_CLEAR_RECIP_LIST() /* 0x55DF6DB45179236E */
{
	native_init(0x55DF6DB45179236E);
	native_call();
}

inline Any SOCIALCLUB_0x5C4EBFFA98BDB41C(Any p0) /* 0x5C4EBFFA98BDB41C */
{
	uint64_t val;

	native_init(0x5C4EBFFA98BDB41C);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline void SOCIALCLUB_0x675721C9F644D161() /* 0x675721C9F644D161 */
{
	native_init(0x675721C9F644D161);
	native_call();
}

inline BOOL SOCIALCLUB_0x699E4A5C8C893A18(int p0, const char* p1, Any* p2) /* 0x699E4A5C8C893A18 */
{
	uint64_t val;

	native_init(0x699E4A5C8C893A18);

	*(int*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL SOCIALCLUB_SC_INBOX_MESSAGE_GET_UGCDATA(Any p0, Any* p1) /* 0x69D82604A1A5A254 */
{
	uint64_t val;

	native_init(0x69D82604A1A5A254);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL SOCIALCLUB_0x6AFD2CD753FEEF83(const char* playerName) /* 0x6AFD2CD753FEEF83 */
{
	uint64_t val;

	native_init(0x6AFD2CD753FEEF83);

	*(const char**)(&val) = playerName;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL SOCIALCLUB_0x6BFB12CE158E3DD4(Any p0) /* 0x6BFB12CE158E3DD4 */
{
	uint64_t val;

	native_init(0x6BFB12CE158E3DD4);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any SOCIALCLUB_0x700569DBA175A77C(Any p0) /* 0x700569DBA175A77C */
{
	uint64_t val;

	native_init(0x700569DBA175A77C);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL SOCIALCLUB__SC_START_CHECK_STRING_TASK(const char* string, int* taskHandle) /* 0x75632C5ECD7ED843 */
{
	uint64_t val;

	native_init(0x75632C5ECD7ED843);

	*(const char**)(&val) = string;
	native_push(val);
	*(int**)(&val) = taskHandle;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL SOCIALCLUB_SC_INBOX_MESSAGE_GET_DATA_STRING(int p0, const char* context, const char* out) /* 0x7572EF42FC6A9B6D */
{
	uint64_t val;

	native_init(0x7572EF42FC6A9B6D);

	*(int*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = context;
	native_push(val);
	*(const char**)(&val) = out;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any SOCIALCLUB_0x8147FFF6A718E1AD(Any p0) /* 0x8147FFF6A718E1AD */
{
	uint64_t val;

	native_init(0x8147FFF6A718E1AD);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline int SOCIALCLUB__SC_GET_CHECK_STRING_STATUS(int taskHandle) /* 0x82E4A58BABC15AE7 */
{
	uint64_t val;

	native_init(0x82E4A58BABC15AE7);

	*(int*)(&val) = taskHandle;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL SOCIALCLUB_0x8416FE4E4629D7D7(const char* p0) /* 0x8416FE4E4629D7D7 */
{
	uint64_t val;

	native_init(0x8416FE4E4629D7D7);

	*(const char**)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any SOCIALCLUB_0x85535ACF97FC0969(Any p0) /* 0x85535ACF97FC0969 */
{
	uint64_t val;

	native_init(0x85535ACF97FC0969);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL SOCIALCLUB_0x87E0052F08BD64E6(Any p0, int* p1) /* 0x87E0052F08BD64E6 */
{
	uint64_t val;

	native_init(0x87E0052F08BD64E6);

	*(Any*)(&val) = p0;
	native_push(val);
	*(int**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL SOCIALCLUB_0x8CC469AB4D349B7C(int p0, const char* p1, Any* p2) /* 0x8CC469AB4D349B7C */
{
	uint64_t val;

	native_init(0x8CC469AB4D349B7C);

	*(int*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any SOCIALCLUB_0x9237E334F6E43156(Any p0) /* 0x9237E334F6E43156 */
{
	uint64_t val;

	native_init(0x9237E334F6E43156);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL SOCIALCLUB_0x92DA6E70EF249BD1(const char* p0, int* p1) /* 0x92DA6E70EF249BD1 */
{
	uint64_t val;

	native_init(0x92DA6E70EF249BD1);

	*(const char**)(&val) = p0;
	native_push(val);
	*(int**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL SOCIALCLUB__IS_SC_INBOX_VALID(int p0) /* 0x93028F1DB42BFD08 */
{
	uint64_t val;

	native_init(0x93028F1DB42BFD08);

	*(int*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int SOCIALCLUB_0x930DE22F07B1CCE3(Any p0) /* 0x930DE22F07B1CCE3 */
{
	uint64_t val;

	native_init(0x930DE22F07B1CCE3);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(int*)(native_call());
}

inline BOOL SOCIALCLUB__SC_INBOX_MESSAGE_PUSH(int p0) /* 0x9A2C8064B6C1E41A */
{
	uint64_t val;

	native_init(0x9A2C8064B6C1E41A);

	*(int*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL SOCIALCLUB_SC_INBOX_MESSAGE_GET_DATA_INT(int p0, const char* context, int* out) /* 0xA00EFE4082C4056E */
{
	uint64_t val;

	native_init(0xA00EFE4082C4056E);

	*(int*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = context;
	native_push(val);
	*(int**)(&val) = out;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void SOCIALCLUB_0xA68D3D229F4F3B06(const char* p0) /* 0xA68D3D229F4F3B06 */
{
	uint64_t val;

	native_init(0xA68D3D229F4F3B06);

	*(const char**)(&val) = p0;
	native_push(val);

	native_call();
}

inline Hash SOCIALCLUB__SC_INBOX_MESSAGE_INIT(int p0) /* 0xBB8EA16ECBC976C4 */
{
	uint64_t val;

	native_init(0xBB8EA16ECBC976C4);

	*(int*)(&val) = p0;
	native_push(val);

	return *(Hash*)(native_call());
}

inline BOOL SOCIALCLUB_0xBC1CC91205EC8D6E() /* 0xBC1CC91205EC8D6E */
{
	native_init(0xBC1CC91205EC8D6E);
	return *(BOOL*)(native_call());
}

inline void SOCIALCLUB_0xBFA0A56A817C6C7D(BOOL p0) /* 0xBFA0A56A817C6C7D */
{
	uint64_t val;

	native_init(0xBFA0A56A817C6C7D);

	*(BOOL*)(&val) = p0;
	native_push(val);

	native_call();
}

inline BOOL SOCIALCLUB_0xD0EE05FE193646EA(Any* p0, Any* p1, Any* p2) /* 0xD0EE05FE193646EA */
{
	uint64_t val;

	native_init(0xD0EE05FE193646EA);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any SOCIALCLUB_0xD302E99EDF0449CF(Any p0) /* 0xD302E99EDF0449CF */
{
	uint64_t val;

	native_init(0xD302E99EDF0449CF);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(Any*)(native_call());
}

inline Any SOCIALCLUB_0xD8122C407663B995() /* 0xD8122C407663B995 */
{
	native_init(0xD8122C407663B995);
	return *(Any*)(native_call());
}

inline void SOCIALCLUB_0xDA024BDBD600F44A(int* networkHandle) /* 0xDA024BDBD600F44A */
{
	uint64_t val;

	native_init(0xDA024BDBD600F44A);

	*(int**)(&val) = networkHandle;
	native_push(val);

	native_call();
}

inline const char *SOCIALCLUB_0xDF649C4E9AFDD788() /* 0xDF649C4E9AFDD788 */
{
	native_init(0xDF649C4E9AFDD788);
	return *(const char**)(native_call());
}

inline BOOL SOCIALCLUB_0xF22CA0FD74B80E7A(Any p0) /* 0xF22CA0FD74B80E7A */
{
	uint64_t val;

	native_init(0xF22CA0FD74B80E7A);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline const char *SOCIALCLUB__SC_INBOX_MESSAGE_GET_STRING(int p0) /* 0xF3E31D16CBDCB304 */
{
	uint64_t val;

	native_init(0xF3E31D16CBDCB304);

	*(int*)(&val) = p0;
	native_push(val);

	return *(const char**)(native_call());
}

inline BOOL SOCIALCLUB_0xF6BAAAF762E1BF40(const char* p0, int* p1) /* 0xF6BAAAF762E1BF40 */
{
	uint64_t val;

	native_init(0xF6BAAAF762E1BF40);

	*(const char**)(&val) = p0;
	native_push(val);
	*(int**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL SOCIALCLUB_0xFE4C1D0D3B9CC17E(Any p0, Any p1) /* 0xFE4C1D0D3B9CC17E */
{
	uint64_t val;

	native_init(0xFE4C1D0D3B9CC17E);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any SOCIALCLUB_0xFF8F3A92B75ED67A() /* 0xFF8F3A92B75ED67A */
{
	native_init(0xFF8F3A92B75ED67A);
	return *(Any*)(native_call());
}

inline BOOL SOCIALCLUB__SC_INBOX_MESSAGE_GET_DATA_BOOL(int p0, const char* p1) /* 0xFFE5C16F402D851D */
{
	uint64_t val;

	native_init(0xFFE5C16F402D851D);

	*(int*)(&val) = p0;
	native_push(val);
	*(const char**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void STATS_0x047CBED6F6F8B63C() /* 0x047CBED6F6F8B63C */
{
	native_init(0x047CBED6F6F8B63C);
	native_call();
}

inline void STATS_0x098760C7461724CD() /* 0x098760C7461724CD */
{
	native_init(0x098760C7461724CD);
	native_call();
}

inline void STATS_0x0BCA1D2C47B0D269(Any p0, Any p1, float p2) /* 0x0BCA1D2C47B0D269 */
{
	uint64_t val;

	native_init(0x0BCA1D2C47B0D269);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(float*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void STATS_0x0D01D20616FC73FB(Any p0, Any p1) /* 0x0D01D20616FC73FB */
{
	uint64_t val;

	native_init(0x0D01D20616FC73FB);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL STATS_STAT_SLOT_IS_LOADED(Any p0) /* 0x0D0A9F0E7BD91E3C */
{
	uint64_t val;

	native_init(0x0D0A9F0E7BD91E3C);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void STATS_PLAYSTATS_FRIEND_ACTIVITY(Any p0, Any p1) /* 0x0F71DE29AB2258F1 */
{
	uint64_t val;

	native_init(0x0F71DE29AB2258F1);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	native_call();
}

inline BOOL STATS_STAT_GET_BOOL_MASKED(Hash statName, int mask, int p2) /* 0x10FE3F1B79F9B071 */
{
	uint64_t val;

	native_init(0x10FE3F1B79F9B071);

	*(Hash*)(&val) = statName;
	native_push(val);
	*(int*)(&val) = mask;
	native_push(val);
	*(int*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline Any STATS_LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Any p0, Any p1) /* 0x117B45156D7EFF2E */
{
	uint64_t val;

	native_init(0x117B45156D7EFF2E);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);

	return *(Any*)(native_call());
}

inline BOOL STATS_STAT_GET_BOOL(Hash statHash, BOOL* outValue, Any p2) /* 0x11B5E6D2AE73F48E */
{
	uint64_t val;

	native_init(0x11B5E6D2AE73F48E);

	*(Hash*)(&val) = statHash;
	native_push(val);
	*(BOOL**)(&val) = outValue;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void STATS_0x11FF1C80276097ED(const char* p0, Any p1, Any p2) /* 0x11FF1C80276097ED */
{
	uint64_t val;

	native_init(0x11FF1C80276097ED);

	*(const char**)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	native_call();
}

inline void STATS_PLAYSTATS_ROS_BET(int amount, int act, Player player, float cm) /* 0x121FB4DDDC2D5291 */
{
	uint64_t val;

	native_init(0x121FB4DDDC2D5291);

	*(int*)(&val) = amount;
	native_push(val);
	*(int*)(&val) = act;
	native_push(val);
	*(Player*)(&val) = player;
	native_push(val);
	*(float*)(&val) = cm;
	native_push(val);

	native_call();
}

inline void STATS_0x14E0B2D1AD1044E0(Any* p0, Any* p1, Any* p2, Any* p3) /* 0x14E0B2D1AD1044E0 */
{
	uint64_t val;

	native_init(0x14E0B2D1AD1044E0);

	*(Any**)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);
	*(Any**)(&val) = p3;
	native_push(val);

	native_call();
}

inline void STATS_PLAYSTATS_SHOP_ITEM(Any p0, Any p1, Any p2, Any p3, Any p4) /* 0x176852ACAAC173D1 */
{
	uint64_t val;

	native_init(0x176852ACAAC173D1);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	native_call();
}

inline BOOL STATS_STAT_SET_GXT_LABEL(Hash statName, const char* value, BOOL save) /* 0x17695002FD8B2AE0 */
{
	uint64_t val;

	native_init(0x17695002FD8B2AE0);

	*(Hash*)(&val) = statName;
	native_push(val);
	*(const char**)(&val) = value;
	native_push(val);
	*(BOOL*)(&val) = save;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void STATS_0x1CAE5D2E3F9A07F0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) /* 0x1CAE5D2E3F9A07F0 */
{
	uint64_t val;

	native_init(0x1CAE5D2E3F9A07F0);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);
	*(Any*)(&val) = p5;
	native_push(val);

	native_call();
}

inline const char *STATS_STAT_GET_USER_ID(Any p0) /* 0x2365C388E393BBE2 */
{
	uint64_t val;

	native_init(0x2365C388E393BBE2);

	*(Any*)(&val) = p0;
	native_push(val);

	return *(const char**)(native_call());
}

inline void STATS_0x26D7399B9587FE89(int p0) /* 0x26D7399B9587FE89 */
{
	uint64_t val;

	native_init(0x26D7399B9587FE89);

	*(int*)(&val) = p0;
	native_push(val);

	native_call();
}

inline Hash STATS__GET_NGSTAT_INT_HASH(int index, BOOL spStat, BOOL charStat, int character, const char* section) /* 0x2B4CDCA6F07FF3DA */
{
	uint64_t val;

	native_init(0x2B4CDCA6F07FF3DA);

	*(int*)(&val) = index;
	native_push(val);
	*(BOOL*)(&val) = spStat;
	native_push(val);
	*(BOOL*)(&val) = charStat;
	native_push(val);
	*(int*)(&val) = character;
	native_push(val);
	*(const char**)(&val) = section;
	native_push(val);

	return *(Hash*)(native_call());
}

inline void STATS_0x2B69F5074C894811(Any p0, Any p1, Any p2, Any p3) /* 0x2B69F5074C894811 */
{
	uint64_t val;

	native_init(0x2B69F5074C894811);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);

	native_call();
}

inline BOOL STATS_STAT_SET_DATE(Hash statName, Any* value, int numFields, BOOL save) /* 0x2C29BFB64F4FCBE4 */
{
	uint64_t val;

	native_init(0x2C29BFB64F4FCBE4);

	*(Hash*)(&val) = statName;
	native_push(val);
	*(Any**)(&val) = value;
	native_push(val);
	*(int*)(&val) = numFields;
	native_push(val);
	*(BOOL*)(&val) = save;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline int STATS_STAT_GET_NUMBER_OF_SECONDS(Hash statName) /* 0x2CE056FF3723F00B */
{
	uint64_t val;

	native_init(0x2CE056FF3723F00B);

	*(Hash*)(&val) = statName;
	native_push(val);

	return *(int*)(native_call());
}

inline void STATS_0x2E65248609523599(Any p0, Any p1, Any p2) /* 0x2E65248609523599 */
{
	uint64_t val;

	native_init(0x2E65248609523599);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL STATS_LEADERBOARDS_READ_SUCCESSFUL(Any p0, Any p1, Any p2) /* 0x2FB19228983E832C */
{
	uint64_t val;

	native_init(0x2FB19228983E832C);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void STATS_0x30A6614C1F7799B8(Any p0, float p1, Any p2) /* 0x30A6614C1F7799B8 */
{
	uint64_t val;

	native_init(0x30A6614C1F7799B8);

	*(Any*)(&val) = p0;
	native_push(val);
	*(float*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);

	native_call();
}

inline BOOL STATS_0x3270F67EED31FBC1(Any p0, Any* p1, Any* p2) /* 0x3270F67EED31FBC1 */
{
	uint64_t val;

	native_init(0x3270F67EED31FBC1);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);
	*(Any**)(&val) = p2;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline BOOL STATS_0x34770B9CE0E03B91(Any p0, Any* p1) /* 0x34770B9CE0E03B91 */
{
	uint64_t val;

	native_init(0x34770B9CE0E03B91);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any**)(&val) = p1;
	native_push(val);

	return *(BOOL*)(native_call());
}

inline void STATS_PLAYSTATS_CLOTH_CHANGE(Any p0, Any p1, Any p2, Any p3, Any p4) /* 0x34B973047A2268B9 */
{
	uint64_t val;

	native_init(0x34B973047A2268B9);

	*(Any*)(&val) = p0;
	native_push(val);
	*(Any*)(&val) = p1;
	native_push(val);
	*(Any*)(&val) = p2;
	native_push(val);
	*(Any*)(&val) = p3;
	native_push(val);
	*(Any*)(&val) = p4;
	native_push(val);

	native_call();
}

inline BOOL STATS_STAT_GET_POS(Hash statHash, float* x, float* y, float* z, int p4) /* 0x350F82CCB186AA1B */
{
	uint64_t val;

	native_init(0x350F82CCB186AA1B);

	*(Hash*)(&val) = statHash;

}

{

