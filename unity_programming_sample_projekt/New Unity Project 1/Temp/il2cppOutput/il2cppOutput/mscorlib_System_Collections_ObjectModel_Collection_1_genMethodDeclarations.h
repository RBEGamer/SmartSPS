#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1959;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t61;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2231;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1958;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m11919_gshared (Collection_1_t1959 * __this, const MethodInfo* method);
#define Collection_1__ctor_m11919(__this, method) (( void (*) (Collection_1_t1959 *, const MethodInfo*))Collection_1__ctor_m11919_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11920_gshared (Collection_1_t1959 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11920(__this, method) (( bool (*) (Collection_1_t1959 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11920_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m11921_gshared (Collection_1_t1959 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m11921(__this, ___array, ___index, method) (( void (*) (Collection_1_t1959 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11921_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m11922_gshared (Collection_1_t1959 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m11922(__this, method) (( Object_t * (*) (Collection_1_t1959 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11922_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m11923_gshared (Collection_1_t1959 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m11923(__this, ___value, method) (( int32_t (*) (Collection_1_t1959 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m11923_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m11924_gshared (Collection_1_t1959 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m11924(__this, ___value, method) (( bool (*) (Collection_1_t1959 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m11924_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m11925_gshared (Collection_1_t1959 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m11925(__this, ___value, method) (( int32_t (*) (Collection_1_t1959 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11925_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m11926_gshared (Collection_1_t1959 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m11926(__this, ___index, ___value, method) (( void (*) (Collection_1_t1959 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m11926_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m11927_gshared (Collection_1_t1959 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m11927(__this, ___value, method) (( void (*) (Collection_1_t1959 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m11927_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m11928_gshared (Collection_1_t1959 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m11928(__this, method) (( bool (*) (Collection_1_t1959 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m11928_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m11929_gshared (Collection_1_t1959 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m11929(__this, method) (( Object_t * (*) (Collection_1_t1959 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11929_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m11930_gshared (Collection_1_t1959 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m11930(__this, method) (( bool (*) (Collection_1_t1959 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m11930_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m11931_gshared (Collection_1_t1959 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m11931(__this, method) (( bool (*) (Collection_1_t1959 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m11931_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m11932_gshared (Collection_1_t1959 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m11932(__this, ___index, method) (( Object_t * (*) (Collection_1_t1959 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11932_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m11933_gshared (Collection_1_t1959 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m11933(__this, ___index, ___value, method) (( void (*) (Collection_1_t1959 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11933_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m11934_gshared (Collection_1_t1959 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m11934(__this, ___item, method) (( void (*) (Collection_1_t1959 *, Object_t *, const MethodInfo*))Collection_1_Add_m11934_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m11935_gshared (Collection_1_t1959 * __this, const MethodInfo* method);
#define Collection_1_Clear_m11935(__this, method) (( void (*) (Collection_1_t1959 *, const MethodInfo*))Collection_1_Clear_m11935_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m11936_gshared (Collection_1_t1959 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m11936(__this, method) (( void (*) (Collection_1_t1959 *, const MethodInfo*))Collection_1_ClearItems_m11936_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m11937_gshared (Collection_1_t1959 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m11937(__this, ___item, method) (( bool (*) (Collection_1_t1959 *, Object_t *, const MethodInfo*))Collection_1_Contains_m11937_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m11938_gshared (Collection_1_t1959 * __this, ObjectU5BU5D_t61* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m11938(__this, ___array, ___index, method) (( void (*) (Collection_1_t1959 *, ObjectU5BU5D_t61*, int32_t, const MethodInfo*))Collection_1_CopyTo_m11938_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m11939_gshared (Collection_1_t1959 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m11939(__this, method) (( Object_t* (*) (Collection_1_t1959 *, const MethodInfo*))Collection_1_GetEnumerator_m11939_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m11940_gshared (Collection_1_t1959 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m11940(__this, ___item, method) (( int32_t (*) (Collection_1_t1959 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m11940_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m11941_gshared (Collection_1_t1959 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m11941(__this, ___index, ___item, method) (( void (*) (Collection_1_t1959 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m11941_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m11942_gshared (Collection_1_t1959 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m11942(__this, ___index, ___item, method) (( void (*) (Collection_1_t1959 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m11942_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m11943_gshared (Collection_1_t1959 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m11943(__this, ___item, method) (( bool (*) (Collection_1_t1959 *, Object_t *, const MethodInfo*))Collection_1_Remove_m11943_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m11944_gshared (Collection_1_t1959 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m11944(__this, ___index, method) (( void (*) (Collection_1_t1959 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m11944_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m11945_gshared (Collection_1_t1959 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m11945(__this, ___index, method) (( void (*) (Collection_1_t1959 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m11945_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m11946_gshared (Collection_1_t1959 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m11946(__this, method) (( int32_t (*) (Collection_1_t1959 *, const MethodInfo*))Collection_1_get_Count_m11946_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m11947_gshared (Collection_1_t1959 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m11947(__this, ___index, method) (( Object_t * (*) (Collection_1_t1959 *, int32_t, const MethodInfo*))Collection_1_get_Item_m11947_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m11948_gshared (Collection_1_t1959 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m11948(__this, ___index, ___value, method) (( void (*) (Collection_1_t1959 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m11948_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m11949_gshared (Collection_1_t1959 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m11949(__this, ___index, ___item, method) (( void (*) (Collection_1_t1959 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m11949_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m11950_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m11950(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m11950_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m11951_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m11951(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m11951_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m11952_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m11952(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m11952_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m11953_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m11953(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m11953_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m11954_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m11954(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m11954_gshared)(__this /* static, unused */, ___list, method)
