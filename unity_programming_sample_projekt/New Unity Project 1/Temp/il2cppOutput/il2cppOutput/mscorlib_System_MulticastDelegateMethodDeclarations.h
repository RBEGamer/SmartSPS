#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t190;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t587;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1896;
// System.Delegate
struct Delegate_t349;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m7368 (MulticastDelegate_t190 * __this, SerializationInfo_t587 * ___info, StreamingContext_t588  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m7369 (MulticastDelegate_t190 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m7370 (MulticastDelegate_t190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1896* MulticastDelegate_GetInvocationList_m7371 (MulticastDelegate_t190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t349 * MulticastDelegate_CombineImpl_m7372 (MulticastDelegate_t190 * __this, Delegate_t349 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m7373 (MulticastDelegate_t190 * __this, MulticastDelegate_t190 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t190 * MulticastDelegate_KPM_m7374 (Object_t * __this /* static, unused */, MulticastDelegate_t190 * ___needle, MulticastDelegate_t190 * ___haystack, MulticastDelegate_t190 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t349 * MulticastDelegate_RemoveImpl_m7375 (MulticastDelegate_t190 * __this, Delegate_t349 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
