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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ARunCharacterGameMode();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ARunCharacterGameMode_NoRegister();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ATile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RunnerOutbreak();
// End Cross Module References
	DEFINE_FUNCTION(ARunCharacterGameMode::execDestroyTile)
	{
		P_GET_OBJECT(ATile,Z_Param_tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyTile(Z_Param_tile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunCharacterGameMode::execOnTileExited)
	{
		P_GET_OBJECT(ATile,Z_Param_tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTileExited(Z_Param_tile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARunCharacterGameMode::execSpawnTile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnTile();
		P_NATIVE_END;
	}
	void ARunCharacterGameMode::StaticRegisterNativesARunCharacterGameMode()
	{
		UClass* Class = ARunCharacterGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyTile", &ARunCharacterGameMode::execDestroyTile },
			{ "OnTileExited", &ARunCharacterGameMode::execOnTileExited },
			{ "SpawnTile", &ARunCharacterGameMode::execSpawnTile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile_Statics
	{
		struct RunCharacterGameMode_eventDestroyTile_Parms
		{
			ATile* tile;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_tile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RunCharacterGameMode_eventDestroyTile_Parms, tile), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile_Statics::NewProp_tile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RunCharacterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacterGameMode, nullptr, "DestroyTile", nullptr, nullptr, Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile_Statics::RunCharacterGameMode_eventDestroyTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile_Statics::RunCharacterGameMode_eventDestroyTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited_Statics
	{
		struct RunCharacterGameMode_eventOnTileExited_Parms
		{
			ATile* tile;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_tile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RunCharacterGameMode_eventOnTileExited_Parms, tile), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited_Statics::NewProp_tile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RunCharacterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacterGameMode, nullptr, "OnTileExited", nullptr, nullptr, Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited_Statics::RunCharacterGameMode_eventOnTileExited_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited_Statics::RunCharacterGameMode_eventOnTileExited_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARunCharacterGameMode_SpawnTile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunCharacterGameMode_SpawnTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RunCharacterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunCharacterGameMode_SpawnTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunCharacterGameMode, nullptr, "SpawnTile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARunCharacterGameMode_SpawnTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARunCharacterGameMode_SpawnTile_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ARunCharacterGameMode_SpawnTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARunCharacterGameMode_SpawnTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARunCharacterGameMode);
	UClass* Z_Construct_UClass_ARunCharacterGameMode_NoRegister()
	{
		return ARunCharacterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARunCharacterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startTileNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_startTileNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunCharacterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerOutbreak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacterGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ARunCharacterGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARunCharacterGameMode_DestroyTile, "DestroyTile" }, // 1191960112
		{ &Z_Construct_UFunction_ARunCharacterGameMode_OnTileExited, "OnTileExited" }, // 2810927613
		{ &Z_Construct_UFunction_ARunCharacterGameMode_SpawnTile, "SpawnTile" }, // 2045347160
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacterGameMode_Statics::FuncInfo) < 2048);
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacterGameMode_Statics::NewProp_TileClass_MetaData[] = {
		{ "Category", "RunCharacterGameMode" },
		{ "ModuleRelativePath", "Public/RunCharacterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARunCharacterGameMode_Statics::NewProp_TileClass = { "TileClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARunCharacterGameMode, TileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacterGameMode_Statics::NewProp_TileClass_MetaData), Z_Construct_UClass_ARunCharacterGameMode_Statics::NewProp_TileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunCharacterGameMode_Statics::NewProp_startTileNumber_MetaData[] = {
		{ "Category", "RunCharacterGameMode" },
		{ "ModuleRelativePath", "Public/RunCharacterGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARunCharacterGameMode_Statics::NewProp_startTileNumber = { "startTileNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARunCharacterGameMode, startTileNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacterGameMode_Statics::NewProp_startTileNumber_MetaData), Z_Construct_UClass_ARunCharacterGameMode_Statics::NewProp_startTileNumber_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARunCharacterGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacterGameMode_Statics::NewProp_TileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunCharacterGameMode_Statics::NewProp_startTileNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunCharacterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunCharacterGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARunCharacterGameMode_Statics::ClassParams = {
		&ARunCharacterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARunCharacterGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacterGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARunCharacterGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARunCharacterGameMode_Statics::PropPointers) < 2048);
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunCharacterGameMode);
	ARunCharacterGameMode::~ARunCharacterGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RunCharacterGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RunCharacterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARunCharacterGameMode, ARunCharacterGameMode::StaticClass, TEXT("ARunCharacterGameMode"), &Z_Registration_Info_UClass_ARunCharacterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARunCharacterGameMode), 138596954U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RunCharacterGameMode_h_1572546867(TEXT("/Script/RunnerOutbreak"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RunCharacterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_RunCharacterGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
