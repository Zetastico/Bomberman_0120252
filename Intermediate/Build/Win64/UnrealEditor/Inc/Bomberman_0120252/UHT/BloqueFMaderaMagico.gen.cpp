// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/BloqueFMaderaMagico.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueFMaderaMagico() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueF();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueFMaderaMagico();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueFMaderaMagico_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class ABloqueFMaderaMagico
void ABloqueFMaderaMagico::StaticRegisterNativesABloqueFMaderaMagico()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueFMaderaMagico);
UClass* Z_Construct_UClass_ABloqueFMaderaMagico_NoRegister()
{
	return ABloqueFMaderaMagico::StaticClass();
}
struct Z_Construct_UClass_ABloqueFMaderaMagico_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueFMaderaMagico.h" },
		{ "ModuleRelativePath", "Public/BloqueFMaderaMagico.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueFMaderaMagico>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueFMaderaMagico_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueF,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFMaderaMagico_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueFMaderaMagico_Statics::ClassParams = {
	&ABloqueFMaderaMagico::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFMaderaMagico_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueFMaderaMagico_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueFMaderaMagico()
{
	if (!Z_Registration_Info_UClass_ABloqueFMaderaMagico.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueFMaderaMagico.OuterSingleton, Z_Construct_UClass_ABloqueFMaderaMagico_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueFMaderaMagico.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<ABloqueFMaderaMagico>()
{
	return ABloqueFMaderaMagico::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueFMaderaMagico);
ABloqueFMaderaMagico::~ABloqueFMaderaMagico() {}
// End Class ABloqueFMaderaMagico

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueFMaderaMagico_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueFMaderaMagico, ABloqueFMaderaMagico::StaticClass, TEXT("ABloqueFMaderaMagico"), &Z_Registration_Info_UClass_ABloqueFMaderaMagico, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueFMaderaMagico), 1780445350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueFMaderaMagico_h_206103132(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueFMaderaMagico_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueFMaderaMagico_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
