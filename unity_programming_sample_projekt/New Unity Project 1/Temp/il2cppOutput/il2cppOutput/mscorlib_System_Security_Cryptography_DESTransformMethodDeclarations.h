#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESTransform
struct DESTransform_t1443;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t629;
// System.Byte[]
struct ByteU5BU5D_t441;
// System.UInt32[]
struct UInt32U5BU5D_t635;

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
extern "C" void DESTransform__ctor_m8552 (DESTransform_t1443 * __this, SymmetricAlgorithm_t629 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t441* ___key, ByteU5BU5D_t441* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
extern "C" void DESTransform__cctor_m8553 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
extern "C" uint32_t DESTransform_CipherFunct_m8554 (DESTransform_t1443 * __this, uint32_t ___r, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
extern "C" void DESTransform_Permutation_m8555 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___input, ByteU5BU5D_t441* ___output, UInt32U5BU5D_t635* ___permTab, bool ___preSwap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
extern "C" void DESTransform_BSwap_m8556 (Object_t * __this /* static, unused */, ByteU5BU5D_t441* ___byteBuff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
extern "C" void DESTransform_SetKey_m8557 (DESTransform_t1443 * __this, ByteU5BU5D_t441* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
extern "C" void DESTransform_ProcessBlock_m8558 (DESTransform_t1443 * __this, ByteU5BU5D_t441* ___input, ByteU5BU5D_t441* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void DESTransform_ECB_m8559 (DESTransform_t1443 * __this, ByteU5BU5D_t441* ___input, ByteU5BU5D_t441* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t441* DESTransform_GetStrongKey_m8560 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
