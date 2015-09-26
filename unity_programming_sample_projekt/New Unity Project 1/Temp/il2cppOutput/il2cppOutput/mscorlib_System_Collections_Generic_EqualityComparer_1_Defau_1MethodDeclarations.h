#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
struct DefaultComparer_t1817;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m11582_gshared (DefaultComparer_t1817 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11582(__this, method) (( void (*) (DefaultComparer_t1817 *, const MethodInfo*))DefaultComparer__ctor_m11582_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11583_gshared (DefaultComparer_t1817 * __this, int32_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11583(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1817 *, int32_t, const MethodInfo*))DefaultComparer_GetHashCode_m11583_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11584_gshared (DefaultComparer_t1817 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11584(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1817 *, int32_t, int32_t, const MethodInfo*))DefaultComparer_Equals_m11584_gshared)(__this, ___x, ___y, method)
