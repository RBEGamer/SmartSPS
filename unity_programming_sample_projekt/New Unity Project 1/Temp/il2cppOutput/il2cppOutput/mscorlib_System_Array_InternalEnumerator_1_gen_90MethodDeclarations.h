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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_90.h"
// System.Reflection.Emit.ILTokenInfo
#include "mscorlib_System_Reflection_Emit_ILTokenInfo.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18638_gshared (InternalEnumerator_1_t2502 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18638(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2502 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18638_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18639_gshared (InternalEnumerator_1_t2502 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18639(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2502 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18639_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18640_gshared (InternalEnumerator_1_t2502 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18640(__this, method) (( void (*) (InternalEnumerator_1_t2502 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18640_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18641_gshared (InternalEnumerator_1_t2502 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18641(__this, method) (( bool (*) (InternalEnumerator_1_t2502 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18641_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::get_Current()
extern "C" ILTokenInfo_t1465  InternalEnumerator_1_get_Current_m18642_gshared (InternalEnumerator_1_t2502 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18642(__this, method) (( ILTokenInfo_t1465  (*) (InternalEnumerator_1_t2502 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18642_gshared)(__this, method)
