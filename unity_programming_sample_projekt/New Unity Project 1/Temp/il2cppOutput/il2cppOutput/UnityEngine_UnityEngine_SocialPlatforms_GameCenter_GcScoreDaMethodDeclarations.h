#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t535;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t535 * GcScoreData_ToScore_m2902 (GcScoreData_t525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void GcScoreData_t525_marshal(const GcScoreData_t525& unmarshaled, GcScoreData_t525_marshaled& marshaled);
extern "C" void GcScoreData_t525_marshal_back(const GcScoreData_t525_marshaled& marshaled, GcScoreData_t525& unmarshaled);
extern "C" void GcScoreData_t525_marshal_cleanup(GcScoreData_t525_marshaled& marshaled);
