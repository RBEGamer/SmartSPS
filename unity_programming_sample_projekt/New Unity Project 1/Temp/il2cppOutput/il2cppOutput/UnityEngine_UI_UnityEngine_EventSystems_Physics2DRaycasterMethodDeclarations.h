#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.Physics2DRaycaster
struct Physics2DRaycaster_t110;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t99;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t100;

// System.Void UnityEngine.EventSystems.Physics2DRaycaster::.ctor()
extern "C" void Physics2DRaycaster__ctor_m428 (Physics2DRaycaster_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.Physics2DRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void Physics2DRaycaster_Raycast_m429 (Physics2DRaycaster_t110 * __this, PointerEventData_t99 * ___eventData, List_1_t100 * ___resultAppendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
