#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t317;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t371;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1972;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t28;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2253;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1710;
// System.Object[]
struct ObjectU5BU5D_t320;
// System.Predicate`1<System.Object>
struct Predicate_1_t1716;
// System.Comparison`1<System.Object>
struct Comparison_1_t1722;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m10209_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1__ctor_m10209(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1__ctor_m10209_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m10210_gshared (List_1_t317 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m10210(__this, ___collection, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1__ctor_m10210_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10211_gshared (List_1_t317 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10211(__this, ___capacity, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1__ctor_m10211_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m10212_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10212(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10212_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10213_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10213(__this, method) (( Object_t* (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10213_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10214_gshared (List_1_t317 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10214(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t317 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10214_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10215_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10215(__this, method) (( Object_t * (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10215_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10216_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10216(__this, ___item, method) (( int32_t (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10216_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10217_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10217(__this, ___item, method) (( bool (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10217_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10218_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10218(__this, ___item, method) (( int32_t (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10218_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10219_gshared (List_1_t317 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10219(__this, ___index, ___item, method) (( void (*) (List_1_t317 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10219_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10220_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10220(__this, ___item, method) (( void (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10220_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10221_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10221(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10221_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10222_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10222(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10222_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10223_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10223(__this, method) (( Object_t * (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10223_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10224_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10224(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10224_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10225_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10225(__this, method) (( bool (*) (List_1_t317 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10225_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10226_gshared (List_1_t317 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10226(__this, ___index, method) (( Object_t * (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10226_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10227_gshared (List_1_t317 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10227(__this, ___index, ___value, method) (( void (*) (List_1_t317 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10227_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10228_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10228(__this, ___item, method) (( void (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_Add_m10228_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10229_gshared (List_1_t317 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10229(__this, ___newCount, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10229_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10230_gshared (List_1_t317 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10230(__this, ___collection, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10230_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10231_gshared (List_1_t317 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10231(__this, ___enumerable, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10231_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10232_gshared (List_1_t317 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10232(__this, ___collection, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_AddRange_m10232_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1710 * List_1_AsReadOnly_m10233_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10233(__this, method) (( ReadOnlyCollection_1_t1710 * (*) (List_1_t317 *, const MethodInfo*))List_1_AsReadOnly_m10233_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10234_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_Clear_m10234(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_Clear_m10234_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10235_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10235(__this, ___item, method) (( bool (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_Contains_m10235_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10236_gshared (List_1_t317 * __this, ObjectU5BU5D_t320* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10236(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t317 *, ObjectU5BU5D_t320*, int32_t, const MethodInfo*))List_1_CopyTo_m10236_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m10237_gshared (List_1_t317 * __this, Predicate_1_t1716 * ___match, const MethodInfo* method);
#define List_1_Find_m10237(__this, ___match, method) (( Object_t * (*) (List_1_t317 *, Predicate_1_t1716 *, const MethodInfo*))List_1_Find_m10237_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10238_gshared (Object_t * __this /* static, unused */, Predicate_1_t1716 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10238(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1716 *, const MethodInfo*))List_1_CheckMatch_m10238_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10239_gshared (List_1_t317 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1716 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10239(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t317 *, int32_t, int32_t, Predicate_1_t1716 *, const MethodInfo*))List_1_GetIndex_m10239_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1709  List_1_GetEnumerator_m10240_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10240(__this, method) (( Enumerator_t1709  (*) (List_1_t317 *, const MethodInfo*))List_1_GetEnumerator_m10240_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10241_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10241(__this, ___item, method) (( int32_t (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10241_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10242_gshared (List_1_t317 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10242(__this, ___start, ___delta, method) (( void (*) (List_1_t317 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10242_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10243_gshared (List_1_t317 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10243(__this, ___index, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10243_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10244_gshared (List_1_t317 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10244(__this, ___index, ___item, method) (( void (*) (List_1_t317 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10244_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10245_gshared (List_1_t317 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10245(__this, ___collection, method) (( void (*) (List_1_t317 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10245_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10246_gshared (List_1_t317 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10246(__this, ___item, method) (( bool (*) (List_1_t317 *, Object_t *, const MethodInfo*))List_1_Remove_m10246_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10247_gshared (List_1_t317 * __this, Predicate_1_t1716 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10247(__this, ___match, method) (( int32_t (*) (List_1_t317 *, Predicate_1_t1716 *, const MethodInfo*))List_1_RemoveAll_m10247_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10248_gshared (List_1_t317 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10248(__this, ___index, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10248_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m10249_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_Reverse_m10249(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_Reverse_m10249_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m10250_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_Sort_m10250(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_Sort_m10250_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m10251_gshared (List_1_t317 * __this, Comparison_1_t1722 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m10251(__this, ___comparison, method) (( void (*) (List_1_t317 *, Comparison_1_t1722 *, const MethodInfo*))List_1_Sort_m10251_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t320* List_1_ToArray_m10252_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_ToArray_m10252(__this, method) (( ObjectU5BU5D_t320* (*) (List_1_t317 *, const MethodInfo*))List_1_ToArray_m10252_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m10253_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10253(__this, method) (( void (*) (List_1_t317 *, const MethodInfo*))List_1_TrimExcess_m10253_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10254_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10254(__this, method) (( int32_t (*) (List_1_t317 *, const MethodInfo*))List_1_get_Capacity_m10254_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10255_gshared (List_1_t317 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10255(__this, ___value, method) (( void (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10255_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10256_gshared (List_1_t317 * __this, const MethodInfo* method);
#define List_1_get_Count_m10256(__this, method) (( int32_t (*) (List_1_t317 *, const MethodInfo*))List_1_get_Count_m10256_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10257_gshared (List_1_t317 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10257(__this, ___index, method) (( Object_t * (*) (List_1_t317 *, int32_t, const MethodInfo*))List_1_get_Item_m10257_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10258_gshared (List_1_t317 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10258(__this, ___index, ___value, method) (( void (*) (List_1_t317 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10258_gshared)(__this, ___index, ___value, method)
