// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/BloqueLadrillo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueLadrillo() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueLadrillo();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueLadrillo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class ABloqueLadrillo
void ABloqueLadrillo::StaticRegisterNativesABloqueLadrillo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueLadrillo);
UClass* Z_Construct_UClass_ABloqueLadrillo_NoRegister()
{
	return ABloqueLadrillo::StaticClass();
}
struct Z_Construct_UClass_ABloqueLadrillo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueLadrillo.h" },
		{ "ModuleRelativePath", "Public/BloqueLadrillo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaBloqueLadrillo_MetaData[] = {
		{ "Category", "BloqueLadrillo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloqueLadrillo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaBloqueLadrillo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueLadrillo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueLadrillo_Statics::NewProp_MallaBloqueLadrillo = { "MallaBloqueLadrillo", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueLadrillo, MallaBloqueLadrillo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaBloqueLadrillo_MetaData), NewProp_MallaBloqueLadrillo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueLadrillo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueLadrillo_Statics::NewProp_MallaBloqueLadrillo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueLadrillo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueLadrillo_Statics::ClassParams = {
	&ABloqueLadrillo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueLadrillo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueLadrillo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueLadrillo()
{
	if (!Z_Registration_Info_UClass_ABloqueLadrillo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueLadrillo.OuterSingleton, Z_Construct_UClass_ABloqueLadrillo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueLadrillo.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<ABloqueLadrillo>()
{
	return ABloqueLadrillo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueLadrillo);
ABloqueLadrillo::~ABloqueLadrillo() {}
// End Class ABloqueLadrillo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueLadrillo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueLadrillo, ABloqueLadrillo::StaticClass, TEXT("ABloqueLadrillo"), &Z_Registration_Info_UClass_ABloqueLadrillo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueLadrillo), 3055519990U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueLadrillo_h_2225499165(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueLadrillo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueLadrillo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
