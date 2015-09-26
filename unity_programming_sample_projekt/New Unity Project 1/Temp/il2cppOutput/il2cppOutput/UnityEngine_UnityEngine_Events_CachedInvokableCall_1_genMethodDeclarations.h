#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t615;
// UnityEngine.Object
struct Object_t38;
struct Object_t38_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t320;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3137_gshared (CachedInvokableCall_1_t615 * __this, Object_t38 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3137(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t615 *, Object_t38 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m3137_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m15833_gshared (CachedInvokableCall_1_t615 * __this, ObjectU5BU5D_t320* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m15833(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t615 *, ObjectU5BU5D_t320*, const MethodInfo*))CachedInvokableCall_1_Invoke_m15833_gshared)(__this, ___args, method)
