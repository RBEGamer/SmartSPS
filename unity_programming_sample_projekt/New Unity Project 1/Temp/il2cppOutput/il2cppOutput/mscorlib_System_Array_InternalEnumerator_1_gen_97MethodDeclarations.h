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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_97.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"

// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16510_gshared (InternalEnumerator_1_t2230 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16510(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2230 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16510_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16511_gshared (InternalEnumerator_1_t2230 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16511(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2230 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16511_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16512_gshared (InternalEnumerator_1_t2230 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16512(__this, method) (( void (*) (InternalEnumerator_1_t2230 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16512_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16513_gshared (InternalEnumerator_1_t2230 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16513(__this, method) (( bool (*) (InternalEnumerator_1_t2230 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16513_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Current()
extern "C" uint8_t InternalEnumerator_1_get_Current_m16514_gshared (InternalEnumerator_1_t2230 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16514(__this, method) (( uint8_t (*) (InternalEnumerator_1_t2230 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16514_gshared)(__this, method)
