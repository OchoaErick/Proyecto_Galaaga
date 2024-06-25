// Copyright Epic Games, Inc. All Rights Reserved.

#include "Proyecto_GalaagaGameMode.h"
#include "Proyecto_GalaagaPawn.h"
#include "random"
#include "Caza.h"
#include "Abstrac.h"
#include "Caza1.h"
#include "Caza2.h"
#include "Delta.h"
#include "Delta1.h"
#include "Delta2.h"
#include "Fabrica.h"

AProyecto_GalaagaGameMode::AProyecto_GalaagaGameMode()
{
	// set default pawn class to our character class
	//DefaultPawnClass = AProyecto_GalaagaPawn::StaticClass();
	PrimaryActorTick.bCanEverTick = true;

}

void AProyecto_GalaagaGameMode::BeginPlay()
{
	Super::BeginPlay();

	AFabrica* fabrica = GetWorld()->SpawnActor<AFabrica>(AFabrica::StaticClass());
	//fabrica->CrearNaves("escuadron1");
}


void AProyecto_GalaagaGameMode::Tick(float DeltaTime)
{
}