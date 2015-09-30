#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62.h"
// System.ArraySegment`1<System.Byte>
#include "mscorlib_System_ArraySegment_1_gen.h"

// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18187_gshared (InternalEnumerator_1_t2447 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18187(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2447 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18187_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18188_gshared (InternalEnumerator_1_t2447 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18188(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2447 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18188_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18189_gshared (InternalEnumerator_1_t2447 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18189(__this, method) (( void (*) (InternalEnumerator_1_t2447 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18189_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18190_gshared (InternalEnumerator_1_t2447 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18190(__this, method) (( bool (*) (InternalEnumerator_1_t2447 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18190_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.ArraySegment`1<System.Byte>>::get_Current()
extern "C" ArraySegment_1_t2446  InternalEnumerator_1_get_Current_m18191_gshared (InternalEnumerator_1_t2447 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18191(__this, method) (( ArraySegment_1_t2446  (*) (InternalEnumerator_1_t2447 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18191_gshared)(__this, method)
