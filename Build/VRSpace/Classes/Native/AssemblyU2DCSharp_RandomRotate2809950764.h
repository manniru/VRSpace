﻿#pragma once

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

// RandomRotate
struct  RandomRotate_t2809950764  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RandomRotate::rot
	float ___rot_2;
	// System.Single RandomRotate::add_rot
	float ___add_rot_3;

public:
	inline static int32_t get_offset_of_rot_2() { return static_cast<int32_t>(offsetof(RandomRotate_t2809950764, ___rot_2)); }
	inline float get_rot_2() const { return ___rot_2; }
	inline float* get_address_of_rot_2() { return &___rot_2; }
	inline void set_rot_2(float value)
	{
		___rot_2 = value;
	}

	inline static int32_t get_offset_of_add_rot_3() { return static_cast<int32_t>(offsetof(RandomRotate_t2809950764, ___add_rot_3)); }
	inline float get_add_rot_3() const { return ___add_rot_3; }
	inline float* get_address_of_add_rot_3() { return &___add_rot_3; }
	inline void set_add_rot_3(float value)
	{
		___add_rot_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
