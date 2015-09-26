#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int32>
struct Collection_1_t2034;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t28;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t388;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2264;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2033;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::.ctor()
extern "C" void Collection_1__ctor_m14658_gshared (Collection_1_t2034 * __this, const MethodInfo* method);
#define Collection_1__ctor_m14658(__this, method) (( void (*) (Collection_1_t2034 *, const MethodInfo*))Collection_1__ctor_m14658_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14659_gshared (Collection_1_t2034 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14659(__this, method) (( bool (*) (Collection_1_t2034 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14659_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m14660_gshared (Collection_1_t2034 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m14660(__this, ___array, ___index, method) (( void (*) (Collection_1_t2034 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m14660_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m14661_gshared (Collection_1_t2034 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m14661(__this, method) (( Object_t * (*) (Collection_1_t2034 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m14661_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m14662_gshared (Collection_1_t2034 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m14662(__this, ___value, method) (( int32_t (*) (Collection_1_t2034 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m14662_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m14663_gshared (Collection_1_t2034 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m14663(__this, ___value, method) (( bool (*) (Collection_1_t2034 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m14663_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m14664_gshared (Collection_1_t2034 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m14664(__this, ___value, method) (( int32_t (*) (Collection_1_t2034 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m14664_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m14665_gshared (Collection_1_t2034 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m14665(__this, ___index, ___value, method) (( void (*) (Collection_1_t2034 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m14665_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m14666_gshared (Collection_1_t2034 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m14666(__this, ___value, method) (( void (*) (Collection_1_t2034 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m14666_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m14667_gshared (Collection_1_t2034 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m14667(__this, method) (( bool (*) (Collection_1_t2034 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m14667_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m14668_gshared (Collection_1_t2034 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m14668(__this, method) (( Object_t * (*) (Collection_1_t2034 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m14668_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m14669_gshared (Collection_1_t2034 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m14669(__this, method) (( bool (*) (Collection_1_t2034 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m14669_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m14670_gshared (Collection_1_t2034 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m14670(__this, method) (( bool (*) (Collection_1_t2034 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m14670_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m14671_gshared (Collection_1_t2034 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m14671(__this, ___index, method) (( Object_t * (*) (Collection_1_t2034 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m14671_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m14672_gshared (Collection_1_t2034 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m14672(__this, ___index, ___value, method) (( void (*) (Collection_1_t2034 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m14672_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Add(T)
extern "C" void Collection_1_Add_m14673_gshared (Collection_1_t2034 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Add_m14673(__this, ___item, method) (( void (*) (Collection_1_t2034 *, int32_t, const MethodInfo*))Collection_1_Add_m14673_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Clear()
extern "C" void Collection_1_Clear_m14674_gshared (Collection_1_t2034 * __this, const MethodInfo* method);
#define Collection_1_Clear_m14674(__this, method) (( void (*) (Collection_1_t2034 *, const MethodInfo*))Collection_1_Clear_m14674_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems()
extern "C" void Collection_1_ClearItems_m14675_gshared (Collection_1_t2034 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m14675(__this, method) (( void (*) (Collection_1_t2034 *, const MethodInfo*))Collection_1_ClearItems_m14675_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Contains(T)
extern "C" bool Collection_1_Contains_m14676_gshared (Collection_1_t2034 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m14676(__this, ___item, method) (( bool (*) (Collection_1_t2034 *, int32_t, const MethodInfo*))Collection_1_Contains_m14676_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m14677_gshared (Collection_1_t2034 * __this, Int32U5BU5D_t388* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m14677(__this, ___array, ___index, method) (( void (*) (Collection_1_t2034 *, Int32U5BU5D_t388*, int32_t, const MethodInfo*))Collection_1_CopyTo_m14677_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m14678_gshared (Collection_1_t2034 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m14678(__this, method) (( Object_t* (*) (Collection_1_t2034 *, const MethodInfo*))Collection_1_GetEnumerator_m14678_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m14679_gshared (Collection_1_t2034 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m14679(__this, ___item, method) (( int32_t (*) (Collection_1_t2034 *, int32_t, const MethodInfo*))Collection_1_IndexOf_m14679_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m14680_gshared (Collection_1_t2034 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m14680(__this, ___index, ___item, method) (( void (*) (Collection_1_t2034 *, int32_t, int32_t, const MethodInfo*))Collection_1_Insert_m14680_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m14681_gshared (Collection_1_t2034 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m14681(__this, ___index, ___item, method) (( void (*) (Collection_1_t2034 *, int32_t, int32_t, const MethodInfo*))Collection_1_InsertItem_m14681_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Remove(T)
extern "C" bool Collection_1_Remove_m14682_gshared (Collection_1_t2034 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m14682(__this, ___item, method) (( bool (*) (Collection_1_t2034 *, int32_t, const MethodInfo*))Collection_1_Remove_m14682_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m14683_gshared (Collection_1_t2034 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m14683(__this, ___index, method) (( void (*) (Collection_1_t2034 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m14683_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m14684_gshared (Collection_1_t2034 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m14684(__this, ___index, method) (( void (*) (Collection_1_t2034 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m14684_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m14685_gshared (Collection_1_t2034 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m14685(__this, method) (( int32_t (*) (Collection_1_t2034 *, const MethodInfo*))Collection_1_get_Count_m14685_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t Collection_1_get_Item_m14686_gshared (Collection_1_t2034 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m14686(__this, ___index, method) (( int32_t (*) (Collection_1_t2034 *, int32_t, const MethodInfo*))Collection_1_get_Item_m14686_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m14687_gshared (Collection_1_t2034 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m14687(__this, ___index, ___value, method) (( void (*) (Collection_1_t2034 *, int32_t, int32_t, const MethodInfo*))Collection_1_set_Item_m14687_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m14688_gshared (Collection_1_t2034 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m14688(__this, ___index, ___item, method) (( void (*) (Collection_1_t2034 *, int32_t, int32_t, const MethodInfo*))Collection_1_SetItem_m14688_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m14689_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m14689(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m14689_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::ConvertItem(System.Object)
extern "C" int32_t Collection_1_ConvertItem_m14690_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m14690(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m14690_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m14691_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m14691(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m14691_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m14692_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m14692(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m14692_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m14693_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m14693(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m14693_gshared)(__this /* static, unused */, ___list, method)
