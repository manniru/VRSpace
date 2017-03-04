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
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BeamLine
struct  BeamLine_t2442489203  : public MonoBehaviour_t1158329972
{
public:
	// System.Single BeamLine::MaxLength
	float ___MaxLength_2;
	// System.Single BeamLine::StartSize
	float ___StartSize_3;
	// System.Single BeamLine::AnimationSpd
	float ___AnimationSpd_4;
	// UnityEngine.Color BeamLine::BeamColor
	Color_t2020392075  ___BeamColor_5;
	// System.Single BeamLine::NowAnm
	float ___NowAnm_6;
	// UnityEngine.LineRenderer BeamLine::line
	LineRenderer_t849157671 * ___line_7;
	// System.Single BeamLine::NowLength
	float ___NowLength_8;
	// System.Boolean BeamLine::bStop
	bool ___bStop_9;

public:
	inline static int32_t get_offset_of_MaxLength_2() { return static_cast<int32_t>(offsetof(BeamLine_t2442489203, ___MaxLength_2)); }
	inline float get_MaxLength_2() const { return ___MaxLength_2; }
	inline float* get_address_of_MaxLength_2() { return &___MaxLength_2; }
	inline void set_MaxLength_2(float value)
	{
		___MaxLength_2 = value;
	}

	inline static int32_t get_offset_of_StartSize_3() { return static_cast<int32_t>(offsetof(BeamLine_t2442489203, ___StartSize_3)); }
	inline float get_StartSize_3() const { return ___StartSize_3; }
	inline float* get_address_of_StartSize_3() { return &___StartSize_3; }
	inline void set_StartSize_3(float value)
	{
		___StartSize_3 = value;
	}

	inline static int32_t get_offset_of_AnimationSpd_4() { return static_cast<int32_t>(offsetof(BeamLine_t2442489203, ___AnimationSpd_4)); }
	inline float get_AnimationSpd_4() const { return ___AnimationSpd_4; }
	inline float* get_address_of_AnimationSpd_4() { return &___AnimationSpd_4; }
	inline void set_AnimationSpd_4(float value)
	{
		___AnimationSpd_4 = value;
	}

	inline static int32_t get_offset_of_BeamColor_5() { return static_cast<int32_t>(offsetof(BeamLine_t2442489203, ___BeamColor_5)); }
	inline Color_t2020392075  get_BeamColor_5() const { return ___BeamColor_5; }
	inline Color_t2020392075 * get_address_of_BeamColor_5() { return &___BeamColor_5; }
	inline void set_BeamColor_5(Color_t2020392075  value)
	{
		___BeamColor_5 = value;
	}

	inline static int32_t get_offset_of_NowAnm_6() { return static_cast<int32_t>(offsetof(BeamLine_t2442489203, ___NowAnm_6)); }
	inline float get_NowAnm_6() const { return ___NowAnm_6; }
	inline float* get_address_of_NowAnm_6() { return &___NowAnm_6; }
	inline void set_NowAnm_6(float value)
	{
		___NowAnm_6 = value;
	}

	inline static int32_t get_offset_of_line_7() { return static_cast<int32_t>(offsetof(BeamLine_t2442489203, ___line_7)); }
	inline LineRenderer_t849157671 * get_line_7() const { return ___line_7; }
	inline LineRenderer_t849157671 ** get_address_of_line_7() { return &___line_7; }
	inline void set_line_7(LineRenderer_t849157671 * value)
	{
		___line_7 = value;
		Il2CppCodeGenWriteBarrier(&___line_7, value);
	}

	inline static int32_t get_offset_of_NowLength_8() { return static_cast<int32_t>(offsetof(BeamLine_t2442489203, ___NowLength_8)); }
	inline float get_NowLength_8() const { return ___NowLength_8; }
	inline float* get_address_of_NowLength_8() { return &___NowLength_8; }
	inline void set_NowLength_8(float value)
	{
		___NowLength_8 = value;
	}

	inline static int32_t get_offset_of_bStop_9() { return static_cast<int32_t>(offsetof(BeamLine_t2442489203, ___bStop_9)); }
	inline bool get_bStop_9() const { return ___bStop_9; }
	inline bool* get_address_of_bStop_9() { return &___bStop_9; }
	inline void set_bStop_9(bool value)
	{
		___bStop_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
