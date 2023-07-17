#pragma once

#include "CoreMinimal.h"
#include "HttpModule.h"
#include "MatchmakerCommon.generated.h"

// === Matchmaker.Lobbies ===
USTRUCT(BlueprintType)
struct FMatchmakerJoinLobby
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FString LobbyId = TEXT("");
};

USTRUCT(BlueprintType)
struct FMatchmakerJoinPortRange
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    int32 Min = 0;

    UPROPERTY(BlueprintReadOnly)
    int32 Max = 0;
};

USTRUCT(BlueprintType)
struct FMatchmakerJoinPort
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FString Host = TEXT("");

    UPROPERTY(BlueprintReadOnly)
    FString Hostname = TEXT("");

    UPROPERTY(BlueprintReadOnly)
    int32 Port = 0;

    UPROPERTY(BlueprintReadOnly)
    FMatchmakerJoinPortRange PortRange;

    UPROPERTY(BlueprintReadOnly)
    bool IsTls = false;
};

USTRUCT(BlueprintType)
struct FMatchmakerJoinPlayer
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FString Token = TEXT("");
};