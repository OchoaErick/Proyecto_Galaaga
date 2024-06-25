// Fill out your copyright notice in the Description page of Project Settings.


#include "Abstrac.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AAbstrac::AAbstrac()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Assets/	'"));
	EnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	EnemyMesh->SetupAttachment(RootComponent);
	RootComponent = EnemyMesh;
	velocidad = 200;
	movimiento = true;
	vidaabs = 10;

}

// Called when the game starts or when spawned
void AAbstrac::BeginPlay()
{
	Super::BeginPlay();

}

void AAbstrac::Movimiento(float DeltaTime)
{
	FVector NewLocation = GetActorLocation() + FVector(0.0f, movimiento ? velocidad : -velocidad, 0.0f) * DeltaTime;
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

// Called every frame
void AAbstrac::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Movimiento(DeltaTime);
}