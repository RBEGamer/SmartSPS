#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t395;
struct AsyncOperation_t395_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m2498 (AsyncOperation_t395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2499 (AsyncOperation_t395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m2500 (AsyncOperation_t395 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AsyncOperation_t395_marshal(const AsyncOperation_t395& unmarshaled, AsyncOperation_t395_marshaled& marshaled);
extern "C" void AsyncOperation_t395_marshal_back(const AsyncOperation_t395_marshaled& marshaled, AsyncOperation_t395& unmarshaled);
extern "C" void AsyncOperation_t395_marshal_cleanup(AsyncOperation_t395_marshaled& marshaled);
