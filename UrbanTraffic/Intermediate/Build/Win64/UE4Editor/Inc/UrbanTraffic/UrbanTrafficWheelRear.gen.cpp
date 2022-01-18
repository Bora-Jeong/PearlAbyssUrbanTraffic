// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UrbanTraffic/UrbanTrafficWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUrbanTrafficWheelRear() {}
// Cross Module References
	URBANTRAFFIC_API UClass* Z_Construct_UClass_UUrbanTrafficWheelRear_NoRegister();
	URBANTRAFFIC_API UClass* Z_Construct_UClass_UUrbanTrafficWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_UrbanTraffic();
// End Cross Module References
	void UUrbanTrafficWheelRear::StaticRegisterNativesUUrbanTrafficWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UUrbanTrafficWheelRear_NoRegister()
	{
		return UUrbanTrafficWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UUrbanTrafficWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUrbanTrafficWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_UrbanTraffic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUrbanTrafficWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UrbanTrafficWheelRear.h" },
		{ "ModuleRelativePath", "UrbanTrafficWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUrbanTrafficWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUrbanTrafficWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUrbanTrafficWheelRear_Statics::ClassParams = {
		&UUrbanTrafficWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUrbanTrafficWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUrbanTrafficWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUrbanTrafficWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUrbanTrafficWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUrbanTrafficWheelRear, 621875910);
	template<> URBANTRAFFIC_API UClass* StaticClass<UUrbanTrafficWheelRear>()
	{
		return UUrbanTrafficWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUrbanTrafficWheelRear(Z_Construct_UClass_UUrbanTrafficWheelRear, &UUrbanTrafficWheelRear::StaticClass, TEXT("/Script/UrbanTraffic"), TEXT("UUrbanTrafficWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUrbanTrafficWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
