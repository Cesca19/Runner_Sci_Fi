// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerOutbreak/Public/WeaponPickUp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponPickUp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AWeaponPickUp();
	RUNNEROUTBREAK_API UClass* Z_Construct_UClass_AWeaponPickUp_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RunnerOutbreak();
// End Cross Module References
	void AWeaponPickUp::StaticRegisterNativesAWeaponPickUp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponPickUp);
	UClass* Z_Construct_UClass_AWeaponPickUp_NoRegister()
	{
		return AWeaponPickUp::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponPickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponPickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerOutbreak,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickUp_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponPickUp.h" },
		{ "ModuleRelativePath", "Public/WeaponPickUp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponPickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponPickUp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponPickUp_Statics::ClassParams = {
		&AWeaponPickUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickUp_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponPickUp_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AWeaponPickUp()
	{
		if (!Z_Registration_Info_UClass_AWeaponPickUp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponPickUp.OuterSingleton, Z_Construct_UClass_AWeaponPickUp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeaponPickUp.OuterSingleton;
	}
	template<> RUNNEROUTBREAK_API UClass* StaticClass<AWeaponPickUp>()
	{
		return AWeaponPickUp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponPickUp);
	AWeaponPickUp::~AWeaponPickUp() {}
	struct Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_WeaponPickUp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_WeaponPickUp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponPickUp, AWeaponPickUp::StaticClass, TEXT("AWeaponPickUp"), &Z_Registration_Info_UClass_AWeaponPickUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponPickUp), 1906671068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_WeaponPickUp_h_2251175560(TEXT("/Script/RunnerOutbreak"),
		Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_WeaponPickUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fifam_Projets_G_TECH3_Unreal_C___BP_Runner_Sci_Fi_RunnerOutbreak_Source_RunnerOutbreak_Public_WeaponPickUp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
