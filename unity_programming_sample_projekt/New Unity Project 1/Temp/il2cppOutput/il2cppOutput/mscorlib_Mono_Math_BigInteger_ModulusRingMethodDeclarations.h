﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1071;
// Mono.Math.BigInteger
struct BigInteger_t1072;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m6180 (ModulusRing_t1071 * __this, BigInteger_t1072 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m6181 (ModulusRing_t1071 * __this, BigInteger_t1072 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1072 * ModulusRing_Multiply_m6182 (ModulusRing_t1071 * __this, BigInteger_t1072 * ___a, BigInteger_t1072 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1072 * ModulusRing_Difference_m6183 (ModulusRing_t1071 * __this, BigInteger_t1072 * ___a, BigInteger_t1072 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1072 * ModulusRing_Pow_m6184 (ModulusRing_t1071 * __this, BigInteger_t1072 * ___a, BigInteger_t1072 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1072 * ModulusRing_Pow_m6185 (ModulusRing_t1071 * __this, uint32_t ___b, BigInteger_t1072 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
