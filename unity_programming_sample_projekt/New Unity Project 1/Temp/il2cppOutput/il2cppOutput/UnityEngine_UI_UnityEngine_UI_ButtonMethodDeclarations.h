#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t125;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t122;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t99;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t62;
// System.Collections.IEnumerator
struct IEnumerator_t28;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m484 (Button_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t122 * Button_get_onClick_m485 (Button_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m486 (Button_t125 * __this, ButtonClickedEvent_t122 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m487 (Button_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m488 (Button_t125 * __this, PointerEventData_t99 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m489 (Button_t125 * __this, BaseEventData_t62 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m490 (Button_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
