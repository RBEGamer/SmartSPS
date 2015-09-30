#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t199;
struct Coroutine_t199_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2157 (Coroutine_t199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2158 (Coroutine_t199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2159 (Coroutine_t199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t199_marshal(const Coroutine_t199& unmarshaled, Coroutine_t199_marshaled& marshaled);
extern "C" void Coroutine_t199_marshal_back(const Coroutine_t199_marshaled& marshaled, Coroutine_t199& unmarshaled);
extern "C" void Coroutine_t199_marshal_cleanup(Coroutine_t199_marshaled& marshaled);
