// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/Builder_Principal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilder_Principal() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABuilder_Principal();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABuilder_Principal_NoRegister();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ADirectorBuilder_NoRegister();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_AMapaHielo_NoRegister();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_AMapaPiedra_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class ABuilder_Principal
void ABuilder_Principal::StaticRegisterNativesABuilder_Principal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuilder_Principal);
UClass* Z_Construct_UClass_ABuilder_Principal_NoRegister()
{
	return ABuilder_Principal::StaticClass();
}
struct Z_Construct_UClass_ABuilder_Principal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builder_Principal.h" },
		{ "ModuleRelativePath", "Public/Builder_Principal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapaHieloBuilder_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Public/Builder_Principal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapaPiedraBuilder_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Public/Builder_Principal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Director_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Public/Builder_Principal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapaHieloBuilder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapaPiedraBuilder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Director;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilder_Principal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilder_Principal_Statics::NewProp_MapaHieloBuilder = { "MapaHieloBuilder", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuilder_Principal, MapaHieloBuilder), Z_Construct_UClass_AMapaHielo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapaHieloBuilder_MetaData), NewProp_MapaHieloBuilder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilder_Principal_Statics::NewProp_MapaPiedraBuilder = { "MapaPiedraBuilder", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuilder_Principal, MapaPiedraBuilder), Z_Construct_UClass_AMapaPiedra_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapaPiedraBuilder_MetaData), NewProp_MapaPiedraBuilder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilder_Principal_Statics::NewProp_Director = { "Director", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuilder_Principal, Director), Z_Construct_UClass_ADirectorBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Director_MetaData), NewProp_Director_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilder_Principal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilder_Principal_Statics::NewProp_MapaHieloBuilder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilder_Principal_Statics::NewProp_MapaPiedraBuilder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilder_Principal_Statics::NewProp_Director,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Principal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABuilder_Principal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Principal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuilder_Principal_Statics::ClassParams = {
	&ABuilder_Principal::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABuilder_Principal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Principal_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuilder_Principal_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuilder_Principal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABuilder_Principal()
{
	if (!Z_Registration_Info_UClass_ABuilder_Principal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuilder_Principal.OuterSingleton, Z_Construct_UClass_ABuilder_Principal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABuilder_Principal.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<ABuilder_Principal>()
{
	return ABuilder_Principal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilder_Principal);
ABuilder_Principal::~ABuilder_Principal() {}
// End Class ABuilder_Principal

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_Builder_Principal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABuilder_Principal, ABuilder_Principal::StaticClass, TEXT("ABuilder_Principal"), &Z_Registration_Info_UClass_ABuilder_Principal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuilder_Principal), 2373450355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_Builder_Principal_h_700295451(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_Builder_Principal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_Builder_Principal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
