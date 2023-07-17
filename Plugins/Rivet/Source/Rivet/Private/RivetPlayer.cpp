#include "RivetPlayer.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/GameSession.h"

void URivetPlayer::OnPlayerConnectedSuccess(FMatchmakerPlayersConnectedResponse Response)
{
	UE_LOG(LogTemp, Warning, TEXT("Player connected success"));
}

void URivetPlayer::OnPlayerConnectedFailure(FRivetErrorResponse Error)
{
	UE_LOG(LogTemp, Error, TEXT("Player connected fail"));

	// Validate player still exists
	if (PlayerController == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player controller garbage collected: %d %s"), PlayerId, *PlayerToken);
		return;
	}

	// Kick player
	auto GameMode = PlayerController->GetWorld()->GetAuthGameMode();
	const FText KickReason = FText::FromString("You were kicked from the game.");
	if (GameMode->GameSession->KickPlayer(&*PlayerController, KickReason))
	{
		UE_LOG(LogTemp, Warning, TEXT("Player kicked: %d %s"), PlayerId, *PlayerToken);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to kick player: %d %s"), PlayerId, *PlayerToken);
	}
}

void URivetPlayer::OnPlayerDisconnectedSuccess(FMatchmakerPlayersDisconnectedResponse Response)
{
	UE_LOG(LogTemp, Warning, TEXT("Player disconnected success"));
}

void URivetPlayer::OnPlayerDisconnectedFailure(FRivetErrorResponse Error)
{
	UE_LOG(LogTemp, Warning, TEXT("Player disconnected fail"));
}
