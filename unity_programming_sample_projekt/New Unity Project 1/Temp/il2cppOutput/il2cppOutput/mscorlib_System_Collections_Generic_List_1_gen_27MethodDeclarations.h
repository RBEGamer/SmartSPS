#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t280;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2597;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2561;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2598;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2291;
// System.Int32[]
struct Int32U5BU5D_t391;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2294;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t2599;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2298;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m16384_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1__ctor_m16384(__this, method) (( void (*) (List_1_t280 *, const MethodInfo*))List_1__ctor_m16384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16385_gshared (List_1_t280 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m16385(__this, ___collection, method) (( void (*) (List_1_t280 *, Object_t*, const MethodInfo*))List_1__ctor_m16385_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m16386_gshared (List_1_t280 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m16386(__this, ___capacity, method) (( void (*) (List_1_t280 *, int32_t, const MethodInfo*))List_1__ctor_m16386_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m16387_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16387(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16387_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16388_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16388(__this, method) (( Object_t* (*) (List_1_t280 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16388_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m16389_gshared (List_1_t280 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m16389(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t280 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m16389_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m16390_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16390(__this, method) (( Object_t * (*) (List_1_t280 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m16390_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m16391_gshared (List_1_t280 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m16391(__this, ___item, method) (( int32_t (*) (List_1_t280 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m16391_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m16392_gshared (List_1_t280 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m16392(__this, ___item, method) (( bool (*) (List_1_t280 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m16392_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m16393_gshared (List_1_t280 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m16393(__this, ___item, method) (( int32_t (*) (List_1_t280 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m16393_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m16394_gshared (List_1_t280 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m16394(__this, ___index, ___item, method) (( void (*) (List_1_t280 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m16394_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m16395_gshared (List_1_t280 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m16395(__this, ___item, method) (( void (*) (List_1_t280 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m16395_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16396_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16396(__this, method) (( bool (*) (List_1_t280 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16396_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m16397_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16397(__this, method) (( bool (*) (List_1_t280 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m16397_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m16398_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m16398(__this, method) (( Object_t * (*) (List_1_t280 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m16398_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m16399_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m16399(__this, method) (( bool (*) (List_1_t280 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m16399_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m16400_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m16400(__this, method) (( bool (*) (List_1_t280 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m16400_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m16401_gshared (List_1_t280 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m16401(__this, ___index, method) (( Object_t * (*) (List_1_t280 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m16401_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m16402_gshared (List_1_t280 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m16402(__this, ___index, ___value, method) (( void (*) (List_1_t280 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m16402_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m16403_gshared (List_1_t280 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m16403(__this, ___item, method) (( void (*) (List_1_t280 *, int32_t, const MethodInfo*))List_1_Add_m16403_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16404_gshared (List_1_t280 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16404(__this, ___newCount, method) (( void (*) (List_1_t280 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16404_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16405_gshared (List_1_t280 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16405(__this, ___collection, method) (( void (*) (List_1_t280 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16405_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16406_gshared (List_1_t280 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16406(__this, ___enumerable, method) (( void (*) (List_1_t280 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16406_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2127_gshared (List_1_t280 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2127(__this, ___collection, method) (( void (*) (List_1_t280 *, Object_t*, const MethodInfo*))List_1_AddRange_m2127_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2291 * List_1_AsReadOnly_m16407_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16407(__this, method) (( ReadOnlyCollection_1_t2291 * (*) (List_1_t280 *, const MethodInfo*))List_1_AsReadOnly_m16407_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m16408_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_Clear_m16408(__this, method) (( void (*) (List_1_t280 *, const MethodInfo*))List_1_Clear_m16408_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m16409_gshared (List_1_t280 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m16409(__this, ___item, method) (( bool (*) (List_1_t280 *, int32_t, const MethodInfo*))List_1_Contains_m16409_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m16410_gshared (List_1_t280 * __this, Int32U5BU5D_t391* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m16410(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t280 *, Int32U5BU5D_t391*, int32_t, const MethodInfo*))List_1_CopyTo_m16410_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m16411_gshared (List_1_t280 * __this, Predicate_1_t2294 * ___match, const MethodInfo* method);
#define List_1_Find_m16411(__this, ___match, method) (( int32_t (*) (List_1_t280 *, Predicate_1_t2294 *, const MethodInfo*))List_1_Find_m16411_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16412_gshared (Object_t * __this /* static, unused */, Predicate_1_t2294 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16412(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2294 *, const MethodInfo*))List_1_CheckMatch_m16412_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16413_gshared (List_1_t280 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2294 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16413(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t280 *, int32_t, int32_t, Predicate_1_t2294 *, const MethodInfo*))List_1_GetIndex_m16413_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2290  List_1_GetEnumerator_m16414_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m16414(__this, method) (( Enumerator_t2290  (*) (List_1_t280 *, const MethodInfo*))List_1_GetEnumerator_m16414_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m16415_gshared (List_1_t280 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m16415(__this, ___item, method) (( int32_t (*) (List_1_t280 *, int32_t, const MethodInfo*))List_1_IndexOf_m16415_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16416_gshared (List_1_t280 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16416(__this, ___start, ___delta, method) (( void (*) (List_1_t280 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16416_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16417_gshared (List_1_t280 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16417(__this, ___index, method) (( void (*) (List_1_t280 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16417_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m16418_gshared (List_1_t280 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m16418(__this, ___index, ___item, method) (( void (*) (List_1_t280 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m16418_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16419_gshared (List_1_t280 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16419(__this, ___collection, method) (( void (*) (List_1_t280 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16419_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m16420_gshared (List_1_t280 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m16420(__this, ___item, method) (( bool (*) (List_1_t280 *, int32_t, const MethodInfo*))List_1_Remove_m16420_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16421_gshared (List_1_t280 * __this, Predicate_1_t2294 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16421(__this, ___match, method) (( int32_t (*) (List_1_t280 *, Predicate_1_t2294 *, const MethodInfo*))List_1_RemoveAll_m16421_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m16422_gshared (List_1_t280 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m16422(__this, ___index, method) (( void (*) (List_1_t280 *, int32_t, const MethodInfo*))List_1_RemoveAt_m16422_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m16423_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_Reverse_m16423(__this, method) (( void (*) (List_1_t280 *, const MethodInfo*))List_1_Reverse_m16423_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m16424_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_Sort_m16424(__this, method) (( void (*) (List_1_t280 *, const MethodInfo*))List_1_Sort_m16424_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m16425_gshared (List_1_t280 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m16425(__this, ___comparer, method) (( void (*) (List_1_t280 *, Object_t*, const MethodInfo*))List_1_Sort_m16425_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16426_gshared (List_1_t280 * __this, Comparison_1_t2298 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16426(__this, ___comparison, method) (( void (*) (List_1_t280 *, Comparison_1_t2298 *, const MethodInfo*))List_1_Sort_m16426_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t391* List_1_ToArray_m16427_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_ToArray_m16427(__this, method) (( Int32U5BU5D_t391* (*) (List_1_t280 *, const MethodInfo*))List_1_ToArray_m16427_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m16428_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16428(__this, method) (( void (*) (List_1_t280 *, const MethodInfo*))List_1_TrimExcess_m16428_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16429_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16429(__this, method) (( int32_t (*) (List_1_t280 *, const MethodInfo*))List_1_get_Capacity_m16429_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16430_gshared (List_1_t280 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16430(__this, ___value, method) (( void (*) (List_1_t280 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16430_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m16431_gshared (List_1_t280 * __this, const MethodInfo* method);
#define List_1_get_Count_m16431(__this, method) (( int32_t (*) (List_1_t280 *, const MethodInfo*))List_1_get_Count_m16431_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m16432_gshared (List_1_t280 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m16432(__this, ___index, method) (( int32_t (*) (List_1_t280 *, int32_t, const MethodInfo*))List_1_get_Item_m16432_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m16433_gshared (List_1_t280 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m16433(__this, ___index, ___value, method) (( void (*) (List_1_t280 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m16433_gshared)(__this, ___index, ___value, method)
