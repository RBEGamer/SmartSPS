#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t664;
// Mono.Security.ASN1
struct ASN1_t659;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t663;
// System.Byte[]
struct ByteU5BU5D_t441;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m3332 (EncryptedData_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m3333 (EncryptedData_t664 * __this, ASN1_t659 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t663 * EncryptedData_get_EncryptionAlgorithm_m3334 (EncryptedData_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t441* EncryptedData_get_EncryptedContent_m3335 (EncryptedData_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
