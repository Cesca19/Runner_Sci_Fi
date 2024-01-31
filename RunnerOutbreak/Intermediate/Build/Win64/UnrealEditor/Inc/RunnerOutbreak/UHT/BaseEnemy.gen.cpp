// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerOutbreak/Public/BaseEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ABaseEnemy();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RunnerOutbreak();
// End Cross Module References
	void ABaseEnemy::StaticRegisterNativesABaseEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEnemy);
	UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
	{
		return ABaseEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Movespeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Movespeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectionRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerOutbreak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseEnemy.h" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_HealthComponent_MetaData), Z_Construct_UClass_ABaseEnemy_Statics::NewProp_HealthComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Movespeed_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Movespeed = { "Movespeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, Movespeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Movespeed_MetaData), Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Movespeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DamageAmount_MetaData), Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DamageAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, AttackSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AttackSpeed_MetaData), Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AttackSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DetectionRange_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "ModuleRelativePath", "Public/BaseEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DetectionRange = { "DetectionRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, DetectionRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DetectionRange_MetaData), Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DetectionRange_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_HealthComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Movespeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AttackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_DetectionRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemy_Statics::ClassParams = {
		&ABaseEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaseEnemy()
	{
		if (!Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton, Z_Construct_UClass_ABaseEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton;
	}
	template<> RUNNEROUTBREAK_API UClass* StaticClass<ABaseEnemy>()
	{
		return ABaseEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
	ABaseEnemy::~ABaseEnemy() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_BaseEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_BaseEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemy, ABaseEnemy::StaticClass, TEXT("ABaseEnemy"), &Z_Registration_Info_UClass_ABaseEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemy), 2527386055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_BaseEnemy_h_2830487828(TEXT("/Script/RunnerOutbreak"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_BaseEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_BaseEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
