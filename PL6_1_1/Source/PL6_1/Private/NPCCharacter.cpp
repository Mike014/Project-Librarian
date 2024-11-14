// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ANPCCharacter::ANPCCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANPCCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void ANPCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPCCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANPCCharacter::ChangeMaterial(int32 MatIndex, UMaterialInstance* NewMat)
{
}

void ANPCCharacter::SetWalkSpeed(float NewSpeed)
{
	//	GetMovementComponent()->SetWalkSpeed(NewSpeed);
		//GetMove
}
