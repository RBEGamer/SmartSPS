﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Exception
#include "mscorlib_System_Exception.h"
// UnityEngine.UnityException
struct  UnityException_t351  : public Exception_t32
{
	// System.String UnityEngine.UnityException::unityStackTrace
	String_t* ___unityStackTrace_12;
};
