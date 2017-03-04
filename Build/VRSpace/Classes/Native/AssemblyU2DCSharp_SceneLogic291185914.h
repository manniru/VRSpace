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

// SceneLogic
struct  SceneLogic_t291185914  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SceneLogic::player
	GameObject_t1756533147 * ___player_2;
	// UnityEngine.GameObject SceneLogic::startingPoint
	GameObject_t1756533147 * ___startingPoint_3;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(SceneLogic_t291185914, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_startingPoint_3() { return static_cast<int32_t>(offsetof(SceneLogic_t291185914, ___startingPoint_3)); }
	inline GameObject_t1756533147 * get_startingPoint_3() const { return ___startingPoint_3; }
	inline GameObject_t1756533147 ** get_address_of_startingPoint_3() { return &___startingPoint_3; }
	inline void set_startingPoint_3(GameObject_t1756533147 * value)
	{
		___startingPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___startingPoint_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
