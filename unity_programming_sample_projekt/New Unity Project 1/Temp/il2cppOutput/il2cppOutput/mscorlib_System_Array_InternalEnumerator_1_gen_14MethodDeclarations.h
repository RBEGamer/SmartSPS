﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_14.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12280_gshared (InternalEnumerator_1_t1865 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12280(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1865 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12280_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector3>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12281_gshared (InternalEnumerator_1_t1865 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12281(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1865 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12281_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12282_gshared (InternalEnumerator_1_t1865 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12282(__this, method) (( void (*) (InternalEnumerator_1_t1865 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12282_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector3>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12283_gshared (InternalEnumerator_1_t1865 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12283(__this, method) (( bool (*) (InternalEnumerator_1_t1865 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12283_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Vector3>::get_Current()
extern "C" Vector3_t10  InternalEnumerator_1_get_Current_m12284_gshared (InternalEnumerator_1_t1865 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12284(__this, method) (( Vector3_t10  (*) (InternalEnumerator_1_t1865 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12284_gshared)(__this, method)