// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstacleCourseGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeObstacleCourseGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_APawn(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CITA417Lab_4(ETypeConstructPhase);
CITA417LAB_4_API UClass* Z_Construct_UClass_AObstacleCourseGameMode(ETypeConstructPhase);
CITA417LAB_4_API UClass* Z_Construct_UClass_AObstacleCourseGameMode(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AObstacleCourseGameMode Function PlayerFailed ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AObstacleCourseGameMode_PlayerFailed_Statics
struct UHT_STATICS
{
	struct ObstacleCourseGameMode_eventPlayerFailed_Parms
	{
		APawn* PlayerPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Gameplay Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called by my floor hazard trigger when the player falls\n" },
#endif
		{ "ModuleRelativePath", "Public/ObstacleCourseGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called by my floor hazard trigger when the player falls" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerFailed constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayerFailed constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayerFailed Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ObstacleCourseGameMode_eventPlayerFailed_Parms, PlayerPawn), Z_Construct_UClass_APawn, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerPawn,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PlayerFailed Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AObstacleCourseGameMode, nullptr, "PlayerFailed", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ObstacleCourseGameMode_eventPlayerFailed_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ObstacleCourseGameMode_eventPlayerFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AObstacleCourseGameMode_PlayerFailed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AObstacleCourseGameMode::execPlayerFailed)
{
	P_GET_OBJECT(APawn,Z_Param_PlayerPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerFailed(Z_Param_PlayerPawn);
	P_NATIVE_END;
}
// ********** End Class AObstacleCourseGameMode Function PlayerFailed ******************************

// ********** Begin Class AObstacleCourseGameMode Function PlayerWon *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AObstacleCourseGameMode_PlayerWon_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Gameplay Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called by the victory platform block trigger\n" },
#endif
		{ "ModuleRelativePath", "Public/ObstacleCourseGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called by the victory platform block trigger" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerWon constinit property declarations *****************************
// ********** End Function PlayerWon constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AObstacleCourseGameMode, nullptr, "PlayerWon", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AObstacleCourseGameMode_PlayerWon(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AObstacleCourseGameMode::execPlayerWon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerWon();
	P_NATIVE_END;
}
// ********** End Class AObstacleCourseGameMode Function PlayerWon *********************************

// ********** Begin Class AObstacleCourseGameMode **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AObstacleCourseGameMode_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ObstacleCourseGameMode.h" },
		{ "ModuleRelativePath", "Public/ObstacleCourseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class AObstacleCourseGameMode constinit property declarations ******************
// ********** End Class AObstacleCourseGameMode constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PlayerFailed"), .Pointer = &AObstacleCourseGameMode::execPlayerFailed },
		{ .NameUTF8 = UTF8TEXT("PlayerWon"), .Pointer = &AObstacleCourseGameMode::execPlayerWon },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AObstacleCourseGameMode_PlayerFailed, "PlayerFailed" }, // d8a86842596bee48cf29f09c1bef2aaf75d4cb1e
		{ &Z_Construct_UFunction_AObstacleCourseGameMode_PlayerWon, "PlayerWon" }, // 1c76cf97faa6cb3e792a6da7d9a104a632cd09ea
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacleCourseGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AGameModeBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CITA417Lab_4,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AObstacleCourseGameMode,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void AObstacleCourseGameMode_StaticRegisterNativesAObstacleCourseGameMode()
{
	UClass* Class = AObstacleCourseGameMode::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AObstacleCourseGameMode;
UClass* Z_Construct_UClass_AObstacleCourseGameMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AObstacleCourseGameMode;
		if (!Z_Registration_Info_UClass_AObstacleCourseGameMode.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ObstacleCourseGameMode"),
				Z_Registration_Info_UClass_AObstacleCourseGameMode.InnerSingleton,
				AObstacleCourseGameMode_StaticRegisterNativesAObstacleCourseGameMode,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_AObstacleCourseGameMode.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AObstacleCourseGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstacleCourseGameMode.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AObstacleCourseGameMode.OuterSingleton;
}
#undef UHT_STATICS
AObstacleCourseGameMode::AObstacleCourseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AObstacleCourseGameMode);
AObstacleCourseGameMode::~AObstacleCourseGameMode() {}
// ********** End Class AObstacleCourseGameMode ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_CITA417_REPOS_ULYSSE_CITA417_Lab_4_CITA417Lab_4_Source_CITA417Lab_4_Public_ObstacleCourseGameMode_h__Script_CITA417Lab_4_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObstacleCourseGameMode, TEXT("AObstacleCourseGameMode"), &Z_Registration_Info_UClass_AObstacleCourseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstacleCourseGameMode), 2373106519U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CITA417_REPOS_ULYSSE_CITA417_Lab_4_CITA417Lab_4_Source_CITA417Lab_4_Public_ObstacleCourseGameMode_h__Script_CITA417Lab_4_8eb9ae0cda4d277c3df7f0a96cf4d2e25a334d10{
	TEXT("/Script/CITA417Lab_4"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
