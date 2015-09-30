#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.FormatException
struct FormatException_t787;
// System.String
struct String_t;
// System.Exception
struct Exception_t33;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t587;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.FormatException::.ctor()
extern "C" void FormatException__ctor_m6707 (FormatException_t787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FormatException::.ctor(System.String)
extern "C" void FormatException__ctor_m4836 (FormatException_t787 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FormatException::.ctor(System.String,System.Exception)
extern "C" void FormatException__ctor_m6708 (FormatException_t787 * __this, String_t* ___message, Exception_t33 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FormatException__ctor_m6709 (FormatException_t787 * __this, SerializationInfo_t587 * ___info, StreamingContext_t588  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
