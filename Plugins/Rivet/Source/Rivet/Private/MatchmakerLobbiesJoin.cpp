#include "MatchmakerLobbiesJoin.h"

TSharedPtr<FJsonObject> FMatchmakerLobbiesJoinRequest::ToJson() const
{
    TSharedPtr<FJsonObject> Req = MakeShareable(new FJsonObject);
    Req->SetStringField(TEXT("lobby_id"), LobbyId);
    return Req;
}

void UMatchmakerLobbiesJoinEndpoint::HandleResponse(TSharedPtr<FJsonObject> ResponseJson) const
{
    FMatchmakerLobbiesJoinResponse Res;

    auto LobbyJson = ResponseJson->GetObjectField("lobby");
    Res.Lobby.LobbyId = LobbyJson->GetStringField("lobby_id");

    auto Ports = ResponseJson->GetObjectField("ports");
    for (const auto& Pair : Ports->Values)
    {
        auto PortJson = Pair.Value->AsObject();

        FMatchmakerJoinPort Port;
        Port.Host = PortJson->GetStringField("host");
        Port.Hostname = PortJson->GetStringField("hostname");
        PortJson->TryGetNumberField("port", Port.Port);

        const TSharedPtr<FJsonObject>* PortRangeJson;
        if (PortJson->TryGetObjectField("port_range", PortRangeJson))
        {
            FMatchmakerJoinPortRange PortRange;
            (*PortRangeJson)->TryGetNumberField("min", PortRange.Min);
            (*PortRangeJson)->TryGetNumberField("max", PortRange.Max);
        }
        
        Port.IsTls = PortJson->GetBoolField("is_tls");

        Res.Ports.Add(Pair.Key, Port);
    }

    auto PlayerJson = ResponseJson->GetObjectField("player");
    Res.Player.Token = PlayerJson->GetStringField("token");

    OnSuccess.ExecuteIfBound(Res);
}