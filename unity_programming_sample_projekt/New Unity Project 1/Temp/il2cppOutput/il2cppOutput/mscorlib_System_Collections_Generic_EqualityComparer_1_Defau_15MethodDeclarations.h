#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2543;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m18905_gshared (DefaultComparer_t2543 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18905(__this, method) (( void (*) (DefaultComparer_t2543 *, const MethodInfo*))DefaultComparer__ctor_m18905_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18906_gshared (DefaultComparer_t2543 * __this, TimeSpan_t1151  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18906(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2543 *, TimeSpan_t1151 , const MethodInfo*))DefaultComparer_GetHashCode_m18906_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18907_gshared (DefaultComparer_t2543 * __this, TimeSpan_t1151  ___x, TimeSpan_t1151  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18907(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2543 *, TimeSpan_t1151 , TimeSpan_t1151 , const MethodInfo*))DefaultComparer_Equals_m18907_gshared)(__this, ___x, ___y, method)
