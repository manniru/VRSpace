#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.LineRenderer
struct LineRenderer_t849157671;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShotParticle_Scale
struct  ShotParticle_Scale_t2618874441  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LineRenderer ShotParticle_Scale::LR
	LineRenderer_t849157671 * ___LR_2;
	// System.Single ShotParticle_Scale::width
	float ___width_3;
	// System.Single ShotParticle_Scale::length
	float ___length_4;
	// System.Single ShotParticle_Scale::time
	float ___time_5;
	// UnityEngine.Vector3 ShotParticle_Scale::forwad
	Vector3_t2243707580  ___forwad_6;

public:
	inline static int32_t get_offset_of_LR_2() { return static_cast<int32_t>(offsetof(ShotParticle_Scale_t2618874441, ___LR_2)); }
	inline LineRenderer_t849157671 * get_LR_2() const { return ___LR_2; }
	inline LineRenderer_t849157671 ** get_address_of_LR_2() { return &___LR_2; }
	inline void set_LR_2(LineRenderer_t849157671 * value)
	{
		___LR_2 = value;
		Il2CppCodeGenWriteBarrier(&___LR_2, value);
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(ShotParticle_Scale_t2618874441, ___width_3)); }
	inline float get_width_3() const { return ___width_3; }
	inline float* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(float value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(ShotParticle_Scale_t2618874441, ___length_4)); }
	inline float get_length_4() const { return ___length_4; }
	inline float* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(float value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(ShotParticle_Scale_t2618874441, ___time_5)); }
	inline float get_time_5() const { return ___time_5; }
	inline float* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(float value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_forwad_6() { return static_cast<int32_t>(offsetof(ShotParticle_Scale_t2618874441, ___forwad_6)); }
	inline Vector3_t2243707580  get_forwad_6() const { return ___forwad_6; }
	inline Vector3_t2243707580 * get_address_of_forwad_6() { return &___forwad_6; }
	inline void set_forwad_6(Vector3_t2243707580  value)
	{
		___forwad_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
