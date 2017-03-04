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
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomMovement
struct  RandomMovement_t219910086  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject RandomMovement::attractor
	GameObject_t1756533147 * ___attractor_2;
	// System.Single RandomMovement::speed
	float ___speed_3;
	// System.Single RandomMovement::xMax
	float ___xMax_4;
	// System.Single RandomMovement::yMax
	float ___yMax_5;
	// System.Single RandomMovement::zMax
	float ___zMax_6;
	// System.Single RandomMovement::attractorX
	float ___attractorX_7;
	// System.Single RandomMovement::attractorY
	float ___attractorY_8;
	// System.Single RandomMovement::attractorZ
	float ___attractorZ_9;
	// UnityEngine.Vector3 RandomMovement::attractorPoint
	Vector3_t2243707580  ___attractorPoint_10;
	// System.Int32 RandomMovement::counter
	int32_t ___counter_11;
	// System.Int32 RandomMovement::counterMax
	int32_t ___counterMax_12;

public:
	inline static int32_t get_offset_of_attractor_2() { return static_cast<int32_t>(offsetof(RandomMovement_t219910086, ___attractor_2)); }
	inline GameObject_t1756533147 * get_attractor_2() const { return ___attractor_2; }
	inline GameObject_t1756533147 ** get_address_of_attractor_2() { return &___attractor_2; }
	inline void set_attractor_2(GameObject_t1756533147 * value)
	{
		___attractor_2 = value;
		Il2CppCodeGenWriteBarrier(&___attractor_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(RandomMovement_t219910086, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_xMax_4() { return static_cast<int32_t>(offsetof(RandomMovement_t219910086, ___xMax_4)); }
	inline float get_xMax_4() const { return ___xMax_4; }
	inline float* get_address_of_xMax_4() { return &___xMax_4; }
	inline void set_xMax_4(float value)
	{
		___xMax_4 = value;
	}

	inline static int32_t get_offset_of_yMax_5() { return static_cast<int32_t>(offsetof(RandomMovement_t219910086, ___yMax_5)); }
	inline float get_yMax_5() const { return ___yMax_5; }
	inline float* get_address_of_yMax_5() { return &___yMax_5; }
	inline void set_yMax_5(float value)
	{
		___yMax_5 = value;
	}

	inline static int32_t get_offset_of_zMax_6() { return static_cast<int32_t>(offsetof(RandomMovement_t219910086, ___zMax_6)); }
	inline float get_zMax_6() const { return ___zMax_6; }
	inline float* get_address_of_zMax_6() { return &___zMax_6; }
	inline void set_zMax_6(float value)
	{
		___zMax_6 = value;
	}

	inline static int32_t get_offset_of_attractorX_7() { return static_cast<int32_t>(offsetof(RandomMovement_t219910086, ___attractorX_7)); }
	inline float get_attractorX_7() const { return ___attractorX_7; }
	inline float* get_address_of_attractorX_7() { return &___attractorX_7; }
	inline void set_attractorX_7(float value)
	{
		___attractorX_7 = value;
	}

	inline static int32_t get_offset_of_attractorY_8() { return static_cast<int32_t>(offsetof(RandomMovement_t219910086, ___attractorY_8)); }
	inline float get_attractorY_8() const { return ___attractorY_8; }
	inline float* get_address_of_attractorY_8() { return &___attractorY_8; }
	inline void set_attractorY_8(float value)
	{
		___attractorY_8 = value;
	}

	inline static int32_t get_offset_of_attractorZ_9() { return static_cast<int32_t>(offsetof(RandomMovement_t219910086, ___attractorZ_9)); }
	inline float get_attractorZ_9() const { return ___attractorZ_9; }
	inline float* get_address_of_attractorZ_9() { return &___attractorZ_9; }
	inline void set_attractorZ_9(float value)
	{
		___attractorZ_9 = value;
	}

	inline static int32_t get_offset_of_attractorPoint_10() { return static_cast<int32_t>(offsetof(RandomMovement_t219910086, ___attractorPoint_10)); }
	inline Vector3_t2243707580  get_attractorPoint_10() const { return ___attractorPoint_10; }
	inline Vector3_t2243707580 * get_address_of_attractorPoint_10() { return &___attractorPoint_10; }
	inline void set_attractorPoint_10(Vector3_t2243707580  value)
	{
		___attractorPoint_10 = value;
	}

	inline static int32_t get_offset_of_counter_11() { return static_cast<int32_t>(offsetof(RandomMovement_t219910086, ___counter_11)); }
	inline int32_t get_counter_11() const { return ___counter_11; }
	inline int32_t* get_address_of_counter_11() { return &___counter_11; }
	inline void set_counter_11(int32_t value)
	{
		___counter_11 = value;
	}

	inline static int32_t get_offset_of_counterMax_12() { return static_cast<int32_t>(offsetof(RandomMovement_t219910086, ___counterMax_12)); }
	inline int32_t get_counterMax_12() const { return ___counterMax_12; }
	inline int32_t* get_address_of_counterMax_12() { return &___counterMax_12; }
	inline void set_counterMax_12(int32_t value)
	{
		___counterMax_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
