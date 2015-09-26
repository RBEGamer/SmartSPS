#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t185;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t584;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1649;
// System.Delegate
struct Delegate_t346;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m5759 (MulticastDelegate_t185 * __this, SerializationInfo_t584 * ___info, StreamingContext_t585  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m5760 (MulticastDelegate_t185 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m5761 (MulticastDelegate_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1649* MulticastDelegate_GetInvocationList_m5762 (MulticastDelegate_t185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t346 * MulticastDelegate_CombineImpl_m5763 (MulticastDelegate_t185 * __this, Delegate_t346 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m5764 (MulticastDelegate_t185 * __this, MulticastDelegate_t185 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t185 * MulticastDelegate_KPM_m5765 (Object_t * __this /* static, unused */, MulticastDelegate_t185 * ___needle, MulticastDelegate_t185 * ___haystack, MulticastDelegate_t185 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t346 * MulticastDelegate_RemoveImpl_m5766 (MulticastDelegate_t185 * __this, Delegate_t346 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
