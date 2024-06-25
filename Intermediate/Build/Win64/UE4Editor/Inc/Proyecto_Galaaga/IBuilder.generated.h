// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROYECTO_GALAAGA_IBuilder_generated_h
#error "IBuilder.generated.h already included, missing '#pragma once' in IBuilder.h"
#endif
#define PROYECTO_GALAAGA_IBuilder_generated_h

#define Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_SPARSE_DATA
#define Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_RPC_WRAPPERS
#define Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROYECTO_GALAAGA_API UIBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROYECTO_GALAAGA_API, UIBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROYECTO_GALAAGA_API UIBuilder(UIBuilder&&); \
	PROYECTO_GALAAGA_API UIBuilder(const UIBuilder&); \
public:


#define Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROYECTO_GALAAGA_API UIBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PROYECTO_GALAAGA_API UIBuilder(UIBuilder&&); \
	PROYECTO_GALAAGA_API UIBuilder(const UIBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROYECTO_GALAAGA_API, UIBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIBuilder)


#define Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIBuilder(); \
	friend struct Z_Construct_UClass_UIBuilder_Statics; \
public: \
	DECLARE_CLASS(UIBuilder, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Proyecto_Galaaga"), PROYECTO_GALAAGA_API) \
	DECLARE_SERIALIZER(UIBuilder)


#define Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_GENERATED_UINTERFACE_BODY() \
	Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_GENERATED_UINTERFACE_BODY() \
	Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIBuilder() {} \
public: \
	typedef UIBuilder UClassType; \
	typedef IIBuilder ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIBuilder() {} \
public: \
	typedef UIBuilder UClassType; \
	typedef IIBuilder ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_10_PROLOG
#define Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_SPARSE_DATA \
	Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_RPC_WRAPPERS \
	Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_SPARSE_DATA \
	Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROYECTO_GALAAGA_API UClass* StaticClass<class UIBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Proyecto_Galaaga_Source_Proyecto_Galaaga_IBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
