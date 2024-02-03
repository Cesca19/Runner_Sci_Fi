// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerOutbreak/Public/Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AWeapon();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RunnerOutbreak();
// End Cross Module References
	DEFINE_FUNCTION(AWeapon::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execAddAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAmmo(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execGetMaxAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execGetAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execStopFiring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFiring();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeapon::execStartFiring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFiring();
		P_NATIVE_END;
	}
	static FName NAME_AWeapon_OnFire = FName(TEXT("OnFire"));
	void AWeapon::OnFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeapon_OnFire),NULL);
	}
	void AWeapon::StaticRegisterNativesAWeapon()
	{
		UClass* Class = AWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAmmo", &AWeapon::execAddAmmo },
			{ "Fire", &AWeapon::execFire },
			{ "GetAmmo", &AWeapon::execGetAmmo },
			{ "GetMaxAmmo", &AWeapon::execGetMaxAmmo },
			{ "GetName", &AWeapon::execGetName },
			{ "StartFiring", &AWeapon::execStartFiring },
			{ "StopFiring", &AWeapon::execStopFiring },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeapon_AddAmmo_Statics
	{
		struct Weapon_eventAddAmmo_Parms
		{
			int32 amount;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeapon_AddAmmo_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventAddAmmo_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_AddAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_AddAmmo_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_AddAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_AddAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "AddAmmo", nullptr, nullptr, Z_Construct_UFunction_AWeapon_AddAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_AddAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeapon_AddAmmo_Statics::Weapon_eventAddAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_AddAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_AddAmmo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_AddAmmo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWeapon_AddAmmo_Statics::Weapon_eventAddAmmo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWeapon_AddAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_AddAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_Fire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeapon_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_GetAmmo_Statics
	{
		struct Weapon_eventGetAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeapon_GetAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventGetAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GetAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GetAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GetAmmo", nullptr, nullptr, Z_Construct_UFunction_AWeapon_GetAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeapon_GetAmmo_Statics::Weapon_eventGetAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_GetAmmo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetAmmo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWeapon_GetAmmo_Statics::Weapon_eventGetAmmo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWeapon_GetAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_GetAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_GetMaxAmmo_Statics
	{
		struct Weapon_eventGetMaxAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeapon_GetMaxAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventGetMaxAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GetMaxAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetMaxAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetMaxAmmo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GetMaxAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GetMaxAmmo", nullptr, nullptr, Z_Construct_UFunction_AWeapon_GetMaxAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetMaxAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeapon_GetMaxAmmo_Statics::Weapon_eventGetMaxAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetMaxAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_GetMaxAmmo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetMaxAmmo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWeapon_GetMaxAmmo_Statics::Weapon_eventGetMaxAmmo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWeapon_GetMaxAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_GetMaxAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_GetName_Statics
	{
		struct Weapon_eventGetName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWeapon_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventGetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_GetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_GetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "GetName", nullptr, nullptr, Z_Construct_UFunction_AWeapon_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeapon_GetName_Statics::Weapon_eventGetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_GetName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_GetName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWeapon_GetName_Statics::Weapon_eventGetName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWeapon_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_OnFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_OnFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_OnFire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeapon_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_OnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_StartFiring_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_StartFiring_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_StartFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "StartFiring", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_StartFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_StartFiring_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeapon_StartFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_StartFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeapon_StopFiring_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeapon_StopFiring_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_StopFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "StopFiring", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_StopFiring_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_StopFiring_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeapon_StopFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_StopFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon);
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ammo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ammo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_projectile_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_projectile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerOutbreak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_AddAmmo, "AddAmmo" }, // 4215280431
		{ &Z_Construct_UFunction_AWeapon_Fire, "Fire" }, // 3150342894
		{ &Z_Construct_UFunction_AWeapon_GetAmmo, "GetAmmo" }, // 3730970188
		{ &Z_Construct_UFunction_AWeapon_GetMaxAmmo, "GetMaxAmmo" }, // 4289427324
		{ &Z_Construct_UFunction_AWeapon_GetName, "GetName" }, // 2265653730
		{ &Z_Construct_UFunction_AWeapon_OnFire, "OnFire" }, // 3173690606
		{ &Z_Construct_UFunction_AWeapon_StartFiring, "StartFiring" }, // 4212814397
		{ &Z_Construct_UFunction_AWeapon_StopFiring, "StopFiring" }, // 1975609335
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon.h" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_name_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_ammo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_ammo = { "ammo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, ammo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_ammo_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_ammo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, MaxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MaxAmmo_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_MaxAmmo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_projectile_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_projectile = { "projectile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, projectile), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_projectile_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_projectile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_spawnPoint_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_spawnPoint = { "spawnPoint", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, spawnPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_spawnPoint_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_spawnPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AWeapon_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_ammo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MaxAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_projectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_spawnPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
		&AWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWeapon()
	{
		if (!Z_Registration_Info_UClass_AWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon.OuterSingleton, Z_Construct_UClass_AWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeapon.OuterSingleton;
	}
	template<> RUNNEROUTBREAK_API UClass* StaticClass<AWeapon>()
	{
		return AWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
	AWeapon::~AWeapon() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Weapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Weapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 6166980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Weapon_h_1443887939(TEXT("/Script/RunnerOutbreak"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Weapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
