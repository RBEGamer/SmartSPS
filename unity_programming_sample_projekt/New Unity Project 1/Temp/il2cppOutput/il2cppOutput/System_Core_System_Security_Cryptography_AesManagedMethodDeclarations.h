﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.AesManaged
struct AesManaged_t633;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t640;
// System.Byte[]
struct ByteU5BU5D_t441;

// System.Void System.Security.Cryptography.AesManaged::.ctor()
extern "C" void AesManaged__ctor_m3183 (AesManaged_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::GenerateIV()
extern "C" void AesManaged_GenerateIV_m3184 (AesManaged_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::GenerateKey()
extern "C" void AesManaged_GenerateKey_m3185 (AesManaged_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * AesManaged_CreateDecryptor_m3186 (AesManaged_t633 * __this, ByteU5BU5D_t441* ___rgbKey, ByteU5BU5D_t441* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * AesManaged_CreateEncryptor_m3187 (AesManaged_t633 * __this, ByteU5BU5D_t441* ___rgbKey, ByteU5BU5D_t441* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesManaged::get_IV()
extern "C" ByteU5BU5D_t441* AesManaged_get_IV_m3188 (AesManaged_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_IV(System.Byte[])
extern "C" void AesManaged_set_IV_m3189 (AesManaged_t633 * __this, ByteU5BU5D_t441* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesManaged::get_Key()
extern "C" ByteU5BU5D_t441* AesManaged_get_Key_m3190 (AesManaged_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_Key(System.Byte[])
extern "C" void AesManaged_set_Key_m3191 (AesManaged_t633 * __this, ByteU5BU5D_t441* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.AesManaged::get_KeySize()
extern "C" int32_t AesManaged_get_KeySize_m3192 (AesManaged_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_KeySize(System.Int32)
extern "C" void AesManaged_set_KeySize_m3193 (AesManaged_t633 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor()
extern "C" Object_t * AesManaged_CreateDecryptor_m3194 (AesManaged_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor()
extern "C" Object_t * AesManaged_CreateEncryptor_m3195 (AesManaged_t633 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::Dispose(System.Boolean)
extern "C" void AesManaged_Dispose_m3196 (AesManaged_t633 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;