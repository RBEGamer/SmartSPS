#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1803;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1802;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t584;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2260;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t28;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2261;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t986;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1808;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m11419_gshared (Dictionary_2_t1803 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11419(__this, method) (( void (*) (Dictionary_2_t1803 *, const MethodInfo*))Dictionary_2__ctor_m11419_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11421_gshared (Dictionary_2_t1803 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11421(__this, ___comparer, method) (( void (*) (Dictionary_2_t1803 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11421_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11423_gshared (Dictionary_2_t1803 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11423(__this, ___capacity, method) (( void (*) (Dictionary_2_t1803 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11423_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11425_gshared (Dictionary_2_t1803 * __this, SerializationInfo_t584 * ___info, StreamingContext_t585  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11425(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1803 *, SerializationInfo_t584 *, StreamingContext_t585 , const MethodInfo*))Dictionary_2__ctor_m11425_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11427_gshared (Dictionary_2_t1803 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11427(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1803 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11427_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11429_gshared (Dictionary_2_t1803 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11429(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1803 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11429_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11431_gshared (Dictionary_2_t1803 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11431(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1803 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11431_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11433_gshared (Dictionary_2_t1803 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11433(__this, ___key, method) (( bool (*) (Dictionary_2_t1803 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11433_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11435_gshared (Dictionary_2_t1803 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11435(__this, ___key, method) (( void (*) (Dictionary_2_t1803 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11435_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11437_gshared (Dictionary_2_t1803 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11437(__this, method) (( bool (*) (Dictionary_2_t1803 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11437_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11439_gshared (Dictionary_2_t1803 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11439(__this, method) (( Object_t * (*) (Dictionary_2_t1803 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11439_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11441_gshared (Dictionary_2_t1803 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11441(__this, method) (( bool (*) (Dictionary_2_t1803 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11441_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11443_gshared (Dictionary_2_t1803 * __this, KeyValuePair_2_t1805  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11443(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1803 *, KeyValuePair_2_t1805 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11443_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11445_gshared (Dictionary_2_t1803 * __this, KeyValuePair_2_t1805  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11445(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1803 *, KeyValuePair_2_t1805 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11445_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11447_gshared (Dictionary_2_t1803 * __this, KeyValuePair_2U5BU5D_t2260* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11447(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1803 *, KeyValuePair_2U5BU5D_t2260*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11447_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11449_gshared (Dictionary_2_t1803 * __this, KeyValuePair_2_t1805  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11449(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1803 *, KeyValuePair_2_t1805 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11449_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11451_gshared (Dictionary_2_t1803 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11451(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1803 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11451_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11453_gshared (Dictionary_2_t1803 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11453(__this, method) (( Object_t * (*) (Dictionary_2_t1803 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11453_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11455_gshared (Dictionary_2_t1803 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11455(__this, method) (( Object_t* (*) (Dictionary_2_t1803 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11455_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11457_gshared (Dictionary_2_t1803 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11457(__this, method) (( Object_t * (*) (Dictionary_2_t1803 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11457_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11459_gshared (Dictionary_2_t1803 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11459(__this, method) (( int32_t (*) (Dictionary_2_t1803 *, const MethodInfo*))Dictionary_2_get_Count_m11459_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m11461_gshared (Dictionary_2_t1803 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11461(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1803 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m11461_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11463_gshared (Dictionary_2_t1803 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11463(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1803 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m11463_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11465_gshared (Dictionary_2_t1803 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11465(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1803 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11465_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11467_gshared (Dictionary_2_t1803 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11467(__this, ___size, method) (( void (*) (Dictionary_2_t1803 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11467_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11469_gshared (Dictionary_2_t1803 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11469(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1803 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11469_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1805  Dictionary_2_make_pair_m11471_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11471(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1805  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m11471_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m11473_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11473(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m11473_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11475_gshared (Dictionary_2_t1803 * __this, KeyValuePair_2U5BU5D_t2260* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11475(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1803 *, KeyValuePair_2U5BU5D_t2260*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11475_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m11477_gshared (Dictionary_2_t1803 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11477(__this, method) (( void (*) (Dictionary_2_t1803 *, const MethodInfo*))Dictionary_2_Resize_m11477_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11479_gshared (Dictionary_2_t1803 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11479(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1803 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m11479_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m11481_gshared (Dictionary_2_t1803 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11481(__this, method) (( void (*) (Dictionary_2_t1803 *, const MethodInfo*))Dictionary_2_Clear_m11481_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11483_gshared (Dictionary_2_t1803 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11483(__this, ___key, method) (( bool (*) (Dictionary_2_t1803 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m11483_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11485_gshared (Dictionary_2_t1803 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11485(__this, ___value, method) (( bool (*) (Dictionary_2_t1803 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m11485_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11487_gshared (Dictionary_2_t1803 * __this, SerializationInfo_t584 * ___info, StreamingContext_t585  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11487(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1803 *, SerializationInfo_t584 *, StreamingContext_t585 , const MethodInfo*))Dictionary_2_GetObjectData_m11487_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11489_gshared (Dictionary_2_t1803 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11489(__this, ___sender, method) (( void (*) (Dictionary_2_t1803 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11489_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11491_gshared (Dictionary_2_t1803 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11491(__this, ___key, method) (( bool (*) (Dictionary_2_t1803 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m11491_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11493_gshared (Dictionary_2_t1803 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11493(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1803 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m11493_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1808 * Dictionary_2_get_Values_m11494_gshared (Dictionary_2_t1803 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11494(__this, method) (( ValueCollection_t1808 * (*) (Dictionary_2_t1803 *, const MethodInfo*))Dictionary_2_get_Values_m11494_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m11496_gshared (Dictionary_2_t1803 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11496(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1803 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11496_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m11498_gshared (Dictionary_2_t1803 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11498(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1803 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11498_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11500_gshared (Dictionary_2_t1803 * __this, KeyValuePair_2_t1805  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11500(__this, ___pair, method) (( bool (*) (Dictionary_2_t1803 *, KeyValuePair_2_t1805 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11500_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1810  Dictionary_2_GetEnumerator_m11501_gshared (Dictionary_2_t1803 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11501(__this, method) (( Enumerator_t1810  (*) (Dictionary_2_t1803 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11501_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t987  Dictionary_2_U3CCopyToU3Em__0_m11503_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11503(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t987  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11503_gshared)(__this /* static, unused */, ___key, ___value, method)
