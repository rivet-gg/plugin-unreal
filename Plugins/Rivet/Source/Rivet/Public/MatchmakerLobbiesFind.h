#pragma once

#include "CoreMinimal.h"
#include "HttpModule.h"
#include "RivetHttpEndpoint.h"
#include "MatchmakerCommon.h"
#include "MatchmakerLobbiesFind.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakerLobbiesFindRequest
{
    GENERATED_BODY()
    
    TSharedPtr<FJsonObject> ToJson() const;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> GameModes = {};

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> Regions;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool PreventAutoCreateLobby = false;
};

USTRUCT(BlueprintType)
struct FMatchmakerLobbiesFindResponse
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FMatchmakerJoinLobby Lobby;

    UPROPERTY(BlueprintReadOnly)
    TMap<FString, FMatchmakerJoinPort> Ports;

    UPROPERTY(BlueprintReadOnly)
    FMatchmakerJoinPlayer Player;
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakerLobbiesFindDelegate, FMatchmakerLobbiesFindResponse, Response);

UCLASS(Blueprintable)
class RIVET_API UMatchmakerLobbiesFindEndpoint : public URivetHttpEndpoint
{
    GENERATED_BODY()

public:
    void HandleResponse(TSharedPtr<FJsonObject> ResponseJson) const override;

    UPROPERTY(BlueprintReadWrite)
    FMatchmakerLobbiesFindDelegate OnSuccess;
};
