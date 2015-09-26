#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"


extern "C" void node_database_information_t21_marshal(const node_database_information_t21& unmarshaled, node_database_information_t21_marshaled& marshaled);
extern "C" void node_database_information_t21_marshal_back(const node_database_information_t21_marshaled& marshaled, node_database_information_t21& unmarshaled);
extern "C" void node_database_information_t21_marshal_cleanup(node_database_information_t21_marshaled& marshaled);
