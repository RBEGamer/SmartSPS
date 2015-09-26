#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1829;
// System.Collections.IEnumerator
struct IEnumerator_t28;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1972;
// System.Object[]
struct ObjectU5BU5D_t320;
// System.Predicate`1<System.Object>
struct Predicate_1_t1716;
// System.Comparison`1<System.Object>
struct Comparison_1_t1722;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m11745_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m11745(__this, method) (( void (*) (IndexedSet_1_t1829 *, const MethodInfo*))IndexedSet_1__ctor_m11745_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11747_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11747(__this, method) (( Object_t * (*) (IndexedSet_1_t1829 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11747_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m11749_gshared (IndexedSet_1_t1829 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m11749(__this, ___item, method) (( void (*) (IndexedSet_1_t1829 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m11749_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m11751_gshared (IndexedSet_1_t1829 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m11751(__this, ___item, method) (( bool (*) (IndexedSet_1_t1829 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m11751_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m11753_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m11753(__this, method) (( Object_t* (*) (IndexedSet_1_t1829 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m11753_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m11755_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m11755(__this, method) (( void (*) (IndexedSet_1_t1829 *, const MethodInfo*))IndexedSet_1_Clear_m11755_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m11757_gshared (IndexedSet_1_t1829 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m11757(__this, ___item, method) (( bool (*) (IndexedSet_1_t1829 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m11757_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m11759_gshared (IndexedSet_1_t1829 * __this, ObjectU5BU5D_t320* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m11759(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1829 *, ObjectU5BU5D_t320*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m11759_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m11761_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m11761(__this, method) (( int32_t (*) (IndexedSet_1_t1829 *, const MethodInfo*))IndexedSet_1_get_Count_m11761_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m11763_gshared (IndexedSet_1_t1829 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m11763(__this, method) (( bool (*) (IndexedSet_1_t1829 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m11763_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m11765_gshared (IndexedSet_1_t1829 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m11765(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1829 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m11765_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m11767_gshared (IndexedSet_1_t1829 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m11767(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1829 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m11767_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m11769_gshared (IndexedSet_1_t1829 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m11769(__this, ___index, method) (( void (*) (IndexedSet_1_t1829 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m11769_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m11771_gshared (IndexedSet_1_t1829 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m11771(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1829 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m11771_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m11773_gshared (IndexedSet_1_t1829 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m11773(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1829 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m11773_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m11774_gshared (IndexedSet_1_t1829 * __this, Predicate_1_t1716 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m11774(__this, ___match, method) (( void (*) (IndexedSet_1_t1829 *, Predicate_1_t1716 *, const MethodInfo*))IndexedSet_1_RemoveAll_m11774_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m11775_gshared (IndexedSet_1_t1829 * __this, Comparison_1_t1722 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m11775(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1829 *, Comparison_1_t1722 *, const MethodInfo*))IndexedSet_1_Sort_m11775_gshared)(__this, ___sortLayoutFunction, method)
