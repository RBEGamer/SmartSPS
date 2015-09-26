#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t487;
struct AnimationCurve_t487_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t578;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2707 (AnimationCurve_t487 * __this, KeyframeU5BU5D_t578* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2708 (AnimationCurve_t487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2709 (AnimationCurve_t487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2710 (AnimationCurve_t487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2711 (AnimationCurve_t487 * __this, KeyframeU5BU5D_t578* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t487_marshal(const AnimationCurve_t487& unmarshaled, AnimationCurve_t487_marshaled& marshaled);
extern "C" void AnimationCurve_t487_marshal_back(const AnimationCurve_t487_marshaled& marshaled, AnimationCurve_t487& unmarshaled);
extern "C" void AnimationCurve_t487_marshal_cleanup(AnimationCurve_t487_marshaled& marshaled);
