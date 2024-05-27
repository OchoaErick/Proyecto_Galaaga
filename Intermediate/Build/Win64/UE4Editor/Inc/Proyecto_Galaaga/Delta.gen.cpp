// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Proyecto_Galaaga/Delta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelta() {}
// Cross Module References
	PROYECTO_GALAAGA_API UClass* Z_Construct_UClass_ADelta_NoRegister();
	PROYECTO_GALAAGA_API UClass* Z_Construct_UClass_ADelta();
	PROYECTO_GALAAGA_API UClass* Z_Construct_UClass_AAbstrac();
	UPackage* Z_Construct_UPackage__Script_Proyecto_Galaaga();
// End Cross Module References
	void ADelta::StaticRegisterNativesADelta()
	{
	}
	UClass* Z_Construct_UClass_ADelta_NoRegister()
	{
		return ADelta::StaticClass();
	}
	struct Z_Construct_UClass_ADelta_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADelta_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAbstrac,
		(UObject* (*)())Z_Construct_UPackage__Script_Proyecto_Galaaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADelta_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Delta.h" },
		{ "ModuleRelativePath", "Delta.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADelta_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADelta>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADelta_Statics::ClassParams = {
		&ADelta::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADelta_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADelta_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADelta()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADelta_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADelta, 787396619);
	template<> PROYECTO_GALAAGA_API UClass* StaticClass<ADelta>()
	{
		return ADelta::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADelta(Z_Construct_UClass_ADelta, &ADelta::StaticClass, TEXT("/Script/Proyecto_Galaaga"), TEXT("ADelta"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADelta);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
