﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11719_gshared (InternalEnumerator_1_t1825 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11719(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1825 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11719_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11720_gshared (InternalEnumerator_1_t1825 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11720(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1825 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11720_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11721_gshared (InternalEnumerator_1_t1825 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11721(__this, method) (( void (*) (InternalEnumerator_1_t1825 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11721_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11722_gshared (InternalEnumerator_1_t1825 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11722(__this, method) (( bool (*) (InternalEnumerator_1_t1825 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11722_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::get_Current()
extern "C" RaycastHit_t30  InternalEnumerator_1_get_Current_m11723_gshared (InternalEnumerator_1_t1825 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11723(__this, method) (( RaycastHit_t30  (*) (InternalEnumerator_1_t1825 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11723_gshared)(__this, method)
