﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_41.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"

// System.Void System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15384_gshared (InternalEnumerator_1_t2102 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15384(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2102 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15384_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15385_gshared (InternalEnumerator_1_t2102 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15385(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2102 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15385_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15386_gshared (InternalEnumerator_1_t2102 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15386(__this, method) (( void (*) (InternalEnumerator_1_t2102 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15386_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15387_gshared (InternalEnumerator_1_t2102 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15387(__this, method) (( bool (*) (InternalEnumerator_1_t2102 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15387_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<UnityEngine.CharacterInfo>::get_Current()
extern "C" CharacterInfo_t495  InternalEnumerator_1_get_Current_m15388_gshared (InternalEnumerator_1_t2102 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15388(__this, method) (( CharacterInfo_t495  (*) (InternalEnumerator_1_t2102 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15388_gshared)(__this, method)