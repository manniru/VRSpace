#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// zzVerticalRuler
struct  zzVerticalRuler_t1197707486  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Mesh zzVerticalRuler::planeMesh
	Mesh_t1356156583 * ___planeMesh_2;
	// System.Single zzVerticalRuler::preRulerRange
	float ___preRulerRange_4;
	// UnityEngine.Vector2[] zzVerticalRuler::UVs
	Vector2U5BU5D_t686124026* ___UVs_8;

public:
	inline static int32_t get_offset_of_planeMesh_2() { return static_cast<int32_t>(offsetof(zzVerticalRuler_t1197707486, ___planeMesh_2)); }
	inline Mesh_t1356156583 * get_planeMesh_2() const { return ___planeMesh_2; }
	inline Mesh_t1356156583 ** get_address_of_planeMesh_2() { return &___planeMesh_2; }
	inline void set_planeMesh_2(Mesh_t1356156583 * value)
	{
		___planeMesh_2 = value;
		Il2CppCodeGenWriteBarrier(&___planeMesh_2, value);
	}

	inline static int32_t get_offset_of_preRulerRange_4() { return static_cast<int32_t>(offsetof(zzVerticalRuler_t1197707486, ___preRulerRange_4)); }
	inline float get_preRulerRange_4() const { return ___preRulerRange_4; }
	inline float* get_address_of_preRulerRange_4() { return &___preRulerRange_4; }
	inline void set_preRulerRange_4(float value)
	{
		___preRulerRange_4 = value;
	}

	inline static int32_t get_offset_of_UVs_8() { return static_cast<int32_t>(offsetof(zzVerticalRuler_t1197707486, ___UVs_8)); }
	inline Vector2U5BU5D_t686124026* get_UVs_8() const { return ___UVs_8; }
	inline Vector2U5BU5D_t686124026** get_address_of_UVs_8() { return &___UVs_8; }
	inline void set_UVs_8(Vector2U5BU5D_t686124026* value)
	{
		___UVs_8 = value;
		Il2CppCodeGenWriteBarrier(&___UVs_8, value);
	}
};

struct zzVerticalRuler_t1197707486_StaticFields
{
public:
	// UnityEngine.Vector3[] zzVerticalRuler::vertices
	Vector3U5BU5D_t1172311765* ___vertices_5;
	// System.Int32[] zzVerticalRuler::triIndices
	Int32U5BU5D_t3030399641* ___triIndices_6;
	// UnityEngine.Vector3[] zzVerticalRuler::normals
	Vector3U5BU5D_t1172311765* ___normals_7;

public:
	inline static int32_t get_offset_of_vertices_5() { return static_cast<int32_t>(offsetof(zzVerticalRuler_t1197707486_StaticFields, ___vertices_5)); }
	inline Vector3U5BU5D_t1172311765* get_vertices_5() const { return ___vertices_5; }
	inline Vector3U5BU5D_t1172311765** get_address_of_vertices_5() { return &___vertices_5; }
	inline void set_vertices_5(Vector3U5BU5D_t1172311765* value)
	{
		___vertices_5 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_5, value);
	}

	inline static int32_t get_offset_of_triIndices_6() { return static_cast<int32_t>(offsetof(zzVerticalRuler_t1197707486_StaticFields, ___triIndices_6)); }
	inline Int32U5BU5D_t3030399641* get_triIndices_6() const { return ___triIndices_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_triIndices_6() { return &___triIndices_6; }
	inline void set_triIndices_6(Int32U5BU5D_t3030399641* value)
	{
		___triIndices_6 = value;
		Il2CppCodeGenWriteBarrier(&___triIndices_6, value);
	}

	inline static int32_t get_offset_of_normals_7() { return static_cast<int32_t>(offsetof(zzVerticalRuler_t1197707486_StaticFields, ___normals_7)); }
	inline Vector3U5BU5D_t1172311765* get_normals_7() const { return ___normals_7; }
	inline Vector3U5BU5D_t1172311765** get_address_of_normals_7() { return &___normals_7; }
	inline void set_normals_7(Vector3U5BU5D_t1172311765* value)
	{
		___normals_7 = value;
		Il2CppCodeGenWriteBarrier(&___normals_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
