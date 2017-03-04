#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AutoSpinObject
struct  AutoSpinObject_t2959418544  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 AutoSpinObject::spinVector
	Vector3_t2243707580  ___spinVector_2;
	// UnityEngine.Transform AutoSpinObject::myTransform
	Transform_t3275118058 * ___myTransform_3;
	// System.Single AutoSpinObject::speed
	float ___speed_4;
	// System.Int32 AutoSpinObject::direction
	int32_t ___direction_5;

public:
	inline static int32_t get_offset_of_spinVector_2() { return static_cast<int32_t>(offsetof(AutoSpinObject_t2959418544, ___spinVector_2)); }
	inline Vector3_t2243707580  get_spinVector_2() const { return ___spinVector_2; }
	inline Vector3_t2243707580 * get_address_of_spinVector_2() { return &___spinVector_2; }
	inline void set_spinVector_2(Vector3_t2243707580  value)
	{
		___spinVector_2 = value;
	}

	inline static int32_t get_offset_of_myTransform_3() { return static_cast<int32_t>(offsetof(AutoSpinObject_t2959418544, ___myTransform_3)); }
	inline Transform_t3275118058 * get_myTransform_3() const { return ___myTransform_3; }
	inline Transform_t3275118058 ** get_address_of_myTransform_3() { return &___myTransform_3; }
	inline void set_myTransform_3(Transform_t3275118058 * value)
	{
		___myTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___myTransform_3, value);
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(AutoSpinObject_t2959418544, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(AutoSpinObject_t2959418544, ___direction_5)); }
	inline int32_t get_direction_5() const { return ___direction_5; }
	inline int32_t* get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(int32_t value)
	{
		___direction_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
