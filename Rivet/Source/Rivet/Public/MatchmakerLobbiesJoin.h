#pragma once

#include "CoreMinimal.h"
#include "HttpModule.h"
#include "RivetHttpEndpoint.h"
#include "MatchmakerCommon.h"
#include "MatchmakerLobbiesJoin.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakerLobbiesJoinRequest
{
    GENERATED_BODY()
    
    TSharedPtr<FJsonObject> ToJson() const;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString LobbyId = TEXT("");
};

USTRUCT(BlueprintType)
struct FMatchmakerLobbiesJoinResponse
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FMatchmakerJoinLobby Lobby;

    UPROPERTY(BlueprintReadOnly)
    TMap<FString, FMatchmakerJoinPort> Ports;

    UPROPERTY(BlueprintReadOnly)
    FMatchmakerJoinPlayer Player;
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakerLobbiesJoinDelegate, FMatchmakerLobbiesJoinResponse, Response);

UCLASS(Blueprintable)
class RIVET_API UMatchmakerLobbiesJoinEndpoint : public URivetHttpEndpoint
{
    GENERATED_BODY()

public:
    void HandleResponse(TSharedPtr<FJsonObject> ResponseJson) const override;

    UPROPERTY(BlueprintReadWrite)
    FMatchmakerLobbiesJoinDelegate OnSuccess;
};
