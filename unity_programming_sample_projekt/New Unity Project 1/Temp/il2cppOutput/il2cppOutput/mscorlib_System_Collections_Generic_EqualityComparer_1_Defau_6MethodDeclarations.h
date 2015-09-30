#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
struct DefaultComparer_t2274;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m16218_gshared (DefaultComparer_t2274 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16218(__this, method) (( void (*) (DefaultComparer_t2274 *, const MethodInfo*))DefaultComparer__ctor_m16218_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16219_gshared (DefaultComparer_t2274 * __this, Vector2_t11  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16219(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2274 *, Vector2_t11 , const MethodInfo*))DefaultComparer_GetHashCode_m16219_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16220_gshared (DefaultComparer_t2274 * __this, Vector2_t11  ___x, Vector2_t11  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16220(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2274 *, Vector2_t11 , Vector2_t11 , const MethodInfo*))DefaultComparer_Equals_m16220_gshared)(__this, ___x, ___y, method)
