// Fill out your copyright notice in the Description page of Project Settings.


#include "ABPlayerController.h"

void AABPlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	ABLOG_S(Warning);
}

void AABPlayerController::OnPossess(APawn* aPawn)
{
	ABLOG_S(Warning);
	Super::OnPossess(aPawn);
}

void AABPlayerController::BeginPlay()
{
	Super::BeginPlay();

	//FInputModeGameOnly InputMode;
	//SetInputMode(InputMode);
	//이거하면 Play 버튼 누른 뒤에 뷰포트 클릭안하고도 키가 먹는다는거같은데 
	//별차이가 없는거같으므로 넘어감.
}
