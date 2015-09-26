#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_81.h"
// System.Reflection.Emit.ILTokenInfo
#include "mscorlib_System_Reflection_Emit_ILTokenInfo.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16422_gshared (InternalEnumerator_1_t2212 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16422(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2212 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16422_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16423_gshared (InternalEnumerator_1_t2212 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16423(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2212 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16423_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16424_gshared (InternalEnumerator_1_t2212 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16424(__this, method) (( void (*) (InternalEnumerator_1_t2212 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16424_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16425_gshared (InternalEnumerator_1_t2212 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16425(__this, method) (( bool (*) (InternalEnumerator_1_t2212 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16425_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::get_Current()
extern "C" ILTokenInfo_t1206  InternalEnumerator_1_get_Current_m16426_gshared (InternalEnumerator_1_t2212 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16426(__this, method) (( ILTokenInfo_t1206  (*) (InternalEnumerator_1_t2212 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16426_gshared)(__this, method)
