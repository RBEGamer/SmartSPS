﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2016;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t186;
// System.AsyncCallback
struct AsyncCallback_t187;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14411_gshared (Predicate_1_t2016 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14411(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2016 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14411_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14412_gshared (Predicate_1_t2016 * __this, Vector2_t11  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14412(__this, ___obj, method) (( bool (*) (Predicate_1_t2016 *, Vector2_t11 , const MethodInfo*))Predicate_1_Invoke_m14412_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14413_gshared (Predicate_1_t2016 * __this, Vector2_t11  ___obj, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14413(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2016 *, Vector2_t11 , AsyncCallback_t187 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14413_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14414_gshared (Predicate_1_t2016 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14414(__this, ___result, method) (( bool (*) (Predicate_1_t2016 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14414_gshared)(__this, ___result, method)
