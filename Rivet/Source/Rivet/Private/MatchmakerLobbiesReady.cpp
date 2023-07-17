#include "MatchmakerLobbiesReady.h"
#include "JsonObjectConverter.h"

TSharedPtr<FJsonObject> FMatchmakerLobbiesReadyRequest::ToJson() const
{
    TSharedPtr<FJsonObject> Req = MakeShareable(new FJsonObject);
    return Req;
}

void UMatchmakerLobbiesReadyEndpoint::HandleResponse(TSharedPtr<FJsonObject> ResponseJson) const
{
    FMatchmakerLobbiesReadyResponse Res;
    OnSuccess.ExecuteIfBound(Res);
}
