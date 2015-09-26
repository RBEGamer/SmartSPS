#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2252;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m16682_gshared (DefaultComparer_t2252 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16682(__this, method) (( void (*) (DefaultComparer_t2252 *, const MethodInfo*))DefaultComparer__ctor_m16682_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16683_gshared (DefaultComparer_t2252 * __this, TimeSpan_t896  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16683(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2252 *, TimeSpan_t896 , const MethodInfo*))DefaultComparer_GetHashCode_m16683_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16684_gshared (DefaultComparer_t2252 * __this, TimeSpan_t896  ___x, TimeSpan_t896  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16684(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2252 *, TimeSpan_t896 , TimeSpan_t896 , const MethodInfo*))DefaultComparer_Equals_m16684_gshared)(__this, ___x, ___y, method)
