#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BeamParam
struct  BeamParam_t3663531412  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color BeamParam::BeamColor
	Color_t2020392075  ___BeamColor_2;
	// System.Single BeamParam::AnimationSpd
	float ___AnimationSpd_3;
	// System.Single BeamParam::Scale
	float ___Scale_4;
	// System.Single BeamParam::MaxLength
	float ___MaxLength_5;
	// System.Boolean BeamParam::bEnd
	bool ___bEnd_6;
	// System.Boolean BeamParam::bGero
	bool ___bGero_7;

public:
	inline static int32_t get_offset_of_BeamColor_2() { return static_cast<int32_t>(offsetof(BeamParam_t3663531412, ___BeamColor_2)); }
	inline Color_t2020392075  get_BeamColor_2() const { return ___BeamColor_2; }
	inline Color_t2020392075 * get_address_of_BeamColor_2() { return &___BeamColor_2; }
	inline void set_BeamColor_2(Color_t2020392075  value)
	{
		___BeamColor_2 = value;
	}

	inline static int32_t get_offset_of_AnimationSpd_3() { return static_cast<int32_t>(offsetof(BeamParam_t3663531412, ___AnimationSpd_3)); }
	inline float get_AnimationSpd_3() const { return ___AnimationSpd_3; }
	inline float* get_address_of_AnimationSpd_3() { return &___AnimationSpd_3; }
	inline void set_AnimationSpd_3(float value)
	{
		___AnimationSpd_3 = value;
	}

	inline static int32_t get_offset_of_Scale_4() { return static_cast<int32_t>(offsetof(BeamParam_t3663531412, ___Scale_4)); }
	inline float get_Scale_4() const { return ___Scale_4; }
	inline float* get_address_of_Scale_4() { return &___Scale_4; }
	inline void set_Scale_4(float value)
	{
		___Scale_4 = value;
	}

	inline static int32_t get_offset_of_MaxLength_5() { return static_cast<int32_t>(offsetof(BeamParam_t3663531412, ___MaxLength_5)); }
	inline float get_MaxLength_5() const { return ___MaxLength_5; }
	inline float* get_address_of_MaxLength_5() { return &___MaxLength_5; }
	inline void set_MaxLength_5(float value)
	{
		___MaxLength_5 = value;
	}

	inline static int32_t get_offset_of_bEnd_6() { return static_cast<int32_t>(offsetof(BeamParam_t3663531412, ___bEnd_6)); }
	inline bool get_bEnd_6() const { return ___bEnd_6; }
	inline bool* get_address_of_bEnd_6() { return &___bEnd_6; }
	inline void set_bEnd_6(bool value)
	{
		___bEnd_6 = value;
	}

	inline static int32_t get_offset_of_bGero_7() { return static_cast<int32_t>(offsetof(BeamParam_t3663531412, ___bGero_7)); }
	inline bool get_bGero_7() const { return ___bGero_7; }
	inline bool* get_address_of_bGero_7() { return &___bGero_7; }
	inline void set_bGero_7(bool value)
	{
		___bGero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
