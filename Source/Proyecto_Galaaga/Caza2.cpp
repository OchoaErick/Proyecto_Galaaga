// Fill out your copyright notice in the Description page of Project Settings.


#include "Caza2.h"

ACaza2::ACaza2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	velocidad = 100;
	movimiento = true;
}

void ACaza2::BeginPlay()
{
	Super::BeginPlay();

}

void ACaza2::ataque2()
{
}

void ACaza2::Movimiento(float deltatime)
{
	FVector NewLocation = GetActorLocation() + FVector(0.0f, movimiento ? velocidad : -velocidad, 0.0f) * deltatime;
	SetActorLocation(NewLocation);
	if (GetActorLocation().Y > 1000)
	{
		movimiento = false;
	}
	else
		if (GetActorLocation().Y < -1000)
		{
			movimiento = true;
		}
}

void ACaza2::Tick(float deltatime)
{
	Super::Tick(deltatime);
	Movimiento(deltatime);
}
