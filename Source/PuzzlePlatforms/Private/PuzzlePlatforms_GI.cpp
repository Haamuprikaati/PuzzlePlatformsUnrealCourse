// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzlePlatforms_GI.h"

UPuzzlePlatforms_GI::UPuzzlePlatforms_GI(const FObjectInitializer& ObjectInitializer)
{

	UE_LOG(LogTemp, Warning, TEXT("GI Contructor"))
}

void UPuzzlePlatforms_GI::Init()
{
	Super::Init();

	UE_LOG(LogTemp, Warning, TEXT("GI Init"))

}
