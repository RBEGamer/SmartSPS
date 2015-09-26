﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m2682 (WebCamDevice_t480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m2683 (WebCamDevice_t480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void WebCamDevice_t480_marshal(const WebCamDevice_t480& unmarshaled, WebCamDevice_t480_marshaled& marshaled);
extern "C" void WebCamDevice_t480_marshal_back(const WebCamDevice_t480_marshaled& marshaled, WebCamDevice_t480& unmarshaled);
extern "C" void WebCamDevice_t480_marshal_cleanup(WebCamDevice_t480_marshaled& marshaled);