﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DBNull
struct DBNull_t1558;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t584;
// System.IFormatProvider
struct IFormatProvider_t1647;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.DBNull::.ctor()
extern "C" void DBNull__ctor_m9576 (DBNull_t1558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DBNull::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DBNull__ctor_m9577 (DBNull_t1558 * __this, SerializationInfo_t584 * ___info, StreamingContext_t585  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DBNull::.cctor()
extern "C" void DBNull__cctor_m9578 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DBNull::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool DBNull_System_IConvertible_ToBoolean_m9579 (DBNull_t1558 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.DBNull::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t DBNull_System_IConvertible_ToByte_m9580 (DBNull_t1558 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.DBNull::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t DBNull_System_IConvertible_ToChar_m9581 (DBNull_t1558 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DBNull::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t54  DBNull_System_IConvertible_ToDateTime_m9582 (DBNull_t1558 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.DBNull::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t1010  DBNull_System_IConvertible_ToDecimal_m9583 (DBNull_t1558 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.DBNull::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double DBNull_System_IConvertible_ToDouble_m9584 (DBNull_t1558 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.DBNull::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t DBNull_System_IConvertible_ToInt16_m9585 (DBNull_t1558 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DBNull::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t DBNull_System_IConvertible_ToInt32_m9586 (DBNull_t1558 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DBNull::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t DBNull_System_IConvertible_ToInt64_m9587 (DBNull_t1558 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.DBNull::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t DBNull_System_IConvertible_ToSByte_m9588 (DBNull_t1558 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.DBNull::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float DBNull_System_IConvertible_ToSingle_m9589 (DBNull_t1558 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DBNull::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * DBNull_System_IConvertible_ToType_m9590 (DBNull_t1558 * __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.DBNull::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t DBNull_System_IConvertible_ToUInt16_m9591 (DBNull_t1558 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.DBNull::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t DBNull_System_IConvertible_ToUInt32_m9592 (DBNull_t1558 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.DBNull::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t DBNull_System_IConvertible_ToUInt64_m9593 (DBNull_t1558 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DBNull::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DBNull_GetObjectData_m9594 (DBNull_t1558 * __this, SerializationInfo_t584 * ___info, StreamingContext_t585  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DBNull::ToString()
extern "C" String_t* DBNull_ToString_m9595 (DBNull_t1558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DBNull::ToString(System.IFormatProvider)
extern "C" String_t* DBNull_ToString_m9596 (DBNull_t1558 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
