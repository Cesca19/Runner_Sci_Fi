// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerOutbreak/Public/Tile.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTile() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ATile();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_ATile_NoRegister();
	RUNNEROUTBREAK_API UFunction* Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RunnerOutbreak();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature_Statics
	{
		struct _Script_RunnerOutbreak_eventOnExitedDelegate_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RunnerOutbreak_eventOnExitedDelegate_Parms, tile), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature_Statics::NewProp_tile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RunnerOutbreak, nullptr, "OnExitedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature_Statics::_Script_RunnerOutbreak_eventOnExitedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130004, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature_Statics::_Script_RunnerOutbreak_eventOnExitedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnExitedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnExitedDelegate, ATile* tile)
{
	struct _Script_RunnerOutbreak_eventOnExitedDelegate_Parms
	{
		ATile* tile;
	};
	_Script_RunnerOutbreak_eventOnExitedDelegate_Parms Parms;
	Parms.tile=tile;
	OnExitedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ATile::execSpawnObject)
	{
		P_GET_TARRAY(TSubclassOf<AActor> ,Z_Param_type);
		P_GET_OBJECT(UBoxComponent,Z_Param_Box);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnObject(Z_Param_type,Z_Param_Box);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execSpawnLocation)
	{
		P_GET_OBJECT(UBoxComponent,Z_Param_Box);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->SpawnLocation(Z_Param_Box);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execOnBoxBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBoxBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATile::execGetAttachLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetAttachLocation();
		P_NATIVE_END;
	}
	void ATile::StaticRegisterNativesATile()
	{
		UClass* Class = ATile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachLocation", &ATile::execGetAttachLocation },
			{ "OnBoxBeginOverlap", &ATile::execOnBoxBeginOverlap },
			{ "SpawnLocation", &ATile::execSpawnLocation },
			{ "SpawnObject", &ATile::execSpawnObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATile_GetAttachLocation_Statics
	{
		struct Tile_eventGetAttachLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATile_GetAttachLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tile_eventGetAttachLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_GetAttachLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_GetAttachLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_GetAttachLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_GetAttachLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "GetAttachLocation", nullptr, nullptr, Z_Construct_UFunction_ATile_GetAttachLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_GetAttachLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATile_GetAttachLocation_Statics::Tile_eventGetAttachLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_GetAttachLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATile_GetAttachLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_GetAttachLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATile_GetAttachLocation_Statics::Tile_eventGetAttachLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATile_GetAttachLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_GetAttachLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics
	{
		struct Tile_eventOnBoxBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tile_eventOnBoxBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tile_eventOnBoxBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tile_eventOnBoxBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tile_eventOnBoxBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Tile_eventOnBoxBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Tile_eventOnBoxBeginOverlap_Parms), &Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tile_eventOnBoxBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "OnBoxBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::Tile_eventOnBoxBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::Tile_eventOnBoxBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATile_OnBoxBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_OnBoxBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_SpawnLocation_Statics
	{
		struct Tile_eventSpawnLocation_Parms
		{
			UBoxComponent* Box;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_SpawnLocation_Statics::NewProp_Box_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_SpawnLocation_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tile_eventSpawnLocation_Parms, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SpawnLocation_Statics::NewProp_Box_MetaData), Z_Construct_UFunction_ATile_SpawnLocation_Statics::NewProp_Box_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATile_SpawnLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tile_eventSpawnLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_SpawnLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_SpawnLocation_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_SpawnLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_SpawnLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_SpawnLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "SpawnLocation", nullptr, nullptr, Z_Construct_UFunction_ATile_SpawnLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SpawnLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATile_SpawnLocation_Statics::Tile_eventSpawnLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SpawnLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATile_SpawnLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SpawnLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATile_SpawnLocation_Statics::Tile_eventSpawnLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATile_SpawnLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_SpawnLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_SpawnObject_Statics
	{
		struct Tile_eventSpawnObject_Parms
		{
			TArray<TSubclassOf<AActor> > type;
			UBoxComponent* Box;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_type_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATile_SpawnObject_Statics::NewProp_type_Inner = { "type", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATile_SpawnObject_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tile_eventSpawnObject_Parms, type), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_SpawnObject_Statics::NewProp_Box_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATile_SpawnObject_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Tile_eventSpawnObject_Parms, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SpawnObject_Statics::NewProp_Box_MetaData), Z_Construct_UFunction_ATile_SpawnObject_Statics::NewProp_Box_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_SpawnObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_SpawnObject_Statics::NewProp_type_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_SpawnObject_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_SpawnObject_Statics::NewProp_Box,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_SpawnObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_SpawnObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, nullptr, "SpawnObject", nullptr, nullptr, Z_Construct_UFunction_ATile_SpawnObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SpawnObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATile_SpawnObject_Statics::Tile_eventSpawnObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SpawnObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATile_SpawnObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATile_SpawnObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATile_SpawnObject_Statics::Tile_eventSpawnObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATile_SpawnObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATile_SpawnObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATile);
	UClass* Z_Construct_UClass_ATile_NoRegister()
	{
		return ATile::StaticClass();
	}
	struct Z_Construct_UClass_ATile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnExited_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExited;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arrow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Arrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnObstacleArea_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnObstacleArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPickUpArea_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPickUpArea;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerOutbreak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATile_GetAttachLocation, "GetAttachLocation" }, // 3626898801
		{ &Z_Construct_UFunction_ATile_OnBoxBeginOverlap, "OnBoxBeginOverlap" }, // 3590913098
		{ &Z_Construct_UFunction_ATile_SpawnLocation, "SpawnLocation" }, // 1742498273
		{ &Z_Construct_UFunction_ATile_SpawnObject, "SpawnObject" }, // 2356462872
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tile.h" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_OnExited_MetaData[] = {
		{ "Category", "EventDispatchers" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATile_Statics::NewProp_OnExited = { "OnExited", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, OnExited), Z_Construct_UDelegateFunction_RunnerOutbreak_OnExitedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_OnExited_MetaData), Z_Construct_UClass_ATile_Statics::NewProp_OnExited_MetaData) }; // 4064695699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_RootScene_MetaData[] = {
		{ "Category", "Tile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_RootScene_MetaData), Z_Construct_UClass_ATile_Statics::NewProp_RootScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_Arrow_MetaData[] = {
		{ "Category", "Tile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_Arrow = { "Arrow", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, Arrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_Arrow_MetaData), Z_Construct_UClass_ATile_Statics::NewProp_Arrow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Tile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_BoxCollision_MetaData), Z_Construct_UClass_ATile_Statics::NewProp_BoxCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_SpawnObstacleArea_MetaData[] = {
		{ "Category", "Tile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_SpawnObstacleArea = { "SpawnObstacleArea", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, SpawnObstacleArea), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_SpawnObstacleArea_MetaData), Z_Construct_UClass_ATile_Statics::NewProp_SpawnObstacleArea_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_SpawnPickUpArea_MetaData[] = {
		{ "Category", "Tile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_SpawnPickUpArea = { "SpawnPickUpArea", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATile, SpawnPickUpArea), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_SpawnPickUpArea_MetaData), Z_Construct_UClass_ATile_Statics::NewProp_SpawnPickUpArea_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_OnExited,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_RootScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_Arrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_BoxCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_SpawnObstacleArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_SpawnPickUpArea,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATile_Statics::ClassParams = {
		&ATile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams), Z_Construct_UClass_ATile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATile()
	{
		if (!Z_Registration_Info_UClass_ATile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATile.OuterSingleton, Z_Construct_UClass_ATile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATile.OuterSingleton;
	}
	template<> RUNNEROUTBREAK_API UClass* StaticClass<ATile>()
	{
		return ATile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATile);
	ATile::~ATile() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATile, ATile::StaticClass, TEXT("ATile"), &Z_Registration_Info_UClass_ATile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATile), 3005885031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_3785748712(TEXT("/Script/RunnerOutbreak"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
