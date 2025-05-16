// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/MapaPiedra.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapaPiedra() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_AMapaB_NoRegister();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_AMapaPiedra();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_AMapaPiedra_NoRegister();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_UMapaBuilder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class AMapaPiedra
void AMapaPiedra::StaticRegisterNativesAMapaPiedra()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapaPiedra);
UClass* Z_Construct_UClass_AMapaPiedra_NoRegister()
{
	return AMapaPiedra::StaticClass();
}
struct Z_Construct_UClass_AMapaPiedra_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MapaPiedra.h" },
		{ "ModuleRelativePath", "Public/MapaPiedra.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mapa_MetaData[] = {
		{ "Category", "Hotel Lodging" },
		{ "ModuleRelativePath", "Public/MapaPiedra.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mapa;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapaPiedra>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapaPiedra_Statics::NewProp_Mapa = { "Mapa", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapaPiedra, Mapa), Z_Construct_UClass_AMapaB_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mapa_MetaData), NewProp_Mapa_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapaPiedra_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapaPiedra_Statics::NewProp_Mapa,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapaPiedra_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapaPiedra_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapaPiedra_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMapaPiedra_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMapaBuilder_NoRegister, (int32)VTABLE_OFFSET(AMapaPiedra, IMapaBuilder), false },  // 3272242670
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapaPiedra_Statics::ClassParams = {
	&AMapaPiedra::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMapaPiedra_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapaPiedra_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapaPiedra_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapaPiedra_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapaPiedra()
{
	if (!Z_Registration_Info_UClass_AMapaPiedra.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapaPiedra.OuterSingleton, Z_Construct_UClass_AMapaPiedra_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapaPiedra.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<AMapaPiedra>()
{
	return AMapaPiedra::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapaPiedra);
AMapaPiedra::~AMapaPiedra() {}
// End Class AMapaPiedra

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaPiedra_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapaPiedra, AMapaPiedra::StaticClass, TEXT("AMapaPiedra"), &Z_Registration_Info_UClass_AMapaPiedra, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapaPiedra), 727437368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaPiedra_h_2723427206(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaPiedra_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaPiedra_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
