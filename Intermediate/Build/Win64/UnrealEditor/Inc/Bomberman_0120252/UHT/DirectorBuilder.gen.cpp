// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Public/DirectorBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectorBuilder() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ADirectorBuilder();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ADirectorBuilder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class ADirectorBuilder
void ADirectorBuilder::StaticRegisterNativesADirectorBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADirectorBuilder);
UClass* Z_Construct_UClass_ADirectorBuilder_NoRegister()
{
	return ADirectorBuilder::StaticClass();
}
struct Z_Construct_UClass_ADirectorBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DirectorBuilder.h" },
		{ "ModuleRelativePath", "Public/DirectorBuilder.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectorBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADirectorBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADirectorBuilder_Statics::ClassParams = {
	&ADirectorBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_ADirectorBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADirectorBuilder()
{
	if (!Z_Registration_Info_UClass_ADirectorBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADirectorBuilder.OuterSingleton, Z_Construct_UClass_ADirectorBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADirectorBuilder.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<ADirectorBuilder>()
{
	return ADirectorBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectorBuilder);
ADirectorBuilder::~ADirectorBuilder() {}
// End Class ADirectorBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_DirectorBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADirectorBuilder, ADirectorBuilder::StaticClass, TEXT("ADirectorBuilder"), &Z_Registration_Info_UClass_ADirectorBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADirectorBuilder), 2294887116U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_DirectorBuilder_h_1514936196(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_DirectorBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_DirectorBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
