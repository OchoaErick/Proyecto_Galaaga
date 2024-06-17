// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Abstrac.generated.h"

UCLASS(abstract)
class PROYECTO_GALAAGA_API AAbstrac : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* EnemyMesh;

public:
	// Sets default values for this actor's properties
	AAbstrac();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	float velocidad;
	bool movimiento;
	virtual void disparar() PURE_VIRTUAL(AAbstrac::disparar, );
	virtual void mover() PURE_VIRTUAL(AAbstrac::mover, );
	virtual void balas() PURE_VIRTUAL(AAbstrac::balas, );
	virtual void Movimiento(float deltatime);
};