#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t216;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// UnityEngine.Rect UnityEngine.UI.Clipping::FindCullAndClipWorldRect(System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>,System.Boolean&)
extern "C" Rect_t196  Clipping_FindCullAndClipWorldRect_m1311 (Object_t * __this /* static, unused */, List_1_t216 * ___rectMaskParents, bool* ___validRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Clipping::RectIntersect(UnityEngine.Rect,UnityEngine.Rect)
extern "C" Rect_t196  Clipping_RectIntersect_m1312 (Object_t * __this /* static, unused */, Rect_t196  ___a, Rect_t196  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
