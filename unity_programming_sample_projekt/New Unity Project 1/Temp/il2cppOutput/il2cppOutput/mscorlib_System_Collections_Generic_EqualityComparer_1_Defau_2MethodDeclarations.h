#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t1901;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m12726_gshared (DefaultComparer_t1901 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12726(__this, method) (( void (*) (DefaultComparer_t1901 *, const MethodInfo*))DefaultComparer__ctor_m12726_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12727_gshared (DefaultComparer_t1901 * __this, UIVertex_t199  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12727(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1901 *, UIVertex_t199 , const MethodInfo*))DefaultComparer_GetHashCode_m12727_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12728_gshared (DefaultComparer_t1901 * __this, UIVertex_t199  ___x, UIVertex_t199  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12728(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1901 *, UIVertex_t199 , UIVertex_t199 , const MethodInfo*))DefaultComparer_Equals_m12728_gshared)(__this, ___x, ___y, method)
