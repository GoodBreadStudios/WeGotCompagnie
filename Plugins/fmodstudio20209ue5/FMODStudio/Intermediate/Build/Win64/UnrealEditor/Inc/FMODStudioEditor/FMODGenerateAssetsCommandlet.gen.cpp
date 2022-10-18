// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudioEditor/Classes/FMODGenerateAssetsCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODGenerateAssetsCommandlet() {}
// Cross Module References
	FMODSTUDIOEDITOR_API UClass* Z_Construct_UClass_UFMODGenerateAssetsCommandlet_NoRegister();
	FMODSTUDIOEDITOR_API UClass* Z_Construct_UClass_UFMODGenerateAssetsCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_FMODStudioEditor();
// End Cross Module References
	void UFMODGenerateAssetsCommandlet::StaticRegisterNativesUFMODGenerateAssetsCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODGenerateAssetsCommandlet);
	UClass* Z_Construct_UClass_UFMODGenerateAssetsCommandlet_NoRegister()
	{
		return UFMODGenerateAssetsCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FMODGenerateAssetsCommandlet.h" },
		{ "ModuleRelativePath", "Classes/FMODGenerateAssetsCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODGenerateAssetsCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::ClassParams = {
		&UFMODGenerateAssetsCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFMODGenerateAssetsCommandlet()
	{
		if (!Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet.OuterSingleton, Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet.OuterSingleton;
	}
	template<> FMODSTUDIOEDITOR_API UClass* StaticClass<UFMODGenerateAssetsCommandlet>()
	{
		return UFMODGenerateAssetsCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODGenerateAssetsCommandlet);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODGenerateAssetsCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODGenerateAssetsCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFMODGenerateAssetsCommandlet, UFMODGenerateAssetsCommandlet::StaticClass, TEXT("UFMODGenerateAssetsCommandlet"), &Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODGenerateAssetsCommandlet), 3838036400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODGenerateAssetsCommandlet_h_3570077335(TEXT("/Script/FMODStudioEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODGenerateAssetsCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODGenerateAssetsCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
