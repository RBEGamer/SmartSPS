#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.VertexHelper
struct VertexHelper_t271;
// UnityEngine.Mesh
struct Mesh_t159;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t192;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t305;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UnityEngine.UI.VertexHelper::.ctor()
extern "C" void VertexHelper__ctor_m1489 (VertexHelper_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.ctor(UnityEngine.Mesh)
extern "C" void VertexHelper__ctor_m1490 (VertexHelper_t271 * __this, Mesh_t159 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.cctor()
extern "C" void VertexHelper__cctor_m1491 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
extern "C" int32_t VertexHelper_get_currentVertCount_m1492 (VertexHelper_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
extern "C" void VertexHelper_PopulateUIVertex_m1493 (VertexHelper_t271 * __this, UIVertex_t199 * ___vertex, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::FillMesh(UnityEngine.Mesh)
extern "C" void VertexHelper_FillMesh_m1494 (VertexHelper_t271 * __this, Mesh_t159 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Dispose()
extern "C" void VertexHelper_Dispose_m1495 (VertexHelper_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3,UnityEngine.Vector4)
extern "C" void VertexHelper_AddVert_m1496 (VertexHelper_t271 * __this, Vector3_t10  ___position, Color32_t307  ___color, Vector2_t11  ___uv0, Vector2_t11  ___uv1, Vector3_t10  ___normal, Vector4_t277  ___tangent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2)
extern "C" void VertexHelper_AddVert_m1497 (VertexHelper_t271 * __this, Vector3_t10  ___position, Color32_t307  ___color, Vector2_t11  ___uv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.UIVertex)
extern "C" void VertexHelper_AddVert_m1498 (VertexHelper_t271 * __this, UIVertex_t199  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
extern "C" void VertexHelper_AddTriangle_m1499 (VertexHelper_t271 * __this, int32_t ___idx0, int32_t ___idx1, int32_t ___idx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexQuad(UnityEngine.UIVertex[])
extern "C" void VertexHelper_AddUIVertexQuad_m1500 (VertexHelper_t271 * __this, UIVertexU5BU5D_t192* ___verts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void VertexHelper_AddUIVertexTriangleStream_m1501 (VertexHelper_t271 * __this, List_1_t305 * ___verts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void VertexHelper_GetUIVertexStream_m1502 (VertexHelper_t271 * __this, List_1_t305 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
