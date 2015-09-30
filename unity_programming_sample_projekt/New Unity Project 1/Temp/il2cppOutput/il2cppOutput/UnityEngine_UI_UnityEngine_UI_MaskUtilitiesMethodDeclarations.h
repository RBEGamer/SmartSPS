#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.MaskUtilities
struct MaskUtilities_t208;
// UnityEngine.Component
struct Component_t43;
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t207;
// UnityEngine.UI.IClippable
struct IClippable_t313;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t216;

// System.Void UnityEngine.UI.MaskUtilities::.ctor()
extern "C" void MaskUtilities__ctor_m946 (MaskUtilities_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_Notify2DMaskStateChanged_m947 (Object_t * __this /* static, unused */, Component_t43 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_NotifyStencilStateChanged_m948 (Object_t * __this /* static, unused */, Component_t43 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C" Transform_t9 * MaskUtilities_FindRootSortOverrideCanvas_m949 (Object_t * __this /* static, unused */, Transform_t9 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t MaskUtilities_GetStencilDepth_m950 (Object_t * __this /* static, unused */, Transform_t9 * ___transform, Transform_t9 * ___stopAfter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C" RectMask2D_t207 * MaskUtilities_GetRectMaskForClippable_m951 (Object_t * __this /* static, unused */, Object_t * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C" void MaskUtilities_GetRectMasksForClip_m952 (Object_t * __this /* static, unused */, RectMask2D_t207 * ___clipper, List_1_t216 * ___masks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
