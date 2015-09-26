#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m2735 (HumanBone_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m2736 (HumanBone_t492 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m2737 (HumanBone_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m2738 (HumanBone_t492 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void HumanBone_t492_marshal(const HumanBone_t492& unmarshaled, HumanBone_t492_marshaled& marshaled);
extern "C" void HumanBone_t492_marshal_back(const HumanBone_t492_marshaled& marshaled, HumanBone_t492& unmarshaled);
extern "C" void HumanBone_t492_marshal_cleanup(HumanBone_t492_marshaled& marshaled);
