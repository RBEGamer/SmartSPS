#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_42.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17205_gshared (InternalEnumerator_1_t2361 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17205(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2361 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17205_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17206_gshared (InternalEnumerator_1_t2361 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17206(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2361 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17206_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17207_gshared (InternalEnumerator_1_t2361 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17207(__this, method) (( void (*) (InternalEnumerator_1_t2361 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17207_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17208_gshared (InternalEnumerator_1_t2361 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17208(__this, method) (( bool (*) (InternalEnumerator_1_t2361 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17208_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::get_Current()
extern "C" CharacterInfo_t498  InternalEnumerator_1_get_Current_m17209_gshared (InternalEnumerator_1_t2361 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17209(__this, method) (( CharacterInfo_t498  (*) (InternalEnumerator_1_t2361 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17209_gshared)(__this, method)
