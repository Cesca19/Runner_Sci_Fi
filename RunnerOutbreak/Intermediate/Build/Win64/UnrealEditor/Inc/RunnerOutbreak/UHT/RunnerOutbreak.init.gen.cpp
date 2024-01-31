// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunnerOutbreak_init() {}
	RUNNEROUTBREAK_API UFunction* Z_Construct_UDelegateFunction_RunnerOutbreak_OnHealthChange__DelegateSignature();
	RUNNEROUTBREAK_API UFunction* Z_Construct_UDelegateFunction_RunnerOutbreak_OnHealthDepleted__DelegateSignature();
	RUNNEROUTBREAK_API UFunction* Z_Construct_UDelegateFunction_RunnerOutbreak_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RunnerOutbreak;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RunnerOutbreak()
	{
		if (!Z_Registration_Info_UPackage__Script_RunnerOutbreak.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RunnerOutbreak_OnHealthChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RunnerOutbreak_OnHealthDepleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RunnerOutbreak_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RunnerOutbreak",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x686CD4BE,
				0x49CA9CCB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RunnerOutbreak.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RunnerOutbreak.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RunnerOutbreak(Z_Construct_UPackage__Script_RunnerOutbreak, TEXT("/Script/RunnerOutbreak"), Z_Registration_Info_UPackage__Script_RunnerOutbreak, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x686CD4BE, 0x49CA9CCB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
