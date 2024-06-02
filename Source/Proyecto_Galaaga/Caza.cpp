// Fill out your copyright notice in the Description page of Project Settings.


#include "Caza.h"

ACaza::ACaza()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	movimiento = true;
	velocidad = 100;
}

void ACaza::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACaza::ataque()
{
}

void ACaza::Movimiento(float deltatime)
{
	FVector NewLocation = GetActorLocation() + FVector(0.0f, movimiento ? velocidad : -velocidad, 0.0f) * deltatime;
	SetActorLocation(NewLocation);
	if (GetActorLocation().Y > 1800)
	{
		movimiento = false;
	}
	else
		if (GetActorLocation().Y < -1800)
		{
			movimiento = true;
		}
}

void ACaza::Tick(float deltatime)
{
	Super::Tick(deltatime);
	Movimiento(deltatime);
}

