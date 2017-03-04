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

// Garbage
struct  Garbage_t2134155619  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Garbage::poof
	GameObject_t1756533147 * ___poof_2;
	// UnityEngine.AudioClip Garbage::poofSound
	AudioClip_t1932558630 * ___poofSound_3;

public:
	inline static int32_t get_offset_of_poof_2() { return static_cast<int32_t>(offsetof(Garbage_t2134155619, ___poof_2)); }
	inline GameObject_t1756533147 * get_poof_2() const { return ___poof_2; }
	inline GameObject_t1756533147 ** get_address_of_poof_2() { return &___poof_2; }
	inline void set_poof_2(GameObject_t1756533147 * value)
	{
		___poof_2 = value;
		Il2CppCodeGenWriteBarrier(&___poof_2, value);
	}

	inline static int32_t get_offset_of_poofSound_3() { return static_cast<int32_t>(offsetof(Garbage_t2134155619, ___poofSound_3)); }
	inline AudioClip_t1932558630 * get_poofSound_3() const { return ___poofSound_3; }
	inline AudioClip_t1932558630 ** get_address_of_poofSound_3() { return &___poofSound_3; }
	inline void set_poofSound_3(AudioClip_t1932558630 * value)
	{
		___poofSound_3 = value;
		Il2CppCodeGenWriteBarrier(&___poofSound_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
