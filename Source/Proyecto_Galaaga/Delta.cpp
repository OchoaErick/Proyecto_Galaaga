// Fill out your copyright notice in the Description page of Project Settings.


#include "Delta.h"

ADelta::ADelta()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}

void ADelta::BeginPlay()
{
}

void ADelta::defensa()
{
}

void ADelta::Tick(float deltatime)
{
}
void ADelta::Movimiento(float deltatime)
{
}