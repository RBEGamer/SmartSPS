#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
struct DefaultComparer_t2015;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m14408_gshared (DefaultComparer_t2015 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14408(__this, method) (( void (*) (DefaultComparer_t2015 *, const MethodInfo*))DefaultComparer__ctor_m14408_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14409_gshared (DefaultComparer_t2015 * __this, Vector2_t11  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14409(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2015 *, Vector2_t11 , const MethodInfo*))DefaultComparer_GetHashCode_m14409_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14410_gshared (DefaultComparer_t2015 * __this, Vector2_t11  ___x, Vector2_t11  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14410(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2015 *, Vector2_t11 , Vector2_t11 , const MethodInfo*))DefaultComparer_Equals_m14410_gshared)(__this, ___x, ___y, method)
