#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// maxCamera
struct  maxCamera_t3827295319  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform maxCamera::target
	Transform_t3275118058 * ___target_2;
	// UnityEngine.Vector3 maxCamera::targetOffset
	Vector3_t2243707580  ___targetOffset_3;
	// System.Single maxCamera::distance
	float ___distance_4;
	// System.Single maxCamera::maxDistance
	float ___maxDistance_5;
	// System.Single maxCamera::minDistance
	float ___minDistance_6;
	// System.Single maxCamera::xSpeed
	float ___xSpeed_7;
	// System.Single maxCamera::ySpeed
	float ___ySpeed_8;
	// System.Int32 maxCamera::yMinLimit
	int32_t ___yMinLimit_9;
	// System.Int32 maxCamera::yMaxLimit
	int32_t ___yMaxLimit_10;
	// System.Int32 maxCamera::zoomRate
	int32_t ___zoomRate_11;
	// System.Single maxCamera::panSpeed
	float ___panSpeed_12;
	// System.Single maxCamera::zoomDampening
	float ___zoomDampening_13;
	// System.Single maxCamera::xDeg
	float ___xDeg_14;
	// System.Single maxCamera::yDeg
	float ___yDeg_15;
	// System.Single maxCamera::currentDistance
	float ___currentDistance_16;
	// System.Single maxCamera::desiredDistance
	float ___desiredDistance_17;
	// UnityEngine.Quaternion maxCamera::currentRotation
	Quaternion_t4030073918  ___currentRotation_18;
	// UnityEngine.Quaternion maxCamera::desiredRotation
	Quaternion_t4030073918  ___desiredRotation_19;
	// UnityEngine.Quaternion maxCamera::rotation
	Quaternion_t4030073918  ___rotation_20;
	// UnityEngine.Vector3 maxCamera::position
	Vector3_t2243707580  ___position_21;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_targetOffset_3() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___targetOffset_3)); }
	inline Vector3_t2243707580  get_targetOffset_3() const { return ___targetOffset_3; }
	inline Vector3_t2243707580 * get_address_of_targetOffset_3() { return &___targetOffset_3; }
	inline void set_targetOffset_3(Vector3_t2243707580  value)
	{
		___targetOffset_3 = value;
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of_maxDistance_5() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___maxDistance_5)); }
	inline float get_maxDistance_5() const { return ___maxDistance_5; }
	inline float* get_address_of_maxDistance_5() { return &___maxDistance_5; }
	inline void set_maxDistance_5(float value)
	{
		___maxDistance_5 = value;
	}

	inline static int32_t get_offset_of_minDistance_6() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___minDistance_6)); }
	inline float get_minDistance_6() const { return ___minDistance_6; }
	inline float* get_address_of_minDistance_6() { return &___minDistance_6; }
	inline void set_minDistance_6(float value)
	{
		___minDistance_6 = value;
	}

	inline static int32_t get_offset_of_xSpeed_7() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___xSpeed_7)); }
	inline float get_xSpeed_7() const { return ___xSpeed_7; }
	inline float* get_address_of_xSpeed_7() { return &___xSpeed_7; }
	inline void set_xSpeed_7(float value)
	{
		___xSpeed_7 = value;
	}

	inline static int32_t get_offset_of_ySpeed_8() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___ySpeed_8)); }
	inline float get_ySpeed_8() const { return ___ySpeed_8; }
	inline float* get_address_of_ySpeed_8() { return &___ySpeed_8; }
	inline void set_ySpeed_8(float value)
	{
		___ySpeed_8 = value;
	}

	inline static int32_t get_offset_of_yMinLimit_9() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___yMinLimit_9)); }
	inline int32_t get_yMinLimit_9() const { return ___yMinLimit_9; }
	inline int32_t* get_address_of_yMinLimit_9() { return &___yMinLimit_9; }
	inline void set_yMinLimit_9(int32_t value)
	{
		___yMinLimit_9 = value;
	}

	inline static int32_t get_offset_of_yMaxLimit_10() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___yMaxLimit_10)); }
	inline int32_t get_yMaxLimit_10() const { return ___yMaxLimit_10; }
	inline int32_t* get_address_of_yMaxLimit_10() { return &___yMaxLimit_10; }
	inline void set_yMaxLimit_10(int32_t value)
	{
		___yMaxLimit_10 = value;
	}

	inline static int32_t get_offset_of_zoomRate_11() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___zoomRate_11)); }
	inline int32_t get_zoomRate_11() const { return ___zoomRate_11; }
	inline int32_t* get_address_of_zoomRate_11() { return &___zoomRate_11; }
	inline void set_zoomRate_11(int32_t value)
	{
		___zoomRate_11 = value;
	}

	inline static int32_t get_offset_of_panSpeed_12() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___panSpeed_12)); }
	inline float get_panSpeed_12() const { return ___panSpeed_12; }
	inline float* get_address_of_panSpeed_12() { return &___panSpeed_12; }
	inline void set_panSpeed_12(float value)
	{
		___panSpeed_12 = value;
	}

	inline static int32_t get_offset_of_zoomDampening_13() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___zoomDampening_13)); }
	inline float get_zoomDampening_13() const { return ___zoomDampening_13; }
	inline float* get_address_of_zoomDampening_13() { return &___zoomDampening_13; }
	inline void set_zoomDampening_13(float value)
	{
		___zoomDampening_13 = value;
	}

	inline static int32_t get_offset_of_xDeg_14() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___xDeg_14)); }
	inline float get_xDeg_14() const { return ___xDeg_14; }
	inline float* get_address_of_xDeg_14() { return &___xDeg_14; }
	inline void set_xDeg_14(float value)
	{
		___xDeg_14 = value;
	}

	inline static int32_t get_offset_of_yDeg_15() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___yDeg_15)); }
	inline float get_yDeg_15() const { return ___yDeg_15; }
	inline float* get_address_of_yDeg_15() { return &___yDeg_15; }
	inline void set_yDeg_15(float value)
	{
		___yDeg_15 = value;
	}

	inline static int32_t get_offset_of_currentDistance_16() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___currentDistance_16)); }
	inline float get_currentDistance_16() const { return ___currentDistance_16; }
	inline float* get_address_of_currentDistance_16() { return &___currentDistance_16; }
	inline void set_currentDistance_16(float value)
	{
		___currentDistance_16 = value;
	}

	inline static int32_t get_offset_of_desiredDistance_17() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___desiredDistance_17)); }
	inline float get_desiredDistance_17() const { return ___desiredDistance_17; }
	inline float* get_address_of_desiredDistance_17() { return &___desiredDistance_17; }
	inline void set_desiredDistance_17(float value)
	{
		___desiredDistance_17 = value;
	}

	inline static int32_t get_offset_of_currentRotation_18() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___currentRotation_18)); }
	inline Quaternion_t4030073918  get_currentRotation_18() const { return ___currentRotation_18; }
	inline Quaternion_t4030073918 * get_address_of_currentRotation_18() { return &___currentRotation_18; }
	inline void set_currentRotation_18(Quaternion_t4030073918  value)
	{
		___currentRotation_18 = value;
	}

	inline static int32_t get_offset_of_desiredRotation_19() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___desiredRotation_19)); }
	inline Quaternion_t4030073918  get_desiredRotation_19() const { return ___desiredRotation_19; }
	inline Quaternion_t4030073918 * get_address_of_desiredRotation_19() { return &___desiredRotation_19; }
	inline void set_desiredRotation_19(Quaternion_t4030073918  value)
	{
		___desiredRotation_19 = value;
	}

	inline static int32_t get_offset_of_rotation_20() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___rotation_20)); }
	inline Quaternion_t4030073918  get_rotation_20() const { return ___rotation_20; }
	inline Quaternion_t4030073918 * get_address_of_rotation_20() { return &___rotation_20; }
	inline void set_rotation_20(Quaternion_t4030073918  value)
	{
		___rotation_20 = value;
	}

	inline static int32_t get_offset_of_position_21() { return static_cast<int32_t>(offsetof(maxCamera_t3827295319, ___position_21)); }
	inline Vector3_t2243707580  get_position_21() const { return ___position_21; }
	inline Vector3_t2243707580 * get_address_of_position_21() { return &___position_21; }
	inline void set_position_21(Vector3_t2243707580  value)
	{
		___position_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
