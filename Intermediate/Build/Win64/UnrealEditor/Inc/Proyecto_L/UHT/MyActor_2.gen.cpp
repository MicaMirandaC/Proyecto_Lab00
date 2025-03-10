// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Proyecto_L/Public/MyActor_2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor_2() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameState();
PROYECTO_L_API UClass* Z_Construct_UClass_AMyActor_2();
PROYECTO_L_API UClass* Z_Construct_UClass_AMyActor_2_NoRegister();
UPackage* Z_Construct_UPackage__Script_Proyecto_L();
// End Cross Module References

// Begin Class AMyActor_2 Function GetScore
struct Z_Construct_UFunction_AMyActor_2_GetScore_Statics
{
	struct MyActor_2_eventGetScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xef\xbf\xbdtodo para obtener la puntuaci\xef\xbf\xbdn actual\n" },
#endif
		{ "ModuleRelativePath", "Public/MyActor_2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xef\xbf\xbdtodo para obtener la puntuaci\xef\xbf\xbdn actual" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyActor_2_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_2_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_2_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_2_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_2_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_2_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor_2, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_AMyActor_2_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_2_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_2_GetScore_Statics::MyActor_2_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_2_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_2_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyActor_2_GetScore_Statics::MyActor_2_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyActor_2_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_2_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyActor_2::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class AMyActor_2 Function GetScore

// Begin Class AMyActor_2 Function SetScore
struct Z_Construct_UFunction_AMyActor_2_SetScore_Statics
{
	struct MyActor_2_eventSetScore_Parms
	{
		int32 NewScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xef\xbf\xbdtodo para configurar la puntuaci\xef\xbf\xbdn\n" },
#endif
		{ "ModuleRelativePath", "Public/MyActor_2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xef\xbf\xbdtodo para configurar la puntuaci\xef\xbf\xbdn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyActor_2_SetScore_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_2_eventSetScore_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_2_SetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_2_SetScore_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_2_SetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_2_SetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor_2, nullptr, "SetScore", nullptr, nullptr, Z_Construct_UFunction_AMyActor_2_SetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_2_SetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_2_SetScore_Statics::MyActor_2_eventSetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_2_SetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_2_SetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyActor_2_SetScore_Statics::MyActor_2_eventSetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyActor_2_SetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_2_SetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyActor_2::execSetScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScore(Z_Param_NewScore);
	P_NATIVE_END;
}
// End Class AMyActor_2 Function SetScore

// Begin Class AMyActor_2
void AMyActor_2::StaticRegisterNativesAMyActor_2()
{
	UClass* Class = AMyActor_2::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetScore", &AMyActor_2::execGetScore },
		{ "SetScore", &AMyActor_2::execSetScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor_2);
UClass* Z_Construct_UClass_AMyActor_2_NoRegister()
{
	return AMyActor_2::StaticClass();
}
struct Z_Construct_UClass_AMyActor_2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clase base personalizada \n" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyActor_2.h" },
		{ "ModuleRelativePath", "Public/MyActor_2.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clase base personalizada" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentScore_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Puntuaci\xef\xbf\xbdn actual del jugador\n" },
#endif
		{ "ModuleRelativePath", "Public/MyActor_2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Puntuaci\xef\xbf\xbdn actual del jugador" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor_2_GetScore, "GetScore" }, // 3611724175
		{ &Z_Construct_UFunction_AMyActor_2_SetScore, "SetScore" }, // 248135131
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor_2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyActor_2_Statics::NewProp_CurrentScore = { "CurrentScore", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor_2, CurrentScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentScore_MetaData), NewProp_CurrentScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_2_Statics::NewProp_CurrentScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActor_2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_Proyecto_L,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_2_Statics::ClassParams = {
	&AMyActor_2::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyActor_2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_2_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_2_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor_2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActor_2()
{
	if (!Z_Registration_Info_UClass_AMyActor_2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor_2.OuterSingleton, Z_Construct_UClass_AMyActor_2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor_2.OuterSingleton;
}
template<> PROYECTO_L_API UClass* StaticClass<AMyActor_2>()
{
	return AMyActor_2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor_2);
AMyActor_2::~AMyActor_2() {}
// End Class AMyActor_2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Basi_Documents_Unreal_Projects_Proyecto_L_Source_Proyecto_L_Public_MyActor_2_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor_2, AMyActor_2::StaticClass, TEXT("AMyActor_2"), &Z_Registration_Info_UClass_AMyActor_2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor_2), 737447792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Basi_Documents_Unreal_Projects_Proyecto_L_Source_Proyecto_L_Public_MyActor_2_h_3006191705(TEXT("/Script/Proyecto_L"),
	Z_CompiledInDeferFile_FID_Users_Basi_Documents_Unreal_Projects_Proyecto_L_Source_Proyecto_L_Public_MyActor_2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Basi_Documents_Unreal_Projects_Proyecto_L_Source_Proyecto_L_Public_MyActor_2_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
