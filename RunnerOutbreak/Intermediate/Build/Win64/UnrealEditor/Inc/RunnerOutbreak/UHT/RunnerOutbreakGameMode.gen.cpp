// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerOutbreak/RunnerOutbreakGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunnerOutbreakGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ARunnerOutbreakGameMode();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ARunnerOutbreakGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RunnerOutbreak();
// End Cross Module References
	void ARunnerOutbreakGameMode::StaticRegisterNativesARunnerOutbreakGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARunnerOutbreakGameMode);
	UClass* Z_Construct_UClass_ARunnerOutbreakGameMode_NoRegister()
	{
		return ARunnerOutbreakGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARunnerOutbreakGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunnerOutbreakGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerOutbreak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerOutbreakGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunnerOutbreakGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RunnerOutbreakGameMode.h" },
		{ "ModuleRelativePath", "RunnerOutbreakGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunnerOutbreakGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunnerOutbreakGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARunnerOutbreakGameMode_Statics::ClassParams = {
		&ARunnerOutbreakGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerOutbreakGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARunnerOutbreakGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARunnerOutbreakGameMode()
	{
		if (!Z_Registration_Info_UClass_ARunnerOutbreakGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARunnerOutbreakGameMode.OuterSingleton, Z_Construct_UClass_ARunnerOutbreakGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARunnerOutbreakGameMode.OuterSingleton;
	}
	template<> RUNNEROUTBREAK_API UClass* StaticClass<ARunnerOutbreakGameMode>()
	{
		return ARunnerOutbreakGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunnerOutbreakGameMode);
	ARunnerOutbreakGameMode::~ARunnerOutbreakGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_RunnerOutbreakGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_RunnerOutbreakGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARunnerOutbreakGameMode, ARunnerOutbreakGameMode::StaticClass, TEXT("ARunnerOutbreakGameMode"), &Z_Registration_Info_UClass_ARunnerOutbreakGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARunnerOutbreakGameMode), 786631225U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_RunnerOutbreakGameMode_h_101478696(TEXT("/Script/RunnerOutbreak"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_RunnerOutbreakGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_RunnerOutbreakGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
