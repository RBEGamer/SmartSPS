﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2089;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2091;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t587;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2559;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2560;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1239;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2094;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m13568_gshared (Dictionary_2_t2089 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13568(__this, method) (( void (*) (Dictionary_2_t2089 *, const MethodInfo*))Dictionary_2__ctor_m13568_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13569_gshared (Dictionary_2_t2089 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13569(__this, ___comparer, method) (( void (*) (Dictionary_2_t2089 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13569_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13570_gshared (Dictionary_2_t2089 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13570(__this, ___capacity, method) (( void (*) (Dictionary_2_t2089 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13570_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13571_gshared (Dictionary_2_t2089 * __this, SerializationInfo_t587 * ___info, StreamingContext_t588  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13571(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2089 *, SerializationInfo_t587 *, StreamingContext_t588 , const MethodInfo*))Dictionary_2__ctor_m13571_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13572_gshared (Dictionary_2_t2089 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13572(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2089 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13572_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13573_gshared (Dictionary_2_t2089 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13573(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2089 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13573_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13574_gshared (Dictionary_2_t2089 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13574(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2089 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13574_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13575_gshared (Dictionary_2_t2089 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13575(__this, ___key, method) (( bool (*) (Dictionary_2_t2089 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13575_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13576_gshared (Dictionary_2_t2089 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13576(__this, ___key, method) (( void (*) (Dictionary_2_t2089 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13576_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13577_gshared (Dictionary_2_t2089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13577(__this, method) (( bool (*) (Dictionary_2_t2089 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13577_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13578_gshared (Dictionary_2_t2089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13578(__this, method) (( Object_t * (*) (Dictionary_2_t2089 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13578_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13579_gshared (Dictionary_2_t2089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13579(__this, method) (( bool (*) (Dictionary_2_t2089 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13579_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13580_gshared (Dictionary_2_t2089 * __this, KeyValuePair_2_t2092  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13580(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2089 *, KeyValuePair_2_t2092 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13580_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13581_gshared (Dictionary_2_t2089 * __this, KeyValuePair_2_t2092  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13581(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2089 *, KeyValuePair_2_t2092 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13581_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13582_gshared (Dictionary_2_t2089 * __this, KeyValuePair_2U5BU5D_t2559* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13582(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2089 *, KeyValuePair_2U5BU5D_t2559*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13582_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13583_gshared (Dictionary_2_t2089 * __this, KeyValuePair_2_t2092  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13583(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2089 *, KeyValuePair_2_t2092 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13583_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13584_gshared (Dictionary_2_t2089 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13584(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2089 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13584_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13585_gshared (Dictionary_2_t2089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13585(__this, method) (( Object_t * (*) (Dictionary_2_t2089 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13585_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13586_gshared (Dictionary_2_t2089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13586(__this, method) (( Object_t* (*) (Dictionary_2_t2089 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13586_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13587_gshared (Dictionary_2_t2089 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13587(__this, method) (( Object_t * (*) (Dictionary_2_t2089 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13587_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13588_gshared (Dictionary_2_t2089 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13588(__this, method) (( int32_t (*) (Dictionary_2_t2089 *, const MethodInfo*))Dictionary_2_get_Count_m13588_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m13589_gshared (Dictionary_2_t2089 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13589(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2089 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13589_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13590_gshared (Dictionary_2_t2089 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13590(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2089 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m13590_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13591_gshared (Dictionary_2_t2089 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13591(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2089 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13591_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13592_gshared (Dictionary_2_t2089 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13592(__this, ___size, method) (( void (*) (Dictionary_2_t2089 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13592_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13593_gshared (Dictionary_2_t2089 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13593(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2089 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13593_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2092  Dictionary_2_make_pair_m13594_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13594(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2092  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m13594_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m13595_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13595(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m13595_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13596_gshared (Dictionary_2_t2089 * __this, KeyValuePair_2U5BU5D_t2559* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13596(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2089 *, KeyValuePair_2U5BU5D_t2559*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13596_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m13597_gshared (Dictionary_2_t2089 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13597(__this, method) (( void (*) (Dictionary_2_t2089 *, const MethodInfo*))Dictionary_2_Resize_m13597_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13598_gshared (Dictionary_2_t2089 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13598(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2089 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m13598_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m13599_gshared (Dictionary_2_t2089 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13599(__this, method) (( void (*) (Dictionary_2_t2089 *, const MethodInfo*))Dictionary_2_Clear_m13599_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13600_gshared (Dictionary_2_t2089 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13600(__this, ___key, method) (( bool (*) (Dictionary_2_t2089 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13600_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13601_gshared (Dictionary_2_t2089 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13601(__this, ___value, method) (( bool (*) (Dictionary_2_t2089 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m13601_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13602_gshared (Dictionary_2_t2089 * __this, SerializationInfo_t587 * ___info, StreamingContext_t588  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13602(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2089 *, SerializationInfo_t587 *, StreamingContext_t588 , const MethodInfo*))Dictionary_2_GetObjectData_m13602_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13603_gshared (Dictionary_2_t2089 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13603(__this, ___sender, method) (( void (*) (Dictionary_2_t2089 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13603_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13604_gshared (Dictionary_2_t2089 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13604(__this, ___key, method) (( bool (*) (Dictionary_2_t2089 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13604_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13605_gshared (Dictionary_2_t2089 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13605(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2089 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m13605_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2094 * Dictionary_2_get_Values_m13606_gshared (Dictionary_2_t2089 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13606(__this, method) (( ValueCollection_t2094 * (*) (Dictionary_2_t2089 *, const MethodInfo*))Dictionary_2_get_Values_m13606_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13607_gshared (Dictionary_2_t2089 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13607(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2089 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13607_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m13608_gshared (Dictionary_2_t2089 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13608(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2089 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13608_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13609_gshared (Dictionary_2_t2089 * __this, KeyValuePair_2_t2092  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13609(__this, ___pair, method) (( bool (*) (Dictionary_2_t2089 *, KeyValuePair_2_t2092 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13609_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2096  Dictionary_2_GetEnumerator_m13610_gshared (Dictionary_2_t2089 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13610(__this, method) (( Enumerator_t2096  (*) (Dictionary_2_t2089 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13610_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1240  Dictionary_2_U3CCopyToU3Em__0_m13611_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13611(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1240  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13611_gshared)(__this /* static, unused */, ___key, ___value, method)
