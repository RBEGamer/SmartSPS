#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.RawImage
struct RawImage_t208;
// UnityEngine.Texture
struct Texture_t209;
// UnityEngine.Mesh
struct Mesh_t159;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.RawImage::.ctor()
extern "C" void RawImage__ctor_m951 (RawImage_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_mainTexture()
extern "C" Texture_t209 * RawImage_get_mainTexture_m952 (RawImage_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
extern "C" Texture_t209 * RawImage_get_texture_m953 (RawImage_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
extern "C" void RawImage_set_texture_m954 (RawImage_t208 * __this, Texture_t209 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RawImage::get_uvRect()
extern "C" Rect_t191  RawImage_get_uvRect_m955 (RawImage_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_uvRect(UnityEngine.Rect)
extern "C" void RawImage_set_uvRect_m956 (RawImage_t208 * __this, Rect_t191  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::SetNativeSize()
extern "C" void RawImage_SetNativeSize_m957 (RawImage_t208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::OnPopulateMesh(UnityEngine.Mesh)
extern "C" void RawImage_OnPopulateMesh_m958 (RawImage_t208 * __this, Mesh_t159 * ___toFill, const MethodInfo* method) IL2CPP_METHOD_ATTR;
