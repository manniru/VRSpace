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
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Orbiting
struct  Orbiting_t740595596  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Orbiting::Earth
	GameObject_t1756533147 * ___Earth_2;
	// UnityEngine.Transform Orbiting::center
	Transform_t3275118058 * ___center_3;
	// UnityEngine.Vector3 Orbiting::axis
	Vector3_t2243707580  ___axis_4;
	// UnityEngine.Vector3 Orbiting::desiredPosition
	Vector3_t2243707580  ___desiredPosition_5;
	// System.Single Orbiting::radius
	float ___radius_6;
	// System.Single Orbiting::radiusSpeed
	float ___radiusSpeed_7;
	// System.Single Orbiting::rotationSpeed
	float ___rotationSpeed_8;

public:
	inline static int32_t get_offset_of_Earth_2() { return static_cast<int32_t>(offsetof(Orbiting_t740595596, ___Earth_2)); }
	inline GameObject_t1756533147 * get_Earth_2() const { return ___Earth_2; }
	inline GameObject_t1756533147 ** get_address_of_Earth_2() { return &___Earth_2; }
	inline void set_Earth_2(GameObject_t1756533147 * value)
	{
		___Earth_2 = value;
		Il2CppCodeGenWriteBarrier(&___Earth_2, value);
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(Orbiting_t740595596, ___center_3)); }
	inline Transform_t3275118058 * get_center_3() const { return ___center_3; }
	inline Transform_t3275118058 ** get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Transform_t3275118058 * value)
	{
		___center_3 = value;
		Il2CppCodeGenWriteBarrier(&___center_3, value);
	}

	inline static int32_t get_offset_of_axis_4() { return static_cast<int32_t>(offsetof(Orbiting_t740595596, ___axis_4)); }
	inline Vector3_t2243707580  get_axis_4() const { return ___axis_4; }
	inline Vector3_t2243707580 * get_address_of_axis_4() { return &___axis_4; }
	inline void set_axis_4(Vector3_t2243707580  value)
	{
		___axis_4 = value;
	}

	inline static int32_t get_offset_of_desiredPosition_5() { return static_cast<int32_t>(offsetof(Orbiting_t740595596, ___desiredPosition_5)); }
	inline Vector3_t2243707580  get_desiredPosition_5() const { return ___desiredPosition_5; }
	inline Vector3_t2243707580 * get_address_of_desiredPosition_5() { return &___desiredPosition_5; }
	inline void set_desiredPosition_5(Vector3_t2243707580  value)
	{
		___desiredPosition_5 = value;
	}

	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(Orbiting_t740595596, ___radius_6)); }
	inline float get_radius_6() const { return ___radius_6; }
	inline float* get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(float value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_radiusSpeed_7() { return static_cast<int32_t>(offsetof(Orbiting_t740595596, ___radiusSpeed_7)); }
	inline float get_radiusSpeed_7() const { return ___radiusSpeed_7; }
	inline float* get_address_of_radiusSpeed_7() { return &___radiusSpeed_7; }
	inline void set_radiusSpeed_7(float value)
	{
		___radiusSpeed_7 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_8() { return static_cast<int32_t>(offsetof(Orbiting_t740595596, ___rotationSpeed_8)); }
	inline float get_rotationSpeed_8() const { return ___rotationSpeed_8; }
	inline float* get_address_of_rotationSpeed_8() { return &___rotationSpeed_8; }
	inline void set_rotationSpeed_8(float value)
	{
		___rotationSpeed_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
