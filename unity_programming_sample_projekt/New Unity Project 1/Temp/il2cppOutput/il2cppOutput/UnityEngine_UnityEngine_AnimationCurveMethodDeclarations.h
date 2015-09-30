#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t490;
struct AnimationCurve_t490_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t581;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2719 (AnimationCurve_t490 * __this, KeyframeU5BU5D_t581* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2720 (AnimationCurve_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2721 (AnimationCurve_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2722 (AnimationCurve_t490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2723 (AnimationCurve_t490 * __this, KeyframeU5BU5D_t581* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t490_marshal(const AnimationCurve_t490& unmarshaled, AnimationCurve_t490_marshaled& marshaled);
extern "C" void AnimationCurve_t490_marshal_back(const AnimationCurve_t490_marshaled& marshaled, AnimationCurve_t490& unmarshaled);
extern "C" void AnimationCurve_t490_marshal_cleanup(AnimationCurve_t490_marshaled& marshaled);
