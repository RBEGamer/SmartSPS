#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12440_gshared (InternalEnumerator_1_t1884 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12440(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1884 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12440_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12441_gshared (InternalEnumerator_1_t1884 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12441(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1884 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12441_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12442_gshared (InternalEnumerator_1_t1884 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12442(__this, method) (( void (*) (InternalEnumerator_1_t1884 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12442_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12443_gshared (InternalEnumerator_1_t1884 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12443(__this, method) (( bool (*) (InternalEnumerator_1_t1884 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12443_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t1883  InternalEnumerator_1_get_Current_m12444_gshared (InternalEnumerator_1_t1884 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12444(__this, method) (( KeyValuePair_2_t1883  (*) (InternalEnumerator_1_t1884 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12444_gshared)(__this, method)
