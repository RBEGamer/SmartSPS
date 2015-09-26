#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t1476;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t640;
// System.Byte[]
struct ByteU5BU5D_t441;

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
extern "C" void TripleDESCryptoServiceProvider__ctor_m8849 (TripleDESCryptoServiceProvider_t1476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
extern "C" void TripleDESCryptoServiceProvider_GenerateIV_m8850 (TripleDESCryptoServiceProvider_t1476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
extern "C" void TripleDESCryptoServiceProvider_GenerateKey_m8851 (TripleDESCryptoServiceProvider_t1476 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m8852 (TripleDESCryptoServiceProvider_t1476 * __this, ByteU5BU5D_t441* ___rgbKey, ByteU5BU5D_t441* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m8853 (TripleDESCryptoServiceProvider_t1476 * __this, ByteU5BU5D_t441* ___rgbKey, ByteU5BU5D_t441* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
