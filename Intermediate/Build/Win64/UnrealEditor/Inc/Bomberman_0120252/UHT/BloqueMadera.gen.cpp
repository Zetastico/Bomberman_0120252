// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/BloqueMadera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueMadera() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueMadera();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueMadera_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class ABloqueMadera
void ABloqueMadera::StaticRegisterNativesABloqueMadera()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueMadera);
UClass* Z_Construct_UClass_ABloqueMadera_NoRegister()
{
	return ABloqueMadera::StaticClass();
}
struct Z_Construct_UClass_ABloqueMadera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueMadera.h" },
		{ "ModuleRelativePath", "Public/BloqueMadera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaBloqueMadera_MetaData[] = {
		{ "Category", "BloqueMadera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloqueMadera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBloqueMadera_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloqueMadera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaBloqueMadera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialBloqueMadera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueMadera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueMadera_Statics::NewProp_MallaBloqueMadera = { "MallaBloqueMadera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueMadera, MallaBloqueMadera), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaBloqueMadera_MetaData), NewProp_MallaBloqueMadera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueMadera_Statics::NewProp_MaterialBloqueMadera = { "MaterialBloqueMadera", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueMadera, MaterialBloqueMadera), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialBloqueMadera_MetaData), NewProp_MaterialBloqueMadera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueMadera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueMadera_Statics::NewProp_MallaBloqueMadera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueMadera_Statics::NewProp_MaterialBloqueMadera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMadera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueMadera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMadera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueMadera_Statics::ClassParams = {
	&ABloqueMadera::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueMadera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMadera_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMadera_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueMadera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueMadera()
{
	if (!Z_Registration_Info_UClass_ABloqueMadera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueMadera.OuterSingleton, Z_Construct_UClass_ABloqueMadera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueMadera.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<ABloqueMadera>()
{
	return ABloqueMadera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueMadera);
ABloqueMadera::~ABloqueMadera() {}
// End Class ABloqueMadera

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueMadera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueMadera, ABloqueMadera::StaticClass, TEXT("ABloqueMadera"), &Z_Registration_Info_UClass_ABloqueMadera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueMadera), 2355648679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueMadera_h_52034696(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueMadera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueMadera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
