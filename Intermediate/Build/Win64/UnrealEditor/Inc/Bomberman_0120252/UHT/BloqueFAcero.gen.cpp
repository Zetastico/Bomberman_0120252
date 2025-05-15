// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/BloqueFAcero.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueFAcero() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueF();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueFAcero();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueFAcero_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class ABloqueFAcero
void ABloqueFAcero::StaticRegisterNativesABloqueFAcero()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueFAcero);
UClass* Z_Construct_UClass_ABloqueFAcero_NoRegister()
{
	return ABloqueFAcero::StaticClass();
}
struct Z_Construct_UClass_ABloqueFAcero_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueFAcero.h" },
		{ "ModuleRelativePath", "Public/BloqueFAcero.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueFAcero>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueFAcero_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueF,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFAcero_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueFAcero_Statics::ClassParams = {
	&ABloqueFAcero::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFAcero_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueFAcero_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueFAcero()
{
	if (!Z_Registration_Info_UClass_ABloqueFAcero.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueFAcero.OuterSingleton, Z_Construct_UClass_ABloqueFAcero_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueFAcero.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<ABloqueFAcero>()
{
	return ABloqueFAcero::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueFAcero);
ABloqueFAcero::~ABloqueFAcero() {}
// End Class ABloqueFAcero

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueFAcero_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueFAcero, ABloqueFAcero::StaticClass, TEXT("ABloqueFAcero"), &Z_Registration_Info_UClass_ABloqueFAcero, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueFAcero), 2705967237U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueFAcero_h_2821643912(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueFAcero_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueFAcero_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
