#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_t1732;
// System.Security.Cryptography.TripleDES
struct TripleDES_t979;
// System.Byte[]
struct ByteU5BU5D_t444;

// System.Void System.Security.Cryptography.TripleDESTransform::.ctor(System.Security.Cryptography.TripleDES,System.Boolean,System.Byte[],System.Byte[])
extern "C" void TripleDESTransform__ctor_m10518 (TripleDESTransform_t1732 * __this, TripleDES_t979 * ___algo, bool ___encryption, ByteU5BU5D_t444* ___key, ByteU5BU5D_t444* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void TripleDESTransform_ECB_m10519 (TripleDESTransform_t1732 * __this, ByteU5BU5D_t444* ___input, ByteU5BU5D_t444* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t444* TripleDESTransform_GetStrongKey_m10520 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
