#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GravityManager
struct GravityManager_t170745135;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191.h"

// System.Void GravityManager::.ctor()
extern "C"  void GravityManager__ctor_m2604018512 (GravityManager_t170745135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GravityManager::Start()
extern "C"  void GravityManager_Start_m795076156 (GravityManager_t170745135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GravityManager::ApplyGravity(UnityEngine.Rigidbody,UnityEngine.Rigidbody)
extern "C"  void GravityManager_ApplyGravity_m3505789414 (GravityManager_t170745135 * __this, Rigidbody_t4233889191 * ___A0, Rigidbody_t4233889191 * ___B1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GravityManager::FixedUpdate()
extern "C"  void GravityManager_FixedUpdate_m1634560485 (GravityManager_t170745135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
