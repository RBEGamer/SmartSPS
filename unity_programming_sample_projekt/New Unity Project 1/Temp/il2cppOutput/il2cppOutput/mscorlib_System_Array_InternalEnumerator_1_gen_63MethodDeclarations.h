#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63.h"

// System.Void System.Array/InternalEnumerator`1<System.Int16>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16302_gshared (InternalEnumerator_1_t2187 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16302(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2187 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16302_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Int16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16303_gshared (InternalEnumerator_1_t2187 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16303(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2187 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16303_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Int16>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16304_gshared (InternalEnumerator_1_t2187 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16304(__this, method) (( void (*) (InternalEnumerator_1_t2187 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16304_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Int16>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16305_gshared (InternalEnumerator_1_t2187 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16305(__this, method) (( bool (*) (InternalEnumerator_1_t2187 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16305_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Int16>::get_Current()
extern "C" int16_t InternalEnumerator_1_get_Current_m16306_gshared (InternalEnumerator_1_t2187 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16306(__this, method) (( int16_t (*) (InternalEnumerator_1_t2187 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16306_gshared)(__this, method)
