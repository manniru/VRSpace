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
// ShotParticleEmitter
struct ShotParticleEmitter_t3566932268;
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// GeroBeamHit
struct GeroBeamHit_t3067425375;
// BeamParam
struct BeamParam_t3663531412;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GeroBeam
struct  GeroBeam_t327799680  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GeroBeam::HitEffect
	GameObject_t1756533147 * ___HitEffect_2;
	// ShotParticleEmitter GeroBeam::SHP_Emitter
	ShotParticleEmitter_t3566932268 * ___SHP_Emitter_3;
	// System.Single GeroBeam::NowLength
	float ___NowLength_4;
	// System.Single GeroBeam::MaxLength
	float ___MaxLength_5;
	// System.Single GeroBeam::AddLength
	float ___AddLength_6;
	// System.Single GeroBeam::Width
	float ___Width_7;
	// UnityEngine.LineRenderer GeroBeam::LR
	LineRenderer_t849157671 * ___LR_8;
	// UnityEngine.Vector3[] GeroBeam::F_Vec
	Vector3U5BU5D_t1172311765* ___F_Vec_9;
	// System.Int32 GeroBeam::LRSize
	int32_t ___LRSize_10;
	// GeroBeamHit GeroBeam::HitObj
	GeroBeamHit_t3067425375 * ___HitObj_11;
	// System.Single GeroBeam::RateA
	float ___RateA_12;
	// System.Single GeroBeam::NowLengthGlobal
	float ___NowLengthGlobal_13;
	// BeamParam GeroBeam::BP
	BeamParam_t3663531412 * ___BP_14;
	// UnityEngine.Vector3 GeroBeam::HitObjSize
	Vector3_t2243707580  ___HitObjSize_15;
	// UnityEngine.GameObject GeroBeam::Flash
	GameObject_t1756533147 * ___Flash_16;
	// System.Single GeroBeam::FlashSize
	float ___FlashSize_17;

public:
	inline static int32_t get_offset_of_HitEffect_2() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___HitEffect_2)); }
	inline GameObject_t1756533147 * get_HitEffect_2() const { return ___HitEffect_2; }
	inline GameObject_t1756533147 ** get_address_of_HitEffect_2() { return &___HitEffect_2; }
	inline void set_HitEffect_2(GameObject_t1756533147 * value)
	{
		___HitEffect_2 = value;
		Il2CppCodeGenWriteBarrier(&___HitEffect_2, value);
	}

	inline static int32_t get_offset_of_SHP_Emitter_3() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___SHP_Emitter_3)); }
	inline ShotParticleEmitter_t3566932268 * get_SHP_Emitter_3() const { return ___SHP_Emitter_3; }
	inline ShotParticleEmitter_t3566932268 ** get_address_of_SHP_Emitter_3() { return &___SHP_Emitter_3; }
	inline void set_SHP_Emitter_3(ShotParticleEmitter_t3566932268 * value)
	{
		___SHP_Emitter_3 = value;
		Il2CppCodeGenWriteBarrier(&___SHP_Emitter_3, value);
	}

	inline static int32_t get_offset_of_NowLength_4() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___NowLength_4)); }
	inline float get_NowLength_4() const { return ___NowLength_4; }
	inline float* get_address_of_NowLength_4() { return &___NowLength_4; }
	inline void set_NowLength_4(float value)
	{
		___NowLength_4 = value;
	}

	inline static int32_t get_offset_of_MaxLength_5() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___MaxLength_5)); }
	inline float get_MaxLength_5() const { return ___MaxLength_5; }
	inline float* get_address_of_MaxLength_5() { return &___MaxLength_5; }
	inline void set_MaxLength_5(float value)
	{
		___MaxLength_5 = value;
	}

	inline static int32_t get_offset_of_AddLength_6() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___AddLength_6)); }
	inline float get_AddLength_6() const { return ___AddLength_6; }
	inline float* get_address_of_AddLength_6() { return &___AddLength_6; }
	inline void set_AddLength_6(float value)
	{
		___AddLength_6 = value;
	}

	inline static int32_t get_offset_of_Width_7() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___Width_7)); }
	inline float get_Width_7() const { return ___Width_7; }
	inline float* get_address_of_Width_7() { return &___Width_7; }
	inline void set_Width_7(float value)
	{
		___Width_7 = value;
	}

	inline static int32_t get_offset_of_LR_8() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___LR_8)); }
	inline LineRenderer_t849157671 * get_LR_8() const { return ___LR_8; }
	inline LineRenderer_t849157671 ** get_address_of_LR_8() { return &___LR_8; }
	inline void set_LR_8(LineRenderer_t849157671 * value)
	{
		___LR_8 = value;
		Il2CppCodeGenWriteBarrier(&___LR_8, value);
	}

	inline static int32_t get_offset_of_F_Vec_9() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___F_Vec_9)); }
	inline Vector3U5BU5D_t1172311765* get_F_Vec_9() const { return ___F_Vec_9; }
	inline Vector3U5BU5D_t1172311765** get_address_of_F_Vec_9() { return &___F_Vec_9; }
	inline void set_F_Vec_9(Vector3U5BU5D_t1172311765* value)
	{
		___F_Vec_9 = value;
		Il2CppCodeGenWriteBarrier(&___F_Vec_9, value);
	}

	inline static int32_t get_offset_of_LRSize_10() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___LRSize_10)); }
	inline int32_t get_LRSize_10() const { return ___LRSize_10; }
	inline int32_t* get_address_of_LRSize_10() { return &___LRSize_10; }
	inline void set_LRSize_10(int32_t value)
	{
		___LRSize_10 = value;
	}

	inline static int32_t get_offset_of_HitObj_11() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___HitObj_11)); }
	inline GeroBeamHit_t3067425375 * get_HitObj_11() const { return ___HitObj_11; }
	inline GeroBeamHit_t3067425375 ** get_address_of_HitObj_11() { return &___HitObj_11; }
	inline void set_HitObj_11(GeroBeamHit_t3067425375 * value)
	{
		___HitObj_11 = value;
		Il2CppCodeGenWriteBarrier(&___HitObj_11, value);
	}

	inline static int32_t get_offset_of_RateA_12() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___RateA_12)); }
	inline float get_RateA_12() const { return ___RateA_12; }
	inline float* get_address_of_RateA_12() { return &___RateA_12; }
	inline void set_RateA_12(float value)
	{
		___RateA_12 = value;
	}

	inline static int32_t get_offset_of_NowLengthGlobal_13() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___NowLengthGlobal_13)); }
	inline float get_NowLengthGlobal_13() const { return ___NowLengthGlobal_13; }
	inline float* get_address_of_NowLengthGlobal_13() { return &___NowLengthGlobal_13; }
	inline void set_NowLengthGlobal_13(float value)
	{
		___NowLengthGlobal_13 = value;
	}

	inline static int32_t get_offset_of_BP_14() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___BP_14)); }
	inline BeamParam_t3663531412 * get_BP_14() const { return ___BP_14; }
	inline BeamParam_t3663531412 ** get_address_of_BP_14() { return &___BP_14; }
	inline void set_BP_14(BeamParam_t3663531412 * value)
	{
		___BP_14 = value;
		Il2CppCodeGenWriteBarrier(&___BP_14, value);
	}

	inline static int32_t get_offset_of_HitObjSize_15() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___HitObjSize_15)); }
	inline Vector3_t2243707580  get_HitObjSize_15() const { return ___HitObjSize_15; }
	inline Vector3_t2243707580 * get_address_of_HitObjSize_15() { return &___HitObjSize_15; }
	inline void set_HitObjSize_15(Vector3_t2243707580  value)
	{
		___HitObjSize_15 = value;
	}

	inline static int32_t get_offset_of_Flash_16() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___Flash_16)); }
	inline GameObject_t1756533147 * get_Flash_16() const { return ___Flash_16; }
	inline GameObject_t1756533147 ** get_address_of_Flash_16() { return &___Flash_16; }
	inline void set_Flash_16(GameObject_t1756533147 * value)
	{
		___Flash_16 = value;
		Il2CppCodeGenWriteBarrier(&___Flash_16, value);
	}

	inline static int32_t get_offset_of_FlashSize_17() { return static_cast<int32_t>(offsetof(GeroBeam_t327799680, ___FlashSize_17)); }
	inline float get_FlashSize_17() const { return ___FlashSize_17; }
	inline float* get_address_of_FlashSize_17() { return &___FlashSize_17; }
	inline void set_FlashSize_17(float value)
	{
		___FlashSize_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
