#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t876;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t686;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t877;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t776;
// System.Security.Cryptography.Oid
struct Oid_t878;
// System.Byte[]
struct ByteU5BU5D_t441;
// System.Security.Cryptography.DSA
struct DSA_t687;
// System.Security.Cryptography.RSA
struct RSA_t680;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4430 (PublicKey_t876 * __this, X509Certificate_t686 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t877 * PublicKey_get_EncodedKeyValue_m4431 (PublicKey_t876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t877 * PublicKey_get_EncodedParameters_m4432 (PublicKey_t876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t776 * PublicKey_get_Key_m4433 (PublicKey_t876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t878 * PublicKey_get_Oid_m4434 (PublicKey_t876 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t441* PublicKey_GetUnsignedBigInteger_m4435 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t687 * PublicKey_DecodeDSA_m4436 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___rawPublicKey, ByteU5BU5D_t441* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t680 * PublicKey_DecodeRSA_m4437 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
