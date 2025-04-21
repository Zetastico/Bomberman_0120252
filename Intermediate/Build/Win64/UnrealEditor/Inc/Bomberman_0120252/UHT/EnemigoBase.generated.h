// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemigoBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BOMBERMAN_0120252_EnemigoBase_generated_h
#error "EnemigoBase.generated.h already included, missing '#pragma once' in EnemigoBase.h"
#endif
#define BOMBERMAN_0120252_EnemigoBase_generated_h

#define FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_EnemigoBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCapsuleHit);


#define FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_EnemigoBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemigoBase(); \
	friend struct Z_Construct_UClass_AEnemigoBase_Statics; \
public: \
	DECLARE_CLASS(AEnemigoBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman_0120252"), NO_API) \
	DECLARE_SERIALIZER(AEnemigoBase)


#define FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_EnemigoBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemigoBase(AEnemigoBase&&); \
	AEnemigoBase(const AEnemigoBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigoBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigoBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemigoBase) \
	NO_API virtual ~AEnemigoBase();


#define FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_EnemigoBase_h_9_PROLOG
#define FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_EnemigoBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_EnemigoBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_EnemigoBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_EnemigoBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_0120252_API UClass* StaticClass<class AEnemigoBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Magne_Documents_Unreal_Projects_Bomberman_0120252_Source_Bomberman_0120252_Public_EnemigoBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
