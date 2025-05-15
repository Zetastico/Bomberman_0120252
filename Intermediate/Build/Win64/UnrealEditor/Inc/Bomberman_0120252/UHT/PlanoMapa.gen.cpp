// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/PlanoMapa.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanoMapa() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_UPlanoMapa();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_UPlanoMapa_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Interface UPlanoMapa
void UPlanoMapa::StaticRegisterNativesUPlanoMapa()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlanoMapa);
UClass* Z_Construct_UClass_UPlanoMapa_NoRegister()
{
	return UPlanoMapa::StaticClass();
}
struct Z_Construct_UClass_UPlanoMapa_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlanoMapa.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlanoMapa>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlanoMapa_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanoMapa_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlanoMapa_Statics::ClassParams = {
	&UPlanoMapa::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanoMapa_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlanoMapa_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlanoMapa()
{
	if (!Z_Registration_Info_UClass_UPlanoMapa.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlanoMapa.OuterSingleton, Z_Construct_UClass_UPlanoMapa_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlanoMapa.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<UPlanoMapa>()
{
	return UPlanoMapa::StaticClass();
}
UPlanoMapa::UPlanoMapa(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanoMapa);
UPlanoMapa::~UPlanoMapa() {}
// End Interface UPlanoMapa

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_PlanoMapa_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlanoMapa, UPlanoMapa::StaticClass, TEXT("UPlanoMapa"), &Z_Registration_Info_UClass_UPlanoMapa, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlanoMapa), 2310763434U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_PlanoMapa_h_3770568962(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_PlanoMapa_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_PlanoMapa_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
