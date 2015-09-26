#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1712;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t28;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t320;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1972;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1711;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m10289_gshared (Collection_1_t1712 * __this, const MethodInfo* method);
#define Collection_1__ctor_m10289(__this, method) (( void (*) (Collection_1_t1712 *, const MethodInfo*))Collection_1__ctor_m10289_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10290_gshared (Collection_1_t1712 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10290(__this, method) (( bool (*) (Collection_1_t1712 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10290_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m10291_gshared (Collection_1_t1712 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m10291(__this, ___array, ___index, method) (( void (*) (Collection_1_t1712 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m10291_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m10292_gshared (Collection_1_t1712 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m10292(__this, method) (( Object_t * (*) (Collection_1_t1712 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m10292_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m10293_gshared (Collection_1_t1712 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m10293(__this, ___value, method) (( int32_t (*) (Collection_1_t1712 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m10293_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m10294_gshared (Collection_1_t1712 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m10294(__this, ___value, method) (( bool (*) (Collection_1_t1712 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m10294_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m10295_gshared (Collection_1_t1712 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m10295(__this, ___value, method) (( int32_t (*) (Collection_1_t1712 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m10295_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m10296_gshared (Collection_1_t1712 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m10296(__this, ___index, ___value, method) (( void (*) (Collection_1_t1712 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m10296_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m10297_gshared (Collection_1_t1712 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m10297(__this, ___value, method) (( void (*) (Collection_1_t1712 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m10297_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m10298_gshared (Collection_1_t1712 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m10298(__this, method) (( bool (*) (Collection_1_t1712 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m10298_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m10299_gshared (Collection_1_t1712 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m10299(__this, method) (( Object_t * (*) (Collection_1_t1712 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m10299_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m10300_gshared (Collection_1_t1712 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m10300(__this, method) (( bool (*) (Collection_1_t1712 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m10300_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m10301_gshared (Collection_1_t1712 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m10301(__this, method) (( bool (*) (Collection_1_t1712 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m10301_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m10302_gshared (Collection_1_t1712 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m10302(__this, ___index, method) (( Object_t * (*) (Collection_1_t1712 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m10302_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m10303_gshared (Collection_1_t1712 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m10303(__this, ___index, ___value, method) (( void (*) (Collection_1_t1712 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m10303_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m10304_gshared (Collection_1_t1712 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m10304(__this, ___item, method) (( void (*) (Collection_1_t1712 *, Object_t *, const MethodInfo*))Collection_1_Add_m10304_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m10305_gshared (Collection_1_t1712 * __this, const MethodInfo* method);
#define Collection_1_Clear_m10305(__this, method) (( void (*) (Collection_1_t1712 *, const MethodInfo*))Collection_1_Clear_m10305_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m10306_gshared (Collection_1_t1712 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m10306(__this, method) (( void (*) (Collection_1_t1712 *, const MethodInfo*))Collection_1_ClearItems_m10306_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m10307_gshared (Collection_1_t1712 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m10307(__this, ___item, method) (( bool (*) (Collection_1_t1712 *, Object_t *, const MethodInfo*))Collection_1_Contains_m10307_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m10308_gshared (Collection_1_t1712 * __this, ObjectU5BU5D_t320* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m10308(__this, ___array, ___index, method) (( void (*) (Collection_1_t1712 *, ObjectU5BU5D_t320*, int32_t, const MethodInfo*))Collection_1_CopyTo_m10308_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m10309_gshared (Collection_1_t1712 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m10309(__this, method) (( Object_t* (*) (Collection_1_t1712 *, const MethodInfo*))Collection_1_GetEnumerator_m10309_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m10310_gshared (Collection_1_t1712 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m10310(__this, ___item, method) (( int32_t (*) (Collection_1_t1712 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m10310_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m10311_gshared (Collection_1_t1712 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m10311(__this, ___index, ___item, method) (( void (*) (Collection_1_t1712 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m10311_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m10312_gshared (Collection_1_t1712 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m10312(__this, ___index, ___item, method) (( void (*) (Collection_1_t1712 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m10312_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m10313_gshared (Collection_1_t1712 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m10313(__this, ___item, method) (( bool (*) (Collection_1_t1712 *, Object_t *, const MethodInfo*))Collection_1_Remove_m10313_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m10314_gshared (Collection_1_t1712 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m10314(__this, ___index, method) (( void (*) (Collection_1_t1712 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m10314_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m10315_gshared (Collection_1_t1712 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m10315(__this, ___index, method) (( void (*) (Collection_1_t1712 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m10315_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m10316_gshared (Collection_1_t1712 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m10316(__this, method) (( int32_t (*) (Collection_1_t1712 *, const MethodInfo*))Collection_1_get_Count_m10316_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m10317_gshared (Collection_1_t1712 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m10317(__this, ___index, method) (( Object_t * (*) (Collection_1_t1712 *, int32_t, const MethodInfo*))Collection_1_get_Item_m10317_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m10318_gshared (Collection_1_t1712 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m10318(__this, ___index, ___value, method) (( void (*) (Collection_1_t1712 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m10318_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m10319_gshared (Collection_1_t1712 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m10319(__this, ___index, ___item, method) (( void (*) (Collection_1_t1712 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m10319_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m10320_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m10320(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m10320_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m10321_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m10321(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m10321_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m10322_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m10322(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m10322_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m10323_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m10323(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m10323_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m10324_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m10324(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m10324_gshared)(__this /* static, unused */, ___list, method)
