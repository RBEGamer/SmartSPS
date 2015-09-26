#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t1444;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t640;
// System.Byte[]
struct ByteU5BU5D_t441;

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
extern "C" void DESCryptoServiceProvider__ctor_m8561 (DESCryptoServiceProvider_t1444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateDecryptor_m8562 (DESCryptoServiceProvider_t1444 * __this, ByteU5BU5D_t441* ___rgbKey, ByteU5BU5D_t441* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * DESCryptoServiceProvider_CreateEncryptor_m8563 (DESCryptoServiceProvider_t1444 * __this, ByteU5BU5D_t441* ___rgbKey, ByteU5BU5D_t441* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
extern "C" void DESCryptoServiceProvider_GenerateIV_m8564 (DESCryptoServiceProvider_t1444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
extern "C" void DESCryptoServiceProvider_GenerateKey_m8565 (DESCryptoServiceProvider_t1444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
