#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t334;
struct WaitForSeconds_t334_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m1708 (WaitForSeconds_t334 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void WaitForSeconds_t334_marshal(const WaitForSeconds_t334& unmarshaled, WaitForSeconds_t334_marshaled& marshaled);
extern "C" void WaitForSeconds_t334_marshal_back(const WaitForSeconds_t334_marshaled& marshaled, WaitForSeconds_t334& unmarshaled);
extern "C" void WaitForSeconds_t334_marshal_cleanup(WaitForSeconds_t334_marshaled& marshaled);
