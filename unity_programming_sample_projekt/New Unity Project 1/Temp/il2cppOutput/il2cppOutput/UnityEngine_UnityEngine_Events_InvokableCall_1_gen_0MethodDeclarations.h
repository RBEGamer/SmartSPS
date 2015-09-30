#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t2085;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t306;
// System.Object[]
struct ObjectU5BU5D_t61;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m13523_gshared (InvokableCall_1_t2085 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m13523(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2085 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m13523_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m13524_gshared (InvokableCall_1_t2085 * __this, UnityAction_1_t306 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m13524(__this, ___action, method) (( void (*) (InvokableCall_1_t2085 *, UnityAction_1_t306 *, const MethodInfo*))InvokableCall_1__ctor_m13524_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m13525_gshared (InvokableCall_1_t2085 * __this, ObjectU5BU5D_t61* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m13525(__this, ___args, method) (( void (*) (InvokableCall_1_t2085 *, ObjectU5BU5D_t61*, const MethodInfo*))InvokableCall_1_Invoke_m13525_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m13526_gshared (InvokableCall_1_t2085 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m13526(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2085 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m13526_gshared)(__this, ___targetObj, ___method, method)
