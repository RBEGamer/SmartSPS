#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t2512;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t191;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m18687_gshared (StaticGetter_1_t2512 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define StaticGetter_1__ctor_m18687(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t2512 *, Object_t *, IntPtr_t, const MethodInfo*))StaticGetter_1__ctor_m18687_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m18688_gshared (StaticGetter_1_t2512 * __this, const MethodInfo* method);
#define StaticGetter_1_Invoke_m18688(__this, method) (( Object_t * (*) (StaticGetter_1_t2512 *, const MethodInfo*))StaticGetter_1_Invoke_m18688_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m18689_gshared (StaticGetter_1_t2512 * __this, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m18689(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t2512 *, AsyncCallback_t192 *, Object_t *, const MethodInfo*))StaticGetter_1_BeginInvoke_m18689_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m18690_gshared (StaticGetter_1_t2512 * __this, Object_t * ___result, const MethodInfo* method);
#define StaticGetter_1_EndInvoke_m18690(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t2512 *, Object_t *, const MethodInfo*))StaticGetter_1_EndInvoke_m18690_gshared)(__this, ___result, method)
