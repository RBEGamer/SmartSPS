#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Renderer
struct Renderer_t47;
// UnityEngine.Material
struct Material_t19;

// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t19 * Renderer_get_material_m128 (Renderer_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" void Renderer_set_material_m129 (Renderer_t47 * __this, Material_t19 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m1641 (Renderer_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m1642 (Renderer_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
