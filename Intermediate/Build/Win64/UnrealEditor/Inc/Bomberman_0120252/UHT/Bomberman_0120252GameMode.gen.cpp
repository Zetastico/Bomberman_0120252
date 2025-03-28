// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_0120252/Bomberman_0120252GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberman_0120252GameMode() {}

// Begin Cross Module References
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABomberman_0120252GameMode();
BOMBERMAN_0120252_API UClass* Z_Construct_UClass_ABomberman_0120252GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Bomberman_0120252();
// End Cross Module References

// Begin Class ABomberman_0120252GameMode
void ABomberman_0120252GameMode::StaticRegisterNativesABomberman_0120252GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberman_0120252GameMode);
UClass* Z_Construct_UClass_ABomberman_0120252GameMode_NoRegister()
{
	return ABomberman_0120252GameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberman_0120252GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//class Bloque;\n" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Bomberman_0120252GameMode.h" },
		{ "ModuleRelativePath", "Bomberman_0120252GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "class Bloque;" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberman_0120252GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABomberman_0120252GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_0120252,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_0120252GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberman_0120252GameMode_Statics::ClassParams = {
	&ABomberman_0120252GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_0120252GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberman_0120252GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberman_0120252GameMode()
{
	if (!Z_Registration_Info_UClass_ABomberman_0120252GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberman_0120252GameMode.OuterSingleton, Z_Construct_UClass_ABomberman_0120252GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberman_0120252GameMode.OuterSingleton;
}
template<> BOMBERMAN_0120252_API UClass* StaticClass<ABomberman_0120252GameMode>()
{
	return ABomberman_0120252GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberman_0120252GameMode);
ABomberman_0120252GameMode::~ABomberman_0120252GameMode() {}
// End Class ABomberman_0120252GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Bomberman_0120252GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberman_0120252GameMode, ABomberman_0120252GameMode::StaticClass, TEXT("ABomberman_0120252GameMode"), &Z_Registration_Info_UClass_ABomberman_0120252GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberman_0120252GameMode), 3869829792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Bomberman_0120252GameMode_h_3281659112(TEXT("/Script/Bomberman_0120252"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Bomberman_0120252GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Bomberman_0120252GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
