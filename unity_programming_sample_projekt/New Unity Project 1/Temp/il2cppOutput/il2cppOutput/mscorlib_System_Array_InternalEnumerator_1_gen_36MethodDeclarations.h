﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<System.IntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_36.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15259_gshared (InternalEnumerator_1_t2090 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15259(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2090 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15259_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.IntPtr>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15260_gshared (InternalEnumerator_1_t2090 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15260(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2090 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15260_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15261_gshared (InternalEnumerator_1_t2090 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15261(__this, method) (( void (*) (InternalEnumerator_1_t2090 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15261_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.IntPtr>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15262_gshared (InternalEnumerator_1_t2090 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15262(__this, method) (( bool (*) (InternalEnumerator_1_t2090 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15262_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.IntPtr>::get_Current()
extern "C" IntPtr_t InternalEnumerator_1_get_Current_m15263_gshared (InternalEnumerator_1_t2090 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15263(__this, method) (( IntPtr_t (*) (InternalEnumerator_1_t2090 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15263_gshared)(__this, method)
