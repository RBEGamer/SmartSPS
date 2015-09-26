#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Regex
struct Regex_t613;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t584;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t920;
// System.Text.RegularExpressions.Match
struct Match_t829;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t828;
// System.Text.RegularExpressions.IMachine
struct IMachine_t917;
// System.String[]
struct StringU5BU5D_t48;
// System.Collections.IDictionary
struct IDictionary_t921;
// System.Int32[]
struct Int32U5BU5D_t388;
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.RegularExpressions.Regex::.ctor()
extern "C" void Regex__ctor_m4697 (Regex_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C" void Regex__ctor_m4215 (Regex_t613 * __this, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" void Regex__ctor_m4698 (Regex_t613 * __this, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Regex__ctor_m4699 (Regex_t613 * __this, SerializationInfo_t584 * ___info, StreamingContext_t585  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.cctor()
extern "C" void Regex__cctor_m4700 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m4701 (Regex_t613 * __this, SerializationInfo_t584 * ___info, StreamingContext_t585  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String)
extern "C" String_t* Regex_Replace_m3134 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" String_t* Regex_Replace_m4702 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, String_t* ___replacement, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::validate_options(System.Text.RegularExpressions.RegexOptions)
extern "C" void Regex_validate_options_m4703 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::Init()
extern "C" void Regex_Init_m4704 (Regex_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::InitNewRegex()
extern "C" void Regex_InitNewRegex_m4705 (Regex_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::CreateMachineFactory(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" Object_t * Regex_CreateMachineFactory_m4706 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
extern "C" int32_t Regex_get_Options_m4707 (Regex_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
extern "C" bool Regex_get_RightToLeft_m4708 (Regex_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GroupNumberFromName(System.String)
extern "C" int32_t Regex_GroupNumberFromName_m4709 (Regex_t613 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GetGroupIndex(System.Int32)
extern "C" int32_t Regex_GetGroupIndex_m4710 (Regex_t613 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::default_startat(System.String)
extern "C" int32_t Regex_default_startat_m4711 (Regex_t613 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern "C" bool Regex_IsMatch_m4712 (Regex_t613 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
extern "C" bool Regex_IsMatch_m4713 (Regex_t613 * __this, String_t* ___input, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
extern "C" Match_t829 * Regex_Match_m4714 (Regex_t613 * __this, String_t* ___input, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
extern "C" MatchCollection_t828 * Regex_Matches_m4216 (Regex_t613 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.Int32)
extern "C" MatchCollection_t828 * Regex_Matches_m4715 (Regex_t613 * __this, String_t* ___input, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String)
extern "C" String_t* Regex_Replace_m4716 (Regex_t613 * __this, String_t* ___input, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Int32,System.Int32)
extern "C" String_t* Regex_Replace_m4717 (Regex_t613 * __this, String_t* ___input, String_t* ___replacement, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::ToString()
extern "C" String_t* Regex_ToString_m4718 (Regex_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_GroupCount()
extern "C" int32_t Regex_get_GroupCount_m4719 (Regex_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_Gap()
extern "C" int32_t Regex_get_Gap_m4720 (Regex_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Regex::CreateMachine()
extern "C" Object_t * Regex_CreateMachine_m4721 (Regex_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::GetGroupNamesArray(System.Int32,System.Collections.IDictionary)
extern "C" StringU5BU5D_t48* Regex_GetGroupNamesArray_m4722 (Object_t * __this /* static, unused */, int32_t ___groupCount, Object_t * ___mapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Text.RegularExpressions.Regex::get_GroupNumbers()
extern "C" Int32U5BU5D_t388* Regex_get_GroupNumbers_m4723 (Regex_t613 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
