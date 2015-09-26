#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t827;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t776;
// System.Byte[]
struct ByteU5BU5D_t441;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m4213 (RSAPKCS1KeyExchangeFormatter_t827 * __this, AsymmetricAlgorithm_t776 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t441* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m8719 (RSAPKCS1KeyExchangeFormatter_t827 * __this, ByteU5BU5D_t441* ___rgbData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m8720 (RSAPKCS1KeyExchangeFormatter_t827 * __this, AsymmetricAlgorithm_t776 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
