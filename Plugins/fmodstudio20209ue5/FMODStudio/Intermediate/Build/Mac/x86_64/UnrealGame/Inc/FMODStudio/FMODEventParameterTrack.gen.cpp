// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Private/Sequencer/FMODEventParameterTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventParameterTrack() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventParameterTrack_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventParameterTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
// End Cross Module References
	void UFMODEventParameterTrack::StaticRegisterNativesUFMODEventParameterTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODEventParameterTrack);
	UClass* Z_Construct_UClass_UFMODEventParameterTrack_NoRegister()
	{
		return UFMODEventParameterTrack::StaticClass();
	}
	struct Z_Construct_UClass_UFMODEventParameterTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODEventParameterTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODEventParameterTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Handles manipulation of event parameters in a movie scene. */" },
		{ "IncludePath", "Sequencer/FMODEventParameterTrack.h" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventParameterTrack.h" },
		{ "ToolTip", "Handles manipulation of event parameters in a movie scene." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFMODEventParameterTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODEventParameterTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** The sections owned by this track. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventParameterTrack.h" },
		{ "ToolTip", "The sections owned by this track." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFMODEventParameterTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODEventParameterTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFMODEventParameterTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventParameterTrack_Statics::NewProp_Sections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODEventParameterTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODEventParameterTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODEventParameterTrack_Statics::NewProp_Sections,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFMODEventParameterTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UFMODEventParameterTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODEventParameterTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODEventParameterTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODEventParameterTrack_Statics::ClassParams = {
		&UFMODEventParameterTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFMODEventParameterTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventParameterTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFMODEventParameterTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventParameterTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFMODEventParameterTrack()
	{
		if (!Z_Registration_Info_UClass_UFMODEventParameterTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODEventParameterTrack.OuterSingleton, Z_Construct_UClass_UFMODEventParameterTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFMODEventParameterTrack.OuterSingleton;
	}
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODEventParameterTrack>()
	{
		return UFMODEventParameterTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODEventParameterTrack);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFMODEventParameterTrack, UFMODEventParameterTrack::StaticClass, TEXT("UFMODEventParameterTrack"), &Z_Registration_Info_UClass_UFMODEventParameterTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODEventParameterTrack), 3743267286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterTrack_h_846524626(TEXT("/Script/FMODStudio"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
