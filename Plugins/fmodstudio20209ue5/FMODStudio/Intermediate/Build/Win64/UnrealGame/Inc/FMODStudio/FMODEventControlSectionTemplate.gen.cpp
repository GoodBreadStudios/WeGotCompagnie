// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Private/Sequencer/FMODEventControlSectionTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventControlSectionTemplate() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlChannel();
// End Cross Module References

static_assert(std::is_polymorphic<FFMODEventControlSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FFMODEventControlSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMODEventControlSectionTemplate;
class UScriptStruct* FFMODEventControlSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMODEventControlSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMODEventControlSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODEventControlSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_FMODEventControlSectionTemplate.OuterSingleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODEventControlSectionTemplate>()
{
	return FFMODEventControlSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlKeys_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODEventControlSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::NewProp_ControlKeys_MetaData[] = {
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::NewProp_ControlKeys = { "ControlKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODEventControlSectionTemplate, ControlKeys), Z_Construct_UScriptStruct_FFMODEventControlChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::NewProp_ControlKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::NewProp_ControlKeys_MetaData)) }; // 2271255647
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::NewProp_ControlKeys,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"FMODEventControlSectionTemplate",
		sizeof(FFMODEventControlSectionTemplate),
		alignof(FFMODEventControlSectionTemplate),
		Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_FMODEventControlSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMODEventControlSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FMODEventControlSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSectionTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSectionTemplate_h_Statics::ScriptStructInfo[] = {
		{ FFMODEventControlSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FFMODEventControlSectionTemplate_Statics::NewStructOps, TEXT("FMODEventControlSectionTemplate"), &Z_Registration_Info_UScriptStruct_FMODEventControlSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODEventControlSectionTemplate), 1913513614U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSectionTemplate_h_3198341897(TEXT("/Script/FMODStudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSectionTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
