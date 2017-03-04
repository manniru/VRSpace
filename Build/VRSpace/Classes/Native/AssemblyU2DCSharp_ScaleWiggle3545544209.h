#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScaleWiggle
struct  ScaleWiggle_t3545544209  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ScaleWiggle::MaxWiggle
	float ___MaxWiggle_2;
	// System.Single ScaleWiggle::WiggleSpd
	float ___WiggleSpd_3;
	// UnityEngine.Vector3 ScaleWiggle::DefScale
	Vector3_t2243707580  ___DefScale_4;
	// UnityEngine.Vector3 ScaleWiggle::TgtScale
	Vector3_t2243707580  ___TgtScale_5;
	// UnityEngine.Vector3 ScaleWiggle::PrevScale
	Vector3_t2243707580  ___PrevScale_6;
	// System.Single ScaleWiggle::TgtTime
	float ___TgtTime_7;

public:
	inline static int32_t get_offset_of_MaxWiggle_2() { return static_cast<int32_t>(offsetof(ScaleWiggle_t3545544209, ___MaxWiggle_2)); }
	inline float get_MaxWiggle_2() const { return ___MaxWiggle_2; }
	inline float* get_address_of_MaxWiggle_2() { return &___MaxWiggle_2; }
	inline void set_MaxWiggle_2(float value)
	{
		___MaxWiggle_2 = value;
	}

	inline static int32_t get_offset_of_WiggleSpd_3() { return static_cast<int32_t>(offsetof(ScaleWiggle_t3545544209, ___WiggleSpd_3)); }
	inline float get_WiggleSpd_3() const { return ___WiggleSpd_3; }
	inline float* get_address_of_WiggleSpd_3() { return &___WiggleSpd_3; }
	inline void set_WiggleSpd_3(float value)
	{
		___WiggleSpd_3 = value;
	}

	inline static int32_t get_offset_of_DefScale_4() { return static_cast<int32_t>(offsetof(ScaleWiggle_t3545544209, ___DefScale_4)); }
	inline Vector3_t2243707580  get_DefScale_4() const { return ___DefScale_4; }
	inline Vector3_t2243707580 * get_address_of_DefScale_4() { return &___DefScale_4; }
	inline void set_DefScale_4(Vector3_t2243707580  value)
	{
		___DefScale_4 = value;
	}

	inline static int32_t get_offset_of_TgtScale_5() { return static_cast<int32_t>(offsetof(ScaleWiggle_t3545544209, ___TgtScale_5)); }
	inline Vector3_t2243707580  get_TgtScale_5() const { return ___TgtScale_5; }
	inline Vector3_t2243707580 * get_address_of_TgtScale_5() { return &___TgtScale_5; }
	inline void set_TgtScale_5(Vector3_t2243707580  value)
	{
		___TgtScale_5 = value;
	}

	inline static int32_t get_offset_of_PrevScale_6() { return static_cast<int32_t>(offsetof(ScaleWiggle_t3545544209, ___PrevScale_6)); }
	inline Vector3_t2243707580  get_PrevScale_6() const { return ___PrevScale_6; }
	inline Vector3_t2243707580 * get_address_of_PrevScale_6() { return &___PrevScale_6; }
	inline void set_PrevScale_6(Vector3_t2243707580  value)
	{
		___PrevScale_6 = value;
	}

	inline static int32_t get_offset_of_TgtTime_7() { return static_cast<int32_t>(offsetof(ScaleWiggle_t3545544209, ___TgtTime_7)); }
	inline float get_TgtTime_7() const { return ___TgtTime_7; }
	inline float* get_address_of_TgtTime_7() { return &___TgtTime_7; }
	inline void set_TgtTime_7(float value)
	{
		___TgtTime_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
