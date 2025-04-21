// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/BloqueBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueBase() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueBase();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABloqueBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class ABloqueBase
void ABloqueBase::StaticRegisterNativesABloqueBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueBase);
UClass* Z_Construct_UClass_ABloqueBase_NoRegister()
{
	return ABloqueBase::StaticClass();
}
struct Z_Construct_UClass_ABloqueBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueBase.h" },
		{ "ModuleRelativePath", "Public/BloqueBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaBloque_MetaData[] = {
		{ "Category", "BloqueBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloqueBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaBloque;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueBase_Statics::NewProp_MallaBloque = { "MallaBloque", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueBase, MallaBloque), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaBloque_MetaData), NewProp_MallaBloque_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueBase_Statics::NewProp_MallaBloque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueBase_Statics::ClassParams = {
	&ABloqueBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueBase()
{
	if (!Z_Registration_Info_UClass_ABloqueBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueBase.OuterSingleton, Z_Construct_UClass_ABloqueBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueBase.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<ABloqueBase>()
{
	return ABloqueBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueBase);
ABloqueBase::~ABloqueBase() {}
// End Class ABloqueBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueBase, ABloqueBase::StaticClass, TEXT("ABloqueBase"), &Z_Registration_Info_UClass_ABloqueBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueBase), 4256116969U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueBase_h_1475826575(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_BloqueBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
