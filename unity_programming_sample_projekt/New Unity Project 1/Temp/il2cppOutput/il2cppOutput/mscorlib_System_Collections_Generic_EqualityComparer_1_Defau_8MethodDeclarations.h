#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t2116;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m15658_gshared (DefaultComparer_t2116 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15658(__this, method) (( void (*) (DefaultComparer_t2116 *, const MethodInfo*))DefaultComparer__ctor_m15658_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15659_gshared (DefaultComparer_t2116 * __this, UILineInfo_t356  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15659(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2116 *, UILineInfo_t356 , const MethodInfo*))DefaultComparer_GetHashCode_m15659_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15660_gshared (DefaultComparer_t2116 * __this, UILineInfo_t356  ___x, UILineInfo_t356  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15660(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2116 *, UILineInfo_t356 , UILineInfo_t356 , const MethodInfo*))DefaultComparer_Equals_m15660_gshared)(__this, ___x, ___y, method)
