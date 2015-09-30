#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1131;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t858;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1132;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t947;
// System.Security.Cryptography.Oid
struct Oid_t1133;
// System.Byte[]
struct ByteU5BU5D_t444;
// System.Security.Cryptography.DSA
struct DSA_t859;
// System.Security.Cryptography.RSA
struct RSA_t852;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m5964 (PublicKey_t1131 * __this, X509Certificate_t858 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1132 * PublicKey_get_EncodedKeyValue_m5965 (PublicKey_t1131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1132 * PublicKey_get_EncodedParameters_m5966 (PublicKey_t1131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t947 * PublicKey_get_Key_m5967 (PublicKey_t1131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1133 * PublicKey_get_Oid_m5968 (PublicKey_t1131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t444* PublicKey_GetUnsignedBigInteger_m5969 (Object_t * __this /* static, unused */, ByteU5BU5D_t444* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t859 * PublicKey_DecodeDSA_m5970 (Object_t * __this /* static, unused */, ByteU5BU5D_t444* ___rawPublicKey, ByteU5BU5D_t444* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t852 * PublicKey_DecodeRSA_m5971 (Object_t * __this /* static, unused */, ByteU5BU5D_t444* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
