#pragma once

#include "CoreMinimal.h"
#include "HttpModule.h"
#include "RivetHttpEndpoint.generated.h"

USTRUCT(BlueprintType)
struct FRivetErrorResponse
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    int32 StatusCode = 0;

    UPROPERTY(BlueprintReadOnly)
    FString ResponseBody = TEXT("");
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FRivetHttpRequestFailDelegate, FRivetErrorResponse, Error);
UCLASS(Abstract)
class RIVET_API URivetHttpEndpoint : public UObject
{
    GENERATED_BODY()
    
public:
    UPROPERTY(BlueprintReadWrite)
    FRivetHttpRequestFailDelegate OnFailure;

// === Override ===
public:
    virtual void HandleResponse(TSharedPtr<FJsonObject> ResponseJson) const { checkf(false, TEXT("HandleResponse() is not implemented!")); };

// === Helpers ===
public:
    void ProcessRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess) const;
};