#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m13503_gshared (InternalEnumerator_1_t2083 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m13503(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2083 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m13503_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13504_gshared (InternalEnumerator_1_t2083 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13504(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2083 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m13504_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m13505_gshared (InternalEnumerator_1_t2083 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m13505(__this, method) (( void (*) (InternalEnumerator_1_t2083 *, const MethodInfo*))InternalEnumerator_1_Dispose_m13505_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m13506_gshared (InternalEnumerator_1_t2083 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m13506(__this, method) (( bool (*) (InternalEnumerator_1_t2083 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m13506_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::get_Current()
extern "C" RaycastHit2D_t333  InternalEnumerator_1_get_Current_m13507_gshared (InternalEnumerator_1_t2083 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m13507(__this, method) (( RaycastHit2D_t333  (*) (InternalEnumerator_1_t2083 *, const MethodInfo*))InternalEnumerator_1_get_Current_m13507_gshared)(__this, method)
