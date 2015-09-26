#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStack.h"

// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
extern "C" int32_t IntStack_Pop_m4802 (IntStack_t939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
extern "C" void IntStack_Push_m4803 (IntStack_t939 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
extern "C" int32_t IntStack_get_Count_m4804 (IntStack_t939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
extern "C" void IntStack_set_Count_m4805 (IntStack_t939 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void IntStack_t939_marshal(const IntStack_t939& unmarshaled, IntStack_t939_marshaled& marshaled);
extern "C" void IntStack_t939_marshal_back(const IntStack_t939_marshaled& marshaled, IntStack_t939& unmarshaled);
extern "C" void IntStack_t939_marshal_cleanup(IntStack_t939_marshaled& marshaled);
