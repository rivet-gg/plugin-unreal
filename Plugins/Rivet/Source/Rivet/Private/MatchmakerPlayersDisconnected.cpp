#include "MatchmakerPlayersDisconnected.h"
#include "JsonObjectConverter.h"

TSharedPtr<FJsonObject> FMatchmakerPlayersDisconnectedRequest::ToJson() const
{
    TSharedPtr<FJsonObject> Req = MakeShareable(new FJsonObject);
    Req->SetStringField(TEXT("player_token"), PlayerToken);
    return Req;
}

void UMatchmakerPlayersDisconnectedEndpoint::HandleResponse(TSharedPtr<FJsonObject> ResponseJson) const
{
    FMatchmakerPlayersDisconnectedResponse Res;
    OnSuccess.ExecuteIfBound(Res);
}