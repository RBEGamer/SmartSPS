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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m14236_gshared (InternalEnumerator_1_t2143 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m14236(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2143 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m14236_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14237_gshared (InternalEnumerator_1_t2143 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14237(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2143 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14237_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m14238_gshared (InternalEnumerator_1_t2143 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m14238(__this, method) (( void (*) (InternalEnumerator_1_t2143 *, const MethodInfo*))InternalEnumerator_1_Dispose_m14238_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m14239_gshared (InternalEnumerator_1_t2143 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m14239(__this, method) (( bool (*) (InternalEnumerator_1_t2143 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m14239_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2142  InternalEnumerator_1_get_Current_m14240_gshared (InternalEnumerator_1_t2143 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m14240(__this, method) (( KeyValuePair_2_t2142  (*) (InternalEnumerator_1_t2143 *, const MethodInfo*))InternalEnumerator_1_get_Current_m14240_gshared)(__this, method)
