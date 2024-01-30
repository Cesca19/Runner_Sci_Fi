// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerOutbreak/Public/PickUpWeapon.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpWeapon() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_APickUpWeapon();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_APickUpWeapon_NoRegister();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ARunCharacter_NoRegister();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RunnerOutbreak();
// End Cross Module References
	DEFINE_FUNCTION(APickUpWeapon::execOnHit)
	{
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickUpWeapon::execOnPickUp)
	{
		P_GET_OBJECT(ARunCharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickUp(Z_Param_character);
		P_NATIVE_END;
	}
	static FName NAME_APickUpWeapon_OnGet = FName(TEXT("OnGet"));
	void APickUpWeapon::OnGet()
	{
		ProcessEvent(FindFunctionChecked(NAME_APickUpWeapon_OnGet),NULL);
	}
	void APickUpWeapon::StaticRegisterNativesAPickUpWeapon()
	{
		UClass* Class = APickUpWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &APickUpWeapon::execOnHit },
			{ "OnPickUp", &APickUpWeapon::execOnPickUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickUpWeapon_OnGet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUpWeapon_OnGet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PickUpWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUpWeapon_OnGet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUpWeapon, nullptr, "OnGet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpWeapon_OnGet_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickUpWeapon_OnGet_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APickUpWeapon_OnGet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickUpWeapon_OnGet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickUpWeapon_OnHit_Statics
	{
		struct PickUpWeapon_eventOnHit_Parms
		{
			AActor* SelfActor;
			AActor* OtherActor;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickUpWeapon_eventOnHit_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickUpWeapon_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickUpWeapon_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickUpWeapon_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::NewProp_SelfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PickUpWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUpWeapon, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::PickUpWeapon_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::PickUpWeapon_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickUpWeapon_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickUpWeapon_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickUpWeapon_OnPickUp_Statics
	{
		struct PickUpWeapon_eventOnPickUp_Parms
		{
			ARunCharacter* character;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickUpWeapon_OnPickUp_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickUpWeapon_eventOnPickUp_Parms, character), Z_Construct_UClass_ARunCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickUpWeapon_OnPickUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUpWeapon_OnPickUp_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUpWeapon_OnPickUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PickUpWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUpWeapon_OnPickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUpWeapon, nullptr, "OnPickUp", nullptr, nullptr, Z_Construct_UFunction_APickUpWeapon_OnPickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpWeapon_OnPickUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickUpWeapon_OnPickUp_Statics::PickUpWeapon_eventOnPickUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpWeapon_OnPickUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickUpWeapon_OnPickUp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpWeapon_OnPickUp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickUpWeapon_OnPickUp_Statics::PickUpWeapon_eventOnPickUp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickUpWeapon_OnPickUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickUpWeapon_OnPickUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickUpWeapon);
	UClass* Z_Construct_UClass_APickUpWeapon_NoRegister()
	{
		return APickUpWeapon::StaticClass();
	}
	struct Z_Construct_UClass_APickUpWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickUpWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerOutbreak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUpWeapon_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APickUpWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickUpWeapon_OnGet, "OnGet" }, // 3098928701
		{ &Z_Construct_UFunction_APickUpWeapon_OnHit, "OnHit" }, // 1071374049
		{ &Z_Construct_UFunction_APickUpWeapon_OnPickUp, "OnPickUp" }, // 3587185021
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUpWeapon_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUpWeapon.h" },
		{ "ModuleRelativePath", "Public/PickUpWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpWeapon_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "PickUpWeapon" },
		{ "ModuleRelativePath", "Public/PickUpWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APickUpWeapon_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUpWeapon, WeaponType), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickUpWeapon_Statics::NewProp_WeaponType_MetaData), Z_Construct_UClass_APickUpWeapon_Statics::NewProp_WeaponType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpWeapon_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "PickUpWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickUpWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpWeapon_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickUpWeapon, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickUpWeapon_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_APickUpWeapon_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUpWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpWeapon_Statics::NewProp_WeaponType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpWeapon_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickUpWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUpWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickUpWeapon_Statics::ClassParams = {
		&APickUpWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickUpWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickUpWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickUpWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_APickUpWeapon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickUpWeapon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APickUpWeapon()
	{
		if (!Z_Registration_Info_UClass_APickUpWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickUpWeapon.OuterSingleton, Z_Construct_UClass_APickUpWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickUpWeapon.OuterSingleton;
	}
	template<> RUNNEROUTBREAK_API UClass* StaticClass<APickUpWeapon>()
	{
		return APickUpWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickUpWeapon);
	APickUpWeapon::~APickUpWeapon() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_PickUpWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_PickUpWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickUpWeapon, APickUpWeapon::StaticClass, TEXT("APickUpWeapon"), &Z_Registration_Info_UClass_APickUpWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickUpWeapon), 909664585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_PickUpWeapon_h_2908760553(TEXT("/Script/RunnerOutbreak"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_PickUpWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_PickUpWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
