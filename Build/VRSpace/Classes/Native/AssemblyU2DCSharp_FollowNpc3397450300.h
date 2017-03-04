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
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FollowNpc
struct  FollowNpc_t3397450300  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject FollowNpc::attractor
	GameObject_t1756533147 * ___attractor_2;
	// System.Single FollowNpc::speed
	float ___speed_3;
	// UnityEngine.Vector3 FollowNpc::attractionPoint
	Vector3_t2243707580  ___attractionPoint_4;

public:
	inline static int32_t get_offset_of_attractor_2() { return static_cast<int32_t>(offsetof(FollowNpc_t3397450300, ___attractor_2)); }
	inline GameObject_t1756533147 * get_attractor_2() const { return ___attractor_2; }
	inline GameObject_t1756533147 ** get_address_of_attractor_2() { return &___attractor_2; }
	inline void set_attractor_2(GameObject_t1756533147 * value)
	{
		___attractor_2 = value;
		Il2CppCodeGenWriteBarrier(&___attractor_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(FollowNpc_t3397450300, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_attractionPoint_4() { return static_cast<int32_t>(offsetof(FollowNpc_t3397450300, ___attractionPoint_4)); }
	inline Vector3_t2243707580  get_attractionPoint_4() const { return ___attractionPoint_4; }
	inline Vector3_t2243707580 * get_address_of_attractionPoint_4() { return &___attractionPoint_4; }
	inline void set_attractionPoint_4(Vector3_t2243707580  value)
	{
		___attractionPoint_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
