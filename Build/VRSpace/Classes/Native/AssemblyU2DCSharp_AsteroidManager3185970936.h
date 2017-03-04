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
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AsteroidManager
struct  AsteroidManager_t3185970936  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject AsteroidManager::poof
	GameObject_t1756533147 * ___poof_2;
	// UnityEngine.AudioClip AsteroidManager::poofSound
	AudioClip_t1932558630 * ___poofSound_3;
	// UnityEngine.GameObject AsteroidManager::explosion
	GameObject_t1756533147 * ___explosion_4;
	// UnityEngine.GameObject AsteroidManager::laserBeam
	GameObject_t1756533147 * ___laserBeam_5;

public:
	inline static int32_t get_offset_of_poof_2() { return static_cast<int32_t>(offsetof(AsteroidManager_t3185970936, ___poof_2)); }
	inline GameObject_t1756533147 * get_poof_2() const { return ___poof_2; }
	inline GameObject_t1756533147 ** get_address_of_poof_2() { return &___poof_2; }
	inline void set_poof_2(GameObject_t1756533147 * value)
	{
		___poof_2 = value;
		Il2CppCodeGenWriteBarrier(&___poof_2, value);
	}

	inline static int32_t get_offset_of_poofSound_3() { return static_cast<int32_t>(offsetof(AsteroidManager_t3185970936, ___poofSound_3)); }
	inline AudioClip_t1932558630 * get_poofSound_3() const { return ___poofSound_3; }
	inline AudioClip_t1932558630 ** get_address_of_poofSound_3() { return &___poofSound_3; }
	inline void set_poofSound_3(AudioClip_t1932558630 * value)
	{
		___poofSound_3 = value;
		Il2CppCodeGenWriteBarrier(&___poofSound_3, value);
	}

	inline static int32_t get_offset_of_explosion_4() { return static_cast<int32_t>(offsetof(AsteroidManager_t3185970936, ___explosion_4)); }
	inline GameObject_t1756533147 * get_explosion_4() const { return ___explosion_4; }
	inline GameObject_t1756533147 ** get_address_of_explosion_4() { return &___explosion_4; }
	inline void set_explosion_4(GameObject_t1756533147 * value)
	{
		___explosion_4 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_4, value);
	}

	inline static int32_t get_offset_of_laserBeam_5() { return static_cast<int32_t>(offsetof(AsteroidManager_t3185970936, ___laserBeam_5)); }
	inline GameObject_t1756533147 * get_laserBeam_5() const { return ___laserBeam_5; }
	inline GameObject_t1756533147 ** get_address_of_laserBeam_5() { return &___laserBeam_5; }
	inline void set_laserBeam_5(GameObject_t1756533147 * value)
	{
		___laserBeam_5 = value;
		Il2CppCodeGenWriteBarrier(&___laserBeam_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
