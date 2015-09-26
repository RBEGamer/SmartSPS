#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t584;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t1647;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.DateTimeOffset::.ctor(System.DateTime)
extern "C" void DateTimeOffset__ctor_m9668 (DateTimeOffset_t1561 * __this, DateTime_t54  ___dateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
extern "C" void DateTimeOffset__ctor_m9669 (DateTimeOffset_t1561 * __this, DateTime_t54  ___dateTime, TimeSpan_t896  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
extern "C" void DateTimeOffset__ctor_m9670 (DateTimeOffset_t1561 * __this, int64_t ___ticks, TimeSpan_t896  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DateTimeOffset__ctor_m9671 (DateTimeOffset_t1561 * __this, SerializationInfo_t584 * ___info, StreamingContext_t585  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.cctor()
extern "C" void DateTimeOffset__cctor_m9672 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::System.IComparable.CompareTo(System.Object)
extern "C" int32_t DateTimeOffset_System_IComparable_CompareTo_m9673 (DateTimeOffset_t1561 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData_m9674 (DateTimeOffset_t1561 * __this, SerializationInfo_t584 * ___info, StreamingContext_t585  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m9675 (DateTimeOffset_t1561 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
extern "C" int32_t DateTimeOffset_CompareTo_m9676 (DateTimeOffset_t1561 * __this, DateTimeOffset_t1561  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
extern "C" bool DateTimeOffset_Equals_m9677 (DateTimeOffset_t1561 * __this, DateTimeOffset_t1561  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.Object)
extern "C" bool DateTimeOffset_Equals_m9678 (DateTimeOffset_t1561 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::GetHashCode()
extern "C" int32_t DateTimeOffset_GetHashCode_m9679 (DateTimeOffset_t1561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString()
extern "C" String_t* DateTimeOffset_ToString_m9680 (DateTimeOffset_t1561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
extern "C" String_t* DateTimeOffset_ToString_m9681 (DateTimeOffset_t1561 * __this, String_t* ___format, Object_t * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
extern "C" DateTime_t54  DateTimeOffset_get_DateTime_m9682 (DateTimeOffset_t1561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
extern "C" TimeSpan_t896  DateTimeOffset_get_Offset_m9683 (DateTimeOffset_t1561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
extern "C" DateTime_t54  DateTimeOffset_get_UtcDateTime_m9684 (DateTimeOffset_t1561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
