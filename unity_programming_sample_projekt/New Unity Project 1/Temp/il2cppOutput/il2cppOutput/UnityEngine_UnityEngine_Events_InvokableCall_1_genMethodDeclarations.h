#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t2051;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2010;
// System.Object[]
struct ObjectU5BU5D_t61;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13063_gshared (InvokableCall_1_t2051 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m13063(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2051 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m13063_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13064_gshared (InvokableCall_1_t2051 * __this, UnityAction_1_t2010 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m13064(__this, ___action, method) (( void (*) (InvokableCall_1_t2051 *, UnityAction_1_t2010 *, const MethodInfo*))InvokableCall_1__ctor_m13064_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13065_gshared (InvokableCall_1_t2051 * __this, ObjectU5BU5D_t61* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m13065(__this, ___args, method) (( void (*) (InvokableCall_1_t2051 *, ObjectU5BU5D_t61*, const MethodInfo*))InvokableCall_1_Invoke_m13065_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13066_gshared (InvokableCall_1_t2051 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m13066(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2051 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m13066_gshared)(__this, ___targetObj, ___method, method)
