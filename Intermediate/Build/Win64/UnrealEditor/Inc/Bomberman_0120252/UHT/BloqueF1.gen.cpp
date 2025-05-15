// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/BloqueF1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueF1() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueF();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueF1();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueF1_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class ABloqueF1
void ABloqueF1::StaticRegisterNativesABloqueF1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueF1);
UClass* Z_Construct_UClass_ABloqueF1_NoRegister()
{
	return ABloqueF1::StaticClass();
}
struct Z_Construct_UClass_ABloqueF1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueF1.h" },
		{ "ModuleRelativePath", "Public/BloqueF1.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueF1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueF1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloqueF,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueF1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueF1_Statics::ClassParams = {
	&ABloqueF1::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueF1_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueF1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueF1()
{
	if (!Z_Registration_Info_UClass_ABloqueF1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueF1.OuterSingleton, Z_Construct_UClass_ABloqueF1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueF1.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<ABloqueF1>()
{
	return ABloqueF1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueF1);
ABloqueF1::~ABloqueF1() {}
// End Class ABloqueF1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueF1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueF1, ABloqueF1::StaticClass, TEXT("ABloqueF1"), &Z_Registration_Info_UClass_ABloqueF1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueF1), 2834355143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueF1_h_563870205(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueF1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueF1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
