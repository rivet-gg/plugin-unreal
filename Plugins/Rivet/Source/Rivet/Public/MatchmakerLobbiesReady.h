#pragma once

#include "CoreMinimal.h"
#include "HttpModule.h"
#include "RivetHttpEndpoint.h"
#include "MatchmakerLobbiesReady.generated.h"

USTRUCT(BlueprintType)
struct FMatchmakerLobbiesReadyRequest
{
    GENERATED_BODY()
    
    TSharedPtr<FJsonObject> ToJson() const;
};

USTRUCT(BlueprintType)
struct FMatchmakerLobbiesReadyResponse
{
    GENERATED_BODY()
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FMatchmakerLobbiesReadyDelegate, FMatchmakerLobbiesReadyResponse, Response);

UCLASS(Blueprintable)
class RIVET_API UMatchmakerLobbiesReadyEndpoint : public URivetHttpEndpoint
{
    GENERATED_BODY()

public:
    void HandleResponse(TSharedPtr<FJsonObject> ResponseJson) const override;

    UPROPERTY(BlueprintReadWrite)
    FMatchmakerLobbiesReadyDelegate OnSuccess;
};