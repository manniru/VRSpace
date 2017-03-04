#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_PropertyAttribute2606999759.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.VFXToolbox.FloatSliderAttribute
struct  FloatSliderAttribute_t3074666823  : public PropertyAttribute_t2606999759
{
public:
	// System.Single UnityEngine.VFXToolbox.FloatSliderAttribute::m_ValueMin
	float ___m_ValueMin_0;
	// System.Single UnityEngine.VFXToolbox.FloatSliderAttribute::m_ValueMax
	float ___m_ValueMax_1;

public:
	inline static int32_t get_offset_of_m_ValueMin_0() { return static_cast<int32_t>(offsetof(FloatSliderAttribute_t3074666823, ___m_ValueMin_0)); }
	inline float get_m_ValueMin_0() const { return ___m_ValueMin_0; }
	inline float* get_address_of_m_ValueMin_0() { return &___m_ValueMin_0; }
	inline void set_m_ValueMin_0(float value)
	{
		___m_ValueMin_0 = value;
	}

	inline static int32_t get_offset_of_m_ValueMax_1() { return static_cast<int32_t>(offsetof(FloatSliderAttribute_t3074666823, ___m_ValueMax_1)); }
	inline float get_m_ValueMax_1() const { return ___m_ValueMax_1; }
	inline float* get_address_of_m_ValueMax_1() { return &___m_ValueMax_1; }
	inline void set_m_ValueMax_1(float value)
	{
		___m_ValueMax_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
