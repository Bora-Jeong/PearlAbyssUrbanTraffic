// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUDPNetworkingWrapper;
#ifdef URBANTRAFFIC_UDPNetworkingWrapper_generated_h
#error "UDPNetworkingWrapper.generated.h already included, missing '#pragma once' in UDPNetworkingWrapper.h"
#endif
#define URBANTRAFFIC_UDPNetworkingWrapper_generated_h

#define UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_SPARSE_DATA
#define UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGrabWaitingMessage); \
	DECLARE_FUNCTION(execanyMessages); \
	DECLARE_FUNCTION(execUDPDestructor); \
	DECLARE_FUNCTION(execsendMessage); \
	DECLARE_FUNCTION(execConstructUDPWrapper);


#define UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGrabWaitingMessage); \
	DECLARE_FUNCTION(execanyMessages); \
	DECLARE_FUNCTION(execUDPDestructor); \
	DECLARE_FUNCTION(execsendMessage); \
	DECLARE_FUNCTION(execConstructUDPWrapper);


#define UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUDPNetworkingWrapper(); \
	friend struct Z_Construct_UClass_UUDPNetworkingWrapper_Statics; \
public: \
	DECLARE_CLASS(UUDPNetworkingWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UrbanTraffic"), NO_API) \
	DECLARE_SERIALIZER(UUDPNetworkingWrapper)


#define UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUDPNetworkingWrapper(); \
	friend struct Z_Construct_UClass_UUDPNetworkingWrapper_Statics; \
public: \
	DECLARE_CLASS(UUDPNetworkingWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UrbanTraffic"), NO_API) \
	DECLARE_SERIALIZER(UUDPNetworkingWrapper)


#define UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUDPNetworkingWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUDPNetworkingWrapper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUDPNetworkingWrapper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUDPNetworkingWrapper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUDPNetworkingWrapper(UUDPNetworkingWrapper&&); \
	NO_API UUDPNetworkingWrapper(const UUDPNetworkingWrapper&); \
public:


#define UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUDPNetworkingWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUDPNetworkingWrapper(UUDPNetworkingWrapper&&); \
	NO_API UUDPNetworkingWrapper(const UUDPNetworkingWrapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUDPNetworkingWrapper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUDPNetworkingWrapper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUDPNetworkingWrapper)


#define UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_PRIVATE_PROPERTY_OFFSET
#define UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_14_PROLOG
#define UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_PRIVATE_PROPERTY_OFFSET \
	UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_SPARSE_DATA \
	UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_RPC_WRAPPERS \
	UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_INCLASS \
	UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_PRIVATE_PROPERTY_OFFSET \
	UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_SPARSE_DATA \
	UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_INCLASS_NO_PURE_DECLS \
	UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> URBANTRAFFIC_API UClass* StaticClass<class UUDPNetworkingWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UrbanTraffic_Source_UrbanTraffic_UDPNetworkingWrapper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
