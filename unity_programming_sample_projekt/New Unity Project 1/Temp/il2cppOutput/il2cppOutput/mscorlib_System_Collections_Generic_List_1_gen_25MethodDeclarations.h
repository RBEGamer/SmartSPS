#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t278;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector2>
struct IEnumerable_1_t2589;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector2>
struct IEnumerator_1_t2590;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector2>
struct ICollection_1_t2591;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector2>
struct ReadOnlyCollection_1_t2270;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t179;
// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2275;
// System.Collections.Generic.IComparer`1<UnityEngine.Vector2>
struct IComparer_1_t2592;
// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t2278;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector2>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_30.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
extern "C" void List_1__ctor_m16091_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1__ctor_m16091(__this, method) (( void (*) (List_1_t278 *, const MethodInfo*))List_1__ctor_m16091_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16092_gshared (List_1_t278 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m16092(__this, ___collection, method) (( void (*) (List_1_t278 *, Object_t*, const MethodInfo*))List_1__ctor_m16092_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor(System.Int32)
extern "C" void List_1__ctor_m16093_gshared (List_1_t278 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m16093(__this, ___capacity, method) (( void (*) (List_1_t278 *, int32_t, const MethodInfo*))List_1__ctor_m16093_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.cctor()
extern "C" void List_1__cctor_m16094_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16094(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16094_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16095_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16095(__this, method) (( Object_t* (*) (List_1_t278 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16095_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m16096_gshared (List_1_t278 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m16096(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t278 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m16096_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m16097_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16097(__this, method) (( Object_t * (*) (List_1_t278 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m16097_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m16098_gshared (List_1_t278 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m16098(__this, ___item, method) (( int32_t (*) (List_1_t278 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m16098_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m16099_gshared (List_1_t278 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m16099(__this, ___item, method) (( bool (*) (List_1_t278 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m16099_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m16100_gshared (List_1_t278 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m16100(__this, ___item, method) (( int32_t (*) (List_1_t278 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m16100_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m16101_gshared (List_1_t278 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m16101(__this, ___index, ___item, method) (( void (*) (List_1_t278 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m16101_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m16102_gshared (List_1_t278 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m16102(__this, ___item, method) (( void (*) (List_1_t278 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m16102_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16103_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16103(__this, method) (( bool (*) (List_1_t278 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16103_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m16104_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16104(__this, method) (( bool (*) (List_1_t278 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m16104_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m16105_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m16105(__this, method) (( Object_t * (*) (List_1_t278 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m16105_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m16106_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m16106(__this, method) (( bool (*) (List_1_t278 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m16106_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m16107_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m16107(__this, method) (( bool (*) (List_1_t278 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m16107_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m16108_gshared (List_1_t278 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m16108(__this, ___index, method) (( Object_t * (*) (List_1_t278 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m16108_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m16109_gshared (List_1_t278 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m16109(__this, ___index, ___value, method) (( void (*) (List_1_t278 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m16109_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
extern "C" void List_1_Add_m16110_gshared (List_1_t278 * __this, Vector2_t11  ___item, const MethodInfo* method);
#define List_1_Add_m16110(__this, ___item, method) (( void (*) (List_1_t278 *, Vector2_t11 , const MethodInfo*))List_1_Add_m16110_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16111_gshared (List_1_t278 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16111(__this, ___newCount, method) (( void (*) (List_1_t278 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16111_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16112_gshared (List_1_t278 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16112(__this, ___collection, method) (( void (*) (List_1_t278 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16112_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16113_gshared (List_1_t278 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16113(__this, ___enumerable, method) (( void (*) (List_1_t278 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16113_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2121_gshared (List_1_t278 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2121(__this, ___collection, method) (( void (*) (List_1_t278 *, Object_t*, const MethodInfo*))List_1_AddRange_m2121_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2270 * List_1_AsReadOnly_m16114_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16114(__this, method) (( ReadOnlyCollection_1_t2270 * (*) (List_1_t278 *, const MethodInfo*))List_1_AsReadOnly_m16114_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
extern "C" void List_1_Clear_m16115_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_Clear_m16115(__this, method) (( void (*) (List_1_t278 *, const MethodInfo*))List_1_Clear_m16115_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Contains(T)
extern "C" bool List_1_Contains_m16116_gshared (List_1_t278 * __this, Vector2_t11  ___item, const MethodInfo* method);
#define List_1_Contains_m16116(__this, ___item, method) (( bool (*) (List_1_t278 *, Vector2_t11 , const MethodInfo*))List_1_Contains_m16116_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m16117_gshared (List_1_t278 * __this, Vector2U5BU5D_t179* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m16117(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t278 *, Vector2U5BU5D_t179*, int32_t, const MethodInfo*))List_1_CopyTo_m16117_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::Find(System.Predicate`1<T>)
extern "C" Vector2_t11  List_1_Find_m16118_gshared (List_1_t278 * __this, Predicate_1_t2275 * ___match, const MethodInfo* method);
#define List_1_Find_m16118(__this, ___match, method) (( Vector2_t11  (*) (List_1_t278 *, Predicate_1_t2275 *, const MethodInfo*))List_1_Find_m16118_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16119_gshared (Object_t * __this /* static, unused */, Predicate_1_t2275 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16119(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2275 *, const MethodInfo*))List_1_CheckMatch_m16119_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16120_gshared (List_1_t278 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2275 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16120(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t278 *, int32_t, int32_t, Predicate_1_t2275 *, const MethodInfo*))List_1_GetIndex_m16120_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector2>::GetEnumerator()
extern "C" Enumerator_t2269  List_1_GetEnumerator_m16121_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m16121(__this, method) (( Enumerator_t2269  (*) (List_1_t278 *, const MethodInfo*))List_1_GetEnumerator_m16121_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m16122_gshared (List_1_t278 * __this, Vector2_t11  ___item, const MethodInfo* method);
#define List_1_IndexOf_m16122(__this, ___item, method) (( int32_t (*) (List_1_t278 *, Vector2_t11 , const MethodInfo*))List_1_IndexOf_m16122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16123_gshared (List_1_t278 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16123(__this, ___start, ___delta, method) (( void (*) (List_1_t278 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16123_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16124_gshared (List_1_t278 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16124(__this, ___index, method) (( void (*) (List_1_t278 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16124_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m16125_gshared (List_1_t278 * __this, int32_t ___index, Vector2_t11  ___item, const MethodInfo* method);
#define List_1_Insert_m16125(__this, ___index, ___item, method) (( void (*) (List_1_t278 *, int32_t, Vector2_t11 , const MethodInfo*))List_1_Insert_m16125_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16126_gshared (List_1_t278 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16126(__this, ___collection, method) (( void (*) (List_1_t278 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16126_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector2>::Remove(T)
extern "C" bool List_1_Remove_m16127_gshared (List_1_t278 * __this, Vector2_t11  ___item, const MethodInfo* method);
#define List_1_Remove_m16127(__this, ___item, method) (( bool (*) (List_1_t278 *, Vector2_t11 , const MethodInfo*))List_1_Remove_m16127_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16128_gshared (List_1_t278 * __this, Predicate_1_t2275 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16128(__this, ___match, method) (( int32_t (*) (List_1_t278 *, Predicate_1_t2275 *, const MethodInfo*))List_1_RemoveAll_m16128_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m16129_gshared (List_1_t278 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m16129(__this, ___index, method) (( void (*) (List_1_t278 *, int32_t, const MethodInfo*))List_1_RemoveAt_m16129_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Reverse()
extern "C" void List_1_Reverse_m16130_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_Reverse_m16130(__this, method) (( void (*) (List_1_t278 *, const MethodInfo*))List_1_Reverse_m16130_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort()
extern "C" void List_1_Sort_m16131_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_Sort_m16131(__this, method) (( void (*) (List_1_t278 *, const MethodInfo*))List_1_Sort_m16131_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m16132_gshared (List_1_t278 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m16132(__this, ___comparer, method) (( void (*) (List_1_t278 *, Object_t*, const MethodInfo*))List_1_Sort_m16132_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16133_gshared (List_1_t278 * __this, Comparison_1_t2278 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16133(__this, ___comparison, method) (( void (*) (List_1_t278 *, Comparison_1_t2278 *, const MethodInfo*))List_1_Sort_m16133_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector2>::ToArray()
extern "C" Vector2U5BU5D_t179* List_1_ToArray_m16134_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_ToArray_m16134(__this, method) (( Vector2U5BU5D_t179* (*) (List_1_t278 *, const MethodInfo*))List_1_ToArray_m16134_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::TrimExcess()
extern "C" void List_1_TrimExcess_m16135_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16135(__this, method) (( void (*) (List_1_t278 *, const MethodInfo*))List_1_TrimExcess_m16135_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16136_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16136(__this, method) (( int32_t (*) (List_1_t278 *, const MethodInfo*))List_1_get_Capacity_m16136_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16137_gshared (List_1_t278 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16137(__this, ___value, method) (( void (*) (List_1_t278 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16137_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
extern "C" int32_t List_1_get_Count_m16138_gshared (List_1_t278 * __this, const MethodInfo* method);
#define List_1_get_Count_m16138(__this, method) (( int32_t (*) (List_1_t278 *, const MethodInfo*))List_1_get_Count_m16138_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
extern "C" Vector2_t11  List_1_get_Item_m16139_gshared (List_1_t278 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m16139(__this, ___index, method) (( Vector2_t11  (*) (List_1_t278 *, int32_t, const MethodInfo*))List_1_get_Item_m16139_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m16140_gshared (List_1_t278 * __this, int32_t ___index, Vector2_t11  ___value, const MethodInfo* method);
#define List_1_set_Item_m16140(__this, ___index, ___value, method) (( void (*) (List_1_t278 *, int32_t, Vector2_t11 , const MethodInfo*))List_1_set_Item_m16140_gshared)(__this, ___index, ___value, method)
