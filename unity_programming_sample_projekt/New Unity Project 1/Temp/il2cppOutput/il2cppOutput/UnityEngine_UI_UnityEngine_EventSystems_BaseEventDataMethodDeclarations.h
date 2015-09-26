#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t62;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t58;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t61;
// UnityEngine.GameObject
struct GameObject_t4;

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void BaseEventData__ctor_m276 (BaseEventData_t62 * __this, EventSystem_t58 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Reset()
extern "C" void BaseEventData_Reset_m277 (BaseEventData_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Use()
extern "C" void BaseEventData_Use_m278 (BaseEventData_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseEventData::get_used()
extern "C" bool BaseEventData_get_used_m279 (BaseEventData_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
extern "C" BaseInputModule_t61 * BaseEventData_get_currentInputModule_m280 (BaseEventData_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
extern "C" GameObject_t4 * BaseEventData_get_selectedObject_m281 (BaseEventData_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
extern "C" void BaseEventData_set_selectedObject_m282 (BaseEventData_t62 * __this, GameObject_t4 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
