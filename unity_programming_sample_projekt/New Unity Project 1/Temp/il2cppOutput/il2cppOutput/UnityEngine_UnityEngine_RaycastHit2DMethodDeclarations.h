#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Collider2D
struct Collider2D_t334;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t473;
// UnityEngine.Transform
struct Transform_t9;
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t11  RaycastHit2D_get_point_m1653 (RaycastHit2D_t333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t11  RaycastHit2D_get_normal_m1654 (RaycastHit2D_t333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m1834 (RaycastHit2D_t333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t334 * RaycastHit2D_get_collider_m1649 (RaycastHit2D_t333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t473 * RaycastHit2D_get_rigidbody_m2677 (RaycastHit2D_t333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" Transform_t9 * RaycastHit2D_get_transform_m1651 (RaycastHit2D_t333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
