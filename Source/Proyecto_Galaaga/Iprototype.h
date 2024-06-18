// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Iprototype.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIprototype : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROYECTO_GALAAGA_API IIprototype
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual AActor* Clonar() = 0;
};
