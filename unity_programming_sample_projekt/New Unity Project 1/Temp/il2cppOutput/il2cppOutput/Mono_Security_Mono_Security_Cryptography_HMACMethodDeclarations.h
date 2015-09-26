#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.HMAC
struct HMAC_t708;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t441;

// System.Void Mono.Security.Cryptography.HMAC::.ctor(System.String,System.Byte[])
extern "C" void HMAC__ctor_m3586 (HMAC_t708 * __this, String_t* ___hashName, ByteU5BU5D_t441* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::get_Key()
extern "C" ByteU5BU5D_t441* HMAC_get_Key_m3587 (HMAC_t708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::set_Key(System.Byte[])
extern "C" void HMAC_set_Key_m3588 (HMAC_t708 * __this, ByteU5BU5D_t441* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::Initialize()
extern "C" void HMAC_Initialize_m3589 (HMAC_t708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::HashFinal()
extern "C" ByteU5BU5D_t441* HMAC_HashFinal_m3590 (HMAC_t708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void HMAC_HashCore_m3591 (HMAC_t708 * __this, ByteU5BU5D_t441* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::initializePad()
extern "C" void HMAC_initializePad_m3592 (HMAC_t708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
