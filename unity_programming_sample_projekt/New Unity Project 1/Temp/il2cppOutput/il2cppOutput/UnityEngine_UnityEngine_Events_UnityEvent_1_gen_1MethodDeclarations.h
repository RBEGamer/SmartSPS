#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t125;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t307;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t557;

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m1669_gshared (UnityEvent_1_t125 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1669(__this, method) (( void (*) (UnityEvent_1_t125 *, const MethodInfo*))UnityEvent_1__ctor_m1669_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m1672_gshared (UnityEvent_1_t125 * __this, UnityAction_1_t307 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m1672(__this, ___call, method) (( void (*) (UnityEvent_1_t125 *, UnityAction_1_t307 *, const MethodInfo*))UnityEvent_1_AddListener_m1672_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m2004_gshared (UnityEvent_1_t125 * __this, UnityAction_1_t307 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2004(__this, ___call, method) (( void (*) (UnityEvent_1_t125 *, UnityAction_1_t307 *, const MethodInfo*))UnityEvent_1_RemoveListener_m2004_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m13527_gshared (UnityEvent_1_t125 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m13527(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t125 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m13527_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t557 * UnityEvent_1_GetDelegate_m13528_gshared (UnityEvent_1_t125 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13528(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t557 * (*) (UnityEvent_1_t125 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m13528_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t557 * UnityEvent_1_GetDelegate_m13529_gshared (Object_t * __this /* static, unused */, UnityAction_1_t307 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m13529(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t557 * (*) (Object_t * /* static, unused */, UnityAction_1_t307 *, const MethodInfo*))UnityEvent_1_GetDelegate_m13529_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1671_gshared (UnityEvent_1_t125 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1671(__this, ___arg0, method) (( void (*) (UnityEvent_1_t125 *, float, const MethodInfo*))UnityEvent_1_Invoke_m1671_gshared)(__this, ___arg0, method)
