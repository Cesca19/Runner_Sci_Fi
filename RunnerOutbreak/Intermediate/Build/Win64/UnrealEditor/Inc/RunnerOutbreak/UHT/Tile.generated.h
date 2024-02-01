// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ATile;
class UBoxComponent;
class UPrimitiveComponent;
struct FHitResult;
#ifdef RUNNEROUTBREAK_Tile_generated_h
#error "Tile.generated.h already included, missing '#pragma once' in Tile.h"
#endif
#define RUNNEROUTBREAK_Tile_generated_h

#define FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_10_DELEGATE \
RUNNEROUTBREAK_API void FOnExitedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnExitedDelegate, ATile* tile);


#define FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_15_SPARSE_DATA
#define FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnObject); \
	DECLARE_FUNCTION(execSpawnLocation); \
	DECLARE_FUNCTION(execOnBoxBeginOverlap); \
	DECLARE_FUNCTION(execGetAttachLocation);


#define FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_15_ACCESSORS
#define FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RunnerOutbreak"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATile) \
	NO_API virtual ~ATile();


#define FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_12_PROLOG
#define FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_15_SPARSE_DATA \
	FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_15_ACCESSORS \
	FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNNEROUTBREAK_API UClass* StaticClass<class ATile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_Tile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
