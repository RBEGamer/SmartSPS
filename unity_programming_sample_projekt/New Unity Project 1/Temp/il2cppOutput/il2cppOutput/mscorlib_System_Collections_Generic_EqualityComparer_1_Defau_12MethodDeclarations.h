#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2248;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m16665_gshared (DefaultComparer_t2248 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16665(__this, method) (( void (*) (DefaultComparer_t2248 *, const MethodInfo*))DefaultComparer__ctor_m16665_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16666_gshared (DefaultComparer_t2248 * __this, Guid_t1583  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16666(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2248 *, Guid_t1583 , const MethodInfo*))DefaultComparer_GetHashCode_m16666_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16667_gshared (DefaultComparer_t2248 * __this, Guid_t1583  ___x, Guid_t1583  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16667(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2248 *, Guid_t1583 , Guid_t1583 , const MethodInfo*))DefaultComparer_Equals_m16667_gshared)(__this, ___x, ___y, method)
