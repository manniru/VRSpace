#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light
struct Light_t494725636;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Flash
struct  Flash_t2305318422  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Flash::MaxSize
	float ___MaxSize_2;
	// System.Single Flash::AnimationSpd
	float ___AnimationSpd_3;
	// System.Single Flash::NowAnm
	float ___NowAnm_4;
	// System.Single Flash::t
	float ___t_5;
	// UnityEngine.Light Flash::pl
	Light_t494725636 * ___pl_6;

public:
	inline static int32_t get_offset_of_MaxSize_2() { return static_cast<int32_t>(offsetof(Flash_t2305318422, ___MaxSize_2)); }
	inline float get_MaxSize_2() const { return ___MaxSize_2; }
	inline float* get_address_of_MaxSize_2() { return &___MaxSize_2; }
	inline void set_MaxSize_2(float value)
	{
		___MaxSize_2 = value;
	}

	inline static int32_t get_offset_of_AnimationSpd_3() { return static_cast<int32_t>(offsetof(Flash_t2305318422, ___AnimationSpd_3)); }
	inline float get_AnimationSpd_3() const { return ___AnimationSpd_3; }
	inline float* get_address_of_AnimationSpd_3() { return &___AnimationSpd_3; }
	inline void set_AnimationSpd_3(float value)
	{
		___AnimationSpd_3 = value;
	}

	inline static int32_t get_offset_of_NowAnm_4() { return static_cast<int32_t>(offsetof(Flash_t2305318422, ___NowAnm_4)); }
	inline float get_NowAnm_4() const { return ___NowAnm_4; }
	inline float* get_address_of_NowAnm_4() { return &___NowAnm_4; }
	inline void set_NowAnm_4(float value)
	{
		___NowAnm_4 = value;
	}

	inline static int32_t get_offset_of_t_5() { return static_cast<int32_t>(offsetof(Flash_t2305318422, ___t_5)); }
	inline float get_t_5() const { return ___t_5; }
	inline float* get_address_of_t_5() { return &___t_5; }
	inline void set_t_5(float value)
	{
		___t_5 = value;
	}

	inline static int32_t get_offset_of_pl_6() { return static_cast<int32_t>(offsetof(Flash_t2305318422, ___pl_6)); }
	inline Light_t494725636 * get_pl_6() const { return ___pl_6; }
	inline Light_t494725636 ** get_address_of_pl_6() { return &___pl_6; }
	inline void set_pl_6(Light_t494725636 * value)
	{
		___pl_6 = value;
		Il2CppCodeGenWriteBarrier(&___pl_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
