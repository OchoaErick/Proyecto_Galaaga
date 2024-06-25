// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Caza1.h"
#include "GameFramework/Actor.h"
#include "Fabrica.generated.h"
UCLASS()
class PROYECTO_GALAAGA_API AFabrica : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabrica();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	UFUNCTION()virtual void CrearNaves(FString escuadron1);
	UFUNCTION()virtual void CrearNaves2(FString escuadron1);
	UFUNCTION()virtual void NavesDestruidas(AActor* DestroyedActor);
	TArray<class ACaza1*> EscuadronesActuales;
	TArray<class ACaza2*> EscuadronesActuales2;

	int t1, t2;
	int navesVivas,navesVivas2;


};
