#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.ReplacementEvaluator
struct ReplacementEvaluator_t951;
// System.Text.RegularExpressions.Regex
struct Regex_t613;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t829;
// System.Text.StringBuilder
struct StringBuilder_t316;

// System.Void System.Text.RegularExpressions.ReplacementEvaluator::.ctor(System.Text.RegularExpressions.Regex,System.String)
extern "C" void ReplacementEvaluator__ctor_m4907 (ReplacementEvaluator_t951 * __this, Regex_t613 * ___regex, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.ReplacementEvaluator::Evaluate(System.Text.RegularExpressions.Match)
extern "C" String_t* ReplacementEvaluator_Evaluate_m4908 (ReplacementEvaluator_t951 * __this, Match_t829 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::EvaluateAppend(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C" void ReplacementEvaluator_EvaluateAppend_m4909 (ReplacementEvaluator_t951 * __this, Match_t829 * ___match, StringBuilder_t316 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.ReplacementEvaluator::get_NeedsGroupsOrCaptures()
extern "C" bool ReplacementEvaluator_get_NeedsGroupsOrCaptures_m4910 (ReplacementEvaluator_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Ensure(System.Int32)
extern "C" void ReplacementEvaluator_Ensure_m4911 (ReplacementEvaluator_t951 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddFromReplacement(System.Int32,System.Int32)
extern "C" void ReplacementEvaluator_AddFromReplacement_m4912 (ReplacementEvaluator_t951 * __this, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddInt(System.Int32)
extern "C" void ReplacementEvaluator_AddInt_m4913 (ReplacementEvaluator_t951 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Compile()
extern "C" void ReplacementEvaluator_Compile_m4914 (ReplacementEvaluator_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::CompileTerm(System.Int32&)
extern "C" int32_t ReplacementEvaluator_CompileTerm_m4915 (ReplacementEvaluator_t951 * __this, int32_t* ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
