#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1647;
// System.Int32[]
struct Int32U5BU5D_t388;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1147;
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
extern "C" void Decimal__ctor_m5614 (Decimal_t1010 * __this, int32_t ___lo, int32_t ___mid, int32_t ___hi, bool ___isNegative, uint8_t ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int32)
extern "C" void Decimal__ctor_m5615 (Decimal_t1010 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt32)
extern "C" void Decimal__ctor_m5616 (Decimal_t1010 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int64)
extern "C" void Decimal__ctor_m5617 (Decimal_t1010 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt64)
extern "C" void Decimal__ctor_m5618 (Decimal_t1010 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Single)
extern "C" void Decimal__ctor_m5619 (Decimal_t1010 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Double)
extern "C" void Decimal__ctor_m5620 (Decimal_t1010 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.cctor()
extern "C" void Decimal__cctor_m5621 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Decimal::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Decimal_System_IConvertible_ToType_m5622 (Decimal_t1010 * __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Decimal_System_IConvertible_ToBoolean_m5623 (Decimal_t1010 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Decimal_System_IConvertible_ToByte_m5624 (Decimal_t1010 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Decimal::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Decimal_System_IConvertible_ToChar_m5625 (Decimal_t1010 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Decimal::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t54  Decimal_System_IConvertible_ToDateTime_m5626 (Decimal_t1010 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t1010  Decimal_System_IConvertible_ToDecimal_m5627 (Decimal_t1010 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Decimal_System_IConvertible_ToDouble_m5628 (Decimal_t1010 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Decimal_System_IConvertible_ToInt16_m5629 (Decimal_t1010 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Decimal_System_IConvertible_ToInt32_m5630 (Decimal_t1010 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Decimal_System_IConvertible_ToInt64_m5631 (Decimal_t1010 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Decimal_System_IConvertible_ToSByte_m5632 (Decimal_t1010 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Decimal_System_IConvertible_ToSingle_m5633 (Decimal_t1010 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Decimal_System_IConvertible_ToUInt16_m5634 (Decimal_t1010 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Decimal_System_IConvertible_ToUInt32_m5635 (Decimal_t1010 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Decimal_System_IConvertible_ToUInt64_m5636 (Decimal_t1010 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Decimal::GetBits(System.Decimal)
extern "C" Int32U5BU5D_t388* Decimal_GetBits_m5637 (Object_t * __this /* static, unused */, Decimal_t1010  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Add(System.Decimal,System.Decimal)
extern "C" Decimal_t1010  Decimal_Add_m5638 (Object_t * __this /* static, unused */, Decimal_t1010  ___d1, Decimal_t1010  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Subtract(System.Decimal,System.Decimal)
extern "C" Decimal_t1010  Decimal_Subtract_m5639 (Object_t * __this /* static, unused */, Decimal_t1010  ___d1, Decimal_t1010  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::GetHashCode()
extern "C" int32_t Decimal_GetHashCode_m5640 (Decimal_t1010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::u64(System.Decimal)
extern "C" uint64_t Decimal_u64_m5641 (Object_t * __this /* static, unused */, Decimal_t1010  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::s64(System.Decimal)
extern "C" int64_t Decimal_s64_m5642 (Object_t * __this /* static, unused */, Decimal_t1010  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal,System.Decimal)
extern "C" bool Decimal_Equals_m5643 (Object_t * __this /* static, unused */, Decimal_t1010  ___d1, Decimal_t1010  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Object)
extern "C" bool Decimal_Equals_m5644 (Decimal_t1010 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::IsZero()
extern "C" bool Decimal_IsZero_m5645 (Decimal_t1010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Floor(System.Decimal)
extern "C" Decimal_t1010  Decimal_Floor_m5646 (Object_t * __this /* static, unused */, Decimal_t1010  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Multiply(System.Decimal,System.Decimal)
extern "C" Decimal_t1010  Decimal_Multiply_m5647 (Object_t * __this /* static, unused */, Decimal_t1010  ___d1, Decimal_t1010  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Divide(System.Decimal,System.Decimal)
extern "C" Decimal_t1010  Decimal_Divide_m5648 (Object_t * __this /* static, unused */, Decimal_t1010  ___d1, Decimal_t1010  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::Compare(System.Decimal,System.Decimal)
extern "C" int32_t Decimal_Compare_m5649 (Object_t * __this /* static, unused */, Decimal_t1010  ___d1, Decimal_t1010  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Object)
extern "C" int32_t Decimal_CompareTo_m5650 (Decimal_t1010 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Decimal)
extern "C" int32_t Decimal_CompareTo_m5651 (Decimal_t1010 * __this, Decimal_t1010  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal)
extern "C" bool Decimal_Equals_m5652 (Decimal_t1010 * __this, Decimal_t1010  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.IFormatProvider)
extern "C" Decimal_t1010  Decimal_Parse_m5653 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowAtPos(System.Int32)
extern "C" void Decimal_ThrowAtPos_m5654 (Object_t * __this /* static, unused */, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowInvalidExp()
extern "C" void Decimal_ThrowInvalidExp_m5655 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::stripStyles(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.Int32&,System.Boolean&,System.Boolean&,System.Int32&,System.Boolean)
extern "C" String_t* Decimal_stripStyles_m5656 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, NumberFormatInfo_t1147 * ___nfi, int32_t* ___decPos, bool* ___isNegative, bool* ___expFlag, int32_t* ___exp, bool ___throwex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" Decimal_t1010  Decimal_Parse_m5657 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::PerformParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&,System.Boolean)
extern "C" bool Decimal_PerformParse_m5658 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, Decimal_t1010 * ___res, bool ___throwex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Decimal_ToString_m5659 (Decimal_t1010 * __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString()
extern "C" String_t* Decimal_ToString_m5660 (Decimal_t1010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.IFormatProvider)
extern "C" String_t* Decimal_ToString_m5661 (Decimal_t1010 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2UInt64(System.Decimal&,System.UInt64&)
extern "C" int32_t Decimal_decimal2UInt64_m5662 (Object_t * __this /* static, unused */, Decimal_t1010 * ___val, uint64_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2Int64(System.Decimal&,System.Int64&)
extern "C" int32_t Decimal_decimal2Int64_m5663 (Object_t * __this /* static, unused */, Decimal_t1010 * ___val, int64_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalIncr(System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalIncr_m5664 (Object_t * __this /* static, unused */, Decimal_t1010 * ___d1, Decimal_t1010 * ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::string2decimal(System.Decimal&,System.String,System.UInt32,System.Int32)
extern "C" int32_t Decimal_string2decimal_m5665 (Object_t * __this /* static, unused */, Decimal_t1010 * ___val, String_t* ___sDigits, uint32_t ___decPos, int32_t ___sign, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalSetExponent(System.Decimal&,System.Int32)
extern "C" int32_t Decimal_decimalSetExponent_m5666 (Object_t * __this /* static, unused */, Decimal_t1010 * ___val, int32_t ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::decimal2double(System.Decimal&)
extern "C" double Decimal_decimal2double_m5667 (Object_t * __this /* static, unused */, Decimal_t1010 * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::decimalFloorAndTrunc(System.Decimal&,System.Int32)
extern "C" void Decimal_decimalFloorAndTrunc_m5668 (Object_t * __this /* static, unused */, Decimal_t1010 * ___val, int32_t ___floorFlag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalMult(System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalMult_m5669 (Object_t * __this /* static, unused */, Decimal_t1010 * ___pd1, Decimal_t1010 * ___pd2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalDiv(System.Decimal&,System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalDiv_m5670 (Object_t * __this /* static, unused */, Decimal_t1010 * ___pc, Decimal_t1010 * ___pa, Decimal_t1010 * ___pb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalCompare(System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalCompare_m5671 (Object_t * __this /* static, unused */, Decimal_t1010 * ___d1, Decimal_t1010 * ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Increment(System.Decimal)
extern "C" Decimal_t1010  Decimal_op_Increment_m5672 (Object_t * __this /* static, unused */, Decimal_t1010  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
extern "C" Decimal_t1010  Decimal_op_Subtraction_m5673 (Object_t * __this /* static, unused */, Decimal_t1010  ___d1, Decimal_t1010  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
extern "C" Decimal_t1010  Decimal_op_Multiply_m5674 (Object_t * __this /* static, unused */, Decimal_t1010  ___d1, Decimal_t1010  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
extern "C" Decimal_t1010  Decimal_op_Division_m5675 (Object_t * __this /* static, unused */, Decimal_t1010  ___d1, Decimal_t1010  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::op_Explicit(System.Decimal)
extern "C" uint8_t Decimal_op_Explicit_m5676 (Object_t * __this /* static, unused */, Decimal_t1010  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::op_Explicit(System.Decimal)
extern "C" int8_t Decimal_op_Explicit_m5677 (Object_t * __this /* static, unused */, Decimal_t1010  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::op_Explicit(System.Decimal)
extern "C" int16_t Decimal_op_Explicit_m5678 (Object_t * __this /* static, unused */, Decimal_t1010  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::op_Explicit(System.Decimal)
extern "C" uint16_t Decimal_op_Explicit_m5679 (Object_t * __this /* static, unused */, Decimal_t1010  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
extern "C" int32_t Decimal_op_Explicit_m5680 (Object_t * __this /* static, unused */, Decimal_t1010  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::op_Explicit(System.Decimal)
extern "C" uint32_t Decimal_op_Explicit_m5681 (Object_t * __this /* static, unused */, Decimal_t1010  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
extern "C" int64_t Decimal_op_Explicit_m5682 (Object_t * __this /* static, unused */, Decimal_t1010  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::op_Explicit(System.Decimal)
extern "C" uint64_t Decimal_op_Explicit_m5683 (Object_t * __this /* static, unused */, Decimal_t1010  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Byte)
extern "C" Decimal_t1010  Decimal_op_Implicit_m5684 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.SByte)
extern "C" Decimal_t1010  Decimal_op_Implicit_m5685 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int16)
extern "C" Decimal_t1010  Decimal_op_Implicit_m5686 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt16)
extern "C" Decimal_t1010  Decimal_op_Implicit_m5687 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
extern "C" Decimal_t1010  Decimal_op_Implicit_m5688 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt32)
extern "C" Decimal_t1010  Decimal_op_Implicit_m5689 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
extern "C" Decimal_t1010  Decimal_op_Implicit_m5690 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
extern "C" Decimal_t1010  Decimal_op_Implicit_m5691 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Single)
extern "C" Decimal_t1010  Decimal_op_Explicit_m5692 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Double)
extern "C" Decimal_t1010  Decimal_op_Explicit_m5693 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::op_Explicit(System.Decimal)
extern "C" float Decimal_op_Explicit_m5694 (Object_t * __this /* static, unused */, Decimal_t1010  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::op_Explicit(System.Decimal)
extern "C" double Decimal_op_Explicit_m5695 (Object_t * __this /* static, unused */, Decimal_t1010  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_Inequality_m5696 (Object_t * __this /* static, unused */, Decimal_t1010  ___d1, Decimal_t1010  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_Equality_m5697 (Object_t * __this /* static, unused */, Decimal_t1010  ___d1, Decimal_t1010  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_GreaterThan(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_GreaterThan_m5698 (Object_t * __this /* static, unused */, Decimal_t1010  ___d1, Decimal_t1010  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_LessThan(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_LessThan_m5699 (Object_t * __this /* static, unused */, Decimal_t1010  ___d1, Decimal_t1010  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
