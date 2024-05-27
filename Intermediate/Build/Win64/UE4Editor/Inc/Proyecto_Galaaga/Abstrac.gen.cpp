// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Proyecto_Galaaga/Abstrac.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbstrac() {}
// Cross Module References
	PROYECTO_GALAAGA_API UClass* Z_Construct_UClass_AAbstrac_NoRegister();
	PROYECTO_GALAAGA_API UClass* Z_Construct_UClass_AAbstrac();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Proyecto_Galaaga();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AAbstrac::StaticRegisterNativesAAbstrac()
	{
	}
	UClass* Z_Construct_UClass_AAbstrac_NoRegister()
	{
		return AAbstrac::StaticClass();
	}
	struct Z_Construct_UClass_AAbstrac_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAbstrac_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Proyecto_Galaaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbstrac_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abstrac.h" },
		{ "ModuleRelativePath", "Abstrac.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbstrac_Statics::NewProp_EnemyMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Abstrac.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAbstrac_Statics::NewProp_EnemyMesh = { "EnemyMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAbstrac, EnemyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAbstrac_Statics::NewProp_EnemyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAbstrac_Statics::NewProp_EnemyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAbstrac_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAbstrac_Statics::NewProp_EnemyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAbstrac_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbstrac>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAbstrac_Statics::ClassParams = {
		&AAbstrac::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAbstrac_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAbstrac_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AAbstrac_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAbstrac_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAbstrac()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAbstrac_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAbstrac, 3514189425);
	template<> PROYECTO_GALAAGA_API UClass* StaticClass<AAbstrac>()
	{
		return AAbstrac::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAbstrac(Z_Construct_UClass_AAbstrac, &AAbstrac::StaticClass, TEXT("/Script/Proyecto_Galaaga"), TEXT("AAbstrac"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAbstrac);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
