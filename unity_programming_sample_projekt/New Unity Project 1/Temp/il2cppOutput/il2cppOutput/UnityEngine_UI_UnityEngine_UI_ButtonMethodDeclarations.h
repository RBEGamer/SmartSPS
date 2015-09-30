#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t131;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t128;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t105;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t68;
// System.Collections.IEnumerator
struct IEnumerator_t29;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m500 (Button_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t128 * Button_get_onClick_m501 (Button_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m502 (Button_t131 * __this, ButtonClickedEvent_t128 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m503 (Button_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m504 (Button_t131 * __this, PointerEventData_t105 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m505 (Button_t131 * __this, BaseEventData_t68 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m506 (Button_t131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
