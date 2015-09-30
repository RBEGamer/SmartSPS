#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_106.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"

// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18726_gshared (InternalEnumerator_1_t2520 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18726(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2520 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18726_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18727_gshared (InternalEnumerator_1_t2520 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18727(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2520 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18727_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18728_gshared (InternalEnumerator_1_t2520 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18728(__this, method) (( void (*) (InternalEnumerator_1_t2520 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18728_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18729_gshared (InternalEnumerator_1_t2520 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18729(__this, method) (( bool (*) (InternalEnumerator_1_t2520 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18729_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Current()
extern "C" uint8_t InternalEnumerator_1_get_Current_m18730_gshared (InternalEnumerator_1_t2520 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18730(__this, method) (( uint8_t (*) (InternalEnumerator_1_t2520 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18730_gshared)(__this, method)
