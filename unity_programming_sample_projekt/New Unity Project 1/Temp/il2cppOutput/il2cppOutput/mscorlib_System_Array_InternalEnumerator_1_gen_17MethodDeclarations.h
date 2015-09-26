﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Vector2>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_17.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13045_gshared (InternalEnumerator_1_t1924 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13045(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1924 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13045_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector2>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13046_gshared (InternalEnumerator_1_t1924 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13046(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1924 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13046_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector2>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13047_gshared (InternalEnumerator_1_t1924 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13047(__this, method) (( void (*) (InternalEnumerator_1_t1924 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13047_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector2>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13048_gshared (InternalEnumerator_1_t1924 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13048(__this, method) (( bool (*) (InternalEnumerator_1_t1924 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13048_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Vector2>::get_Current()
extern "C" Vector2_t11  InternalEnumerator_1_get_Current_m13049_gshared (InternalEnumerator_1_t1924 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13049(__this, method) (( Vector2_t11  (*) (InternalEnumerator_1_t1924 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13049_gshared)(__this, method)
