#pragma once

#include "CoreMinimal.h"
#include "HttpModule.h"
#include "RivetHttpEndpoint.h"
#include "MatchmakerPlayersDisconnected.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakerPlayersDisconnectedRequest
{
    GENERATED_BODY()
    
    TSharedPtr<FJsonObject> ToJson() const;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString PlayerToken = TEXT("");
};

USTRUCT(BlueprintType)
struct FMatchmakerPlayersDisconnectedResponse
{
    GENERATED_BODY()
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakerPlayersDisconnectedDelegate, FMatchmakerPlayersDisconnectedResponse, Response);

UCLASS(Blueprintable)
class RIVET_API UMatchmakerPlayersDisconnectedEndpoint : public URivetHttpEndpoint
{
    GENERATED_BODY()

public:
    void HandleResponse(TSharedPtr<FJsonObject> ResponseJson) const override;

    UPROPERTY(BlueprintReadWrite)
    FMatchmakerPlayersDisconnectedDelegate OnSuccess;
};