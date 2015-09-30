#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.Touch>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.Touch>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12176_gshared (InternalEnumerator_1_t1980 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12176(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1980 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12176_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Touch>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12177_gshared (InternalEnumerator_1_t1980 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12177(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1980 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12177_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Touch>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12178_gshared (InternalEnumerator_1_t1980 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12178(__this, method) (( void (*) (InternalEnumerator_1_t1980 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12178_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Touch>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12179_gshared (InternalEnumerator_1_t1980 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12179(__this, method) (( bool (*) (InternalEnumerator_1_t1980 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12179_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Touch>::get_Current()
extern "C" Touch_t46  InternalEnumerator_1_get_Current_m12180_gshared (InternalEnumerator_1_t1980 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12180(__this, method) (( Touch_t46  (*) (InternalEnumerator_1_t1980 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12180_gshared)(__this, method)
