#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_0.h"

// System.Void System.Array/InternalEnumerator`1<System.Object>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11819_gshared (InternalEnumerator_1_t1955 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11819(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1955 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11819_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11821_gshared (InternalEnumerator_1_t1955 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11821(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1955 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11821_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Object>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11823_gshared (InternalEnumerator_1_t1955 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11823(__this, method) (( void (*) (InternalEnumerator_1_t1955 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11823_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Object>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11825_gshared (InternalEnumerator_1_t1955 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11825(__this, method) (( bool (*) (InternalEnumerator_1_t1955 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11825_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Object>::get_Current()
extern "C" Object_t * InternalEnumerator_1_get_Current_m11827_gshared (InternalEnumerator_1_t1955 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11827(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1955 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11827_gshared)(__this, method)
