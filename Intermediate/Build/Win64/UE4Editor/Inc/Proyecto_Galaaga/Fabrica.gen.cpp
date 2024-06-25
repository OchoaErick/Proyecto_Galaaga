// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Proyecto_Galaaga/Fabrica.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabrica() {}
// Cross Module References
	PROYECTO_GALAAGA_API UClass* Z_Construct_UClass_AFabrica_NoRegister();
	PROYECTO_GALAAGA_API UClass* Z_Construct_UClass_AFabrica();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Proyecto_Galaaga();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFabrica::execNavesDestruidas)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NavesDestruidas(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFabrica::execCrearNaves2)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_escuadron1);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrearNaves2(Z_Param_escuadron1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFabrica::execCrearNaves)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_escuadron1);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrearNaves(Z_Param_escuadron1);
		P_NATIVE_END;
	}
	void AFabrica::StaticRegisterNativesAFabrica()
	{
		UClass* Class = AFabrica::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrearNaves", &AFabrica::execCrearNaves },
			{ "CrearNaves2", &AFabrica::execCrearNaves2 },
			{ "NavesDestruidas", &AFabrica::execNavesDestruidas },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFabrica_CrearNaves_Statics
	{
		struct Fabrica_eventCrearNaves_Parms
		{
			FString escuadron1;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_escuadron1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFabrica_CrearNaves_Statics::NewProp_escuadron1 = { "escuadron1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fabrica_eventCrearNaves_Parms, escuadron1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFabrica_CrearNaves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabrica_CrearNaves_Statics::NewProp_escuadron1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFabrica_CrearNaves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Fabrica.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFabrica_CrearNaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFabrica, nullptr, "CrearNaves", nullptr, nullptr, sizeof(Fabrica_eventCrearNaves_Parms), Z_Construct_UFunction_AFabrica_CrearNaves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabrica_CrearNaves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFabrica_CrearNaves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabrica_CrearNaves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFabrica_CrearNaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFabrica_CrearNaves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFabrica_CrearNaves2_Statics
	{
		struct Fabrica_eventCrearNaves2_Parms
		{
			FString escuadron1;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_escuadron1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFabrica_CrearNaves2_Statics::NewProp_escuadron1 = { "escuadron1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fabrica_eventCrearNaves2_Parms, escuadron1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFabrica_CrearNaves2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabrica_CrearNaves2_Statics::NewProp_escuadron1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFabrica_CrearNaves2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Fabrica.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFabrica_CrearNaves2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFabrica, nullptr, "CrearNaves2", nullptr, nullptr, sizeof(Fabrica_eventCrearNaves2_Parms), Z_Construct_UFunction_AFabrica_CrearNaves2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabrica_CrearNaves2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFabrica_CrearNaves2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabrica_CrearNaves2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFabrica_CrearNaves2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFabrica_CrearNaves2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFabrica_NavesDestruidas_Statics
	{
		struct Fabrica_eventNavesDestruidas_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFabrica_NavesDestruidas_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fabrica_eventNavesDestruidas_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFabrica_NavesDestruidas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabrica_NavesDestruidas_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFabrica_NavesDestruidas_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Fabrica.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFabrica_NavesDestruidas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFabrica, nullptr, "NavesDestruidas", nullptr, nullptr, sizeof(Fabrica_eventNavesDestruidas_Parms), Z_Construct_UFunction_AFabrica_NavesDestruidas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabrica_NavesDestruidas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFabrica_NavesDestruidas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabrica_NavesDestruidas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFabrica_NavesDestruidas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFabrica_NavesDestruidas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFabrica_NoRegister()
	{
		return AFabrica::StaticClass();
	}
	struct Z_Construct_UClass_AFabrica_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabrica_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Proyecto_Galaaga,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFabrica_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFabrica_CrearNaves, "CrearNaves" }, // 3526200669
		{ &Z_Construct_UFunction_AFabrica_CrearNaves2, "CrearNaves2" }, // 4108287874
		{ &Z_Construct_UFunction_AFabrica_NavesDestruidas, "NavesDestruidas" }, // 389506152
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabrica_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fabrica.h" },
		{ "ModuleRelativePath", "Fabrica.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabrica_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabrica>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabrica_Statics::ClassParams = {
		&AFabrica::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFabrica_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabrica_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabrica()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabrica_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabrica, 2113994428);
	template<> PROYECTO_GALAAGA_API UClass* StaticClass<AFabrica>()
	{
		return AFabrica::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabrica(Z_Construct_UClass_AFabrica, &AFabrica::StaticClass, TEXT("/Script/Proyecto_Galaaga"), TEXT("AFabrica"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabrica);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
