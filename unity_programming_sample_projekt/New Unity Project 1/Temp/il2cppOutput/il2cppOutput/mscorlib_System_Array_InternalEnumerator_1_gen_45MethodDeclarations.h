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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_45.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15795_gshared (InternalEnumerator_1_t2130 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15795(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2130 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15795_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15796_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15796(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2130 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15796_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15797_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15797(__this, method) (( void (*) (InternalEnumerator_1_t2130 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15797_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15798_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15798(__this, method) (( bool (*) (InternalEnumerator_1_t2130 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15798_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.ParameterModifier>::get_Current()
extern "C" ParameterModifier_t1267  InternalEnumerator_1_get_Current_m15799_gshared (InternalEnumerator_1_t2130 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15799(__this, method) (( ParameterModifier_t1267  (*) (InternalEnumerator_1_t2130 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15799_gshared)(__this, method)
