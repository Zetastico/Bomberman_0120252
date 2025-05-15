// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/MapaHielo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapaHielo() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_AMapaB_NoRegister();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_AMapaHielo();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_AMapaHielo_NoRegister();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_UMapaBuilder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class AMapaHielo
void AMapaHielo::StaticRegisterNativesAMapaHielo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapaHielo);
UClass* Z_Construct_UClass_AMapaHielo_NoRegister()
{
	return AMapaHielo::StaticClass();
}
struct Z_Construct_UClass_AMapaHielo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MapaHielo.h" },
		{ "ModuleRelativePath", "Public/MapaHielo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mapa_MetaData[] = {
		{ "Category", "Hotel Lodging" },
		{ "ModuleRelativePath", "Public/MapaHielo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mapa;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapaHielo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapaHielo_Statics::NewProp_Mapa = { "Mapa", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapaHielo, Mapa), Z_Construct_UClass_AMapaB_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mapa_MetaData), NewProp_Mapa_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapaHielo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapaHielo_Statics::NewProp_Mapa,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapaHielo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapaHielo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapaHielo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMapaHielo_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMapaBuilder_NoRegister, (int32)VTABLE_OFFSET(AMapaHielo, IMapaBuilder), false },  // 3272242670
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapaHielo_Statics::ClassParams = {
	&AMapaHielo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMapaHielo_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapaHielo_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapaHielo_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapaHielo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapaHielo()
{
	if (!Z_Registration_Info_UClass_AMapaHielo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapaHielo.OuterSingleton, Z_Construct_UClass_AMapaHielo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapaHielo.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<AMapaHielo>()
{
	return AMapaHielo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapaHielo);
AMapaHielo::~AMapaHielo() {}
// End Class AMapaHielo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaHielo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapaHielo, AMapaHielo::StaticClass, TEXT("AMapaHielo"), &Z_Registration_Info_UClass_AMapaHielo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapaHielo), 1410354411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaHielo_h_632703293(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaHielo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaHielo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
