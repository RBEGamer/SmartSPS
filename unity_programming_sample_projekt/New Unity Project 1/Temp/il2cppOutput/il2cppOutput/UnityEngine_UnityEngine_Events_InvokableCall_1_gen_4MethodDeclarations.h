#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t2206;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2205;
// System.Object[]
struct ObjectU5BU5D_t61;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m15149_gshared (InvokableCall_1_t2206 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m15149(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2206 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m15149_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m15150_gshared (InvokableCall_1_t2206 * __this, UnityAction_1_t2205 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m15150(__this, ___action, method) (( void (*) (InvokableCall_1_t2206 *, UnityAction_1_t2205 *, const MethodInfo*))InvokableCall_1__ctor_m15150_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m15151_gshared (InvokableCall_1_t2206 * __this, ObjectU5BU5D_t61* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m15151(__this, ___args, method) (( void (*) (InvokableCall_1_t2206 *, ObjectU5BU5D_t61*, const MethodInfo*))InvokableCall_1_Invoke_m15151_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m15152_gshared (InvokableCall_1_t2206 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m15152(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2206 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m15152_gshared)(__this, ___targetObj, ___method, method)
