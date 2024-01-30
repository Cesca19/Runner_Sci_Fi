// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerOutbreak/Public/RunCharacterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunCharacterGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ARunCharacterGameMode();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ARunCharacterGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RunnerOutbreak();
// End Cross Module References
	void ARunCharacterGameMode::StaticRegisterNativesARunCharacterGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARunCharacterGameMode);
	UClass* Z_Construct_UClass_ARunCharacterGameMode_NoRegister()
	{
		return ARunCharacterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARunCharacterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunCharacterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerOutbreak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacterGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacterGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RunCharacterGameMode.h" },
		{ "ModuleRelativePath", "Public/RunCharacterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunCharacterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunCharacterGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARunCharacterGameMode_Statics::ClassParams = {
		&ARunCharacterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARunCharacterGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARunCharacterGameMode()
	{
		if (!Z_Registration_Info_UClass_ARunCharacterGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARunCharacterGameMode.OuterSingleton, Z_Construct_UClass_ARunCharacterGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARunCharacterGameMode.OuterSingleton;
	}
	template<> RUNNEROUTBREAK_API UClass* StaticClass<ARunCharacterGameMode>()
	{
		return ARunCharacterGameMode::StaticClass();
	}
	ARunCharacterGameMode::ARunCharacterGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunCharacterGameMode);
	ARunCharacterGameMode::~ARunCharacterGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RunCharacterGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RunCharacterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARunCharacterGameMode, ARunCharacterGameMode::StaticClass, TEXT("ARunCharacterGameMode"), &Z_Registration_Info_UClass_ARunCharacterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARunCharacterGameMode), 1327066716U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RunCharacterGameMode_h_2218590417(TEXT("/Script/RunnerOutbreak"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RunCharacterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RunCharacterGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
