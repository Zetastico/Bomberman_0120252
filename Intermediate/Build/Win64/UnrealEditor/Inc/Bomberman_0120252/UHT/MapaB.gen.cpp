// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/MapaB.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapaB() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_AMapaB();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_AMapaB_NoRegister();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_UPlanoMapa_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class AMapaB
void AMapaB::StaticRegisterNativesAMapaB()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapaB);
UClass* Z_Construct_UClass_AMapaB_NoRegister()
{
	return AMapaB::StaticClass();
}
struct Z_Construct_UClass_AMapaB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MapaB.h" },
		{ "ModuleRelativePath", "Public/MapaB.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapaB>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMapaB_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapaB_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMapaB_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPlanoMapa_NoRegister, (int32)VTABLE_OFFSET(AMapaB, IPlanoMapa), false },  // 2310763434
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapaB_Statics::ClassParams = {
	&AMapaB::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapaB_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapaB_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapaB()
{
	if (!Z_Registration_Info_UClass_AMapaB.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapaB.OuterSingleton, Z_Construct_UClass_AMapaB_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapaB.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<AMapaB>()
{
	return AMapaB::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapaB);
AMapaB::~AMapaB() {}
// End Class AMapaB

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaB_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapaB, AMapaB::StaticClass, TEXT("AMapaB"), &Z_Registration_Info_UClass_AMapaB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapaB), 2163581307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaB_h_2059607384(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaB_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_MapaB_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
