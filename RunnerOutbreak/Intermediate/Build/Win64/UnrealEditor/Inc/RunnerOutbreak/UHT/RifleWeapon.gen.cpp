// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerOutbreak/Public/RifleWeapon.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRifleWeapon() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ARifleWeapon();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ARifleWeapon_NoRegister();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_RunnerOutbreak();
// End Cross Module References
	void ARifleWeapon::StaticRegisterNativesARifleWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARifleWeapon);
	UClass* Z_Construct_UClass_ARifleWeapon_NoRegister()
	{
		return ARifleWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ARifleWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletPerSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BulletPerSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootingTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShootingTimerHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARifleWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerOutbreak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RifleWeapon.h" },
		{ "ModuleRelativePath", "Public/RifleWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_BulletPerSeconds_MetaData[] = {
		{ "Category", "RifleWeapon" },
		{ "ModuleRelativePath", "Public/RifleWeapon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_BulletPerSeconds = { "BulletPerSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARifleWeapon, BulletPerSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_BulletPerSeconds_MetaData), Z_Construct_UClass_ARifleWeapon_Statics::NewProp_BulletPerSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifleWeapon_Statics::NewProp_ShootingTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/RifleWeapon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARifleWeapon_Statics::NewProp_ShootingTimerHandle = { "ShootingTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARifleWeapon, ShootingTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::NewProp_ShootingTimerHandle_MetaData), Z_Construct_UClass_ARifleWeapon_Statics::NewProp_ShootingTimerHandle_MetaData) }; // 3999327403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARifleWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_BulletPerSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARifleWeapon_Statics::NewProp_ShootingTimerHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARifleWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARifleWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARifleWeapon_Statics::ClassParams = {
		&ARifleWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARifleWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ARifleWeapon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARifleWeapon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARifleWeapon()
	{
		if (!Z_Registration_Info_UClass_ARifleWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARifleWeapon.OuterSingleton, Z_Construct_UClass_ARifleWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARifleWeapon.OuterSingleton;
	}
	template<> RUNNEROUTBREAK_API UClass* StaticClass<ARifleWeapon>()
	{
		return ARifleWeapon::StaticClass();
	}
	ARifleWeapon::ARifleWeapon() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARifleWeapon);
	ARifleWeapon::~ARifleWeapon() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RifleWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RifleWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARifleWeapon, ARifleWeapon::StaticClass, TEXT("ARifleWeapon"), &Z_Registration_Info_UClass_ARifleWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARifleWeapon), 3311134645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RifleWeapon_h_3001657340(TEXT("/Script/RunnerOutbreak"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RifleWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RifleWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
