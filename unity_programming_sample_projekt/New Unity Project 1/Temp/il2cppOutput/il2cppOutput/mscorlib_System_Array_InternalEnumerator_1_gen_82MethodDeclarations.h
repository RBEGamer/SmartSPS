#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_82.h"
// System.Reflection.Emit.ILGenerator/LabelData
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelData.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16427_gshared (InternalEnumerator_1_t2213 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16427(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2213 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16427_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16428_gshared (InternalEnumerator_1_t2213 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16428(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2213 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16428_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16429_gshared (InternalEnumerator_1_t2213 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16429(__this, method) (( void (*) (InternalEnumerator_1_t2213 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16429_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16430_gshared (InternalEnumerator_1_t2213 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16430(__this, method) (( bool (*) (InternalEnumerator_1_t2213 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16430_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::get_Current()
extern "C" LabelData_t1208  InternalEnumerator_1_get_Current_m16431_gshared (InternalEnumerator_1_t2213 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16431(__this, method) (( LabelData_t1208  (*) (InternalEnumerator_1_t2213 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16431_gshared)(__this, method)
