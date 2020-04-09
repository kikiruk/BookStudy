// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BookStudy.h" //�ٲ�
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
	virtual void BeginPlay() override; //UI �� �����ϰ� ���ӿ��� �Է� ��ȣ�� ���޵ǰ� �ϱ����� (?) ����
};
