#include "MatchmakerPlayersConnected.h"
#include "JsonObjectConverter.h"

TSharedPtr<FJsonObject> FMatchmakerPlayersConnectedRequest::ToJson() const
{
    TSharedPtr<FJsonObject> Req = MakeShareable(new FJsonObject);
    Req->SetStringField(TEXT("player_token"), PlayerToken);
    return Req;
}

void UMatchmakerPlayersConnectedEndpoint::HandleResponse(TSharedPtr<FJsonObject> ResponseJson) const
{
    FMatchmakerPlayersConnectedResponse Res;
    OnSuccess.ExecuteIfBound(Res);
}
