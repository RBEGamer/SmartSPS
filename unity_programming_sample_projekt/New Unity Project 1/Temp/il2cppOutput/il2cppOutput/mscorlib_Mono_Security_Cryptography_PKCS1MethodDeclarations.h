#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Byte[]
struct ByteU5BU5D_t441;
// System.Security.Cryptography.RSA
struct RSA_t680;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t627;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t671;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m6321 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m6322 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___array1, ByteU5BU5D_t441* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t441* PKCS1_I2OSP_m6323 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t441* PKCS1_OS2IP_m6324 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t441* PKCS1_RSAEP_m6325 (Object_t * __this /* static, unused */, RSA_t680 * ___rsa, ByteU5BU5D_t441* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t441* PKCS1_RSASP1_m6326 (Object_t * __this /* static, unused */, RSA_t680 * ___rsa, ByteU5BU5D_t441* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t441* PKCS1_RSAVP1_m6327 (Object_t * __this /* static, unused */, RSA_t680 * ___rsa, ByteU5BU5D_t441* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
extern "C" ByteU5BU5D_t441* PKCS1_Encrypt_v15_m6328 (Object_t * __this /* static, unused */, RSA_t680 * ___rsa, RandomNumberGenerator_t627 * ___rng, ByteU5BU5D_t441* ___M, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t441* PKCS1_Sign_v15_m6329 (Object_t * __this /* static, unused */, RSA_t680 * ___rsa, HashAlgorithm_t671 * ___hash, ByteU5BU5D_t441* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m6330 (Object_t * __this /* static, unused */, RSA_t680 * ___rsa, HashAlgorithm_t671 * ___hash, ByteU5BU5D_t441* ___hashValue, ByteU5BU5D_t441* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m6331 (Object_t * __this /* static, unused */, RSA_t680 * ___rsa, HashAlgorithm_t671 * ___hash, ByteU5BU5D_t441* ___hashValue, ByteU5BU5D_t441* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t441* PKCS1_Encode_v15_m6332 (Object_t * __this /* static, unused */, HashAlgorithm_t671 * ___hash, ByteU5BU5D_t441* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
