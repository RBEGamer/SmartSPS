#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t1704;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m10186_gshared (GenericEqualityComparer_1_t1704 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m10186(__this, method) (( void (*) (GenericEqualityComparer_1_t1704 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m10186_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m16658_gshared (GenericEqualityComparer_1_t1704 * __this, Guid_t1583  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m16658(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1704 *, Guid_t1583 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m16658_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m16659_gshared (GenericEqualityComparer_1_t1704 * __this, Guid_t1583  ___x, Guid_t1583  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m16659(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1704 *, Guid_t1583 , Guid_t1583 , const MethodInfo*))GenericEqualityComparer_1_Equals_m16659_gshared)(__this, ___x, ___y, method)
