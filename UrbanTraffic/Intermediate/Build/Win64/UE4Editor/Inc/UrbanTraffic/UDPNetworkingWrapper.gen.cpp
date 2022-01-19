// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UrbanTraffic/UDPNetworkingWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUDPNetworkingWrapper() {}
// Cross Module References
	URBANTRAFFIC_API UClass* Z_Construct_UClass_UUDPNetworkingWrapper_NoRegister();
	URBANTRAFFIC_API UClass* Z_Construct_UClass_UUDPNetworkingWrapper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UrbanTraffic();
// End Cross Module References
	DEFINE_FUNCTION(UUDPNetworkingWrapper::execGrabWaitingMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GrabWaitingMessage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUDPNetworkingWrapper::execanyMessages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->anyMessages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUDPNetworkingWrapper::execUDPDestructor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UDPDestructor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUDPNetworkingWrapper::execsendMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->sendMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUDPNetworkingWrapper::execConstructUDPWrapper)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_GET_PROPERTY(FStrProperty,Z_Param_SenderSocketName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TheIP);
		P_GET_PROPERTY(FIntProperty,Z_Param_ThePort);
		P_GET_PROPERTY(FIntProperty,Z_Param_BufferSize);
		P_GET_UBOOL(Z_Param_AllowBroadcast);
		P_GET_UBOOL(Z_Param_Bound);
		P_GET_UBOOL(Z_Param_Reusable);
		P_GET_UBOOL(Z_Param_Blocking);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUDPNetworkingWrapper**)Z_Param__Result=UUDPNetworkingWrapper::ConstructUDPWrapper(Z_Param_Description,Z_Param_SenderSocketName,Z_Param_TheIP,Z_Param_ThePort,Z_Param_BufferSize,Z_Param_AllowBroadcast,Z_Param_Bound,Z_Param_Reusable,Z_Param_Blocking);
		P_NATIVE_END;
	}
	void UUDPNetworkingWrapper::StaticRegisterNativesUUDPNetworkingWrapper()
	{
		UClass* Class = UUDPNetworkingWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "anyMessages", &UUDPNetworkingWrapper::execanyMessages },
			{ "ConstructUDPWrapper", &UUDPNetworkingWrapper::execConstructUDPWrapper },
			{ "GrabWaitingMessage", &UUDPNetworkingWrapper::execGrabWaitingMessage },
			{ "sendMessage", &UUDPNetworkingWrapper::execsendMessage },
			{ "UDPDestructor", &UUDPNetworkingWrapper::execUDPDestructor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUDPNetworkingWrapper_anyMessages_Statics
	{
		struct UDPNetworkingWrapper_eventanyMessages_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUDPNetworkingWrapper_anyMessages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UDPNetworkingWrapper_eventanyMessages_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDPNetworkingWrapper_anyMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPNetworkingWrapper_eventanyMessages_Parms), &Z_Construct_UFunction_UUDPNetworkingWrapper_anyMessages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDPNetworkingWrapper_anyMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPNetworkingWrapper_anyMessages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPNetworkingWrapper_anyMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDPNetworking" },
		{ "Comment", "//// Grab Data\n" },
		{ "ModuleRelativePath", "UDPNetworkingWrapper.h" },
		{ "ToolTip", "/ Grab Data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPNetworkingWrapper_anyMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDPNetworkingWrapper, nullptr, "anyMessages", nullptr, nullptr, sizeof(UDPNetworkingWrapper_eventanyMessages_Parms), Z_Construct_UFunction_UUDPNetworkingWrapper_anyMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_anyMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUDPNetworkingWrapper_anyMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_anyMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUDPNetworkingWrapper_anyMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUDPNetworkingWrapper_anyMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics
	{
		struct UDPNetworkingWrapper_eventConstructUDPWrapper_Parms
		{
			FString Description;
			FString SenderSocketName;
			FString TheIP;
			int32 ThePort;
			int32 BufferSize;
			bool AllowBroadcast;
			bool Bound;
			bool Reusable;
			bool Blocking;
			UUDPNetworkingWrapper* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TheIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThePort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThePort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BufferSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowBroadcast_MetaData[];
#endif
		static void NewProp_AllowBroadcast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowBroadcast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bound_MetaData[];
#endif
		static void NewProp_Bound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reusable_MetaData[];
#endif
		static void NewProp_Reusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Reusable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blocking_MetaData[];
#endif
		static void NewProp_Blocking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Blocking;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPNetworkingWrapper_eventConstructUDPWrapper_Parms, Description), METADATA_PARAMS(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_SenderSocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_SenderSocketName = { "SenderSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPNetworkingWrapper_eventConstructUDPWrapper_Parms, SenderSocketName), METADATA_PARAMS(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_SenderSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_SenderSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_TheIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_TheIP = { "TheIP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPNetworkingWrapper_eventConstructUDPWrapper_Parms, TheIP), METADATA_PARAMS(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_TheIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_TheIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_ThePort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_ThePort = { "ThePort", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPNetworkingWrapper_eventConstructUDPWrapper_Parms, ThePort), METADATA_PARAMS(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_ThePort_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_ThePort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_BufferSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPNetworkingWrapper_eventConstructUDPWrapper_Parms, BufferSize), METADATA_PARAMS(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_BufferSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_AllowBroadcast_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_AllowBroadcast_SetBit(void* Obj)
	{
		((UDPNetworkingWrapper_eventConstructUDPWrapper_Parms*)Obj)->AllowBroadcast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_AllowBroadcast = { "AllowBroadcast", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPNetworkingWrapper_eventConstructUDPWrapper_Parms), &Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_AllowBroadcast_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_AllowBroadcast_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_AllowBroadcast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Bound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Bound_SetBit(void* Obj)
	{
		((UDPNetworkingWrapper_eventConstructUDPWrapper_Parms*)Obj)->Bound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Bound = { "Bound", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPNetworkingWrapper_eventConstructUDPWrapper_Parms), &Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Bound_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Bound_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Bound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Reusable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Reusable_SetBit(void* Obj)
	{
		((UDPNetworkingWrapper_eventConstructUDPWrapper_Parms*)Obj)->Reusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Reusable = { "Reusable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPNetworkingWrapper_eventConstructUDPWrapper_Parms), &Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Reusable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Reusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Reusable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Blocking_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Blocking_SetBit(void* Obj)
	{
		((UDPNetworkingWrapper_eventConstructUDPWrapper_Parms*)Obj)->Blocking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Blocking = { "Blocking", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPNetworkingWrapper_eventConstructUDPWrapper_Parms), &Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Blocking_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Blocking_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Blocking_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPNetworkingWrapper_eventConstructUDPWrapper_Parms, ReturnValue), Z_Construct_UClass_UUDPNetworkingWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_SenderSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_TheIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_ThePort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_BufferSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_AllowBroadcast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Bound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Reusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_Blocking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDPNetworking" },
		{ "Comment", "/**\n\x09* Creates and initializes a new UDPNetworking object.\n\x09*\n\x09* @param Description - The description of the socket for debug purposes.\n\x09* @param SenderSocketName - Name of the sender socket for debug purposes.\n\x09* @param TheIP - IP of the the machine you want to send a message too.\n\x09* @param ThePort - The port of the machine you are trying to talk to.\n\x09* @param BufferSize - The size of the buffer for the socket\n\x09* @param AllowBroadCast - Allow broadcasting on this socket?\n\x09* @param Bound - Bind socket to the ip and port?\n\x09* @param Reusable - Is this socket reusable?\n\x09* @param Blocking - Is this socket blocking other data?\n\x09*/" },
		{ "ModuleRelativePath", "UDPNetworkingWrapper.h" },
		{ "ToolTip", "Creates and initializes a new UDPNetworking object.\n\n@param Description - The description of the socket for debug purposes.\n@param SenderSocketName - Name of the sender socket for debug purposes.\n@param TheIP - IP of the the machine you want to send a message too.\n@param ThePort - The port of the machine you are trying to talk to.\n@param BufferSize - The size of the buffer for the socket\n@param AllowBroadCast - Allow broadcasting on this socket?\n@param Bound - Bind socket to the ip and port?\n@param Reusable - Is this socket reusable?\n@param Blocking - Is this socket blocking other data?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDPNetworkingWrapper, nullptr, "ConstructUDPWrapper", nullptr, nullptr, sizeof(UDPNetworkingWrapper_eventConstructUDPWrapper_Parms), Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUDPNetworkingWrapper_GrabWaitingMessage_Statics
	{
		struct UDPNetworkingWrapper_eventGrabWaitingMessage_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUDPNetworkingWrapper_GrabWaitingMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPNetworkingWrapper_eventGrabWaitingMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDPNetworkingWrapper_GrabWaitingMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPNetworkingWrapper_GrabWaitingMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPNetworkingWrapper_GrabWaitingMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDPNetworking" },
		{ "Comment", "/** Test Look for message */" },
		{ "ModuleRelativePath", "UDPNetworkingWrapper.h" },
		{ "ToolTip", "Test Look for message" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPNetworkingWrapper_GrabWaitingMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDPNetworkingWrapper, nullptr, "GrabWaitingMessage", nullptr, nullptr, sizeof(UDPNetworkingWrapper_eventGrabWaitingMessage_Parms), Z_Construct_UFunction_UUDPNetworkingWrapper_GrabWaitingMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_GrabWaitingMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUDPNetworkingWrapper_GrabWaitingMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_GrabWaitingMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUDPNetworkingWrapper_GrabWaitingMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUDPNetworkingWrapper_GrabWaitingMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage_Statics
	{
		struct UDPNetworkingWrapper_eventsendMessage_Parms
		{
			FString Message;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDPNetworkingWrapper_eventsendMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UDPNetworkingWrapper_eventsendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDPNetworkingWrapper_eventsendMessage_Parms), &Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDPNetworking" },
		{ "Comment", "/**\n\x09* Sends the supplied message\n\x09* @param Message The message to be sent.\n\x09*/" },
		{ "ModuleRelativePath", "UDPNetworkingWrapper.h" },
		{ "ToolTip", "Sends the supplied message\n@param Message The message to be sent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDPNetworkingWrapper, nullptr, "sendMessage", nullptr, nullptr, sizeof(UDPNetworkingWrapper_eventsendMessage_Parms), Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUDPNetworkingWrapper_UDPDestructor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDPNetworkingWrapper_UDPDestructor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UDPNetworking" },
		{ "Comment", "/** Destroys all data */" },
		{ "ModuleRelativePath", "UDPNetworkingWrapper.h" },
		{ "ToolTip", "Destroys all data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDPNetworkingWrapper_UDPDestructor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDPNetworkingWrapper, nullptr, "UDPDestructor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUDPNetworkingWrapper_UDPDestructor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDPNetworkingWrapper_UDPDestructor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUDPNetworkingWrapper_UDPDestructor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUDPNetworkingWrapper_UDPDestructor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUDPNetworkingWrapper_NoRegister()
	{
		return UUDPNetworkingWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UUDPNetworkingWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUDPNetworkingWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UrbanTraffic,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUDPNetworkingWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUDPNetworkingWrapper_anyMessages, "anyMessages" }, // 111667616
		{ &Z_Construct_UFunction_UUDPNetworkingWrapper_ConstructUDPWrapper, "ConstructUDPWrapper" }, // 159033771
		{ &Z_Construct_UFunction_UUDPNetworkingWrapper_GrabWaitingMessage, "GrabWaitingMessage" }, // 152063212
		{ &Z_Construct_UFunction_UUDPNetworkingWrapper_sendMessage, "sendMessage" }, // 177199180
		{ &Z_Construct_UFunction_UUDPNetworkingWrapper_UDPDestructor, "UDPDestructor" }, // 2837115311
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUDPNetworkingWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UDPNetworkingWrapper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UDPNetworkingWrapper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUDPNetworkingWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUDPNetworkingWrapper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUDPNetworkingWrapper_Statics::ClassParams = {
		&UUDPNetworkingWrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUDPNetworkingWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUDPNetworkingWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUDPNetworkingWrapper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUDPNetworkingWrapper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUDPNetworkingWrapper, 2178287473);
	template<> URBANTRAFFIC_API UClass* StaticClass<UUDPNetworkingWrapper>()
	{
		return UUDPNetworkingWrapper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUDPNetworkingWrapper(Z_Construct_UClass_UUDPNetworkingWrapper, &UUDPNetworkingWrapper::StaticClass, TEXT("/Script/UrbanTraffic"), TEXT("UUDPNetworkingWrapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUDPNetworkingWrapper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
