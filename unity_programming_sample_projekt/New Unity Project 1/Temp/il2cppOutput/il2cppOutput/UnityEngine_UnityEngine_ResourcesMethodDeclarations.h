﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object
struct Object_t38;
struct Object_t38_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t38 * Resources_Load_m2427 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;