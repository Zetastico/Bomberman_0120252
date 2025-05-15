// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/BloqueAceroMagico.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueAceroMagico() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueAceroMagico();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueAceroMagico_NoRegister();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueBase();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class ABloqueAceroMagico
void ABloqueAceroMagico::StaticRegisterNativesABloqueAceroMagico()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueAceroMagico);
UClass* Z_Construct_UClass_ABloqueAceroMagico_NoRegister()
{
	return ABloqueAceroMagico::StaticClass();
}
struct Z_Construct_UClass_ABloqueAceroMagico_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueAceroMagico.h" },
		{ "ModuleRelativePath", "Public/BloqueAceroMagico.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueAceroMagico>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueAceroMagico_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAceroMagico_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueAceroMagico_Statics::ClassParams = {
	&ABloqueAceroMagico::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAceroMagico_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueAceroMagico_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueAceroMagico()
{
	if (!Z_Registration_Info_UClass_ABloqueAceroMagico.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueAceroMagico.OuterSingleton, Z_Construct_UClass_ABloqueAceroMagico_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueAceroMagico.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<ABloqueAceroMagico>()
{
	return ABloqueAceroMagico::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueAceroMagico);
ABloqueAceroMagico::~ABloqueAceroMagico() {}
// End Class ABloqueAceroMagico

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueAceroMagico_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueAceroMagico, ABloqueAceroMagico::StaticClass, TEXT("ABloqueAceroMagico"), &Z_Registration_Info_UClass_ABloqueAceroMagico, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueAceroMagico), 2464277582U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueAceroMagico_h_280944220(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueAceroMagico_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueAceroMagico_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
