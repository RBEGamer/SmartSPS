#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// bezier
struct bezier_t7;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void bezier::.ctor()
extern "C" void bezier__ctor_m9 (bezier_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void bezier::Start()
extern "C" void bezier_Start_m10 (bezier_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void bezier::draw_bezier(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
extern "C" void bezier_draw_bezier_m11 (bezier_t7 * __this, Vector3_t10  ___start_point, Vector3_t10  ___end_point, int32_t ___steps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void bezier::Update()
extern "C" void bezier_Update_m12 (bezier_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
