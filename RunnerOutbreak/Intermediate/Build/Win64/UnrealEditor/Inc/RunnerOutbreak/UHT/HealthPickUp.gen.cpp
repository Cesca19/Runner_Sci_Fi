// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerOutbreak/Public/HealthPickUp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthPickUp() {}
// Cross Module References
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AHealthPickUp();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AHealthPickUp_NoRegister();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_APickUp();
	UPackage* Z_Construct_UPackage__Script_RunnerOutbreak();
// End Cross Module References
	void AHealthPickUp::StaticRegisterNativesAHealthPickUp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealthPickUp);
	UClass* Z_Construct_UClass_AHealthPickUp_NoRegister()
	{
		return AHealthPickUp::StaticClass();
	}
	struct Z_Construct_UClass_AHealthPickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthPickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickUp,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerOutbreak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickUp_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickUp_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HealthPickUp.h" },
		{ "ModuleRelativePath", "Public/HealthPickUp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickUp_Statics::NewProp_HealAmount_MetaData[] = {
		{ "Category", "HealthPickUp" },
		{ "ModuleRelativePath", "Public/HealthPickUp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthPickUp_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHealthPickUp, HealAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickUp_Statics::NewProp_HealAmount_MetaData), Z_Construct_UClass_AHealthPickUp_Statics::NewProp_HealAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthPickUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPickUp_Statics::NewProp_HealAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthPickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthPickUp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealthPickUp_Statics::ClassParams = {
		&AHealthPickUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHealthPickUp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickUp_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickUp_Statics::Class_MetaDataParams), Z_Construct_UClass_AHealthPickUp_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickUp_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AHealthPickUp()
	{
		if (!Z_Registration_Info_UClass_AHealthPickUp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealthPickUp.OuterSingleton, Z_Construct_UClass_AHealthPickUp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHealthPickUp.OuterSingleton;
	}
	template<> RUNNEROUTBREAK_API UClass* StaticClass<AHealthPickUp>()
	{
		return AHealthPickUp::StaticClass();
	}
	AHealthPickUp::AHealthPickUp() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthPickUp);
	AHealthPickUp::~AHealthPickUp() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_HealthPickUp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_HealthPickUp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHealthPickUp, AHealthPickUp::StaticClass, TEXT("AHealthPickUp"), &Z_Registration_Info_UClass_AHealthPickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealthPickUp), 2990505962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_HealthPickUp_h_2135829889(TEXT("/Script/RunnerOutbreak"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_HealthPickUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_HealthPickUp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
