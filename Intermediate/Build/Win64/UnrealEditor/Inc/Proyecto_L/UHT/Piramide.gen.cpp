// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Proyecto_L/Public/Piramide.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePiramide() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PROYECTO_L_API UClass* Z_Construct_UClass_APiramide();
PROYECTO_L_API UClass* Z_Construct_UClass_APiramide_NoRegister();
UPackage* Z_Construct_UPackage__Script_Proyecto_L();
// End Cross Module References

// Begin Class APiramide
void APiramide::StaticRegisterNativesAPiramide()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APiramide);
UClass* Z_Construct_UClass_APiramide_NoRegister()
{
	return APiramide::StaticClass();
}
struct Z_Construct_UClass_APiramide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Piramide.h" },
		{ "ModuleRelativePath", "Public/Piramide.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Nuevo miembro agregado\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Piramide.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Nuevo miembro agregado" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APiramide>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APiramide_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APiramide, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APiramide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiramide_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APiramide_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APiramide_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Proyecto_L,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APiramide_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APiramide_Statics::ClassParams = {
	&APiramide::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APiramide_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APiramide_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APiramide_Statics::Class_MetaDataParams), Z_Construct_UClass_APiramide_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APiramide()
{
	if (!Z_Registration_Info_UClass_APiramide.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APiramide.OuterSingleton, Z_Construct_UClass_APiramide_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APiramide.OuterSingleton;
}
template<> PROYECTO_L_API UClass* StaticClass<APiramide>()
{
	return APiramide::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APiramide);
APiramide::~APiramide() {}
// End Class APiramide

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Basi_Documents_Unreal_Projects_Proyecto_L_Source_Proyecto_L_Public_Piramide_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APiramide, APiramide::StaticClass, TEXT("APiramide"), &Z_Registration_Info_UClass_APiramide, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APiramide), 1832403875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Basi_Documents_Unreal_Projects_Proyecto_L_Source_Proyecto_L_Public_Piramide_h_1454663964(TEXT("/Script/Proyecto_L"),
	Z_CompiledInDeferFile_FID_Users_Basi_Documents_Unreal_Projects_Proyecto_L_Source_Proyecto_L_Public_Piramide_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Basi_Documents_Unreal_Projects_Proyecto_L_Source_Proyecto_L_Public_Piramide_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
