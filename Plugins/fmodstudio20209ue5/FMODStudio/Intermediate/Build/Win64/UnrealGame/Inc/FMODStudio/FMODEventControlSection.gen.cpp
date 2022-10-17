// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Private/Sequencer/FMODEventControlSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEventControlSection() {}
// Cross Module References
	FMODSTUDIO_API UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventControlKey();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlSection_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEventControlSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFMODEventControlKey;
	static UEnum* EFMODEventControlKey_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFMODEventControlKey.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFMODEventControlKey.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FMODStudio_EFMODEventControlKey, Z_Construct_UPackage__Script_FMODStudio(), TEXT("EFMODEventControlKey"));
		}
		return Z_Registration_Info_UEnum_EFMODEventControlKey.OuterSingleton;
	}
	template<> FMODSTUDIO_API UEnum* StaticEnum<EFMODEventControlKey>()
	{
		return EFMODEventControlKey_StaticEnum();
	}
	struct Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics::Enumerators[] = {
		{ "EFMODEventControlKey::Stop", (int64)EFMODEventControlKey::Stop },
		{ "EFMODEventControlKey::Play", (int64)EFMODEventControlKey::Play },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines the types of FMOD event control keys. */" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
		{ "Play.Name", "EFMODEventControlKey::Play" },
		{ "Stop.Name", "EFMODEventControlKey::Stop" },
		{ "ToolTip", "Defines the types of FMOD event control keys." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FMODStudio,
		nullptr,
		"EFMODEventControlKey",
		"EFMODEventControlKey",
		Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FMODStudio_EFMODEventControlKey()
	{
		if (!Z_Registration_Info_UEnum_EFMODEventControlKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFMODEventControlKey.InnerSingleton, Z_Construct_UEnum_FMODStudio_EFMODEventControlKey_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFMODEventControlKey.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFMODEventControlChannel>() == std::is_polymorphic<FMovieSceneByteChannel>(), "USTRUCT FFMODEventControlChannel cannot be polymorphic unless super FMovieSceneByteChannel is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMODEventControlChannel;
class UScriptStruct* FFMODEventControlChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMODEventControlChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMODEventControlChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODEventControlChannel, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODEventControlChannel"));
	}
	return Z_Registration_Info_UScriptStruct_FMODEventControlChannel.OuterSingleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODEventControlChannel>()
{
	return FFMODEventControlChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODEventControlChannel>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		Z_Construct_UScriptStruct_FMovieSceneByteChannel,
		&NewStructOps,
		"FMODEventControlChannel",
		sizeof(FFMODEventControlChannel),
		alignof(FFMODEventControlChannel),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODEventControlChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_FMODEventControlChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMODEventControlChannel.InnerSingleton, Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FMODEventControlChannel.InnerSingleton;
	}
	void UFMODEventControlSection::StaticRegisterNativesUFMODEventControlSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODEventControlSection);
	UClass* Z_Construct_UClass_UFMODEventControlSection_NoRegister()
	{
		return UFMODEventControlSection::StaticClass();
	}
	struct Z_Construct_UClass_UFMODEventControlSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlKeys_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODEventControlSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODEventControlSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** FMOD Event control section */" },
		{ "IncludePath", "Sequencer/FMODEventControlSection.h" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
		{ "ToolTip", "FMOD Event control section" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODEventControlSection_Statics::NewProp_ControlKeys_MetaData[] = {
		{ "Comment", "/** Channel containing the event control keys */" },
		{ "ModuleRelativePath", "Private/Sequencer/FMODEventControlSection.h" },
		{ "ToolTip", "Channel containing the event control keys" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFMODEventControlSection_Statics::NewProp_ControlKeys = { "ControlKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODEventControlSection, ControlKeys), Z_Construct_UScriptStruct_FFMODEventControlChannel, METADATA_PARAMS(Z_Construct_UClass_UFMODEventControlSection_Statics::NewProp_ControlKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlSection_Statics::NewProp_ControlKeys_MetaData)) }; // 2271255647
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODEventControlSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODEventControlSection_Statics::NewProp_ControlKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODEventControlSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODEventControlSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODEventControlSection_Statics::ClassParams = {
		&UFMODEventControlSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFMODEventControlSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFMODEventControlSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEventControlSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFMODEventControlSection()
	{
		if (!Z_Registration_Info_UClass_UFMODEventControlSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODEventControlSection.OuterSingleton, Z_Construct_UClass_UFMODEventControlSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFMODEventControlSection.OuterSingleton;
	}
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODEventControlSection>()
	{
		return UFMODEventControlSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODEventControlSection);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_Statics::EnumInfo[] = {
		{ EFMODEventControlKey_StaticEnum, TEXT("EFMODEventControlKey"), &Z_Registration_Info_UEnum_EFMODEventControlKey, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1142123279U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_Statics::ScriptStructInfo[] = {
		{ FFMODEventControlChannel::StaticStruct, Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics::NewStructOps, TEXT("FMODEventControlChannel"), &Z_Registration_Info_UScriptStruct_FMODEventControlChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODEventControlChannel), 2271255647U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFMODEventControlSection, UFMODEventControlSection::StaticClass, TEXT("UFMODEventControlSection"), &Z_Registration_Info_UClass_UFMODEventControlSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODEventControlSection), 1906082549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_2619349212(TEXT("/Script/FMODStudio"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
