// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Proyecto_L/Proyecto_LGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyecto_LGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROYECTO_L_API UClass* Z_Construct_UClass_AProyecto_LGameMode();
PROYECTO_L_API UClass* Z_Construct_UClass_AProyecto_LGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Proyecto_L();
// End Cross Module References

// Begin Class AProyecto_LGameMode
void AProyecto_LGameMode::StaticRegisterNativesAProyecto_LGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProyecto_LGameMode);
UClass* Z_Construct_UClass_AProyecto_LGameMode_NoRegister()
{
	return AProyecto_LGameMode::StaticClass();
}
struct Z_Construct_UClass_AProyecto_LGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Proyecto_LGameMode.h" },
		{ "ModuleRelativePath", "Proyecto_LGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyecto_LGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProyecto_LGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Proyecto_L,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProyecto_LGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProyecto_LGameMode_Statics::ClassParams = {
	&AProyecto_LGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProyecto_LGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProyecto_LGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProyecto_LGameMode()
{
	if (!Z_Registration_Info_UClass_AProyecto_LGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProyecto_LGameMode.OuterSingleton, Z_Construct_UClass_AProyecto_LGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProyecto_LGameMode.OuterSingleton;
}
template<> PROYECTO_L_API UClass* StaticClass<AProyecto_LGameMode>()
{
	return AProyecto_LGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProyecto_LGameMode);
AProyecto_LGameMode::~AProyecto_LGameMode() {}
// End Class AProyecto_LGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Basi_Documents_Unreal_Projects_Proyecto_L_Source_Proyecto_L_Proyecto_LGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProyecto_LGameMode, AProyecto_LGameMode::StaticClass, TEXT("AProyecto_LGameMode"), &Z_Registration_Info_UClass_AProyecto_LGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProyecto_LGameMode), 913681751U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Basi_Documents_Unreal_Projects_Proyecto_L_Source_Proyecto_L_Proyecto_LGameMode_h_2446051142(TEXT("/Script/Proyecto_L"),
	Z_CompiledInDeferFile_FID_Users_Basi_Documents_Unreal_Projects_Proyecto_L_Source_Proyecto_L_Proyecto_LGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Basi_Documents_Unreal_Projects_Proyecto_L_Source_Proyecto_L_Proyecto_LGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
