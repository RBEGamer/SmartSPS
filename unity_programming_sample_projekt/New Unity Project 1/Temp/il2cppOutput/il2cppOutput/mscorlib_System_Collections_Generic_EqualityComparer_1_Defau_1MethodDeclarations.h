#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t2034;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m12850_gshared (DefaultComparer_t2034 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12850(__this, method) (( void (*) (DefaultComparer_t2034 *, const MethodInfo*))DefaultComparer__ctor_m12850_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12851_gshared (DefaultComparer_t2034 * __this, RaycastResult_t100  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12851(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2034 *, RaycastResult_t100 , const MethodInfo*))DefaultComparer_GetHashCode_m12851_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12852_gshared (DefaultComparer_t2034 * __this, RaycastResult_t100  ___x, RaycastResult_t100  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12852(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2034 *, RaycastResult_t100 , RaycastResult_t100 , const MethodInfo*))DefaultComparer_Equals_m12852_gshared)(__this, ___x, ___y, method)
