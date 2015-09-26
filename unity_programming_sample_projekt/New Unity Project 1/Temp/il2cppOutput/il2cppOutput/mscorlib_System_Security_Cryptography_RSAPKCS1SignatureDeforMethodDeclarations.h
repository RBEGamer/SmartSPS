#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct RSAPKCS1SignatureDeformatter_t803;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t776;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t441;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor()
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m8721 (RSAPKCS1SignatureDeformatter_t803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter__ctor_m4147 (RSAPKCS1SignatureDeformatter_t803 * __this, AsymmetricAlgorithm_t776 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String)
extern "C" void RSAPKCS1SignatureDeformatter_SetHashAlgorithm_m8722 (RSAPKCS1SignatureDeformatter_t803 * __this, String_t* ___strName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1SignatureDeformatter_SetKey_m8723 (RSAPKCS1SignatureDeformatter_t803 * __this, AsymmetricAlgorithm_t776 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool RSAPKCS1SignatureDeformatter_VerifySignature_m8724 (RSAPKCS1SignatureDeformatter_t803 * __this, ByteU5BU5D_t441* ___rgbHash, ByteU5BU5D_t441* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
