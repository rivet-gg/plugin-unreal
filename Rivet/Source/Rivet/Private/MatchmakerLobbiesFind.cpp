#include "MatchmakerLobbiesFind.h"
#include "JsonObjectConverter.h"

TSharedPtr<FJsonObject> FMatchmakerLobbiesFindRequest::ToJson() const
{
    TSharedPtr<FJsonObject> Req = MakeShareable(new FJsonObject);

    TArray<TSharedPtr<FJsonValue>> GameModesJsonArray;
    for (const FString& GameMode : GameModes)
    {
        GameModesJsonArray.Add(MakeShared<FJsonValueString>(GameMode));
    }
    Req->SetArrayField(TEXT("game_modes"), GameModesJsonArray);

    TArray<TSharedPtr<FJsonValue>> RegionsJsonArray;
    for (const FString& Region : Regions)
    {
        RegionsJsonArray.Add(MakeShared<FJsonValueString>(Region));
    }
    if (!RegionsJsonArray.IsEmpty())
    {
        Req->SetArrayField(TEXT("regions"), RegionsJsonArray);
    }

    Req->SetBoolField(TEXT("prevent_auto_create_lobby"), PreventAutoCreateLobby);

    return Req;
}

void UMatchmakerLobbiesFindEndpoint::HandleResponse(TSharedPtr<FJsonObject> ResponseJson) const
{
    FMatchmakerLobbiesFindResponse Res;

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
