#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Int32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2.h"

// System.Void System.Array/InternalEnumerator`1<System.Int32>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11978_gshared (InternalEnumerator_1_t1966 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11978(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1966 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11978_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11979_gshared (InternalEnumerator_1_t1966 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11979(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1966 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11979_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Int32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11980_gshared (InternalEnumerator_1_t1966 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11980(__this, method) (( void (*) (InternalEnumerator_1_t1966 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11980_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Int32>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11981_gshared (InternalEnumerator_1_t1966 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11981(__this, method) (( bool (*) (InternalEnumerator_1_t1966 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11981_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Int32>::get_Current()
extern "C" int32_t InternalEnumerator_1_get_Current_m11982_gshared (InternalEnumerator_1_t1966 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11982(__this, method) (( int32_t (*) (InternalEnumerator_1_t1966 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11982_gshared)(__this, method)
