#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t337;
struct WaitForSeconds_t337_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m1722 (WaitForSeconds_t337 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void WaitForSeconds_t337_marshal(const WaitForSeconds_t337& unmarshaled, WaitForSeconds_t337_marshaled& marshaled);
extern "C" void WaitForSeconds_t337_marshal_back(const WaitForSeconds_t337_marshaled& marshaled, WaitForSeconds_t337& unmarshaled);
extern "C" void WaitForSeconds_t337_marshal_cleanup(WaitForSeconds_t337_marshaled& marshaled);
