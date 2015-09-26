﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t338;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t186;
// System.AsyncCallback
struct AsyncCallback_t187;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m1735_gshared (UnityAction_1_t338 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1735(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t338 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1735_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m12298_gshared (UnityAction_1_t338 * __this, bool ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m12298(__this, ___arg0, method) (( void (*) (UnityAction_1_t338 *, bool, const MethodInfo*))UnityAction_1_Invoke_m12298_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m12299_gshared (UnityAction_1_t338 * __this, bool ___arg0, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m12299(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t338 *, bool, AsyncCallback_t187 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m12299_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m12300_gshared (UnityAction_1_t338 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m12300(__this, ___result, method) (( void (*) (UnityAction_1_t338 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m12300_gshared)(__this, ___result, method)