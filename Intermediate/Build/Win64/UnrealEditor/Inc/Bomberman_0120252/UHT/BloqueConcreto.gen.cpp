// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/BloqueConcreto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueConcreto() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueBase();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueConcreto();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueConcreto_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class ABloqueConcreto
void ABloqueConcreto::StaticRegisterNativesABloqueConcreto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueConcreto);
UClass* Z_Construct_UClass_ABloqueConcreto_NoRegister()
{
	return ABloqueConcreto::StaticClass();
}
struct Z_Construct_UClass_ABloqueConcreto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueConcreto.h" },
		{ "ModuleRelativePath", "Public/BloqueConcreto.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueConcreto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueConcreto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueConcreto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueConcreto_Statics::ClassParams = {
	&ABloqueConcreto::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueConcreto_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueConcreto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueConcreto()
{
	if (!Z_Registration_Info_UClass_ABloqueConcreto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueConcreto.OuterSingleton, Z_Construct_UClass_ABloqueConcreto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueConcreto.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<ABloqueConcreto>()
{
	return ABloqueConcreto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueConcreto);
ABloqueConcreto::~ABloqueConcreto() {}
// End Class ABloqueConcreto

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueConcreto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueConcreto, ABloqueConcreto::StaticClass, TEXT("ABloqueConcreto"), &Z_Registration_Info_UClass_ABloqueConcreto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueConcreto), 2682919587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueConcreto_h_2077285380(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueConcreto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueConcreto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
