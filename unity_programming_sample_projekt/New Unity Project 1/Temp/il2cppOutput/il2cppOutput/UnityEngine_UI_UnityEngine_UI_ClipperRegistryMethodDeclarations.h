#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ClipperRegistry
struct ClipperRegistry_t244;
// UnityEngine.UI.IClipper
struct IClipper_t313;

// System.Void UnityEngine.UI.ClipperRegistry::.ctor()
extern "C" void ClipperRegistry__ctor_m1291 (ClipperRegistry_t244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ClipperRegistry UnityEngine.UI.ClipperRegistry::get_instance()
extern "C" ClipperRegistry_t244 * ClipperRegistry_get_instance_m1292 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ClipperRegistry::Cull()
extern "C" void ClipperRegistry_Cull_m1293 (ClipperRegistry_t244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ClipperRegistry::Register(UnityEngine.UI.IClipper)
extern "C" void ClipperRegistry_Register_m1294 (Object_t * __this /* static, unused */, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ClipperRegistry::Unregister(UnityEngine.UI.IClipper)
extern "C" void ClipperRegistry_Unregister_m1295 (Object_t * __this /* static, unused */, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
