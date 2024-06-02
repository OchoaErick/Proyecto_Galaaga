// Fill out your copyright notice in the Description page of Project Settings.


#include "Delta1.h"

ADelta1::ADelta1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	velocidad = 100;
	movimiento = true;
}

void ADelta1::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADelta1::defensa1()
{
}

void ADelta1::Movimiento(float deltatime)
{
	FVector NewLocation = GetActorLocation() + FVector(0.0f, movimiento ? velocidad : -velocidad, 0.0f) * deltatime;
	SetActorLocation(NewLocation);
	if (GetActorLocation().Y > 1000)
	{
		movimiento = false;
	}
	else
		if (GetActorLocation().Y < -10)
		{
			movimiento = true;
		}
}

void ADelta1::Tick(float deltatime)
{
	Super::Tick(deltatime);
	Movimiento(deltatime);
}
