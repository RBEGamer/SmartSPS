#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t279;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector4>
struct IEnumerable_1_t2593;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector4>
struct IEnumerator_1_t2594;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Vector4>
struct ICollection_1_t2595;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Vector4>
struct ReadOnlyCollection_1_t2281;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t390;
// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2286;
// System.Collections.Generic.IComparer`1<UnityEngine.Vector4>
struct IComparer_1_t2596;
// System.Comparison`1<UnityEngine.Vector4>
struct Comparison_1_t2289;
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector4>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_31.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
extern "C" void List_1__ctor_m16235_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1__ctor_m16235(__this, method) (( void (*) (List_1_t279 *, const MethodInfo*))List_1__ctor_m16235_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16236_gshared (List_1_t279 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m16236(__this, ___collection, method) (( void (*) (List_1_t279 *, Object_t*, const MethodInfo*))List_1__ctor_m16236_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor(System.Int32)
extern "C" void List_1__ctor_m16237_gshared (List_1_t279 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m16237(__this, ___capacity, method) (( void (*) (List_1_t279 *, int32_t, const MethodInfo*))List_1__ctor_m16237_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.cctor()
extern "C" void List_1__cctor_m16238_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16238(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16238_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16239_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16239(__this, method) (( Object_t* (*) (List_1_t279 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16239_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m16240_gshared (List_1_t279 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m16240(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t279 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m16240_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m16241_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16241(__this, method) (( Object_t * (*) (List_1_t279 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m16241_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m16242_gshared (List_1_t279 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m16242(__this, ___item, method) (( int32_t (*) (List_1_t279 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m16242_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m16243_gshared (List_1_t279 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m16243(__this, ___item, method) (( bool (*) (List_1_t279 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m16243_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m16244_gshared (List_1_t279 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m16244(__this, ___item, method) (( int32_t (*) (List_1_t279 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m16244_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m16245_gshared (List_1_t279 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m16245(__this, ___index, ___item, method) (( void (*) (List_1_t279 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m16245_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m16246_gshared (List_1_t279 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m16246(__this, ___item, method) (( void (*) (List_1_t279 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m16246_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16247_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16247(__this, method) (( bool (*) (List_1_t279 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16247_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m16248_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16248(__this, method) (( bool (*) (List_1_t279 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m16248_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m16249_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m16249(__this, method) (( Object_t * (*) (List_1_t279 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m16249_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m16250_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m16250(__this, method) (( bool (*) (List_1_t279 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m16250_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m16251_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m16251(__this, method) (( bool (*) (List_1_t279 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m16251_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m16252_gshared (List_1_t279 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m16252(__this, ___index, method) (( Object_t * (*) (List_1_t279 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m16252_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m16253_gshared (List_1_t279 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m16253(__this, ___index, ___value, method) (( void (*) (List_1_t279 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m16253_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(T)
extern "C" void List_1_Add_m16254_gshared (List_1_t279 * __this, Vector4_t281  ___item, const MethodInfo* method);
#define List_1_Add_m16254(__this, ___item, method) (( void (*) (List_1_t279 *, Vector4_t281 , const MethodInfo*))List_1_Add_m16254_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16255_gshared (List_1_t279 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16255(__this, ___newCount, method) (( void (*) (List_1_t279 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16255_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16256_gshared (List_1_t279 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16256(__this, ___collection, method) (( void (*) (List_1_t279 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16256_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16257_gshared (List_1_t279 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16257(__this, ___enumerable, method) (( void (*) (List_1_t279 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16257_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2125_gshared (List_1_t279 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2125(__this, ___collection, method) (( void (*) (List_1_t279 *, Object_t*, const MethodInfo*))List_1_AddRange_m2125_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Vector4>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2281 * List_1_AsReadOnly_m16258_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16258(__this, method) (( ReadOnlyCollection_1_t2281 * (*) (List_1_t279 *, const MethodInfo*))List_1_AsReadOnly_m16258_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Clear()
extern "C" void List_1_Clear_m16259_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_Clear_m16259(__this, method) (( void (*) (List_1_t279 *, const MethodInfo*))List_1_Clear_m16259_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::Contains(T)
extern "C" bool List_1_Contains_m16260_gshared (List_1_t279 * __this, Vector4_t281  ___item, const MethodInfo* method);
#define List_1_Contains_m16260(__this, ___item, method) (( bool (*) (List_1_t279 *, Vector4_t281 , const MethodInfo*))List_1_Contains_m16260_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m16261_gshared (List_1_t279 * __this, Vector4U5BU5D_t390* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m16261(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t279 *, Vector4U5BU5D_t390*, int32_t, const MethodInfo*))List_1_CopyTo_m16261_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector4>::Find(System.Predicate`1<T>)
extern "C" Vector4_t281  List_1_Find_m16262_gshared (List_1_t279 * __this, Predicate_1_t2286 * ___match, const MethodInfo* method);
#define List_1_Find_m16262(__this, ___match, method) (( Vector4_t281  (*) (List_1_t279 *, Predicate_1_t2286 *, const MethodInfo*))List_1_Find_m16262_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16263_gshared (Object_t * __this /* static, unused */, Predicate_1_t2286 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16263(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2286 *, const MethodInfo*))List_1_CheckMatch_m16263_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16264_gshared (List_1_t279 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2286 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16264(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t279 *, int32_t, int32_t, Predicate_1_t2286 *, const MethodInfo*))List_1_GetIndex_m16264_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector4>::GetEnumerator()
extern "C" Enumerator_t2280  List_1_GetEnumerator_m16265_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m16265(__this, method) (( Enumerator_t2280  (*) (List_1_t279 *, const MethodInfo*))List_1_GetEnumerator_m16265_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m16266_gshared (List_1_t279 * __this, Vector4_t281  ___item, const MethodInfo* method);
#define List_1_IndexOf_m16266(__this, ___item, method) (( int32_t (*) (List_1_t279 *, Vector4_t281 , const MethodInfo*))List_1_IndexOf_m16266_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16267_gshared (List_1_t279 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16267(__this, ___start, ___delta, method) (( void (*) (List_1_t279 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16267_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16268_gshared (List_1_t279 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16268(__this, ___index, method) (( void (*) (List_1_t279 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16268_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m16269_gshared (List_1_t279 * __this, int32_t ___index, Vector4_t281  ___item, const MethodInfo* method);
#define List_1_Insert_m16269(__this, ___index, ___item, method) (( void (*) (List_1_t279 *, int32_t, Vector4_t281 , const MethodInfo*))List_1_Insert_m16269_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16270_gshared (List_1_t279 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16270(__this, ___collection, method) (( void (*) (List_1_t279 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16270_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Vector4>::Remove(T)
extern "C" bool List_1_Remove_m16271_gshared (List_1_t279 * __this, Vector4_t281  ___item, const MethodInfo* method);
#define List_1_Remove_m16271(__this, ___item, method) (( bool (*) (List_1_t279 *, Vector4_t281 , const MethodInfo*))List_1_Remove_m16271_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16272_gshared (List_1_t279 * __this, Predicate_1_t2286 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16272(__this, ___match, method) (( int32_t (*) (List_1_t279 *, Predicate_1_t2286 *, const MethodInfo*))List_1_RemoveAll_m16272_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m16273_gshared (List_1_t279 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m16273(__this, ___index, method) (( void (*) (List_1_t279 *, int32_t, const MethodInfo*))List_1_RemoveAt_m16273_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Reverse()
extern "C" void List_1_Reverse_m16274_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_Reverse_m16274(__this, method) (( void (*) (List_1_t279 *, const MethodInfo*))List_1_Reverse_m16274_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Sort()
extern "C" void List_1_Sort_m16275_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_Sort_m16275(__this, method) (( void (*) (List_1_t279 *, const MethodInfo*))List_1_Sort_m16275_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m16276_gshared (List_1_t279 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m16276(__this, ___comparer, method) (( void (*) (List_1_t279 *, Object_t*, const MethodInfo*))List_1_Sort_m16276_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16277_gshared (List_1_t279 * __this, Comparison_1_t2289 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16277(__this, ___comparison, method) (( void (*) (List_1_t279 *, Comparison_1_t2289 *, const MethodInfo*))List_1_Sort_m16277_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Vector4>::ToArray()
extern "C" Vector4U5BU5D_t390* List_1_ToArray_m16278_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_ToArray_m16278(__this, method) (( Vector4U5BU5D_t390* (*) (List_1_t279 *, const MethodInfo*))List_1_ToArray_m16278_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::TrimExcess()
extern "C" void List_1_TrimExcess_m16279_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16279(__this, method) (( void (*) (List_1_t279 *, const MethodInfo*))List_1_TrimExcess_m16279_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16280_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16280(__this, method) (( int32_t (*) (List_1_t279 *, const MethodInfo*))List_1_get_Capacity_m16280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16281_gshared (List_1_t279 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16281(__this, ___value, method) (( void (*) (List_1_t279 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16281_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Count()
extern "C" int32_t List_1_get_Count_m16282_gshared (List_1_t279 * __this, const MethodInfo* method);
#define List_1_get_Count_m16282(__this, method) (( int32_t (*) (List_1_t279 *, const MethodInfo*))List_1_get_Count_m16282_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Item(System.Int32)
extern "C" Vector4_t281  List_1_get_Item_m16283_gshared (List_1_t279 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m16283(__this, ___index, method) (( Vector4_t281  (*) (List_1_t279 *, int32_t, const MethodInfo*))List_1_get_Item_m16283_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m16284_gshared (List_1_t279 * __this, int32_t ___index, Vector4_t281  ___value, const MethodInfo* method);
#define List_1_set_Item_m16284(__this, ___index, ___value, method) (( void (*) (List_1_t279 *, int32_t, Vector4_t281 , const MethodInfo*))List_1_set_Item_m16284_gshared)(__this, ___index, ___value, method)
