#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t194;
struct Coroutine_t194_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2144 (Coroutine_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2145 (Coroutine_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2146 (Coroutine_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t194_marshal(const Coroutine_t194& unmarshaled, Coroutine_t194_marshaled& marshaled);
extern "C" void Coroutine_t194_marshal_back(const Coroutine_t194_marshaled& marshaled, Coroutine_t194& unmarshaled);
extern "C" void Coroutine_t194_marshal_cleanup(Coroutine_t194_marshaled& marshaled);
