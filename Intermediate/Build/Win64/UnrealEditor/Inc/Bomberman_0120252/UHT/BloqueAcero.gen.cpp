// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/BloqueAcero.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueAcero() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueAcero();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueAcero_NoRegister();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueBase();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class ABloqueAcero
void ABloqueAcero::StaticRegisterNativesABloqueAcero()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueAcero);
UClass* Z_Construct_UClass_ABloqueAcero_NoRegister()
{
	return ABloqueAcero::StaticClass();
}
struct Z_Construct_UClass_ABloqueAcero_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueAcero.h" },
		{ "ModuleRelativePath", "Public/BloqueAcero.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueAcero>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueAcero_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAcero_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueAcero_Statics::ClassParams = {
	&ABloqueAcero::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAcero_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueAcero_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueAcero()
{
	if (!Z_Registration_Info_UClass_ABloqueAcero.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueAcero.OuterSingleton, Z_Construct_UClass_ABloqueAcero_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueAcero.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<ABloqueAcero>()
{
	return ABloqueAcero::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueAcero);
ABloqueAcero::~ABloqueAcero() {}
// End Class ABloqueAcero

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueAcero_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueAcero, ABloqueAcero::StaticClass, TEXT("ABloqueAcero"), &Z_Registration_Info_UClass_ABloqueAcero, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueAcero), 19312991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueAcero_h_2977785936(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueAcero_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueAcero_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
