#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t2375;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m17481_gshared (DefaultComparer_t2375 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17481(__this, method) (( void (*) (DefaultComparer_t2375 *, const MethodInfo*))DefaultComparer__ctor_m17481_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17482_gshared (DefaultComparer_t2375 * __this, UILineInfo_t359  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17482(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2375 *, UILineInfo_t359 , const MethodInfo*))DefaultComparer_GetHashCode_m17482_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17483_gshared (DefaultComparer_t2375 * __this, UILineInfo_t359  ___x, UILineInfo_t359  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17483(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2375 *, UILineInfo_t359 , UILineInfo_t359 , const MethodInfo*))DefaultComparer_Equals_m17483_gshared)(__this, ___x, ___y, method)
