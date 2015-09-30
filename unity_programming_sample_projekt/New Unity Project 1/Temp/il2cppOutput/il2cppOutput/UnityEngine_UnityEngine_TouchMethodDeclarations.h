#pragma once
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
extern "C" int32_t Touch_get_fingerId_m1599 (Touch_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t11  Touch_get_position_m119 (Touch_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C" Vector2_t11  Touch_get_deltaPosition_m118 (Touch_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m117 (Touch_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Touch_t46_marshal(const Touch_t46& unmarshaled, Touch_t46_marshaled& marshaled);
extern "C" void Touch_t46_marshal_back(const Touch_t46_marshaled& marshaled, Touch_t46& unmarshaled);
extern "C" void Touch_t46_marshal_cleanup(Touch_t46_marshaled& marshaled);
