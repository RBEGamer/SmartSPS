#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t2008;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2010;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m12534_gshared (ObjectPool_1_t2008 * __this, UnityAction_1_t2010 * ___actionOnGet, UnityAction_1_t2010 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m12534(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2008 *, UnityAction_1_t2010 *, UnityAction_1_t2010 *, const MethodInfo*))ObjectPool_1__ctor_m12534_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m12536_gshared (ObjectPool_1_t2008 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m12536(__this, method) (( int32_t (*) (ObjectPool_1_t2008 *, const MethodInfo*))ObjectPool_1_get_countAll_m12536_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m12538_gshared (ObjectPool_1_t2008 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m12538(__this, ___value, method) (( void (*) (ObjectPool_1_t2008 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m12538_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m12540_gshared (ObjectPool_1_t2008 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m12540(__this, method) (( int32_t (*) (ObjectPool_1_t2008 *, const MethodInfo*))ObjectPool_1_get_countActive_m12540_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m12542_gshared (ObjectPool_1_t2008 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m12542(__this, method) (( int32_t (*) (ObjectPool_1_t2008 *, const MethodInfo*))ObjectPool_1_get_countInactive_m12542_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m12544_gshared (ObjectPool_1_t2008 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m12544(__this, method) (( Object_t * (*) (ObjectPool_1_t2008 *, const MethodInfo*))ObjectPool_1_Get_m12544_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m12546_gshared (ObjectPool_1_t2008 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m12546(__this, ___element, method) (( void (*) (ObjectPool_1_t2008 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m12546_gshared)(__this, ___element, method)
