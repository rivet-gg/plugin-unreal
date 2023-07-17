#pragma once

#include "CoreMinimal.h"
#include "MatchmakerPlayersConnected.h"
#include "MatchmakerPlayersDisconnected.h"
#include "RivetHttpEndpoint.h"
#include "RivetPlayer.generated.h"

UCLASS()
class RIVET_API URivetPlayer : public UObject
{
	GENERATED_BODY()

public:
	int32 PlayerId;
	TWeakObjectPtr<APlayerController> PlayerController;

	FString PlayerToken;

	UFUNCTION()
	void OnPlayerConnectedSuccess(FMatchmakerPlayersConnectedResponse Response);
	UFUNCTION()
	void OnPlayerConnectedFailure(FRivetErrorResponse Error);

	UFUNCTION()
	void OnPlayerDisconnectedSuccess(FMatchmakerPlayersDisconnectedResponse Response);
	UFUNCTION()
	void OnPlayerDisconnectedFailure(FRivetErrorResponse Error);
};
