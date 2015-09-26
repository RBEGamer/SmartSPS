#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t532;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t532 * GcScoreData_ToScore_m2890 (GcScoreData_t522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void GcScoreData_t522_marshal(const GcScoreData_t522& unmarshaled, GcScoreData_t522_marshaled& marshaled);
extern "C" void GcScoreData_t522_marshal_back(const GcScoreData_t522_marshaled& marshaled, GcScoreData_t522& unmarshaled);
extern "C" void GcScoreData_t522_marshal_cleanup(GcScoreData_t522_marshaled& marshaled);
