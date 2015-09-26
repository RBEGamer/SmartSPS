﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2027;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t186;
// System.AsyncCallback
struct AsyncCallback_t187;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Predicate`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14559_gshared (Predicate_1_t2027 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14559(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2027 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14559_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14560_gshared (Predicate_1_t2027 * __this, Vector4_t277  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14560(__this, ___obj, method) (( bool (*) (Predicate_1_t2027 *, Vector4_t277 , const MethodInfo*))Predicate_1_Invoke_m14560_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14561_gshared (Predicate_1_t2027 * __this, Vector4_t277  ___obj, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14561(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2027 *, Vector4_t277 , AsyncCallback_t187 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14561_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14562_gshared (Predicate_1_t2027 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14562(__this, ___result, method) (( bool (*) (Predicate_1_t2027 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14562_gshared)(__this, ___result, method)
