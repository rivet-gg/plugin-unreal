#include "RivetClient.h"

URivetClient::URivetClient()
{
    EnvToken = FPlatformMisc::GetEnvironmentVariable(TEXT("RIVET_TOKEN"));
    EnvMatchmakerUrl = FPlatformMisc::GetEnvironmentVariable(TEXT("RIVET_MATCHMAKER_API_URL"));
}

FString URivetClient::BuildUrl(FString Url, FString Path) const
{
    return Url + Path;
}

void URivetClient::SendRequest(FString Method, FString Url, FString Path, const URivetHttpEndpoint* Endpoint, TSharedPtr<FJsonObject> RequestJson) const
{
    auto EndpointUrl = BuildUrl(Url, Path);

    FString RequestBodyRaw;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBodyRaw);
    FJsonSerializer::Serialize(RequestJson.ToSharedRef(), Writer);

    UE_LOG(LogTemp, Display, TEXT("Rivet request: %s %s (%s)\n%s"), *Method, *EndpointUrl, *GetToken(), *RequestBodyRaw);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb(Method);
    HttpRequest->SetURL(EndpointUrl);
    HttpRequest->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + GetToken());
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    HttpRequest->SetHeader(TEXT("Accepts"), TEXT("application/json"));
    HttpRequest->SetContentAsString(RequestBodyRaw);
    HttpRequest->OnProcessRequestComplete().BindUObject(Endpoint, &URivetHttpEndpoint::ProcessRequestComplete);
    HttpRequest->ProcessRequest();
}

URivetClient* URivetClient::CreateRivetClient(FString RivetToken)
{
    auto Client = NewObject<URivetClient>();
    if (!RivetToken.IsEmpty()) Client->Token = RivetToken;
    return Client;
}

// === Endpoints ===
void URivetClient::MatchmakerLobbiesFind(FMatchmakerLobbiesFindRequest Request, FMatchmakerLobbiesFindDelegate OnSuccess, FRivetHttpRequestFailDelegate OnFailure) const
{
    UMatchmakerLobbiesFindEndpoint* Endpoint = NewObject<UMatchmakerLobbiesFindEndpoint>();
    Endpoint->OnSuccess = OnSuccess;
    Endpoint->OnFailure = OnFailure;
    SendRequest("POST", GetMatchmakerUrl(), "/lobbies/find", Endpoint, Request.ToJson());
};

void URivetClient::MatchmakerLobbiesJoin(FMatchmakerLobbiesJoinRequest Request, FMatchmakerLobbiesJoinDelegate OnSuccess, FRivetHttpRequestFailDelegate OnFailure) const
{
    UMatchmakerLobbiesJoinEndpoint* Endpoint = NewObject<UMatchmakerLobbiesJoinEndpoint>();
    Endpoint->OnSuccess = OnSuccess;
    Endpoint->OnFailure = OnFailure;
    SendRequest("POST", GetMatchmakerUrl(), "/lobbies/join", Endpoint, Request.ToJson());
};

void URivetClient::MatchmakerLobbiesReady(FMatchmakerLobbiesReadyRequest Request, FMatchmakerLobbiesReadyDelegate OnSuccess, FRivetHttpRequestFailDelegate OnFailure) const
{
    UMatchmakerLobbiesReadyEndpoint* Endpoint = NewObject<UMatchmakerLobbiesReadyEndpoint>();
    Endpoint->OnSuccess = OnSuccess;
    Endpoint->OnFailure = OnFailure;
    SendRequest("POST", GetMatchmakerUrl(), "/lobbies/ready", Endpoint, Request.ToJson());
};

void URivetClient::MatchmakerPlayersConnected(FMatchmakerPlayersConnectedRequest Request, FMatchmakerPlayersConnectedDelegate OnSuccess, FRivetHttpRequestFailDelegate OnFailure) const
{
    UMatchmakerPlayersConnectedEndpoint* Endpoint = NewObject<UMatchmakerPlayersConnectedEndpoint>();
    Endpoint->OnSuccess = OnSuccess;
    Endpoint->OnFailure = OnFailure;
    SendRequest("POST", GetMatchmakerUrl(), "/players/connected", Endpoint, Request.ToJson());
};

void URivetClient::MatchmakerPlayersDisconnected(FMatchmakerPlayersDisconnectedRequest Request, FMatchmakerPlayersDisconnectedDelegate OnSuccess, FRivetHttpRequestFailDelegate OnFailure) const
{
    UMatchmakerPlayersDisconnectedEndpoint* Endpoint = NewObject<UMatchmakerPlayersDisconnectedEndpoint>();
    Endpoint->OnSuccess = OnSuccess;
    Endpoint->OnFailure = OnFailure;
    SendRequest("POST", GetMatchmakerUrl(), "/players/disconnected", Endpoint, Request.ToJson());
};
