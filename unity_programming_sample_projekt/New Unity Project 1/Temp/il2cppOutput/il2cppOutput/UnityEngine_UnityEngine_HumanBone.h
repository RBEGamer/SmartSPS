﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
// UnityEngine.HumanBone
struct  HumanBone_t492 
{
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t491  ___limit_2;
};
// Native definition for marshalling of: UnityEngine.HumanBone
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
struct HumanBone_t492_marshaled
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t491  ___limit_2;
};
