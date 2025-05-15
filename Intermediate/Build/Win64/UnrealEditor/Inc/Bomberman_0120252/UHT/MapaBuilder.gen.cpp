// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/MapaBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapaBuilder() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_UMapaBuilder();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_UMapaBuilder_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Interface UMapaBuilder
void UMapaBuilder::StaticRegisterNativesUMapaBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapaBuilder);
UClass* Z_Construct_UClass_UMapaBuilder_NoRegister()
{
	return UMapaBuilder::StaticClass();
}
struct Z_Construct_UClass_UMapaBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapaBuilder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMapaBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMapaBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapaBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapaBuilder_Statics::ClassParams = {
	&UMapaBuilder::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapaBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapaBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapaBuilder()
{
	if (!Z_Registration_Info_UClass_UMapaBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapaBuilder.OuterSingleton, Z_Construct_UClass_UMapaBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapaBuilder.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<UMapaBuilder>()
{
	return UMapaBuilder::StaticClass();
}
UMapaBuilder::UMapaBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapaBuilder);
UMapaBuilder::~UMapaBuilder() {}
// End Interface UMapaBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapaBuilder, UMapaBuilder::StaticClass, TEXT("UMapaBuilder"), &Z_Registration_Info_UClass_UMapaBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapaBuilder), 3272242670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaBuilder_h_1646557491(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
