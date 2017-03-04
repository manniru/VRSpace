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
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RaycastMovement
struct  RaycastMovement_t2953027142  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject RaycastMovement::raycastHolder
	GameObject_t1756533147 * ___raycastHolder_2;
	// UnityEngine.GameObject RaycastMovement::player
	GameObject_t1756533147 * ___player_3;
	// UnityEngine.GameObject RaycastMovement::raycastIndicator
	GameObject_t1756533147 * ___raycastIndicator_4;
	// System.Single RaycastMovement::height
	float ___height_5;
	// System.Boolean RaycastMovement::teleport
	bool ___teleport_6;
	// System.Single RaycastMovement::maxMoveDistance
	float ___maxMoveDistance_7;
	// System.Boolean RaycastMovement::moving
	bool ___moving_8;
	// UnityEngine.RaycastHit RaycastMovement::hit
	RaycastHit_t87180320  ___hit_9;
	// System.Single RaycastMovement::theDistance
	float ___theDistance_10;

public:
	inline static int32_t get_offset_of_raycastHolder_2() { return static_cast<int32_t>(offsetof(RaycastMovement_t2953027142, ___raycastHolder_2)); }
	inline GameObject_t1756533147 * get_raycastHolder_2() const { return ___raycastHolder_2; }
	inline GameObject_t1756533147 ** get_address_of_raycastHolder_2() { return &___raycastHolder_2; }
	inline void set_raycastHolder_2(GameObject_t1756533147 * value)
	{
		___raycastHolder_2 = value;
		Il2CppCodeGenWriteBarrier(&___raycastHolder_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(RaycastMovement_t2953027142, ___player_3)); }
	inline GameObject_t1756533147 * get_player_3() const { return ___player_3; }
	inline GameObject_t1756533147 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t1756533147 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_raycastIndicator_4() { return static_cast<int32_t>(offsetof(RaycastMovement_t2953027142, ___raycastIndicator_4)); }
	inline GameObject_t1756533147 * get_raycastIndicator_4() const { return ___raycastIndicator_4; }
	inline GameObject_t1756533147 ** get_address_of_raycastIndicator_4() { return &___raycastIndicator_4; }
	inline void set_raycastIndicator_4(GameObject_t1756533147 * value)
	{
		___raycastIndicator_4 = value;
		Il2CppCodeGenWriteBarrier(&___raycastIndicator_4, value);
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(RaycastMovement_t2953027142, ___height_5)); }
	inline float get_height_5() const { return ___height_5; }
	inline float* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(float value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_teleport_6() { return static_cast<int32_t>(offsetof(RaycastMovement_t2953027142, ___teleport_6)); }
	inline bool get_teleport_6() const { return ___teleport_6; }
	inline bool* get_address_of_teleport_6() { return &___teleport_6; }
	inline void set_teleport_6(bool value)
	{
		___teleport_6 = value;
	}

	inline static int32_t get_offset_of_maxMoveDistance_7() { return static_cast<int32_t>(offsetof(RaycastMovement_t2953027142, ___maxMoveDistance_7)); }
	inline float get_maxMoveDistance_7() const { return ___maxMoveDistance_7; }
	inline float* get_address_of_maxMoveDistance_7() { return &___maxMoveDistance_7; }
	inline void set_maxMoveDistance_7(float value)
	{
		___maxMoveDistance_7 = value;
	}

	inline static int32_t get_offset_of_moving_8() { return static_cast<int32_t>(offsetof(RaycastMovement_t2953027142, ___moving_8)); }
	inline bool get_moving_8() const { return ___moving_8; }
	inline bool* get_address_of_moving_8() { return &___moving_8; }
	inline void set_moving_8(bool value)
	{
		___moving_8 = value;
	}

	inline static int32_t get_offset_of_hit_9() { return static_cast<int32_t>(offsetof(RaycastMovement_t2953027142, ___hit_9)); }
	inline RaycastHit_t87180320  get_hit_9() const { return ___hit_9; }
	inline RaycastHit_t87180320 * get_address_of_hit_9() { return &___hit_9; }
	inline void set_hit_9(RaycastHit_t87180320  value)
	{
		___hit_9 = value;
	}

	inline static int32_t get_offset_of_theDistance_10() { return static_cast<int32_t>(offsetof(RaycastMovement_t2953027142, ___theDistance_10)); }
	inline float get_theDistance_10() const { return ___theDistance_10; }
	inline float* get_address_of_theDistance_10() { return &___theDistance_10; }
	inline void set_theDistance_10(float value)
	{
		___theDistance_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
