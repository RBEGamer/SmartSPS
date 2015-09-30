#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t2086;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t307;
// System.Object[]
struct ObjectU5BU5D_t61;

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13533_gshared (InvokableCall_1_t2086 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m13533(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2086 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m13533_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13534_gshared (InvokableCall_1_t2086 * __this, UnityAction_1_t307 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m13534(__this, ___action, method) (( void (*) (InvokableCall_1_t2086 *, UnityAction_1_t307 *, const MethodInfo*))InvokableCall_1__ctor_m13534_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13535_gshared (InvokableCall_1_t2086 * __this, ObjectU5BU5D_t61* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m13535(__this, ___args, method) (( void (*) (InvokableCall_1_t2086 *, ObjectU5BU5D_t61*, const MethodInfo*))InvokableCall_1_Invoke_m13535_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13536_gshared (InvokableCall_1_t2086 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m13536(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2086 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m13536_gshared)(__this, ___targetObj, ___method, method)
