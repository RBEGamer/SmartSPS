#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_105.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18721_gshared (InternalEnumerator_1_t2519 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18721(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2519 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18721_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18722_gshared (InternalEnumerator_1_t2519 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18722(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2519 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18722_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18723_gshared (InternalEnumerator_1_t2519 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18723(__this, method) (( void (*) (InternalEnumerator_1_t2519 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18723_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18724_gshared (InternalEnumerator_1_t2519 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18724(__this, method) (( bool (*) (InternalEnumerator_1_t2519 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18724_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t1151  InternalEnumerator_1_get_Current_m18725_gshared (InternalEnumerator_1_t2519 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18725(__this, method) (( TimeSpan_t1151  (*) (InternalEnumerator_1_t2519 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18725_gshared)(__this, method)
