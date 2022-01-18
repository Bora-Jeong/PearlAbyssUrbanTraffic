// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef URBANTRAFFIC_UrbanTrafficPawn_generated_h
#error "UrbanTrafficPawn.generated.h already included, missing '#pragma once' in UrbanTrafficPawn.h"
#endif
#define URBANTRAFFIC_UrbanTrafficPawn_generated_h

#define UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_SPARSE_DATA
#define UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_RPC_WRAPPERS
#define UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUrbanTrafficPawn(); \
	friend struct Z_Construct_UClass_AUrbanTrafficPawn_Statics; \
public: \
	DECLARE_CLASS(AUrbanTrafficPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UrbanTraffic"), NO_API) \
	DECLARE_SERIALIZER(AUrbanTrafficPawn)


#define UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAUrbanTrafficPawn(); \
	friend struct Z_Construct_UClass_AUrbanTrafficPawn_Statics; \
public: \
	DECLARE_CLASS(AUrbanTrafficPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UrbanTraffic"), NO_API) \
	DECLARE_SERIALIZER(AUrbanTrafficPawn)


#define UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUrbanTrafficPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUrbanTrafficPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUrbanTrafficPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUrbanTrafficPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUrbanTrafficPawn(AUrbanTrafficPawn&&); \
	NO_API AUrbanTrafficPawn(const AUrbanTrafficPawn&); \
public:


#define UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUrbanTrafficPawn(AUrbanTrafficPawn&&); \
	NO_API AUrbanTrafficPawn(const AUrbanTrafficPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUrbanTrafficPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUrbanTrafficPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUrbanTrafficPawn)


#define UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AUrbanTrafficPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AUrbanTrafficPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(AUrbanTrafficPawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(AUrbanTrafficPawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(AUrbanTrafficPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(AUrbanTrafficPawn, InCarGear); }


#define UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_16_PROLOG
#define UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_SPARSE_DATA \
	UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_RPC_WRAPPERS \
	UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_INCLASS \
	UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_SPARSE_DATA \
	UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_INCLASS_NO_PURE_DECLS \
	UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> URBANTRAFFIC_API UClass* StaticClass<class AUrbanTrafficPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UrbanTraffic_Source_UrbanTraffic_UrbanTrafficPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
