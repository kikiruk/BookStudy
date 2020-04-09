// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BookStudy.h" //바꿈
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BOOKSTUDY_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void PostInitializeComponents() override;
	virtual void OnPossess(APawn* aPawn) override;

protected:
	virtual void BeginPlay() override; //UI 를 배제하고 게임에만 입력 신호가 전달되게 하기위해 (?) 선언
};
