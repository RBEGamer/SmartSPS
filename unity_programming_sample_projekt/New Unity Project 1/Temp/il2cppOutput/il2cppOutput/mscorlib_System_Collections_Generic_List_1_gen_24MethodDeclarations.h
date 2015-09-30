#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t277;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color32>
struct IEnumerable_1_t2585;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Color32>
struct IEnumerator_1_t2586;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.Color32>
struct ICollection_1_t2587;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Color32>
struct ReadOnlyCollection_1_t2260;
// UnityEngine.Color32[]
struct Color32U5BU5D_t389;
// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t2265;
// System.Collections.Generic.IComparer`1<UnityEngine.Color32>
struct IComparer_1_t2588;
// System.Comparison`1<UnityEngine.Color32>
struct Comparison_1_t2268;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Color32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_29.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor()
extern "C" void List_1__ctor_m15942_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1__ctor_m15942(__this, method) (( void (*) (List_1_t277 *, const MethodInfo*))List_1__ctor_m15942_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15943_gshared (List_1_t277 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15943(__this, ___collection, method) (( void (*) (List_1_t277 *, Object_t*, const MethodInfo*))List_1__ctor_m15943_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m15944_gshared (List_1_t277 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m15944(__this, ___capacity, method) (( void (*) (List_1_t277 *, int32_t, const MethodInfo*))List_1__ctor_m15944_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::.cctor()
extern "C" void List_1__cctor_m15945_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15945(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15945_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15946_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15946(__this, method) (( Object_t* (*) (List_1_t277 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15946_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15947_gshared (List_1_t277 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15947(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t277 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15947_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15948_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15948(__this, method) (( Object_t * (*) (List_1_t277 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15948_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15949_gshared (List_1_t277 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15949(__this, ___item, method) (( int32_t (*) (List_1_t277 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15949_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15950_gshared (List_1_t277 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15950(__this, ___item, method) (( bool (*) (List_1_t277 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15950_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15951_gshared (List_1_t277 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15951(__this, ___item, method) (( int32_t (*) (List_1_t277 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15951_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15952_gshared (List_1_t277 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15952(__this, ___index, ___item, method) (( void (*) (List_1_t277 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15952_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15953_gshared (List_1_t277 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15953(__this, ___item, method) (( void (*) (List_1_t277 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15953_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15954_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15954(__this, method) (( bool (*) (List_1_t277 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15954_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15955_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15955(__this, method) (( bool (*) (List_1_t277 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15955_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15956_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15956(__this, method) (( Object_t * (*) (List_1_t277 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15956_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15957_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15957(__this, method) (( bool (*) (List_1_t277 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15957_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15958_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15958(__this, method) (( bool (*) (List_1_t277 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15958_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15959_gshared (List_1_t277 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15959(__this, ___index, method) (( Object_t * (*) (List_1_t277 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15959_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15960_gshared (List_1_t277 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15960(__this, ___index, ___value, method) (( void (*) (List_1_t277 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15960_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Add(T)
extern "C" void List_1_Add_m15961_gshared (List_1_t277 * __this, Color32_t311  ___item, const MethodInfo* method);
#define List_1_Add_m15961(__this, ___item, method) (( void (*) (List_1_t277 *, Color32_t311 , const MethodInfo*))List_1_Add_m15961_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15962_gshared (List_1_t277 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15962(__this, ___newCount, method) (( void (*) (List_1_t277 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15962_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15963_gshared (List_1_t277 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15963(__this, ___collection, method) (( void (*) (List_1_t277 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15963_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15964_gshared (List_1_t277 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15964(__this, ___enumerable, method) (( void (*) (List_1_t277 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15964_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2119_gshared (List_1_t277 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2119(__this, ___collection, method) (( void (*) (List_1_t277 *, Object_t*, const MethodInfo*))List_1_AddRange_m2119_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Color32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2260 * List_1_AsReadOnly_m15965_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15965(__this, method) (( ReadOnlyCollection_1_t2260 * (*) (List_1_t277 *, const MethodInfo*))List_1_AsReadOnly_m15965_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Clear()
extern "C" void List_1_Clear_m15966_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_Clear_m15966(__this, method) (( void (*) (List_1_t277 *, const MethodInfo*))List_1_Clear_m15966_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Contains(T)
extern "C" bool List_1_Contains_m15967_gshared (List_1_t277 * __this, Color32_t311  ___item, const MethodInfo* method);
#define List_1_Contains_m15967(__this, ___item, method) (( bool (*) (List_1_t277 *, Color32_t311 , const MethodInfo*))List_1_Contains_m15967_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15968_gshared (List_1_t277 * __this, Color32U5BU5D_t389* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15968(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t277 *, Color32U5BU5D_t389*, int32_t, const MethodInfo*))List_1_CopyTo_m15968_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Color32>::Find(System.Predicate`1<T>)
extern "C" Color32_t311  List_1_Find_m15969_gshared (List_1_t277 * __this, Predicate_1_t2265 * ___match, const MethodInfo* method);
#define List_1_Find_m15969(__this, ___match, method) (( Color32_t311  (*) (List_1_t277 *, Predicate_1_t2265 *, const MethodInfo*))List_1_Find_m15969_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15970_gshared (Object_t * __this /* static, unused */, Predicate_1_t2265 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15970(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2265 *, const MethodInfo*))List_1_CheckMatch_m15970_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15971_gshared (List_1_t277 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2265 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15971(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t277 *, int32_t, int32_t, Predicate_1_t2265 *, const MethodInfo*))List_1_GetIndex_m15971_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Color32>::GetEnumerator()
extern "C" Enumerator_t2259  List_1_GetEnumerator_m15972_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15972(__this, method) (( Enumerator_t2259  (*) (List_1_t277 *, const MethodInfo*))List_1_GetEnumerator_m15972_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15973_gshared (List_1_t277 * __this, Color32_t311  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15973(__this, ___item, method) (( int32_t (*) (List_1_t277 *, Color32_t311 , const MethodInfo*))List_1_IndexOf_m15973_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15974_gshared (List_1_t277 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15974(__this, ___start, ___delta, method) (( void (*) (List_1_t277 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15974_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15975_gshared (List_1_t277 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15975(__this, ___index, method) (( void (*) (List_1_t277 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15975_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15976_gshared (List_1_t277 * __this, int32_t ___index, Color32_t311  ___item, const MethodInfo* method);
#define List_1_Insert_m15976(__this, ___index, ___item, method) (( void (*) (List_1_t277 *, int32_t, Color32_t311 , const MethodInfo*))List_1_Insert_m15976_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15977_gshared (List_1_t277 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15977(__this, ___collection, method) (( void (*) (List_1_t277 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15977_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Color32>::Remove(T)
extern "C" bool List_1_Remove_m15978_gshared (List_1_t277 * __this, Color32_t311  ___item, const MethodInfo* method);
#define List_1_Remove_m15978(__this, ___item, method) (( bool (*) (List_1_t277 *, Color32_t311 , const MethodInfo*))List_1_Remove_m15978_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15979_gshared (List_1_t277 * __this, Predicate_1_t2265 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15979(__this, ___match, method) (( int32_t (*) (List_1_t277 *, Predicate_1_t2265 *, const MethodInfo*))List_1_RemoveAll_m15979_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15980_gshared (List_1_t277 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15980(__this, ___index, method) (( void (*) (List_1_t277 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15980_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Reverse()
extern "C" void List_1_Reverse_m15981_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_Reverse_m15981(__this, method) (( void (*) (List_1_t277 *, const MethodInfo*))List_1_Reverse_m15981_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort()
extern "C" void List_1_Sort_m15982_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_Sort_m15982(__this, method) (( void (*) (List_1_t277 *, const MethodInfo*))List_1_Sort_m15982_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m15983_gshared (List_1_t277 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m15983(__this, ___comparer, method) (( void (*) (List_1_t277 *, Object_t*, const MethodInfo*))List_1_Sort_m15983_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15984_gshared (List_1_t277 * __this, Comparison_1_t2268 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15984(__this, ___comparison, method) (( void (*) (List_1_t277 *, Comparison_1_t2268 *, const MethodInfo*))List_1_Sort_m15984_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Color32>::ToArray()
extern "C" Color32U5BU5D_t389* List_1_ToArray_m15985_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_ToArray_m15985(__this, method) (( Color32U5BU5D_t389* (*) (List_1_t277 *, const MethodInfo*))List_1_ToArray_m15985_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::TrimExcess()
extern "C" void List_1_TrimExcess_m15986_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15986(__this, method) (( void (*) (List_1_t277 *, const MethodInfo*))List_1_TrimExcess_m15986_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15987_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15987(__this, method) (( int32_t (*) (List_1_t277 *, const MethodInfo*))List_1_get_Capacity_m15987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15988_gshared (List_1_t277 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15988(__this, ___value, method) (( void (*) (List_1_t277 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15988_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color32>::get_Count()
extern "C" int32_t List_1_get_Count_m15989_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_get_Count_m15989(__this, method) (( int32_t (*) (List_1_t277 *, const MethodInfo*))List_1_get_Count_m15989_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Color32>::get_Item(System.Int32)
extern "C" Color32_t311  List_1_get_Item_m15990_gshared (List_1_t277 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15990(__this, ___index, method) (( Color32_t311  (*) (List_1_t277 *, int32_t, const MethodInfo*))List_1_get_Item_m15990_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Color32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15991_gshared (List_1_t277 * __this, int32_t ___index, Color32_t311  ___value, const MethodInfo* method);
#define List_1_set_Item_m15991(__this, ___index, ___value, method) (( void (*) (List_1_t277 *, int32_t, Color32_t311 , const MethodInfo*))List_1_set_Item_m15991_gshared)(__this, ___index, ___value, method)
