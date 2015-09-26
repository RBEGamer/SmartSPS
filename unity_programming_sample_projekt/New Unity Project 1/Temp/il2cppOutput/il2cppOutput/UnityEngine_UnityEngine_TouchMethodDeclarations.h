﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m1585 (Touch_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t11  Touch_get_position_m115 (Touch_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C" Vector2_t11  Touch_get_deltaPosition_m114 (Touch_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m113 (Touch_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Touch_t45_marshal(const Touch_t45& unmarshaled, Touch_t45_marshaled& marshaled);
extern "C" void Touch_t45_marshal_back(const Touch_t45_marshaled& marshaled, Touch_t45& unmarshaled);
extern "C" void Touch_t45_marshal_cleanup(Touch_t45_marshaled& marshaled);
