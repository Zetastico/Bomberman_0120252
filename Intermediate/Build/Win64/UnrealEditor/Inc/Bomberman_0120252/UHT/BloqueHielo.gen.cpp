// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/BloqueHielo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueHielo() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueBase();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueHielo();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueHielo_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class ABloqueHielo
void ABloqueHielo::StaticRegisterNativesABloqueHielo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueHielo);
UClass* Z_Construct_UClass_ABloqueHielo_NoRegister()
{
	return ABloqueHielo::StaticClass();
}
struct Z_Construct_UClass_ABloqueHielo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueHielo.h" },
		{ "ModuleRelativePath", "Public/BloqueHielo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueHielo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueHielo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueHielo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueHielo_Statics::ClassParams = {
	&ABloqueHielo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueHielo_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueHielo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueHielo()
{
	if (!Z_Registration_Info_UClass_ABloqueHielo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueHielo.OuterSingleton, Z_Construct_UClass_ABloqueHielo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueHielo.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<ABloqueHielo>()
{
	return ABloqueHielo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueHielo);
ABloqueHielo::~ABloqueHielo() {}
// End Class ABloqueHielo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueHielo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueHielo, ABloqueHielo::StaticClass, TEXT("ABloqueHielo"), &Z_Registration_Info_UClass_ABloqueHielo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueHielo), 2480156927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueHielo_h_2840955832(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueHielo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueHielo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
