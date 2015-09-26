#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.MaskUtilities
struct MaskUtilities_t204;
// UnityEngine.Component
struct Component_t42;
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t203;
// UnityEngine.UI.IClippable
struct IClippable_t309;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t212;

// System.Void UnityEngine.UI.MaskUtilities::.ctor()
extern "C" void MaskUtilities__ctor_m931 (MaskUtilities_t204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_Notify2DMaskStateChanged_m932 (Object_t * __this /* static, unused */, Component_t42 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_NotifyStencilStateChanged_m933 (Object_t * __this /* static, unused */, Component_t42 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C" Transform_t9 * MaskUtilities_FindRootSortOverrideCanvas_m934 (Object_t * __this /* static, unused */, Transform_t9 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t MaskUtilities_GetStencilDepth_m935 (Object_t * __this /* static, unused */, Transform_t9 * ___transform, Transform_t9 * ___stopAfter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C" RectMask2D_t203 * MaskUtilities_GetRectMaskForClippable_m936 (Object_t * __this /* static, unused */, Object_t * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C" void MaskUtilities_GetRectMasksForClip_m937 (Object_t * __this /* static, unused */, RectMask2D_t203 * ___clipper, List_1_t212 * ___masks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
