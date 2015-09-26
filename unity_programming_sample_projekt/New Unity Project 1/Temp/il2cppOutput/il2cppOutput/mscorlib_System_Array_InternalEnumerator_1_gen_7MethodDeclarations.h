#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_7.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10980_gshared (InternalEnumerator_1_t1769 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10980(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1769 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10980_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10981_gshared (InternalEnumerator_1_t1769 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10981(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1769 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10981_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10982_gshared (InternalEnumerator_1_t1769 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10982(__this, method) (( void (*) (InternalEnumerator_1_t1769 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10982_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10983_gshared (InternalEnumerator_1_t1769 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10983(__this, method) (( bool (*) (InternalEnumerator_1_t1769 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10983_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current()
extern "C" RaycastResult_t94  InternalEnumerator_1_get_Current_m10984_gshared (InternalEnumerator_1_t1769 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10984(__this, method) (( RaycastResult_t94  (*) (InternalEnumerator_1_t1769 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10984_gshared)(__this, method)
