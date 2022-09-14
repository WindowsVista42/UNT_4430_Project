// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UNT_4430_ProjectHUD.generated.h"

UCLASS()
class AUNT_4430_ProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUNT_4430_ProjectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

