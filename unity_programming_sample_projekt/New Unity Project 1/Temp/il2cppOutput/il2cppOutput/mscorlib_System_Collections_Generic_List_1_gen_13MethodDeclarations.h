#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t309;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t2568;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t2569;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t371;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t2157;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t197;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t2161;
// System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>
struct IComparer_1_t2570;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t2164;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_19.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m2142_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1__ctor_m2142(__this, method) (( void (*) (List_1_t309 *, const MethodInfo*))List_1__ctor_m2142_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14395_gshared (List_1_t309 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m14395(__this, ___collection, method) (( void (*) (List_1_t309 *, Object_t*, const MethodInfo*))List_1__ctor_m14395_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3118_gshared (List_1_t309 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3118(__this, ___capacity, method) (( void (*) (List_1_t309 *, int32_t, const MethodInfo*))List_1__ctor_m3118_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m14396_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14396(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14396_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14397_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14397(__this, method) (( Object_t* (*) (List_1_t309 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14397_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14398_gshared (List_1_t309 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14398(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t309 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14398_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14399_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14399(__this, method) (( Object_t * (*) (List_1_t309 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14399_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14400_gshared (List_1_t309 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14400(__this, ___item, method) (( int32_t (*) (List_1_t309 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14400_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14401_gshared (List_1_t309 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14401(__this, ___item, method) (( bool (*) (List_1_t309 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14401_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14402_gshared (List_1_t309 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14402(__this, ___item, method) (( int32_t (*) (List_1_t309 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14402_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14403_gshared (List_1_t309 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14403(__this, ___index, ___item, method) (( void (*) (List_1_t309 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14403_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14404_gshared (List_1_t309 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14404(__this, ___item, method) (( void (*) (List_1_t309 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14404_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14405_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14405(__this, method) (( bool (*) (List_1_t309 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14405_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14406_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14406(__this, method) (( bool (*) (List_1_t309 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14406_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14407_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14407(__this, method) (( Object_t * (*) (List_1_t309 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14407_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14408_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14408(__this, method) (( bool (*) (List_1_t309 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14408_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14409_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14409(__this, method) (( bool (*) (List_1_t309 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14409_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14410_gshared (List_1_t309 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14410(__this, ___index, method) (( Object_t * (*) (List_1_t309 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14410_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14411_gshared (List_1_t309 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14411(__this, ___index, ___value, method) (( void (*) (List_1_t309 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14411_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m14412_gshared (List_1_t309 * __this, UIVertex_t203  ___item, const MethodInfo* method);
#define List_1_Add_m14412(__this, ___item, method) (( void (*) (List_1_t309 *, UIVertex_t203 , const MethodInfo*))List_1_Add_m14412_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14413_gshared (List_1_t309 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14413(__this, ___newCount, method) (( void (*) (List_1_t309 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14413_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14414_gshared (List_1_t309 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14414(__this, ___collection, method) (( void (*) (List_1_t309 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14414_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14415_gshared (List_1_t309 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14415(__this, ___enumerable, method) (( void (*) (List_1_t309 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14415_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14416_gshared (List_1_t309 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m14416(__this, ___collection, method) (( void (*) (List_1_t309 *, Object_t*, const MethodInfo*))List_1_AddRange_m14416_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2157 * List_1_AsReadOnly_m14417_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14417(__this, method) (( ReadOnlyCollection_1_t2157 * (*) (List_1_t309 *, const MethodInfo*))List_1_AsReadOnly_m14417_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m14418_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_Clear_m14418(__this, method) (( void (*) (List_1_t309 *, const MethodInfo*))List_1_Clear_m14418_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m14419_gshared (List_1_t309 * __this, UIVertex_t203  ___item, const MethodInfo* method);
#define List_1_Contains_m14419(__this, ___item, method) (( bool (*) (List_1_t309 *, UIVertex_t203 , const MethodInfo*))List_1_Contains_m14419_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14420_gshared (List_1_t309 * __this, UIVertexU5BU5D_t197* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14420(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t309 *, UIVertexU5BU5D_t197*, int32_t, const MethodInfo*))List_1_CopyTo_m14420_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t203  List_1_Find_m14421_gshared (List_1_t309 * __this, Predicate_1_t2161 * ___match, const MethodInfo* method);
#define List_1_Find_m14421(__this, ___match, method) (( UIVertex_t203  (*) (List_1_t309 *, Predicate_1_t2161 *, const MethodInfo*))List_1_Find_m14421_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14422_gshared (Object_t * __this /* static, unused */, Predicate_1_t2161 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14422(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2161 *, const MethodInfo*))List_1_CheckMatch_m14422_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14423_gshared (List_1_t309 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2161 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14423(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t309 *, int32_t, int32_t, Predicate_1_t2161 *, const MethodInfo*))List_1_GetIndex_m14423_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2156  List_1_GetEnumerator_m14424_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14424(__this, method) (( Enumerator_t2156  (*) (List_1_t309 *, const MethodInfo*))List_1_GetEnumerator_m14424_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14425_gshared (List_1_t309 * __this, UIVertex_t203  ___item, const MethodInfo* method);
#define List_1_IndexOf_m14425(__this, ___item, method) (( int32_t (*) (List_1_t309 *, UIVertex_t203 , const MethodInfo*))List_1_IndexOf_m14425_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14426_gshared (List_1_t309 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14426(__this, ___start, ___delta, method) (( void (*) (List_1_t309 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14426_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14427_gshared (List_1_t309 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14427(__this, ___index, method) (( void (*) (List_1_t309 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14427_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14428_gshared (List_1_t309 * __this, int32_t ___index, UIVertex_t203  ___item, const MethodInfo* method);
#define List_1_Insert_m14428(__this, ___index, ___item, method) (( void (*) (List_1_t309 *, int32_t, UIVertex_t203 , const MethodInfo*))List_1_Insert_m14428_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14429_gshared (List_1_t309 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14429(__this, ___collection, method) (( void (*) (List_1_t309 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14429_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m14430_gshared (List_1_t309 * __this, UIVertex_t203  ___item, const MethodInfo* method);
#define List_1_Remove_m14430(__this, ___item, method) (( bool (*) (List_1_t309 *, UIVertex_t203 , const MethodInfo*))List_1_Remove_m14430_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14431_gshared (List_1_t309 * __this, Predicate_1_t2161 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14431(__this, ___match, method) (( int32_t (*) (List_1_t309 *, Predicate_1_t2161 *, const MethodInfo*))List_1_RemoveAll_m14431_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14432_gshared (List_1_t309 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14432(__this, ___index, method) (( void (*) (List_1_t309 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14432_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m14433_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_Reverse_m14433(__this, method) (( void (*) (List_1_t309 *, const MethodInfo*))List_1_Reverse_m14433_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m14434_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_Sort_m14434(__this, method) (( void (*) (List_1_t309 *, const MethodInfo*))List_1_Sort_m14434_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m14435_gshared (List_1_t309 * __this, Object_t* ___comparer, const MethodInfo* method);
#define List_1_Sort_m14435(__this, ___comparer, method) (( void (*) (List_1_t309 *, Object_t*, const MethodInfo*))List_1_Sort_m14435_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14436_gshared (List_1_t309 * __this, Comparison_1_t2164 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14436(__this, ___comparison, method) (( void (*) (List_1_t309 *, Comparison_1_t2164 *, const MethodInfo*))List_1_Sort_m14436_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t197* List_1_ToArray_m14437_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_ToArray_m14437(__this, method) (( UIVertexU5BU5D_t197* (*) (List_1_t309 *, const MethodInfo*))List_1_ToArray_m14437_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m14438_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14438(__this, method) (( void (*) (List_1_t309 *, const MethodInfo*))List_1_TrimExcess_m14438_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m2143_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m2143(__this, method) (( int32_t (*) (List_1_t309 *, const MethodInfo*))List_1_get_Capacity_m2143_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m2144_gshared (List_1_t309 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m2144(__this, ___value, method) (( void (*) (List_1_t309 *, int32_t, const MethodInfo*))List_1_set_Capacity_m2144_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m14439_gshared (List_1_t309 * __this, const MethodInfo* method);
#define List_1_get_Count_m14439(__this, method) (( int32_t (*) (List_1_t309 *, const MethodInfo*))List_1_get_Count_m14439_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t203  List_1_get_Item_m14440_gshared (List_1_t309 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14440(__this, ___index, method) (( UIVertex_t203  (*) (List_1_t309 *, int32_t, const MethodInfo*))List_1_get_Item_m14440_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14441_gshared (List_1_t309 * __this, int32_t ___index, UIVertex_t203  ___value, const MethodInfo* method);
#define List_1_set_Item_m14441(__this, ___index, ___value, method) (( void (*) (List_1_t309 *, int32_t, UIVertex_t203 , const MethodInfo*))List_1_set_Item_m14441_gshared)(__this, ___index, ___value, method)
