#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"


extern "C" void RSAParameters_t760_marshal(const RSAParameters_t760& unmarshaled, RSAParameters_t760_marshaled& marshaled);
extern "C" void RSAParameters_t760_marshal_back(const RSAParameters_t760_marshaled& marshaled, RSAParameters_t760& unmarshaled);
extern "C" void RSAParameters_t760_marshal_cleanup(RSAParameters_t760_marshaled& marshaled);
