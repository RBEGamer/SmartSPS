﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t859;
// System.Net.WebRequest
struct WebRequest_t821;
// System.Uri
struct Uri_t816;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m4321 (FtpRequestCreator_t859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t821 * FtpRequestCreator_Create_m4322 (FtpRequestCreator_t859 * __this, Uri_t816 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;