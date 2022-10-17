// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Classes/FMODEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODEvent() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	void UFMODEvent::StaticRegisterNativesUFMODEvent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODEvent);
	UClass* Z_Construct_UClass_UFMODEvent_NoRegister()
	{
		return UFMODEvent::StaticClass();
	}
	struct Z_Construct_UClass_UFMODEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFMODAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODEvent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * FMOD Event Asset.\n */" },
		{ "IncludePath", "FMODEvent.h" },
		{ "ModuleRelativePath", "Classes/FMODEvent.h" },
		{ "ToolTip", "FMOD Event Asset." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODEvent_Statics::ClassParams = {
		&UFMODEvent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFMODEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFMODEvent()
	{
		if (!Z_Registration_Info_UClass_UFMODEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODEvent.OuterSingleton, Z_Construct_UClass_UFMODEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFMODEvent.OuterSingleton;
	}
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODEvent>()
	{
		return UFMODEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODEvent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFMODEvent, UFMODEvent::StaticClass, TEXT("UFMODEvent"), &Z_Registration_Info_UClass_UFMODEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODEvent), 857263777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODEvent_h_93716221(TEXT("/Script/FMODStudio"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
