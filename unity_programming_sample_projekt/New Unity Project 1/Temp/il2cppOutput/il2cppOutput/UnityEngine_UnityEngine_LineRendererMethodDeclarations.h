#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.LineRenderer
struct LineRenderer_t20;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.LineRenderer::SetWidth(System.Single,System.Single)
extern "C" void LineRenderer_SetWidth_m137 (LineRenderer_t20 * __this, float ___start, float ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::INTERNAL_CALL_SetWidth(UnityEngine.LineRenderer,System.Single,System.Single)
extern "C" void LineRenderer_INTERNAL_CALL_SetWidth_m2257 (Object_t * __this /* static, unused */, LineRenderer_t20 * ___self, float ___start, float ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::SetColors(UnityEngine.Color,UnityEngine.Color)
extern "C" void LineRenderer_SetColors_m130 (LineRenderer_t20 * __this, Color_t27  ___start, Color_t27  ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::INTERNAL_CALL_SetColors(UnityEngine.LineRenderer,UnityEngine.Color&,UnityEngine.Color&)
extern "C" void LineRenderer_INTERNAL_CALL_SetColors_m2258 (Object_t * __this /* static, unused */, LineRenderer_t20 * ___self, Color_t27 * ___start, Color_t27 * ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::SetVertexCount(System.Int32)
extern "C" void LineRenderer_SetVertexCount_m96 (LineRenderer_t20 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::INTERNAL_CALL_SetVertexCount(UnityEngine.LineRenderer,System.Int32)
extern "C" void LineRenderer_INTERNAL_CALL_SetVertexCount_m2259 (Object_t * __this /* static, unused */, LineRenderer_t20 * ___self, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
extern "C" void LineRenderer_SetPosition_m97 (LineRenderer_t20 * __this, int32_t ___index, Vector3_t10  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LineRenderer::INTERNAL_CALL_SetPosition(UnityEngine.LineRenderer,System.Int32,UnityEngine.Vector3&)
extern "C" void LineRenderer_INTERNAL_CALL_SetPosition_m2260 (Object_t * __this /* static, unused */, LineRenderer_t20 * ___self, int32_t ___index, Vector3_t10 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
