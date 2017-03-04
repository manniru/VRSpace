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
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShotParticleEmitter
struct  ShotParticleEmitter_t3566932268  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ShotParticleEmitter::ShotParticle
	GameObject_t1756533147 * ___ShotParticle_2;
	// System.Single ShotParticleEmitter::ShotPower
	float ___ShotPower_3;
	// System.Single ShotParticleEmitter::Disturbance
	float ___Disturbance_4;
	// System.Single ShotParticleEmitter::Rld
	float ___Rld_5;
	// System.Single ShotParticleEmitter::RldTime
	float ___RldTime_6;
	// UnityEngine.Color ShotParticleEmitter::col
	Color_t2020392075  ___col_7;

public:
	inline static int32_t get_offset_of_ShotParticle_2() { return static_cast<int32_t>(offsetof(ShotParticleEmitter_t3566932268, ___ShotParticle_2)); }
	inline GameObject_t1756533147 * get_ShotParticle_2() const { return ___ShotParticle_2; }
	inline GameObject_t1756533147 ** get_address_of_ShotParticle_2() { return &___ShotParticle_2; }
	inline void set_ShotParticle_2(GameObject_t1756533147 * value)
	{
		___ShotParticle_2 = value;
		Il2CppCodeGenWriteBarrier(&___ShotParticle_2, value);
	}

	inline static int32_t get_offset_of_ShotPower_3() { return static_cast<int32_t>(offsetof(ShotParticleEmitter_t3566932268, ___ShotPower_3)); }
	inline float get_ShotPower_3() const { return ___ShotPower_3; }
	inline float* get_address_of_ShotPower_3() { return &___ShotPower_3; }
	inline void set_ShotPower_3(float value)
	{
		___ShotPower_3 = value;
	}

	inline static int32_t get_offset_of_Disturbance_4() { return static_cast<int32_t>(offsetof(ShotParticleEmitter_t3566932268, ___Disturbance_4)); }
	inline float get_Disturbance_4() const { return ___Disturbance_4; }
	inline float* get_address_of_Disturbance_4() { return &___Disturbance_4; }
	inline void set_Disturbance_4(float value)
	{
		___Disturbance_4 = value;
	}

	inline static int32_t get_offset_of_Rld_5() { return static_cast<int32_t>(offsetof(ShotParticleEmitter_t3566932268, ___Rld_5)); }
	inline float get_Rld_5() const { return ___Rld_5; }
	inline float* get_address_of_Rld_5() { return &___Rld_5; }
	inline void set_Rld_5(float value)
	{
		___Rld_5 = value;
	}

	inline static int32_t get_offset_of_RldTime_6() { return static_cast<int32_t>(offsetof(ShotParticleEmitter_t3566932268, ___RldTime_6)); }
	inline float get_RldTime_6() const { return ___RldTime_6; }
	inline float* get_address_of_RldTime_6() { return &___RldTime_6; }
	inline void set_RldTime_6(float value)
	{
		___RldTime_6 = value;
	}

	inline static int32_t get_offset_of_col_7() { return static_cast<int32_t>(offsetof(ShotParticleEmitter_t3566932268, ___col_7)); }
	inline Color_t2020392075  get_col_7() const { return ___col_7; }
	inline Color_t2020392075 * get_address_of_col_7() { return &___col_7; }
	inline void set_col_7(Color_t2020392075  value)
	{
		___col_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
