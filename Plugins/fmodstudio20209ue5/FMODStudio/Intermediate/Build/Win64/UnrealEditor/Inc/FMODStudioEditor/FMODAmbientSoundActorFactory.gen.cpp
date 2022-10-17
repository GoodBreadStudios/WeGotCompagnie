// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudioEditor/Classes/FMODAmbientSoundActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAmbientSoundActorFactory() {}
// Cross Module References
	FMODSTUDIOEDITOR_API UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory_NoRegister();
	FMODSTUDIOEDITOR_API UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_FMODStudioEditor();
// End Cross Module References
	void UFMODAmbientSoundActorFactory::StaticRegisterNativesUFMODAmbientSoundActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODAmbientSoundActorFactory);
	UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory_NoRegister()
	{
		return UFMODAmbientSoundActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** FMOD Ambient Sound Actor Factory.\n*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "FMODAmbientSoundActorFactory.h" },
		{ "ModuleRelativePath", "Classes/FMODAmbientSoundActorFactory.h" },
		{ "ToolTip", "FMOD Ambient Sound Actor Factory." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODAmbientSoundActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::ClassParams = {
		&UFMODAmbientSoundActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory()
	{
		if (!Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.OuterSingleton, Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.OuterSingleton;
	}
	template<> FMODSTUDIOEDITOR_API UClass* StaticClass<UFMODAmbientSoundActorFactory>()
	{
		return UFMODAmbientSoundActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAmbientSoundActorFactory);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFMODAmbientSoundActorFactory, UFMODAmbientSoundActorFactory::StaticClass, TEXT("UFMODAmbientSoundActorFactory"), &Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODAmbientSoundActorFactory), 311432745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h_2552269989(TEXT("/Script/FMODStudioEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
