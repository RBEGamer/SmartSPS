#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2062;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2061;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t587;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2557;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t29;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2558;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1239;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2067;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13210_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13210(__this, method) (( void (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2__ctor_m13210_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13212_gshared (Dictionary_2_t2062 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13212(__this, ___comparer, method) (( void (*) (Dictionary_2_t2062 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13212_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13214_gshared (Dictionary_2_t2062 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13214(__this, ___capacity, method) (( void (*) (Dictionary_2_t2062 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13214_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13216_gshared (Dictionary_2_t2062 * __this, SerializationInfo_t587 * ___info, StreamingContext_t588  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13216(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2062 *, SerializationInfo_t587 *, StreamingContext_t588 , const MethodInfo*))Dictionary_2__ctor_m13216_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13218_gshared (Dictionary_2_t2062 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13218(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2062 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13218_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13220_gshared (Dictionary_2_t2062 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13220(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2062 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13220_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13222_gshared (Dictionary_2_t2062 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13222(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2062 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13222_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13224_gshared (Dictionary_2_t2062 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13224(__this, ___key, method) (( bool (*) (Dictionary_2_t2062 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13224_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13226_gshared (Dictionary_2_t2062 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13226(__this, ___key, method) (( void (*) (Dictionary_2_t2062 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13226_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13228_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13228(__this, method) (( bool (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13228_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13230_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13230(__this, method) (( Object_t * (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13230_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13232_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13232(__this, method) (( bool (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13232_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13234_gshared (Dictionary_2_t2062 * __this, KeyValuePair_2_t2064  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13234(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2062 *, KeyValuePair_2_t2064 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13234_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13236_gshared (Dictionary_2_t2062 * __this, KeyValuePair_2_t2064  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13236(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2062 *, KeyValuePair_2_t2064 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13236_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13238_gshared (Dictionary_2_t2062 * __this, KeyValuePair_2U5BU5D_t2557* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13238(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2062 *, KeyValuePair_2U5BU5D_t2557*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13238_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13240_gshared (Dictionary_2_t2062 * __this, KeyValuePair_2_t2064  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13240(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2062 *, KeyValuePair_2_t2064 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13240_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13242_gshared (Dictionary_2_t2062 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13242(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2062 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13242_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13244_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13244(__this, method) (( Object_t * (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13244_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13246_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13246(__this, method) (( Object_t* (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13246_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13248_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13248(__this, method) (( Object_t * (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13248_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13250_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13250(__this, method) (( int32_t (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_get_Count_m13250_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13252_gshared (Dictionary_2_t2062 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13252(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2062 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m13252_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13254_gshared (Dictionary_2_t2062 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13254(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2062 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m13254_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13256_gshared (Dictionary_2_t2062 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13256(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2062 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13256_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13258_gshared (Dictionary_2_t2062 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13258(__this, ___size, method) (( void (*) (Dictionary_2_t2062 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13258_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13260_gshared (Dictionary_2_t2062 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13260(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2062 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13260_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2064  Dictionary_2_make_pair_m13262_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13262(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2064  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13262_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13264_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13264(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13264_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13266_gshared (Dictionary_2_t2062 * __this, KeyValuePair_2U5BU5D_t2557* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13266(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2062 *, KeyValuePair_2U5BU5D_t2557*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13266_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13268_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13268(__this, method) (( void (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_Resize_m13268_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13270_gshared (Dictionary_2_t2062 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13270(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2062 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m13270_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13272_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13272(__this, method) (( void (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_Clear_m13272_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13274_gshared (Dictionary_2_t2062 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13274(__this, ___key, method) (( bool (*) (Dictionary_2_t2062 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m13274_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13276_gshared (Dictionary_2_t2062 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13276(__this, ___value, method) (( bool (*) (Dictionary_2_t2062 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13276_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13278_gshared (Dictionary_2_t2062 * __this, SerializationInfo_t587 * ___info, StreamingContext_t588  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13278(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2062 *, SerializationInfo_t587 *, StreamingContext_t588 , const MethodInfo*))Dictionary_2_GetObjectData_m13278_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13280_gshared (Dictionary_2_t2062 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13280(__this, ___sender, method) (( void (*) (Dictionary_2_t2062 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13280_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13282_gshared (Dictionary_2_t2062 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13282(__this, ___key, method) (( bool (*) (Dictionary_2_t2062 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m13282_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13284_gshared (Dictionary_2_t2062 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13284(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2062 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13284_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2067 * Dictionary_2_get_Values_m13285_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13285(__this, method) (( ValueCollection_t2067 * (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_get_Values_m13285_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m13287_gshared (Dictionary_2_t2062 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13287(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2062 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13287_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13289_gshared (Dictionary_2_t2062 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13289(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2062 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13289_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13291_gshared (Dictionary_2_t2062 * __this, KeyValuePair_2_t2064  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13291(__this, ___pair, method) (( bool (*) (Dictionary_2_t2062 *, KeyValuePair_2_t2064 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13291_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2069  Dictionary_2_GetEnumerator_m13292_gshared (Dictionary_2_t2062 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13292(__this, method) (( Enumerator_t2069  (*) (Dictionary_2_t2062 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13292_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1240  Dictionary_2_U3CCopyToU3Em__0_m13294_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13294(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1240  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13294_gshared)(__this /* static, unused */, ___key, ___value, method)
