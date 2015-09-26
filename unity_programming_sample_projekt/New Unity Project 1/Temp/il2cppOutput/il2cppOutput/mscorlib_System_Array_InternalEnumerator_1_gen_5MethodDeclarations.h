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
extern "C" void InternalEnumerator_1__ctor_m10544_gshared (InternalEnumerator_1_t1733 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10544(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1733 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10544_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Touch>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10545_gshared (InternalEnumerator_1_t1733 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10545(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1733 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10545_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Touch>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10546_gshared (InternalEnumerator_1_t1733 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10546(__this, method) (( void (*) (InternalEnumerator_1_t1733 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10546_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Touch>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10547_gshared (InternalEnumerator_1_t1733 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10547(__this, method) (( bool (*) (InternalEnumerator_1_t1733 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10547_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.Touch>::get_Current()
extern "C" Touch_t45  InternalEnumerator_1_get_Current_m10548_gshared (InternalEnumerator_1_t1733 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10548(__this, method) (( Touch_t45  (*) (InternalEnumerator_1_t1733 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10548_gshared)(__this, method)
