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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Create_MyLineMesh
struct  Create_MyLineMesh_t1541070404  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Mesh Create_MyLineMesh::mesh
	Mesh_t1356156583 * ___mesh_2;
	// System.Int32 Create_MyLineMesh::SplitMesh
	int32_t ___SplitMesh_3;

public:
	inline static int32_t get_offset_of_mesh_2() { return static_cast<int32_t>(offsetof(Create_MyLineMesh_t1541070404, ___mesh_2)); }
	inline Mesh_t1356156583 * get_mesh_2() const { return ___mesh_2; }
	inline Mesh_t1356156583 ** get_address_of_mesh_2() { return &___mesh_2; }
	inline void set_mesh_2(Mesh_t1356156583 * value)
	{
		___mesh_2 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_2, value);
	}

	inline static int32_t get_offset_of_SplitMesh_3() { return static_cast<int32_t>(offsetof(Create_MyLineMesh_t1541070404, ___SplitMesh_3)); }
	inline int32_t get_SplitMesh_3() const { return ___SplitMesh_3; }
	inline int32_t* get_address_of_SplitMesh_3() { return &___SplitMesh_3; }
	inline void set_SplitMesh_3(int32_t value)
	{
		___SplitMesh_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
