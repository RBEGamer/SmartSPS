﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TrackedReference
struct TrackedReference_t488;
struct TrackedReference_t488_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" bool TrackedReference_Equals_m2988 (TrackedReference_t488 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m2989 (TrackedReference_t488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m2990 (Object_t * __this /* static, unused */, TrackedReference_t488 * ___x, TrackedReference_t488 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void TrackedReference_t488_marshal(const TrackedReference_t488& unmarshaled, TrackedReference_t488_marshaled& marshaled);
extern "C" void TrackedReference_t488_marshal_back(const TrackedReference_t488_marshaled& marshaled, TrackedReference_t488& unmarshaled);
extern "C" void TrackedReference_t488_marshal_cleanup(TrackedReference_t488_marshaled& marshaled);