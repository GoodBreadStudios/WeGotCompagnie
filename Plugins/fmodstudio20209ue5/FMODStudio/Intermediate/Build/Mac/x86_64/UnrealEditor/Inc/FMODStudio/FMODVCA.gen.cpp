// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Classes/FMODVCA.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODVCA() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODVCA_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODVCA();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	void UFMODVCA::StaticRegisterNativesUFMODVCA()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODVCA);
	UClass* Z_Construct_UClass_UFMODVCA_NoRegister()
	{
		return UFMODVCA::StaticClass();
	}
	struct Z_Construct_UClass_UFMODVCA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODVCA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFMODAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODVCA_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * FMOD VCA Asset.\n */" },
		{ "IncludePath", "FMODVCA.h" },
		{ "ModuleRelativePath", "Classes/FMODVCA.h" },
		{ "ToolTip", "FMOD VCA Asset." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODVCA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODVCA>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODVCA_Statics::ClassParams = {
		&UFMODVCA::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFMODVCA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODVCA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFMODVCA()
	{
		if (!Z_Registration_Info_UClass_UFMODVCA.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODVCA.OuterSingleton, Z_Construct_UClass_UFMODVCA_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFMODVCA.OuterSingleton;
	}
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODVCA>()
	{
		return UFMODVCA::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODVCA);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODVCA_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODVCA_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFMODVCA, UFMODVCA::StaticClass, TEXT("UFMODVCA"), &Z_Registration_Info_UClass_UFMODVCA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODVCA), 3527267867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODVCA_h_2634273259(TEXT("/Script/FMODStudio"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODVCA_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODVCA_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
