// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Delta.h"
#include "Delta2.generated.h"

/**
 * 
 */
UCLASS()
class PROYECTO_GALAAGA_API ADelta2 : public ADelta
{
	GENERATED_BODY()
public:
	ADelta2();
public:
	virtual void BeginPlay() override;
protected:
	virtual void defensa2();
public:
	virtual void Tick(float deltatime) override;
	
};
