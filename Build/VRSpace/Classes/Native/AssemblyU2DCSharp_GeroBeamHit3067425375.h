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
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GeroBeamHit
struct  GeroBeamHit_t3067425375  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GeroBeamHit::ParticleA
	GameObject_t1756533147 * ___ParticleA_2;
	// UnityEngine.GameObject GeroBeamHit::ParticleB
	GameObject_t1756533147 * ___ParticleB_3;
	// UnityEngine.GameObject GeroBeamHit::HitFlash
	GameObject_t1756533147 * ___HitFlash_4;
	// System.Single GeroBeamHit::PatA_rate
	float ___PatA_rate_5;
	// System.Single GeroBeamHit::PatB_rate
	float ___PatB_rate_6;
	// UnityEngine.ParticleSystem GeroBeamHit::PatA
	ParticleSystem_t3394631041 * ___PatA_7;
	// UnityEngine.ParticleSystem GeroBeamHit::PatB
	ParticleSystem_t3394631041 * ___PatB_8;
	// UnityEngine.Color GeroBeamHit::col
	Color_t2020392075  ___col_9;

public:
	inline static int32_t get_offset_of_ParticleA_2() { return static_cast<int32_t>(offsetof(GeroBeamHit_t3067425375, ___ParticleA_2)); }
	inline GameObject_t1756533147 * get_ParticleA_2() const { return ___ParticleA_2; }
	inline GameObject_t1756533147 ** get_address_of_ParticleA_2() { return &___ParticleA_2; }
	inline void set_ParticleA_2(GameObject_t1756533147 * value)
	{
		___ParticleA_2 = value;
		Il2CppCodeGenWriteBarrier(&___ParticleA_2, value);
	}

	inline static int32_t get_offset_of_ParticleB_3() { return static_cast<int32_t>(offsetof(GeroBeamHit_t3067425375, ___ParticleB_3)); }
	inline GameObject_t1756533147 * get_ParticleB_3() const { return ___ParticleB_3; }
	inline GameObject_t1756533147 ** get_address_of_ParticleB_3() { return &___ParticleB_3; }
	inline void set_ParticleB_3(GameObject_t1756533147 * value)
	{
		___ParticleB_3 = value;
		Il2CppCodeGenWriteBarrier(&___ParticleB_3, value);
	}

	inline static int32_t get_offset_of_HitFlash_4() { return static_cast<int32_t>(offsetof(GeroBeamHit_t3067425375, ___HitFlash_4)); }
	inline GameObject_t1756533147 * get_HitFlash_4() const { return ___HitFlash_4; }
	inline GameObject_t1756533147 ** get_address_of_HitFlash_4() { return &___HitFlash_4; }
	inline void set_HitFlash_4(GameObject_t1756533147 * value)
	{
		___HitFlash_4 = value;
		Il2CppCodeGenWriteBarrier(&___HitFlash_4, value);
	}

	inline static int32_t get_offset_of_PatA_rate_5() { return static_cast<int32_t>(offsetof(GeroBeamHit_t3067425375, ___PatA_rate_5)); }
	inline float get_PatA_rate_5() const { return ___PatA_rate_5; }
	inline float* get_address_of_PatA_rate_5() { return &___PatA_rate_5; }
	inline void set_PatA_rate_5(float value)
	{
		___PatA_rate_5 = value;
	}

	inline static int32_t get_offset_of_PatB_rate_6() { return static_cast<int32_t>(offsetof(GeroBeamHit_t3067425375, ___PatB_rate_6)); }
	inline float get_PatB_rate_6() const { return ___PatB_rate_6; }
	inline float* get_address_of_PatB_rate_6() { return &___PatB_rate_6; }
	inline void set_PatB_rate_6(float value)
	{
		___PatB_rate_6 = value;
	}

	inline static int32_t get_offset_of_PatA_7() { return static_cast<int32_t>(offsetof(GeroBeamHit_t3067425375, ___PatA_7)); }
	inline ParticleSystem_t3394631041 * get_PatA_7() const { return ___PatA_7; }
	inline ParticleSystem_t3394631041 ** get_address_of_PatA_7() { return &___PatA_7; }
	inline void set_PatA_7(ParticleSystem_t3394631041 * value)
	{
		___PatA_7 = value;
		Il2CppCodeGenWriteBarrier(&___PatA_7, value);
	}

	inline static int32_t get_offset_of_PatB_8() { return static_cast<int32_t>(offsetof(GeroBeamHit_t3067425375, ___PatB_8)); }
	inline ParticleSystem_t3394631041 * get_PatB_8() const { return ___PatB_8; }
	inline ParticleSystem_t3394631041 ** get_address_of_PatB_8() { return &___PatB_8; }
	inline void set_PatB_8(ParticleSystem_t3394631041 * value)
	{
		___PatB_8 = value;
		Il2CppCodeGenWriteBarrier(&___PatB_8, value);
	}

	inline static int32_t get_offset_of_col_9() { return static_cast<int32_t>(offsetof(GeroBeamHit_t3067425375, ___col_9)); }
	inline Color_t2020392075  get_col_9() const { return ___col_9; }
	inline Color_t2020392075 * get_address_of_col_9() { return &___col_9; }
	inline void set_col_9(Color_t2020392075  value)
	{
		___col_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
