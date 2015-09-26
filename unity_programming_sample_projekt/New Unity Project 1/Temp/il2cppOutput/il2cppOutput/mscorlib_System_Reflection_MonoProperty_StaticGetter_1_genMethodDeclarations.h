#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t2222;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t186;
// System.AsyncCallback
struct AsyncCallback_t187;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m16471_gshared (StaticGetter_1_t2222 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define StaticGetter_1__ctor_m16471(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t2222 *, Object_t *, IntPtr_t, const MethodInfo*))StaticGetter_1__ctor_m16471_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m16472_gshared (StaticGetter_1_t2222 * __this, const MethodInfo* method);
#define StaticGetter_1_Invoke_m16472(__this, method) (( Object_t * (*) (StaticGetter_1_t2222 *, const MethodInfo*))StaticGetter_1_Invoke_m16472_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m16473_gshared (StaticGetter_1_t2222 * __this, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m16473(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t2222 *, AsyncCallback_t187 *, Object_t *, const MethodInfo*))StaticGetter_1_BeginInvoke_m16473_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m16474_gshared (StaticGetter_1_t2222 * __this, Object_t * ___result, const MethodInfo* method);
#define StaticGetter_1_EndInvoke_m16474(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t2222 *, Object_t *, const MethodInfo*))StaticGetter_1_EndInvoke_m16474_gshared)(__this, ___result, method)
