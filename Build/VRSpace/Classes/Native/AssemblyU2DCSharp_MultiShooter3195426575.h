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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MultiShooter
struct  MultiShooter_t3195426575  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MultiShooter::Shot1
	GameObject_t1756533147 * ___Shot1_2;
	// UnityEngine.GameObject MultiShooter::Shot2
	GameObject_t1756533147 * ___Shot2_3;
	// UnityEngine.GameObject MultiShooter::Wave
	GameObject_t1756533147 * ___Wave_4;
	// System.Single MultiShooter::Disturbance
	float ___Disturbance_5;
	// System.Int32 MultiShooter::ShotType
	int32_t ___ShotType_6;
	// UnityEngine.GameObject MultiShooter::NowShot
	GameObject_t1756533147 * ___NowShot_7;

public:
	inline static int32_t get_offset_of_Shot1_2() { return static_cast<int32_t>(offsetof(MultiShooter_t3195426575, ___Shot1_2)); }
	inline GameObject_t1756533147 * get_Shot1_2() const { return ___Shot1_2; }
	inline GameObject_t1756533147 ** get_address_of_Shot1_2() { return &___Shot1_2; }
	inline void set_Shot1_2(GameObject_t1756533147 * value)
	{
		___Shot1_2 = value;
		Il2CppCodeGenWriteBarrier(&___Shot1_2, value);
	}

	inline static int32_t get_offset_of_Shot2_3() { return static_cast<int32_t>(offsetof(MultiShooter_t3195426575, ___Shot2_3)); }
	inline GameObject_t1756533147 * get_Shot2_3() const { return ___Shot2_3; }
	inline GameObject_t1756533147 ** get_address_of_Shot2_3() { return &___Shot2_3; }
	inline void set_Shot2_3(GameObject_t1756533147 * value)
	{
		___Shot2_3 = value;
		Il2CppCodeGenWriteBarrier(&___Shot2_3, value);
	}

	inline static int32_t get_offset_of_Wave_4() { return static_cast<int32_t>(offsetof(MultiShooter_t3195426575, ___Wave_4)); }
	inline GameObject_t1756533147 * get_Wave_4() const { return ___Wave_4; }
	inline GameObject_t1756533147 ** get_address_of_Wave_4() { return &___Wave_4; }
	inline void set_Wave_4(GameObject_t1756533147 * value)
	{
		___Wave_4 = value;
		Il2CppCodeGenWriteBarrier(&___Wave_4, value);
	}

	inline static int32_t get_offset_of_Disturbance_5() { return static_cast<int32_t>(offsetof(MultiShooter_t3195426575, ___Disturbance_5)); }
	inline float get_Disturbance_5() const { return ___Disturbance_5; }
	inline float* get_address_of_Disturbance_5() { return &___Disturbance_5; }
	inline void set_Disturbance_5(float value)
	{
		___Disturbance_5 = value;
	}

	inline static int32_t get_offset_of_ShotType_6() { return static_cast<int32_t>(offsetof(MultiShooter_t3195426575, ___ShotType_6)); }
	inline int32_t get_ShotType_6() const { return ___ShotType_6; }
	inline int32_t* get_address_of_ShotType_6() { return &___ShotType_6; }
	inline void set_ShotType_6(int32_t value)
	{
		___ShotType_6 = value;
	}

	inline static int32_t get_offset_of_NowShot_7() { return static_cast<int32_t>(offsetof(MultiShooter_t3195426575, ___NowShot_7)); }
	inline GameObject_t1756533147 * get_NowShot_7() const { return ___NowShot_7; }
	inline GameObject_t1756533147 ** get_address_of_NowShot_7() { return &___NowShot_7; }
	inline void set_NowShot_7(GameObject_t1756533147 * value)
	{
		___NowShot_7 = value;
		Il2CppCodeGenWriteBarrier(&___NowShot_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
