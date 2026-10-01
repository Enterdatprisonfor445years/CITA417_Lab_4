// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Combat/CombatPlayerController.h"

#ifdef CITA417LAB_4_CombatPlayerController_generated_h
#error "CombatPlayerController.generated.h already included, missing '#pragma once' in CombatPlayerController.h"
#endif
#define CITA417LAB_4_CombatPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class ACombatPlayerController **************************************************
#define FID_CITA417_REPOS_ULYSSE_CITA417_Lab_4_CITA417Lab_4_Source_CITA417Lab_4_Variant_Combat_CombatPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPawnDestroyed);


struct Z_Construct_UClass_ACombatPlayerController_Statics;
CITA417LAB_4_API UClass* Z_Construct_UClass_ACombatPlayerController(ETypeConstructPhase);

#define FID_CITA417_REPOS_ULYSSE_CITA417_Lab_4_CITA417Lab_4_Source_CITA417Lab_4_Variant_Combat_CombatPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ACombatPlayerController_Statics; \
	friend CITA417LAB_4_API UClass* ::Z_Construct_UClass_ACombatPlayerController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ACombatPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CITA417Lab_4"), Z_Construct_UClass_ACombatPlayerController) \
	DECLARE_SERIALIZER(ACombatPlayerController)


#define FID_CITA417_REPOS_ULYSSE_CITA417_Lab_4_CITA417Lab_4_Source_CITA417Lab_4_Variant_Combat_CombatPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACombatPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACombatPlayerController(ACombatPlayerController&&) = delete; \
	ACombatPlayerController(const ACombatPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACombatPlayerController) \
	NO_API virtual ~ACombatPlayerController();


#define FID_CITA417_REPOS_ULYSSE_CITA417_Lab_4_CITA417Lab_4_Source_CITA417Lab_4_Variant_Combat_CombatPlayerController_h_17_PROLOG
#define FID_CITA417_REPOS_ULYSSE_CITA417_Lab_4_CITA417Lab_4_Source_CITA417Lab_4_Variant_Combat_CombatPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CITA417_REPOS_ULYSSE_CITA417_Lab_4_CITA417Lab_4_Source_CITA417Lab_4_Variant_Combat_CombatPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CITA417_REPOS_ULYSSE_CITA417_Lab_4_CITA417Lab_4_Source_CITA417Lab_4_Variant_Combat_CombatPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_CITA417_REPOS_ULYSSE_CITA417_Lab_4_CITA417Lab_4_Source_CITA417Lab_4_Variant_Combat_CombatPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACombatPlayerController;

// ********** End Class ACombatPlayerController ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CITA417_REPOS_ULYSSE_CITA417_Lab_4_CITA417Lab_4_Source_CITA417Lab_4_Variant_Combat_CombatPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
