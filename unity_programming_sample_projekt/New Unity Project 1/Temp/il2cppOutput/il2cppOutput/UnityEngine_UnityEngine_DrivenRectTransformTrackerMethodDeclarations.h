#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object
struct Object_t38;
struct Object_t38_marshaled;
// UnityEngine.RectTransform
struct RectTransform_t138;
// UnityEngine.DrivenRectTransformTracker
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
// UnityEngine.DrivenTransformProperties
#include "UnityEngine_UnityEngine_DrivenTransformProperties.h"

// System.Void UnityEngine.DrivenRectTransformTracker::Add(UnityEngine.Object,UnityEngine.RectTransform,UnityEngine.DrivenTransformProperties)
extern "C" void DrivenRectTransformTracker_Add_m1987 (DrivenRectTransformTracker_t218 * __this, Object_t38 * ___driver, RectTransform_t138 * ___rectTransform, int32_t ___drivenProperties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DrivenRectTransformTracker::Clear()
extern "C" void DrivenRectTransformTracker_Clear_m1986 (DrivenRectTransformTracker_t218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
