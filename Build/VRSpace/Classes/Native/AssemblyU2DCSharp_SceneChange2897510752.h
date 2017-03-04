#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneChange
struct  SceneChange_t2897510752  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SceneChange::waitTime
	float ___waitTime_2;

public:
	inline static int32_t get_offset_of_waitTime_2() { return static_cast<int32_t>(offsetof(SceneChange_t2897510752, ___waitTime_2)); }
	inline float get_waitTime_2() const { return ___waitTime_2; }
	inline float* get_address_of_waitTime_2() { return &___waitTime_2; }
	inline void set_waitTime_2(float value)
	{
		___waitTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
