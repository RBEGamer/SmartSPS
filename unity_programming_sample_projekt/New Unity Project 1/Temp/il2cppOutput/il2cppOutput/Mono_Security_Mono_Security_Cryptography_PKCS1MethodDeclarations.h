#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Byte[]
struct ByteU5BU5D_t444;
// System.Security.Cryptography.RSA
struct RSA_t852;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t843;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m4096 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m4097 (Object_t * __this /* static, unused */, ByteU5BU5D_t444* ___array1, ByteU5BU5D_t444* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t444* PKCS1_I2OSP_m4098 (Object_t * __this /* static, unused */, ByteU5BU5D_t444* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t444* PKCS1_OS2IP_m4099 (Object_t * __this /* static, unused */, ByteU5BU5D_t444* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t444* PKCS1_RSASP1_m4100 (Object_t * __this /* static, unused */, RSA_t852 * ___rsa, ByteU5BU5D_t444* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t444* PKCS1_RSAVP1_m4101 (Object_t * __this /* static, unused */, RSA_t852 * ___rsa, ByteU5BU5D_t444* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t444* PKCS1_Sign_v15_m4102 (Object_t * __this /* static, unused */, RSA_t852 * ___rsa, HashAlgorithm_t843 * ___hash, ByteU5BU5D_t444* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m4103 (Object_t * __this /* static, unused */, RSA_t852 * ___rsa, HashAlgorithm_t843 * ___hash, ByteU5BU5D_t444* ___hashValue, ByteU5BU5D_t444* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m4104 (Object_t * __this /* static, unused */, RSA_t852 * ___rsa, HashAlgorithm_t843 * ___hash, ByteU5BU5D_t444* ___hashValue, ByteU5BU5D_t444* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t444* PKCS1_Encode_v15_m4105 (Object_t * __this /* static, unused */, HashAlgorithm_t843 * ___hash, ByteU5BU5D_t444* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
