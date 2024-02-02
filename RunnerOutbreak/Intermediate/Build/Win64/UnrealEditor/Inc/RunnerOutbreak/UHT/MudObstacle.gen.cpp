// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerOutbreak/Public/MudObstacle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMudObstacle() {}
// Cross Module References
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AMudObstacle();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AMudObstacle_NoRegister();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AObstacle();
	UPackage* Z_Construct_UPackage__Script_RunnerOutbreak();
// End Cross Module References
	void AMudObstacle::StaticRegisterNativesAMudObstacle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMudObstacle);
	UClass* Z_Construct_UClass_AMudObstacle_NoRegister()
	{
		return AMudObstacle::StaticClass();
	}
	struct Z_Construct_UClass_AMudObstacle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlowDownOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowDownOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMudObstacle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstacle,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerOutbreak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMudObstacle_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMudObstacle_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MudObstacle.h" },
		{ "ModuleRelativePath", "Public/MudObstacle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMudObstacle_Statics::NewProp_SlowDownOffset_MetaData[] = {
		{ "Category", "MudObstacle" },
		{ "ModuleRelativePath", "Public/MudObstacle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMudObstacle_Statics::NewProp_SlowDownOffset = { "SlowDownOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMudObstacle, SlowDownOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMudObstacle_Statics::NewProp_SlowDownOffset_MetaData), Z_Construct_UClass_AMudObstacle_Statics::NewProp_SlowDownOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMudObstacle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMudObstacle_Statics::NewProp_SlowDownOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMudObstacle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMudObstacle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMudObstacle_Statics::ClassParams = {
		&AMudObstacle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMudObstacle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMudObstacle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMudObstacle_Statics::Class_MetaDataParams), Z_Construct_UClass_AMudObstacle_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMudObstacle_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMudObstacle()
	{
		if (!Z_Registration_Info_UClass_AMudObstacle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMudObstacle.OuterSingleton, Z_Construct_UClass_AMudObstacle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMudObstacle.OuterSingleton;
	}
	template<> RUNNEROUTBREAK_API UClass* StaticClass<AMudObstacle>()
	{
		return AMudObstacle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMudObstacle);
	AMudObstacle::~AMudObstacle() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_MudObstacle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_MudObstacle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMudObstacle, AMudObstacle::StaticClass, TEXT("AMudObstacle"), &Z_Registration_Info_UClass_AMudObstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMudObstacle), 271606334U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_MudObstacle_h_38514980(TEXT("/Script/RunnerOutbreak"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_MudObstacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_MudObstacle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
