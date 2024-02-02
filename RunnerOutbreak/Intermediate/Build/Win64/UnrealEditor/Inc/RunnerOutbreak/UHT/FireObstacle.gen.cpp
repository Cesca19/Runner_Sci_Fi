// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerOutbreak/Public/FireObstacle.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireObstacle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AFireObstacle();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AFireObstacle_NoRegister();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AObstacle();
	UPackage* Z_Construct_UPackage__Script_RunnerOutbreak();
// End Cross Module References
	DEFINE_FUNCTION(AFireObstacle::execAttack)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack(Z_Param_actor);
		P_NATIVE_END;
	}
	struct FireObstacle_eventOnOverlap_Parms
	{
		AActor* OtherActor;
	};
	static FName NAME_AFireObstacle_OnOverlap = FName(TEXT("OnOverlap"));
	void AFireObstacle::OnOverlap(AActor* OtherActor)
	{
		FireObstacle_eventOnOverlap_Parms Parms;
		Parms.OtherActor=OtherActor;
		ProcessEvent(FindFunctionChecked(NAME_AFireObstacle_OnOverlap),&Parms);
	}
	void AFireObstacle::StaticRegisterNativesAFireObstacle()
	{
		UClass* Class = AFireObstacle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &AFireObstacle::execAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFireObstacle_Attack_Statics
	{
		struct FireObstacle_eventAttack_Parms
		{
			AActor* actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFireObstacle_Attack_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FireObstacle_eventAttack_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFireObstacle_Attack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireObstacle_Attack_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireObstacle_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FireObstacle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFireObstacle_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFireObstacle, nullptr, "Attack", nullptr, nullptr, Z_Construct_UFunction_AFireObstacle_Attack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireObstacle_Attack_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFireObstacle_Attack_Statics::FireObstacle_eventAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFireObstacle_Attack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFireObstacle_Attack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFireObstacle_Attack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFireObstacle_Attack_Statics::FireObstacle_eventAttack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFireObstacle_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFireObstacle_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFireObstacle_OnOverlap_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFireObstacle_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FireObstacle_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFireObstacle_OnOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireObstacle_OnOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireObstacle_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FireObstacle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFireObstacle_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFireObstacle, nullptr, "OnOverlap", nullptr, nullptr, Z_Construct_UFunction_AFireObstacle_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireObstacle_OnOverlap_Statics::PropPointers), sizeof(FireObstacle_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFireObstacle_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFireObstacle_OnOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFireObstacle_OnOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(FireObstacle_eventOnOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFireObstacle_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFireObstacle_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFireObstacle);
	UClass* Z_Construct_UClass_AFireObstacle_NoRegister()
	{
		return AFireObstacle::StaticClass();
	}
	struct Z_Construct_UClass_AFireObstacle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamagePerSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamagePerSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackTimerHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFireObstacle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstacle,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerOutbreak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireObstacle_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFireObstacle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFireObstacle_Attack, "Attack" }, // 829731916
		{ &Z_Construct_UFunction_AFireObstacle_OnOverlap, "OnOverlap" }, // 473018829
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireObstacle_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireObstacle_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FireObstacle.h" },
		{ "ModuleRelativePath", "Public/FireObstacle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireObstacle_Statics::NewProp_DamagePerSeconds_MetaData[] = {
		{ "Category", "FireObstacle" },
		{ "ModuleRelativePath", "Public/FireObstacle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFireObstacle_Statics::NewProp_DamagePerSeconds = { "DamagePerSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireObstacle, DamagePerSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireObstacle_Statics::NewProp_DamagePerSeconds_MetaData), Z_Construct_UClass_AFireObstacle_Statics::NewProp_DamagePerSeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireObstacle_Statics::NewProp_AttackTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/FireObstacle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFireObstacle_Statics::NewProp_AttackTimerHandle = { "AttackTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireObstacle, AttackTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireObstacle_Statics::NewProp_AttackTimerHandle_MetaData), Z_Construct_UClass_AFireObstacle_Statics::NewProp_AttackTimerHandle_MetaData) }; // 3999327403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFireObstacle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireObstacle_Statics::NewProp_DamagePerSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireObstacle_Statics::NewProp_AttackTimerHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFireObstacle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireObstacle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFireObstacle_Statics::ClassParams = {
		&AFireObstacle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFireObstacle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFireObstacle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireObstacle_Statics::Class_MetaDataParams), Z_Construct_UClass_AFireObstacle_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireObstacle_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFireObstacle()
	{
		if (!Z_Registration_Info_UClass_AFireObstacle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFireObstacle.OuterSingleton, Z_Construct_UClass_AFireObstacle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFireObstacle.OuterSingleton;
	}
	template<> RUNNEROUTBREAK_API UClass* StaticClass<AFireObstacle>()
	{
		return AFireObstacle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFireObstacle);
	AFireObstacle::~AFireObstacle() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_FireObstacle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_FireObstacle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFireObstacle, AFireObstacle::StaticClass, TEXT("AFireObstacle"), &Z_Registration_Info_UClass_AFireObstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFireObstacle), 1917866364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_FireObstacle_h_189754750(TEXT("/Script/RunnerOutbreak"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_FireObstacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_FireObstacle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
