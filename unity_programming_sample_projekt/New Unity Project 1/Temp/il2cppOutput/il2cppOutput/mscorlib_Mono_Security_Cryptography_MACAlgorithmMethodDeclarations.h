#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t1340;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t806;
// System.Byte[]
struct ByteU5BU5D_t444;

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C" void MACAlgorithm__ctor_m7922 (MACAlgorithm_t1340 * __this, SymmetricAlgorithm_t806 * ___algorithm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C" void MACAlgorithm_Initialize_m7923 (MACAlgorithm_t1340 * __this, ByteU5BU5D_t444* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void MACAlgorithm_Core_m7924 (MACAlgorithm_t1340 * __this, ByteU5BU5D_t444* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C" ByteU5BU5D_t444* MACAlgorithm_Final_m7925 (MACAlgorithm_t1340 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
