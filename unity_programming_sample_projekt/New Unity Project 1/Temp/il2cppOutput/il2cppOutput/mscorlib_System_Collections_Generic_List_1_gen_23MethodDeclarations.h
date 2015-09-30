#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t276;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t392;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_t2582;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector3>
struct ICollection_1_t2583;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector3>
struct ReadOnlyCollection_1_t2249;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t180;
// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_t2254;
// System.Collections.Generic.IComparer`1<UnityEngine.Vector3>
struct IComparer_1_t2584;
// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t2257;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C" void List_1__ctor_m15798_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1__ctor_m15798(__this, method) (( void (*) (List_1_t276 *, const MethodInfo*))List_1__ctor_m15798_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15799_gshared (List_1_t276 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15799(__this, ___collection, method) (( void (*) (List_1_t276 *, Object_t*, const MethodInfo*))List_1__ctor_m15799_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
extern "C" void List_1__ctor_m15800_gshared (List_1_t276 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m15800(__this, ___capacity, method) (( void (*) (List_1_t276 *, int32_t, const MethodInfo*))List_1__ctor_m15800_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.cctor()
extern "C" void List_1__cctor_m15801_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15801(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15801_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15802_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15802(__this, method) (( Object_t* (*) (List_1_t276 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15802_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15803_gshared (List_1_t276 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15803(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t276 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15803_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15804_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15804(__this, method) (( Object_t * (*) (List_1_t276 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15804_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15805_gshared (List_1_t276 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15805(__this, ___item, method) (( int32_t (*) (List_1_t276 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15805_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15806_gshared (List_1_t276 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15806(__this, ___item, method) (( bool (*) (List_1_t276 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15806_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15807_gshared (List_1_t276 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15807(__this, ___item, method) (( int32_t (*) (List_1_t276 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15807_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15808_gshared (List_1_t276 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15808(__this, ___index, ___item, method) (( void (*) (List_1_t276 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15808_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15809_gshared (List_1_t276 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15809(__this, ___item, method) (( void (*) (List_1_t276 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15809_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15810_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15810(__this, method) (( bool (*) (List_1_t276 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15810_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15811_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15811(__this, method) (( bool (*) (List_1_t276 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15811_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15812_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15812(__this, method) (( Object_t * (*) (List_1_t276 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15812_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15813_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15813(__this, method) (( bool (*) (List_1_t276 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15813_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15814_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15814(__this, method) (( bool (*) (List_1_t276 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15814_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15815_gshared (List_1_t276 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15815(__this, ___index, method) (( Object_t * (*) (List_1_t276 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15815_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15816_gshared (List_1_t276 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15816(__this, ___index, ___value, method) (( void (*) (List_1_t276 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15816_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
extern "C" void List_1_Add_m15817_gshared (List_1_t276 * __this, Vector3_t10  ___item, const MethodInfo* method);
#define List_1_Add_m15817(__this, ___item, method) (( void (*) (List_1_t276 *, Vector3_t10 , const MethodInfo*))List_1_Add_m15817_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15818_gshared (List_1_t276 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15818(__this, ___newCount, method) (( void (*) (List_1_t276 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15818_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15819_gshared (List_1_t276 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15819(__this, ___collection, method) (( void (*) (List_1_t276 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15819_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15820_gshared (List_1_t276 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15820(__this, ___enumerable, method) (( void (*) (List_1_t276 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15820_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2117_gshared (List_1_t276 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2117(__this, ___collection, method) (( void (*) (List_1_t276 *, Object_t*, const MethodInfo*))List_1_AddRange_m2117_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2249 * List_1_AsReadOnly_m15821_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15821(__this, method) (( ReadOnlyCollection_1_t2249 * (*) (List_1_t276 *, const MethodInfo*))List_1_AsReadOnly_m15821_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
extern "C" void List_1_Clear_m15822_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_Clear_m15822(__this, method) (( void (*) (List_1_t276 *, const MethodInfo*))List_1_Clear_m15822_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Contains(T)
extern "C" bool List_1_Contains_m15823_gshared (List_1_t276 * __this, Vector3_t10  ___item, const MethodInfo* method);
#define List_1_Contains_m15823(__this, ___item, method) (( bool (*) (List_1_t276 *, Vector3_t10 , const MethodInfo*))List_1_Contains_m15823_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15824_gshared (List_1_t276 * __this, Vector3U5BU5D_t180* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15824(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t276 *, Vector3U5BU5D_t180*, int32_t, const MethodInfo*))List_1_CopyTo_m15824_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::Find(System.Predicate`1<T>)
extern "C" Vector3_t10  List_1_Find_m15825_gshared (List_1_t276 * __this, Predicate_1_t2254 * ___match, const MethodInfo* method);
#define List_1_Find_m15825(__this, ___match, method) (( Vector3_t10  (*) (List_1_t276 *, Predicate_1_t2254 *, const MethodInfo*))List_1_Find_m15825_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15826_gshared (Object_t * __this /* static, unused */, Predicate_1_t2254 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15826(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2254 *, const MethodInfo*))List_1_CheckMatch_m15826_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15827_gshared (List_1_t276 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2254 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15827(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t276 *, int32_t, int32_t, Predicate_1_t2254 *, const MethodInfo*))List_1_GetIndex_m15827_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
extern "C" Enumerator_t2248  List_1_GetEnumerator_m15828_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15828(__this, method) (( Enumerator_t2248  (*) (List_1_t276 *, const MethodInfo*))List_1_GetEnumerator_m15828_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15829_gshared (List_1_t276 * __this, Vector3_t10  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15829(__this, ___item, method) (( int32_t (*) (List_1_t276 *, Vector3_t10 , const MethodInfo*))List_1_IndexOf_m15829_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15830_gshared (List_1_t276 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15830(__this, ___start, ___delta, method) (( void (*) (List_1_t276 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15830_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15831_gshared (List_1_t276 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15831(__this, ___index, method) (( void (*) (List_1_t276 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15831_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15832_gshared (List_1_t276 * __this, int32_t ___index, Vector3_t10  ___item, const MethodInfo* method);
#define List_1_Insert_m15832(__this, ___index, ___item, method) (( void (*) (List_1_t276 *, int32_t, Vector3_t10 , const MethodInfo*))List_1_Insert_m15832_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15833_gshared (List_1_t276 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15833(__this, ___collection, method) (( void (*) (List_1_t276 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15833_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector3>::Remove(T)
extern "C" bool List_1_Remove_m15834_gshared (List_1_t276 * __this, Vector3_t10  ___item, const MethodInfo* method);
#define List_1_Remove_m15834(__this, ___item, method) (( bool (*) (List_1_t276 *, Vector3_t10 , const MethodInfo*))List_1_Remove_m15834_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15835_gshared (List_1_t276 * __this, Predicate_1_t2254 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15835(__this, ___match, method) (( int32_t (*) (List_1_t276 *, Predicate_1_t2254 *, const MethodInfo*))List_1_RemoveAll_m15835_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15836_gshared (List_1_t276 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15836(__this, ___index, method) (( void (*) (List_1_t276 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15836_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Reverse()
extern "C" void List_1_Reverse_m15837_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_Reverse_m15837(__this, method) (( void (*) (List_1_t276 *, const MethodInfo*))List_1_Reverse_m15837_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort()
extern "C" void List_1_Sort_m15838_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_Sort_m15838(__this, method) (( void (*) (List_1_t276 *, const MethodInfo*))List_1_Sort_m15838_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m15839_gshared (List_1_t276 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m15839(__this, ___comparer, method) (( void (*) (List_1_t276 *, Object_t*, const MethodInfo*))List_1_Sort_m15839_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15840_gshared (List_1_t276 * __this, Comparison_1_t2257 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15840(__this, ___comparison, method) (( void (*) (List_1_t276 *, Comparison_1_t2257 *, const MethodInfo*))List_1_Sort_m15840_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
extern "C" Vector3U5BU5D_t180* List_1_ToArray_m15841_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_ToArray_m15841(__this, method) (( Vector3U5BU5D_t180* (*) (List_1_t276 *, const MethodInfo*))List_1_ToArray_m15841_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::TrimExcess()
extern "C" void List_1_TrimExcess_m15842_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15842(__this, method) (( void (*) (List_1_t276 *, const MethodInfo*))List_1_TrimExcess_m15842_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15843_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15843(__this, method) (( int32_t (*) (List_1_t276 *, const MethodInfo*))List_1_get_Capacity_m15843_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15844_gshared (List_1_t276 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15844(__this, ___value, method) (( void (*) (List_1_t276 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15844_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C" int32_t List_1_get_Count_m15845_gshared (List_1_t276 * __this, const MethodInfo* method);
#define List_1_get_Count_m15845(__this, method) (( int32_t (*) (List_1_t276 *, const MethodInfo*))List_1_get_Count_m15845_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" Vector3_t10  List_1_get_Item_m15846_gshared (List_1_t276 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15846(__this, ___index, method) (( Vector3_t10  (*) (List_1_t276 *, int32_t, const MethodInfo*))List_1_get_Item_m15846_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15847_gshared (List_1_t276 * __this, int32_t ___index, Vector3_t10  ___value, const MethodInfo* method);
#define List_1_set_Item_m15847(__this, ___index, ___value, method) (( void (*) (List_1_t276 *, int32_t, Vector3_t10 , const MethodInfo*))List_1_set_Item_m15847_gshared)(__this, ___index, ___value, method)
