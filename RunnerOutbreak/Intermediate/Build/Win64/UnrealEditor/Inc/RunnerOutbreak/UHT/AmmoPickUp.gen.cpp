// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerOutbreak/Public/AmmoPickUp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoPickUp() {}
// Cross Module References
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AAmmoPickUp();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AAmmoPickUp_NoRegister();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_APickUp();
	UPackage* Z_Construct_UPackage__Script_RunnerOutbreak();
// End Cross Module References
	void AAmmoPickUp::StaticRegisterNativesAAmmoPickUp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAmmoPickUp);
	UClass* Z_Construct_UClass_AAmmoPickUp_NoRegister()
	{
		return AAmmoPickUp::StaticClass();
	}
	struct Z_Construct_UClass_AAmmoPickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmmoPickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickUp,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerOutbreak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickUp_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickUp_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AmmoPickUp.h" },
		{ "ModuleRelativePath", "Public/AmmoPickUp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_AmmoAmount_MetaData[] = {
		{ "Category", "AmmoPickUp" },
		{ "ModuleRelativePath", "Public/AmmoPickUp.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_AmmoAmount = { "AmmoAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoPickUp, AmmoAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_AmmoAmount_MetaData), Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_AmmoAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmoPickUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickUp_Statics::NewProp_AmmoAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmmoPickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmoPickUp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAmmoPickUp_Statics::ClassParams = {
		&AAmmoPickUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAmmoPickUp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickUp_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickUp_Statics::Class_MetaDataParams), Z_Construct_UClass_AAmmoPickUp_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickUp_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAmmoPickUp()
	{
		if (!Z_Registration_Info_UClass_AAmmoPickUp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAmmoPickUp.OuterSingleton, Z_Construct_UClass_AAmmoPickUp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAmmoPickUp.OuterSingleton;
	}
	template<> RUNNEROUTBREAK_API UClass* StaticClass<AAmmoPickUp>()
	{
		return AAmmoPickUp::StaticClass();
	}
	AAmmoPickUp::AAmmoPickUp() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmoPickUp);
	AAmmoPickUp::~AAmmoPickUp() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_AmmoPickUp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_AmmoPickUp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAmmoPickUp, AAmmoPickUp::StaticClass, TEXT("AAmmoPickUp"), &Z_Registration_Info_UClass_AAmmoPickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAmmoPickUp), 1959245685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_AmmoPickUp_h_731253632(TEXT("/Script/RunnerOutbreak"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_AmmoPickUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_AmmoPickUp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
