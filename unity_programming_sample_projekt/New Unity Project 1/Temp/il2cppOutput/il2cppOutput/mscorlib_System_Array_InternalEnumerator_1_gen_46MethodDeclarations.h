#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_46.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17620_gshared (InternalEnumerator_1_t2389 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17620(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2389 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17620_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17621_gshared (InternalEnumerator_1_t2389 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17621(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2389 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17621_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17622_gshared (InternalEnumerator_1_t2389 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17622(__this, method) (( void (*) (InternalEnumerator_1_t2389 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17622_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17623_gshared (InternalEnumerator_1_t2389 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17623(__this, method) (( bool (*) (InternalEnumerator_1_t2389 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17623_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::get_Current()
extern "C" ParameterModifier_t1526  InternalEnumerator_1_get_Current_m17624_gshared (InternalEnumerator_1_t2389 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17624(__this, method) (( ParameterModifier_t1526  (*) (InternalEnumerator_1_t2389 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17624_gshared)(__this, method)
