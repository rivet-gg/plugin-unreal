#pragma once

#include "CoreMinimal.h"
#include "HttpModule.h"
#include "RivetHttpEndpoint.h"
#include "MatchmakerPlayersConnected.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakerPlayersConnectedRequest
{
    GENERATED_BODY()
    
    TSharedPtr<FJsonObject> ToJson() const;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString PlayerToken = TEXT("");
};

USTRUCT(BlueprintType)
struct FMatchmakerPlayersConnectedResponse
{
    GENERATED_BODY()
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakerPlayersConnectedDelegate, FMatchmakerPlayersConnectedResponse, Response);

UCLASS(Blueprintable)
class RIVET_API UMatchmakerPlayersConnectedEndpoint : public URivetHttpEndpoint
{
    GENERATED_BODY()

public:
    void HandleResponse(TSharedPtr<FJsonObject> ResponseJson) const override;

    UPROPERTY(BlueprintReadWrite)
    FMatchmakerPlayersConnectedDelegate OnSuccess;
};