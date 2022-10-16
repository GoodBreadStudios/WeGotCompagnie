// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Private/FMODBankLookup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODBankLookup() {}
// Cross Module References
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankRow();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankTable();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBankLookup_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBankLookup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References

static_assert(std::is_polymorphic<FFMODLocalizedBankRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFMODLocalizedBankRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow;
class UScriptStruct* FFMODLocalizedBankRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODLocalizedBankRow, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODLocalizedBankRow"));
	}
	return Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow.OuterSingleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODLocalizedBankRow>()
{
	return FFMODLocalizedBankRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODLocalizedBankRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODLocalizedBankRow, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewProp_Path,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"FMODLocalizedBankRow",
		sizeof(FFMODLocalizedBankRow),
		alignof(FFMODLocalizedBankRow),
		Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankRow()
	{
		if (!Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow.InnerSingleton, Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFMODLocalizedBankTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFMODLocalizedBankTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable;
class UScriptStruct* FFMODLocalizedBankTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODLocalizedBankTable, Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODLocalizedBankTable"));
	}
	return Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable.OuterSingleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODLocalizedBankTable>()
{
	return FFMODLocalizedBankTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Banks_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Banks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODLocalizedBankTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewProp_Banks_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewProp_Banks = { "Banks", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFMODLocalizedBankTable, Banks), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewProp_Banks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewProp_Banks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewProp_Banks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"FMODLocalizedBankTable",
		sizeof(FFMODLocalizedBankTable),
		alignof(FFMODLocalizedBankTable),
		Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankTable()
	{
		if (!Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable.InnerSingleton, Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable.InnerSingleton;
	}
	void UFMODBankLookup::StaticRegisterNativesUFMODBankLookup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODBankLookup);
	UClass* Z_Construct_UClass_UFMODBankLookup_NoRegister()
	{
		return UFMODBankLookup::StaticClass();
	}
	struct Z_Construct_UClass_UFMODBankLookup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterBankPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MasterBankPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterAssetsBankPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MasterAssetsBankPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterStringsBankPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MasterStringsBankPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODBankLookup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODBankLookup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FMODBankLookup.h" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODBankLookup, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_DataTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterBankPath_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterBankPath = { "MasterBankPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODBankLookup, MasterBankPath), METADATA_PARAMS(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterBankPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterBankPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterAssetsBankPath_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterAssetsBankPath = { "MasterAssetsBankPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODBankLookup, MasterAssetsBankPath), METADATA_PARAMS(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterAssetsBankPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterAssetsBankPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterStringsBankPath_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterStringsBankPath = { "MasterStringsBankPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFMODBankLookup, MasterStringsBankPath), METADATA_PARAMS(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterStringsBankPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterStringsBankPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODBankLookup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterBankPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterAssetsBankPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterStringsBankPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODBankLookup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODBankLookup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODBankLookup_Statics::ClassParams = {
		&UFMODBankLookup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFMODBankLookup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFMODBankLookup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFMODBankLookup()
	{
		if (!Z_Registration_Info_UClass_UFMODBankLookup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODBankLookup.OuterSingleton, Z_Construct_UClass_UFMODBankLookup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFMODBankLookup.OuterSingleton;
	}
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODBankLookup>()
	{
		return UFMODBankLookup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODBankLookup);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h_Statics::ScriptStructInfo[] = {
		{ FFMODLocalizedBankRow::StaticStruct, Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewStructOps, TEXT("FMODLocalizedBankRow"), &Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODLocalizedBankRow), 2745236679U) },
		{ FFMODLocalizedBankTable::StaticStruct, Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewStructOps, TEXT("FMODLocalizedBankTable"), &Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODLocalizedBankTable), 3611274450U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFMODBankLookup, UFMODBankLookup::StaticClass, TEXT("UFMODBankLookup"), &Z_Registration_Info_UClass_UFMODBankLookup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODBankLookup), 3333398899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h_1812449671(TEXT("/Script/FMODStudio"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
