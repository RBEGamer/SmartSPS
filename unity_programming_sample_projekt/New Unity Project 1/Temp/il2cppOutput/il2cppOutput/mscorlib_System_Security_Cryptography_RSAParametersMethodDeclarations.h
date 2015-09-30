#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"


extern "C" void RSAParameters_t931_marshal(const RSAParameters_t931& unmarshaled, RSAParameters_t931_marshaled& marshaled);
extern "C" void RSAParameters_t931_marshal_back(const RSAParameters_t931_marshaled& marshaled, RSAParameters_t931& unmarshaled);
extern "C" void RSAParameters_t931_marshal_cleanup(RSAParameters_t931_marshaled& marshaled);
