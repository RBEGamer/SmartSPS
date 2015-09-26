#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t392;
struct AsyncOperation_t392_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m2486 (AsyncOperation_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2487 (AsyncOperation_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m2488 (AsyncOperation_t392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AsyncOperation_t392_marshal(const AsyncOperation_t392& unmarshaled, AsyncOperation_t392_marshaled& marshaled);
extern "C" void AsyncOperation_t392_marshal_back(const AsyncOperation_t392_marshaled& marshaled, AsyncOperation_t392& unmarshaled);
extern "C" void AsyncOperation_t392_marshal_cleanup(AsyncOperation_t392_marshaled& marshaled);
