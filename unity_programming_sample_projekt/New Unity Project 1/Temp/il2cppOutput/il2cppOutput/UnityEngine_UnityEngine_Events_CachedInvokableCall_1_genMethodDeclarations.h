#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t618;
// UnityEngine.Object
struct Object_t39;
struct Object_t39_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t61;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3148_gshared (CachedInvokableCall_1_t618 * __this, Object_t39 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3148(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t618 *, Object_t39 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m3148_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m17658_gshared (CachedInvokableCall_1_t618 * __this, ObjectU5BU5D_t61* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m17658(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t618 *, ObjectU5BU5D_t61*, const MethodInfo*))CachedInvokableCall_1_Invoke_m17658_gshared)(__this, ___args, method)
