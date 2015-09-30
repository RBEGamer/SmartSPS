#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2454;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2091;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t587;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2618;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2619;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1239;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2459;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m18290_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18290(__this, method) (( void (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2__ctor_m18290_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18291_gshared (Dictionary_2_t2454 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18291(__this, ___comparer, method) (( void (*) (Dictionary_2_t2454 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18291_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18293_gshared (Dictionary_2_t2454 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18293(__this, ___capacity, method) (( void (*) (Dictionary_2_t2454 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18293_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18295_gshared (Dictionary_2_t2454 * __this, SerializationInfo_t587 * ___info, StreamingContext_t588  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18295(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2454 *, SerializationInfo_t587 *, StreamingContext_t588 , const MethodInfo*))Dictionary_2__ctor_m18295_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18297_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18297(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18297_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18299_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18299(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2454 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18299_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18301_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18301(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2454 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18301_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18303_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18303(__this, ___key, method) (( bool (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18303_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18305_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18305(__this, ___key, method) (( void (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18305_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18307_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18307(__this, method) (( bool (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18307_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18309_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18309(__this, method) (( Object_t * (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18309_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18311_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18311(__this, method) (( bool (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18311_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18313_gshared (Dictionary_2_t2454 * __this, KeyValuePair_2_t2456  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18313(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2454 *, KeyValuePair_2_t2456 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18313_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18315_gshared (Dictionary_2_t2454 * __this, KeyValuePair_2_t2456  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18315(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2454 *, KeyValuePair_2_t2456 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18315_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18317_gshared (Dictionary_2_t2454 * __this, KeyValuePair_2U5BU5D_t2618* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18317(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2454 *, KeyValuePair_2U5BU5D_t2618*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18317_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18319_gshared (Dictionary_2_t2454 * __this, KeyValuePair_2_t2456  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18319(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2454 *, KeyValuePair_2_t2456 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18319_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18321_gshared (Dictionary_2_t2454 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18321(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2454 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18321_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18323_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18323(__this, method) (( Object_t * (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18323_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18325_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18325(__this, method) (( Object_t* (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18325_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18327_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18327(__this, method) (( Object_t * (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18327_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18329_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18329(__this, method) (( int32_t (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_get_Count_m18329_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m18331_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18331(__this, ___key, method) (( bool (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18331_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18333_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18333(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2454 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m18333_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18335_gshared (Dictionary_2_t2454 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18335(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2454 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18335_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18337_gshared (Dictionary_2_t2454 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18337(__this, ___size, method) (( void (*) (Dictionary_2_t2454 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18337_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18339_gshared (Dictionary_2_t2454 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18339(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2454 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18339_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2456  Dictionary_2_make_pair_m18341_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18341(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2456  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m18341_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m18343_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18343(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m18343_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18345_gshared (Dictionary_2_t2454 * __this, KeyValuePair_2U5BU5D_t2618* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18345(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2454 *, KeyValuePair_2U5BU5D_t2618*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18345_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m18347_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18347(__this, method) (( void (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_Resize_m18347_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18349_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18349(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2454 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m18349_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m18351_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18351(__this, method) (( void (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_Clear_m18351_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18353_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18353(__this, ___key, method) (( bool (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18353_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18355_gshared (Dictionary_2_t2454 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18355(__this, ___value, method) (( bool (*) (Dictionary_2_t2454 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m18355_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18357_gshared (Dictionary_2_t2454 * __this, SerializationInfo_t587 * ___info, StreamingContext_t588  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18357(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2454 *, SerializationInfo_t587 *, StreamingContext_t588 , const MethodInfo*))Dictionary_2_GetObjectData_m18357_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18359_gshared (Dictionary_2_t2454 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18359(__this, ___sender, method) (( void (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18359_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18361_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18361(__this, ___key, method) (( bool (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18361_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18363_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18363(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2454 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m18363_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2459 * Dictionary_2_get_Values_m18365_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18365(__this, method) (( ValueCollection_t2459 * (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_get_Values_m18365_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18367_gshared (Dictionary_2_t2454 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18367(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18367_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m18369_gshared (Dictionary_2_t2454 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18369(__this, ___value, method) (( bool (*) (Dictionary_2_t2454 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18369_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18371_gshared (Dictionary_2_t2454 * __this, KeyValuePair_2_t2456  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18371(__this, ___pair, method) (( bool (*) (Dictionary_2_t2454 *, KeyValuePair_2_t2456 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18371_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2461  Dictionary_2_GetEnumerator_m18373_gshared (Dictionary_2_t2454 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18373(__this, method) (( Enumerator_t2461  (*) (Dictionary_2_t2454 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18373_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1240  Dictionary_2_U3CCopyToU3Em__0_m18375_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18375(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1240  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18375_gshared)(__this /* static, unused */, ___key, ___value, method)
