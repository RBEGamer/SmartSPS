#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1342;
// System.Byte[]
struct ByteU5BU5D_t444;
// System.Security.Cryptography.RSA
struct RSA_t852;
// System.Security.Cryptography.DSA
struct DSA_t859;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m7938 (PrivateKeyInfo_t1342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m7939 (PrivateKeyInfo_t1342 * __this, ByteU5BU5D_t444* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t444* PrivateKeyInfo_get_PrivateKey_m7940 (PrivateKeyInfo_t1342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m7941 (PrivateKeyInfo_t1342 * __this, ByteU5BU5D_t444* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t444* PrivateKeyInfo_RemoveLeadingZero_m7942 (Object_t * __this /* static, unused */, ByteU5BU5D_t444* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t444* PrivateKeyInfo_Normalize_m7943 (Object_t * __this /* static, unused */, ByteU5BU5D_t444* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t852 * PrivateKeyInfo_DecodeRSA_m7944 (Object_t * __this /* static, unused */, ByteU5BU5D_t444* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t859 * PrivateKeyInfo_DecodeDSA_m7945 (Object_t * __this /* static, unused */, ByteU5BU5D_t444* ___privateKey, DSAParameters_t959  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
