#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BeamLine
struct BeamLine_t2442489203;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// BeamParam
struct BeamParam_t3663531412;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BeamCollision
struct  BeamCollision_t1168502411  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean BeamCollision::Reflect
	bool ___Reflect_2;
	// BeamLine BeamCollision::BL
	BeamLine_t2442489203 * ___BL_3;
	// UnityEngine.GameObject BeamCollision::HitEffect
	GameObject_t1756533147 * ___HitEffect_4;
	// System.Boolean BeamCollision::bHit
	bool ___bHit_5;
	// BeamParam BeamCollision::BP
	BeamParam_t3663531412 * ___BP_6;

public:
	inline static int32_t get_offset_of_Reflect_2() { return static_cast<int32_t>(offsetof(BeamCollision_t1168502411, ___Reflect_2)); }
	inline bool get_Reflect_2() const { return ___Reflect_2; }
	inline bool* get_address_of_Reflect_2() { return &___Reflect_2; }
	inline void set_Reflect_2(bool value)
	{
		___Reflect_2 = value;
	}

	inline static int32_t get_offset_of_BL_3() { return static_cast<int32_t>(offsetof(BeamCollision_t1168502411, ___BL_3)); }
	inline BeamLine_t2442489203 * get_BL_3() const { return ___BL_3; }
	inline BeamLine_t2442489203 ** get_address_of_BL_3() { return &___BL_3; }
	inline void set_BL_3(BeamLine_t2442489203 * value)
	{
		___BL_3 = value;
		Il2CppCodeGenWriteBarrier(&___BL_3, value);
	}

	inline static int32_t get_offset_of_HitEffect_4() { return static_cast<int32_t>(offsetof(BeamCollision_t1168502411, ___HitEffect_4)); }
	inline GameObject_t1756533147 * get_HitEffect_4() const { return ___HitEffect_4; }
	inline GameObject_t1756533147 ** get_address_of_HitEffect_4() { return &___HitEffect_4; }
	inline void set_HitEffect_4(GameObject_t1756533147 * value)
	{
		___HitEffect_4 = value;
		Il2CppCodeGenWriteBarrier(&___HitEffect_4, value);
	}

	inline static int32_t get_offset_of_bHit_5() { return static_cast<int32_t>(offsetof(BeamCollision_t1168502411, ___bHit_5)); }
	inline bool get_bHit_5() const { return ___bHit_5; }
	inline bool* get_address_of_bHit_5() { return &___bHit_5; }
	inline void set_bHit_5(bool value)
	{
		___bHit_5 = value;
	}

	inline static int32_t get_offset_of_BP_6() { return static_cast<int32_t>(offsetof(BeamCollision_t1168502411, ___BP_6)); }
	inline BeamParam_t3663531412 * get_BP_6() const { return ___BP_6; }
	inline BeamParam_t3663531412 ** get_address_of_BP_6() { return &___BP_6; }
	inline void set_BP_6(BeamParam_t3663531412 * value)
	{
		___BP_6 = value;
		Il2CppCodeGenWriteBarrier(&___BP_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
