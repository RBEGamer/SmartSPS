#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Byte[]
struct ByteU5BU5D_t441;

// System.Byte[] Mono.Security.BitConverterLE::GetUIntBytes(System.Byte*)
extern "C" ByteU5BU5D_t441* BitConverterLE_GetUIntBytes_m6477 (Object_t * __this /* static, unused */, uint8_t* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Int32)
extern "C" ByteU5BU5D_t441* BitConverterLE_GetBytes_m6478 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UShortFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C" void BitConverterLE_UShortFromBytes_m6479 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t441* ___src, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UIntFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C" void BitConverterLE_UIntFromBytes_m6480 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t441* ___src, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::ULongFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C" void BitConverterLE_ULongFromBytes_m6481 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t441* ___src, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.BitConverterLE::ToInt16(System.Byte[],System.Int32)
extern "C" int16_t BitConverterLE_ToInt16_m6482 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.BitConverterLE::ToInt32(System.Byte[],System.Int32)
extern "C" int32_t BitConverterLE_ToInt32_m6483 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Mono.Security.BitConverterLE::ToSingle(System.Byte[],System.Int32)
extern "C" float BitConverterLE_ToSingle_m6484 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Mono.Security.BitConverterLE::ToDouble(System.Byte[],System.Int32)
extern "C" double BitConverterLE_ToDouble_m6485 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
