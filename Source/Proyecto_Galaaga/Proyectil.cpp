// Fill out your copyright notice in the Description page of Project Settings.


#include "Proyectil.h"

// Sets default values
AProyectil::AProyectil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	EnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_In.Shape_Trim_90_In'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
	RootComponent = EnemyMesh;
}

// Called when the game starts or when spawned
void AProyectil::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProyectil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Moverse(DeltaTime);

}

void AProyectil::Moverse(float deltatime)
{
	float velocidad = -500;
	FVector NewPos = GetActorLocation() + FVector(velocidad,0.0f, 0.0f) * deltatime;
	SetActorLocation(NewPos);
}

AActor* AProyectil::Clonar()
{
	AProyectil* proyectilclon = GetWorld()->SpawnActor<AProyectil>(AProyectil::StaticClass());
	proyectilclon->SetActorLocation(GetActorLocation()+FVector(0.0f,100.0f,0.0f));
	proyectilclon->SetActorRotation(GetActorRotation());
	return proyectilclon;
}


