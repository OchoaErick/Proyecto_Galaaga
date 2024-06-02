// Fill out your copyright notice in the Description page of Project Settings.


#include "Delta.h"

ADelta::ADelta()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);

	velocidad = 100;
	movimiento = true;
}

void ADelta::BeginPlay()
{
	Super::BeginPlay();

}

void ADelta::defensa()
{
}
void ADelta::Movimiento(float deltatime)
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
void ADelta::Tick(float deltatime)
{
	Super::Tick(deltatime);
	Movimiento(deltatime);
}
