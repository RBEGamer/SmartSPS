#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t652;
// Mono.Math.BigInteger
struct BigInteger_t653;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m3225 (ModulusRing_t652 * __this, BigInteger_t653 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m3226 (ModulusRing_t652 * __this, BigInteger_t653 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t653 * ModulusRing_Multiply_m3227 (ModulusRing_t652 * __this, BigInteger_t653 * ___a, BigInteger_t653 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t653 * ModulusRing_Difference_m3228 (ModulusRing_t652 * __this, BigInteger_t653 * ___a, BigInteger_t653 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t653 * ModulusRing_Pow_m3229 (ModulusRing_t652 * __this, BigInteger_t653 * ___a, BigInteger_t653 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t653 * ModulusRing_Pow_m3230 (ModulusRing_t652 * __this, uint32_t ___b, BigInteger_t653 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
