#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t2423;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t191;
// System.AsyncCallback
struct AsyncCallback_t192;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m18040_gshared (Predicate_1_t2423 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m18040(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2423 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m18040_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m18041_gshared (Predicate_1_t2423 * __this, KeyValuePair_2_t2142  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m18041(__this, ___obj, method) (( bool (*) (Predicate_1_t2423 *, KeyValuePair_2_t2142 , const MethodInfo*))Predicate_1_Invoke_m18041_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m18042_gshared (Predicate_1_t2423 * __this, KeyValuePair_2_t2142  ___obj, AsyncCallback_t192 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m18042(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2423 *, KeyValuePair_2_t2142 , AsyncCallback_t192 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m18042_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m18043_gshared (Predicate_1_t2423 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m18043(__this, ___result, method) (( bool (*) (Predicate_1_t2423 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m18043_gshared)(__this, ___result, method)
