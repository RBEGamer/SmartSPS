#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t1791;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1751;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t554;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C" void UnityEvent_1__ctor_m11261_gshared (UnityEvent_1_t1791 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m11261(__this, method) (( void (*) (UnityEvent_1_t1791 *, const MethodInfo*))UnityEvent_1__ctor_m11261_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m11263_gshared (UnityEvent_1_t1791 * __this, UnityAction_1_t1751 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m11263(__this, ___call, method) (( void (*) (UnityEvent_1_t1791 *, UnityAction_1_t1751 *, const MethodInfo*))UnityEvent_1_AddListener_m11263_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m11265_gshared (UnityEvent_1_t1791 * __this, UnityAction_1_t1751 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m11265(__this, ___call, method) (( void (*) (UnityEvent_1_t1791 *, UnityAction_1_t1751 *, const MethodInfo*))UnityEvent_1_RemoveListener_m11265_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m11267_gshared (UnityEvent_1_t1791 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m11267(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t1791 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m11267_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t554 * UnityEvent_1_GetDelegate_m11269_gshared (UnityEvent_1_t1791 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m11269(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t554 * (*) (UnityEvent_1_t1791 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m11269_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t554 * UnityEvent_1_GetDelegate_m11271_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1751 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m11271(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t554 * (*) (Object_t * /* static, unused */, UnityAction_1_t1751 *, const MethodInfo*))UnityEvent_1_GetDelegate_m11271_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m11272_gshared (UnityEvent_1_t1791 * __this, Object_t * ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m11272(__this, ___arg0, method) (( void (*) (UnityEvent_1_t1791 *, Object_t *, const MethodInfo*))UnityEvent_1_Invoke_m11272_gshared)(__this, ___arg0, method)
