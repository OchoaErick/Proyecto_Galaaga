// Fill out your copyright notice in the Description page of Project Settings.


#include "Delta2.h"

ADelta2::ADelta2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}

void ADelta2::BeginPlay()
{
}

void ADelta2::defensa2()
{
}

void ADelta2::Tick(float deltatime)
{
}
