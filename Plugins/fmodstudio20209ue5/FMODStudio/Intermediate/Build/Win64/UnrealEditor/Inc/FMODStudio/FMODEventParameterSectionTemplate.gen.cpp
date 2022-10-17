// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Private/Sequencer/FMODEventParameterSectionTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventParameterSectionTemplate() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate();
// End Cross Module References

static_assert(std::is_polymorphic<FFMODEventParameterSectionTemplate>() == std::is_polymorphic<FMovieSceneParameterSectionTemplate>(), "USTRUCT FFMODEventParameterSectionTemplate cannot be polymorphic unless super FMovieSceneParameterSectionTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMODEventParameterSectionTemplate;
class UScriptStruct* FFMODEventParameterSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMODEventParameterSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMODEventParameterSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODEventParameterSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_FMODEventParameterSectionTemplate.OuterSingleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODEventParameterSectionTemplate>()
{
	return FFMODEventParameterSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventParameterSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODEventParameterSectionTemplate>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate,
		&NewStructOps,
		"FMODEventParameterSectionTemplate",
		sizeof(FFMODEventParameterSectionTemplate),
		alignof(FFMODEventParameterSectionTemplate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_FMODEventParameterSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMODEventParameterSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FMODEventParameterSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterSectionTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterSectionTemplate_h_Statics::ScriptStructInfo[] = {
		{ FFMODEventParameterSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FFMODEventParameterSectionTemplate_Statics::NewStructOps, TEXT("FMODEventParameterSectionTemplate"), &Z_Registration_Info_UScriptStruct_FMODEventParameterSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODEventParameterSectionTemplate), 756584525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterSectionTemplate_h_3502384584(TEXT("/Script/FMODStudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterSectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventParameterSectionTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
