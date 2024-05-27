// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Proyecto_Galaaga/Proyecto_GalaagaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyecto_GalaagaGameMode() {}
// Cross Module References
	PROYECTO_GALAAGA_API UClass* Z_Construct_UClass_AProyecto_GalaagaGameMode_NoRegister();
	PROYECTO_GALAAGA_API UClass* Z_Construct_UClass_AProyecto_GalaagaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Proyecto_Galaaga();
// End Cross Module References
	void AProyecto_GalaagaGameMode::StaticRegisterNativesAProyecto_GalaagaGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProyecto_GalaagaGameMode_NoRegister()
	{
		return AProyecto_GalaagaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProyecto_GalaagaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyecto_GalaagaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Proyecto_Galaaga,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyecto_GalaagaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Proyecto_GalaagaGameMode.h" },
		{ "ModuleRelativePath", "Proyecto_GalaagaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyecto_GalaagaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyecto_GalaagaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProyecto_GalaagaGameMode_Statics::ClassParams = {
		&AProyecto_GalaagaGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProyecto_GalaagaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyecto_GalaagaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyecto_GalaagaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProyecto_GalaagaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProyecto_GalaagaGameMode, 2270964444);
	template<> PROYECTO_GALAAGA_API UClass* StaticClass<AProyecto_GalaagaGameMode>()
	{
		return AProyecto_GalaagaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProyecto_GalaagaGameMode(Z_Construct_UClass_AProyecto_GalaagaGameMode, &AProyecto_GalaagaGameMode::StaticClass, TEXT("/Script/Proyecto_Galaaga"), TEXT("AProyecto_GalaagaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyecto_GalaagaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
