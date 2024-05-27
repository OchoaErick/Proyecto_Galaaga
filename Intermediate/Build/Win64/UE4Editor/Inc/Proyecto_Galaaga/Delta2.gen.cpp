// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Proyecto_Galaaga/Delta2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelta2() {}
// Cross Module References
	PROYECTO_GALAAGA_API UClass* Z_Construct_UClass_ADelta2_NoRegister();
	PROYECTO_GALAAGA_API UClass* Z_Construct_UClass_ADelta2();
	PROYECTO_GALAAGA_API UClass* Z_Construct_UClass_ADelta();
	UPackage* Z_Construct_UPackage__Script_Proyecto_Galaaga();
// End Cross Module References
	void ADelta2::StaticRegisterNativesADelta2()
	{
	}
	UClass* Z_Construct_UClass_ADelta2_NoRegister()
	{
		return ADelta2::StaticClass();
	}
	struct Z_Construct_UClass_ADelta2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADelta2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADelta,
		(UObject* (*)())Z_Construct_UPackage__Script_Proyecto_Galaaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADelta2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Delta2.h" },
		{ "ModuleRelativePath", "Delta2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADelta2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADelta2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADelta2_Statics::ClassParams = {
		&ADelta2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADelta2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADelta2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADelta2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADelta2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADelta2, 2629013627);
	template<> PROYECTO_GALAAGA_API UClass* StaticClass<ADelta2>()
	{
		return ADelta2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADelta2(Z_Construct_UClass_ADelta2, &ADelta2::StaticClass, TEXT("/Script/Proyecto_Galaaga"), TEXT("ADelta2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADelta2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
