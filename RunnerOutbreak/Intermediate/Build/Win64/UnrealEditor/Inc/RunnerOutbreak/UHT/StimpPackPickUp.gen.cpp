// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerOutbreak/Public/StimpPackPickUp.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStimpPackPickUp() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_APickUp();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ARunCharacter_NoRegister();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AStimpPackPickUp();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AStimpPackPickUp_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RunnerOutbreak();
// End Cross Module References
	DEFINE_FUNCTION(AStimpPackPickUp::execResetSpeed)
	{
		P_GET_OBJECT(ARunCharacter,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSpeed(Z_Param_actor);
		P_NATIVE_END;
	}
	void AStimpPackPickUp::StaticRegisterNativesAStimpPackPickUp()
	{
		UClass* Class = AStimpPackPickUp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetSpeed", &AStimpPackPickUp::execResetSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed_Statics
	{
		struct StimpPackPickUp_eventResetSpeed_Parms
		{
			ARunCharacter* actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StimpPackPickUp_eventResetSpeed_Parms, actor), Z_Construct_UClass_ARunCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StimpPackPickUp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStimpPackPickUp, nullptr, "ResetSpeed", nullptr, nullptr, Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed_Statics::StimpPackPickUp_eventResetSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed_Statics::StimpPackPickUp_eventResetSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStimpPackPickUp);
	UClass* Z_Construct_UClass_AStimpPackPickUp_NoRegister()
	{
		return AStimpPackPickUp::StaticClass();
	}
	struct Z_Construct_UClass_AStimpPackPickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpeedAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedTimerHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStimpPackPickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickUp,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerOutbreak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStimpPackPickUp_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AStimpPackPickUp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStimpPackPickUp_ResetSpeed, "ResetSpeed" }, // 2977719208
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStimpPackPickUp_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStimpPackPickUp_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StimpPackPickUp.h" },
		{ "ModuleRelativePath", "Public/StimpPackPickUp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStimpPackPickUp_Statics::NewProp_SpeedAmount_MetaData[] = {
		{ "Category", "StimpPackPickUp" },
		{ "ModuleRelativePath", "Public/StimpPackPickUp.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStimpPackPickUp_Statics::NewProp_SpeedAmount = { "SpeedAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStimpPackPickUp, SpeedAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStimpPackPickUp_Statics::NewProp_SpeedAmount_MetaData), Z_Construct_UClass_AStimpPackPickUp_Statics::NewProp_SpeedAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStimpPackPickUp_Statics::NewProp_SpeedTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/StimpPackPickUp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStimpPackPickUp_Statics::NewProp_SpeedTimerHandle = { "SpeedTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStimpPackPickUp, SpeedTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStimpPackPickUp_Statics::NewProp_SpeedTimerHandle_MetaData), Z_Construct_UClass_AStimpPackPickUp_Statics::NewProp_SpeedTimerHandle_MetaData) }; // 3999327403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStimpPackPickUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStimpPackPickUp_Statics::NewProp_SpeedAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStimpPackPickUp_Statics::NewProp_SpeedTimerHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStimpPackPickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStimpPackPickUp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStimpPackPickUp_Statics::ClassParams = {
		&AStimpPackPickUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStimpPackPickUp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStimpPackPickUp_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStimpPackPickUp_Statics::Class_MetaDataParams), Z_Construct_UClass_AStimpPackPickUp_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStimpPackPickUp_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AStimpPackPickUp()
	{
		if (!Z_Registration_Info_UClass_AStimpPackPickUp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStimpPackPickUp.OuterSingleton, Z_Construct_UClass_AStimpPackPickUp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStimpPackPickUp.OuterSingleton;
	}
	template<> RUNNEROUTBREAK_API UClass* StaticClass<AStimpPackPickUp>()
	{
		return AStimpPackPickUp::StaticClass();
	}
	AStimpPackPickUp::AStimpPackPickUp() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStimpPackPickUp);
	AStimpPackPickUp::~AStimpPackPickUp() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_StimpPackPickUp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_StimpPackPickUp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStimpPackPickUp, AStimpPackPickUp::StaticClass, TEXT("AStimpPackPickUp"), &Z_Registration_Info_UClass_AStimpPackPickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStimpPackPickUp), 3664931586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_StimpPackPickUp_h_2132470471(TEXT("/Script/RunnerOutbreak"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_StimpPackPickUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_StimpPackPickUp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
