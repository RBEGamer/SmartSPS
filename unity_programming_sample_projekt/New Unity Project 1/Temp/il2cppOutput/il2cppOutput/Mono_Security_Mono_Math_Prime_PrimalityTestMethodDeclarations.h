﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t775;
// System.Object
struct Object_t;
// Mono.Math.BigInteger
struct BigInteger_t653;
// System.IAsyncResult
struct IAsyncResult_t186;
// System.AsyncCallback
struct AsyncCallback_t187;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Mono.Math.Prime.ConfidenceFactor
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"

// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern "C" void PrimalityTest__ctor_m4073 (PrimalityTest_t775 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C" bool PrimalityTest_Invoke_m4074 (PrimalityTest_t775 * __this, BigInteger_t653 * ___bi, int32_t ___confidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.ConfidenceFactor
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"
extern "C" bool pinvoke_delegate_wrapper_PrimalityTest_t775(Il2CppObject* delegate, BigInteger_t653 * ___bi, int32_t ___confidence);
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern "C" Object_t * PrimalityTest_BeginInvoke_m4075 (PrimalityTest_t775 * __this, BigInteger_t653 * ___bi, int32_t ___confidence, AsyncCallback_t187 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern "C" bool PrimalityTest_EndInvoke_m4076 (PrimalityTest_t775 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;