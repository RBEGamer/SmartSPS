﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1322;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Channels.IChannelSender
struct IChannelSender_t1659;
// System.Object[]
struct ObjectU5BU5D_t320;
// System.Runtime.Remoting.Channels.IChannel
struct IChannel_t1660;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t1388;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t1389;

// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
extern "C" void ChannelServices__cctor_m7954 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.String,System.Object,System.String&)
extern "C" Object_t * ChannelServices_CreateClientChannelSinkChain_m7955 (Object_t * __this /* static, unused */, String_t* ___url, Object_t * ___remoteChannelData, String_t** ___objectUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.Runtime.Remoting.Channels.IChannelSender,System.String,System.Object[],System.String&)
extern "C" Object_t * ChannelServices_CreateClientChannelSinkChain_m7956 (Object_t * __this /* static, unused */, Object_t * ___sender, String_t* ___url, ObjectU5BU5D_t320* ___channelDataArray, String_t** ___objectUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern "C" void ChannelServices_RegisterChannel_m7957 (Object_t * __this /* static, unused */, Object_t * ___chnl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
extern "C" void ChannelServices_RegisterChannel_m7958 (Object_t * __this /* static, unused */, Object_t * ___chnl, bool ___ensureSecurity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannelConfig(System.Runtime.Remoting.ChannelData)
extern "C" void ChannelServices_RegisterChannelConfig_m7959 (Object_t * __this /* static, unused */, ChannelData_t1388 * ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Channels.ChannelServices::CreateProvider(System.Runtime.Remoting.ProviderData)
extern "C" Object_t * ChannelServices_CreateProvider_m7960 (Object_t * __this /* static, unused */, ProviderData_t1389 * ___prov, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern "C" ObjectU5BU5D_t320* ChannelServices_GetCurrentChannelInfo_m7961 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
