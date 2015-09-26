#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_13.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11820_gshared (InternalEnumerator_1_t1834 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11820(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1834 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11820_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11821_gshared (InternalEnumerator_1_t1834 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11821(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1834 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11821_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11822_gshared (InternalEnumerator_1_t1834 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11822(__this, method) (( void (*) (InternalEnumerator_1_t1834 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11822_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11823_gshared (InternalEnumerator_1_t1834 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11823(__this, method) (( bool (*) (InternalEnumerator_1_t1834 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11823_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t1833  InternalEnumerator_1_get_Current_m11824_gshared (InternalEnumerator_1_t1834 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11824(__this, method) (( KeyValuePair_2_t1833  (*) (InternalEnumerator_1_t1834 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11824_gshared)(__this, method)
