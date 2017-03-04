#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BillBoard
struct  BillBoard_t2631831143  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera BillBoard::LookAtCam
	Camera_t189460977 * ___LookAtCam_2;
	// System.Single BillBoard::RandomRotate
	float ___RandomRotate_3;
	// System.Single BillBoard::RndRotate
	float ___RndRotate_4;
	// UnityEngine.Transform BillBoard::this_t_
	Transform_t3275118058 * ___this_t__5;

public:
	inline static int32_t get_offset_of_LookAtCam_2() { return static_cast<int32_t>(offsetof(BillBoard_t2631831143, ___LookAtCam_2)); }
	inline Camera_t189460977 * get_LookAtCam_2() const { return ___LookAtCam_2; }
	inline Camera_t189460977 ** get_address_of_LookAtCam_2() { return &___LookAtCam_2; }
	inline void set_LookAtCam_2(Camera_t189460977 * value)
	{
		___LookAtCam_2 = value;
		Il2CppCodeGenWriteBarrier(&___LookAtCam_2, value);
	}

	inline static int32_t get_offset_of_RandomRotate_3() { return static_cast<int32_t>(offsetof(BillBoard_t2631831143, ___RandomRotate_3)); }
	inline float get_RandomRotate_3() const { return ___RandomRotate_3; }
	inline float* get_address_of_RandomRotate_3() { return &___RandomRotate_3; }
	inline void set_RandomRotate_3(float value)
	{
		___RandomRotate_3 = value;
	}

	inline static int32_t get_offset_of_RndRotate_4() { return static_cast<int32_t>(offsetof(BillBoard_t2631831143, ___RndRotate_4)); }
	inline float get_RndRotate_4() const { return ___RndRotate_4; }
	inline float* get_address_of_RndRotate_4() { return &___RndRotate_4; }
	inline void set_RndRotate_4(float value)
	{
		___RndRotate_4 = value;
	}

	inline static int32_t get_offset_of_this_t__5() { return static_cast<int32_t>(offsetof(BillBoard_t2631831143, ___this_t__5)); }
	inline Transform_t3275118058 * get_this_t__5() const { return ___this_t__5; }
	inline Transform_t3275118058 ** get_address_of_this_t__5() { return &___this_t__5; }
	inline void set_this_t__5(Transform_t3275118058 * value)
	{
		___this_t__5 = value;
		Il2CppCodeGenWriteBarrier(&___this_t__5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
