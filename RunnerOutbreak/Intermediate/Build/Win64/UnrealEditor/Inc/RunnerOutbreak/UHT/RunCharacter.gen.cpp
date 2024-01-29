// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerOutbreak/Public/RunCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ARunCharacter();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ARunCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RunnerOutbreak();
// End Cross Module References
	DEFINE_FUNCTION(ARunCharacter::execAddWeapon)
	{
		P_GET_OBJECT(UClass,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWeapon(Z_Param_type);
		P_NATIVE_END;
	}
	void ARunCharacter::StaticRegisterNativesARunCharacter()
	{
		UClass* Class = ARunCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWeapon", &ARunCharacter::execAddWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARunCharacter_AddWeapon_Statics
	{
		struct RunCharacter_eventAddWeapon_Parms
		{
			TSubclassOf<AActor>  type;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ARunCharacter_AddWeapon_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RunCharacter_eventAddWeapon_Parms, type), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunCharacter_AddWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunCharacter_AddWeapon_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacter_AddWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacter_AddWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacter, nullptr, "AddWeapon", nullptr, nullptr, Z_Construct_UFunction_ARunCharacter_AddWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_AddWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARunCharacter_AddWeapon_Statics::RunCharacter_eventAddWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_AddWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARunCharacter_AddWeapon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacter_AddWeapon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARunCharacter_AddWeapon_Statics::RunCharacter_eventAddWeapon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARunCharacter_AddWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunCharacter_AddWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARunCharacter);
	UClass* Z_Construct_UClass_ARunCharacter_NoRegister()
	{
		return ARunCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARunCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerOutbreak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ARunCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARunCharacter_AddWeapon, "AddWeapon" }, // 4203268010
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RunCharacter.h" },
		{ "ModuleRelativePath", "Public/RunCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "RunCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARunCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARunCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacter_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARunCharacter_Statics::ClassParams = {
		&ARunCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARunCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ARunCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARunCharacter()
	{
		if (!Z_Registration_Info_UClass_ARunCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARunCharacter.OuterSingleton, Z_Construct_UClass_ARunCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARunCharacter.OuterSingleton;
	}
	template<> RUNNEROUTBREAK_API UClass* StaticClass<ARunCharacter>()
	{
		return ARunCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunCharacter);
	ARunCharacter::~ARunCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RunCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RunCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARunCharacter, ARunCharacter::StaticClass, TEXT("ARunCharacter"), &Z_Registration_Info_UClass_ARunCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARunCharacter), 2010331380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RunCharacter_h_1759323038(TEXT("/Script/RunnerOutbreak"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RunCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RunCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
