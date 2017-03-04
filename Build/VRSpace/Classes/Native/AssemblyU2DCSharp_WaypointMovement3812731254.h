#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaypointMovement
struct  WaypointMovement_t3812731254  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject WaypointMovement::player
	GameObject_t1756533147 * ___player_2;
	// System.Single WaypointMovement::height
	float ___height_3;
	// System.Boolean WaypointMovement::teleport
	bool ___teleport_4;
	// System.Single WaypointMovement::maxMoveDistance
	float ___maxMoveDistance_5;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(WaypointMovement_t3812731254, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(WaypointMovement_t3812731254, ___height_3)); }
	inline float get_height_3() const { return ___height_3; }
	inline float* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(float value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_teleport_4() { return static_cast<int32_t>(offsetof(WaypointMovement_t3812731254, ___teleport_4)); }
	inline bool get_teleport_4() const { return ___teleport_4; }
	inline bool* get_address_of_teleport_4() { return &___teleport_4; }
	inline void set_teleport_4(bool value)
	{
		___teleport_4 = value;
	}

	inline static int32_t get_offset_of_maxMoveDistance_5() { return static_cast<int32_t>(offsetof(WaypointMovement_t3812731254, ___maxMoveDistance_5)); }
	inline float get_maxMoveDistance_5() const { return ___maxMoveDistance_5; }
	inline float* get_address_of_maxMoveDistance_5() { return &___maxMoveDistance_5; }
	inline void set_maxMoveDistance_5(float value)
	{
		___maxMoveDistance_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
