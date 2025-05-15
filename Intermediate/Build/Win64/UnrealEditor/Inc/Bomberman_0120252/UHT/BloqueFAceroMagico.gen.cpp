// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/BloqueFAceroMagico.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueFAceroMagico() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueF();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueFAceroMagico();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueFAceroMagico_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class ABloqueFAceroMagico
void ABloqueFAceroMagico::StaticRegisterNativesABloqueFAceroMagico()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueFAceroMagico);
UClass* Z_Construct_UClass_ABloqueFAceroMagico_NoRegister()
{
	return ABloqueFAceroMagico::StaticClass();
}
struct Z_Construct_UClass_ABloqueFAceroMagico_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueFAceroMagico.h" },
		{ "ModuleRelativePath", "Public/BloqueFAceroMagico.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueFAceroMagico>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueFAceroMagico_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueF,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFAceroMagico_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueFAceroMagico_Statics::ClassParams = {
	&ABloqueFAceroMagico::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFAceroMagico_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueFAceroMagico_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueFAceroMagico()
{
	if (!Z_Registration_Info_UClass_ABloqueFAceroMagico.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueFAceroMagico.OuterSingleton, Z_Construct_UClass_ABloqueFAceroMagico_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueFAceroMagico.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<ABloqueFAceroMagico>()
{
	return ABloqueFAceroMagico::StaticClass();
}
ABloqueFAceroMagico::ABloqueFAceroMagico() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueFAceroMagico);
ABloqueFAceroMagico::~ABloqueFAceroMagico() {}
// End Class ABloqueFAceroMagico

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueFAceroMagico_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueFAceroMagico, ABloqueFAceroMagico::StaticClass, TEXT("ABloqueFAceroMagico"), &Z_Registration_Info_UClass_ABloqueFAceroMagico, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueFAceroMagico), 1743313325U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueFAceroMagico_h_570990910(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueFAceroMagico_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueFAceroMagico_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
