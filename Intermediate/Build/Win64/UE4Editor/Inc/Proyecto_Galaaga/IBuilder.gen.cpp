// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Proyecto_Galaaga/IBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIBuilder() {}
// Cross Module References
	PROYECTO_GALAAGA_API UClass* Z_Construct_UClass_UIBuilder_NoRegister();
	PROYECTO_GALAAGA_API UClass* Z_Construct_UClass_UIBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Proyecto_Galaaga();
// End Cross Module References
	void UIBuilder::StaticRegisterNativesUIBuilder()
	{
	}
	UClass* Z_Construct_UClass_UIBuilder_NoRegister()
	{
		return UIBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UIBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Proyecto_Galaaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIBuilder_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIBuilder_Statics::ClassParams = {
		&UIBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIBuilder, 633614486);
	template<> PROYECTO_GALAAGA_API UClass* StaticClass<UIBuilder>()
	{
		return UIBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIBuilder(Z_Construct_UClass_UIBuilder, &UIBuilder::StaticClass, TEXT("/Script/Proyecto_Galaaga"), TEXT("UIBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
