#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2088;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2231;
// System.Object[]
struct ObjectU5BU5D_t61;
// System.Predicate`1<System.Object>
struct Predicate_1_t1963;
// System.Comparison`1<System.Object>
struct Comparison_1_t1969;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m13537_gshared (IndexedSet_1_t2088 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m13537(__this, method) (( void (*) (IndexedSet_1_t2088 *, const MethodInfo*))IndexedSet_1__ctor_m13537_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13539_gshared (IndexedSet_1_t2088 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13539(__this, method) (( Object_t * (*) (IndexedSet_1_t2088 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13539_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m13541_gshared (IndexedSet_1_t2088 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m13541(__this, ___item, method) (( void (*) (IndexedSet_1_t2088 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m13541_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m13543_gshared (IndexedSet_1_t2088 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m13543(__this, ___item, method) (( bool (*) (IndexedSet_1_t2088 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m13543_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m13545_gshared (IndexedSet_1_t2088 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m13545(__this, method) (( Object_t* (*) (IndexedSet_1_t2088 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m13545_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m13547_gshared (IndexedSet_1_t2088 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m13547(__this, method) (( void (*) (IndexedSet_1_t2088 *, const MethodInfo*))IndexedSet_1_Clear_m13547_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m13549_gshared (IndexedSet_1_t2088 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m13549(__this, ___item, method) (( bool (*) (IndexedSet_1_t2088 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m13549_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m13551_gshared (IndexedSet_1_t2088 * __this, ObjectU5BU5D_t61* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m13551(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2088 *, ObjectU5BU5D_t61*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m13551_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m13553_gshared (IndexedSet_1_t2088 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m13553(__this, method) (( int32_t (*) (IndexedSet_1_t2088 *, const MethodInfo*))IndexedSet_1_get_Count_m13553_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m13555_gshared (IndexedSet_1_t2088 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m13555(__this, method) (( bool (*) (IndexedSet_1_t2088 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m13555_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m13557_gshared (IndexedSet_1_t2088 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m13557(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2088 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m13557_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m13559_gshared (IndexedSet_1_t2088 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m13559(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2088 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m13559_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m13561_gshared (IndexedSet_1_t2088 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m13561(__this, ___index, method) (( void (*) (IndexedSet_1_t2088 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m13561_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m13563_gshared (IndexedSet_1_t2088 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m13563(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2088 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m13563_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m13565_gshared (IndexedSet_1_t2088 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m13565(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2088 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m13565_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m13566_gshared (IndexedSet_1_t2088 * __this, Predicate_1_t1963 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m13566(__this, ___match, method) (( void (*) (IndexedSet_1_t2088 *, Predicate_1_t1963 *, const MethodInfo*))IndexedSet_1_RemoveAll_m13566_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m13567_gshared (IndexedSet_1_t2088 * __this, Comparison_1_t1969 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m13567(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2088 *, Comparison_1_t1969 *, const MethodInfo*))IndexedSet_1_Sort_m13567_gshared)(__this, ___sortLayoutFunction, method)
