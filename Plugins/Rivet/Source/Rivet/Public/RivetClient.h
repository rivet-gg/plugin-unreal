#pragma once

#include "CoreMinimal.h"
#include "HttpModule.h"
#include "RivetHttpEndpoint.h"
#include "MatchmakerLobbiesFind.h"
#include "MatchmakerLobbiesJoin.h"
#include "MatchmakerLobbiesReady.h"
#include "MatchmakerPlayersConnected.h"
#include "MatchmakerPlayersDisconnected.h"
#include "RivetClient.generated.h"

UCLASS(Blueprintable, Config=Game)
class RIVET_API URivetClient : public UObject
{
    GENERATED_BODY()

public:
    URivetClient();

    UPROPERTY(Config)
    FString DefaultToken;

    UPROPERTY(Config)
    FString EnvToken;
    
    UPROPERTY(BlueprintReadWrite)
    FString Token;

    FString GetToken() const
    {
        if (!Token.IsEmpty()) return Token;
        else if (!EnvToken.IsEmpty()) return EnvToken;
        else return DefaultToken;
    }

    UPROPERTY(Config)
    FString DefaultMatchmakerUrl;

    UPROPERTY(Config)
    FString EnvMatchmakerUrl;

    UPROPERTY()
    FString MatchmakerUrl;

    FString GetMatchmakerUrl() const
    {
        if (!MatchmakerUrl.IsEmpty()) return MatchmakerUrl;
        else if (!EnvMatchmakerUrl.IsEmpty()) return EnvMatchmakerUrl;
        else if (!DefaultMatchmakerUrl.IsEmpty()) return DefaultMatchmakerUrl;
        else return TEXT("https://api.rivet.gg/matchmaker");
    }
    
    FString BuildUrl(FString Url, FString Path) const;
    void SendRequest(FString Method, FString Service, FString Path, const URivetHttpEndpoint* Endpoint, TSharedPtr<FJsonObject> RequestJson) const;

public:
    UFUNCTION(BlueprintCallable, Category="Rivet|Matchmaker|Lobbies")
    static URivetClient* CreateRivetClient(FString RivetToken);

    UFUNCTION(BlueprintCallable, Category="Rivet|Matchmaker|Lobbies")
    void MatchmakerLobbiesFind(FMatchmakerLobbiesFindRequest Request, FMatchmakerLobbiesFindDelegate OnSuccess, FRivetHttpRequestFailDelegate OnFailure) const;

    UFUNCTION(BlueprintCallable, Category="Rivet|Matchmaker|Lobbies")
    void MatchmakerLobbiesJoin(FMatchmakerLobbiesJoinRequest Request, FMatchmakerLobbiesJoinDelegate OnSuccess, FRivetHttpRequestFailDelegate OnFailure) const;

    UFUNCTION(BlueprintCallable, Category="Rivet|Matchmaker|Lobbies")
    void MatchmakerLobbiesReady(FMatchmakerLobbiesReadyRequest Request, FMatchmakerLobbiesReadyDelegate OnSuccess, FRivetHttpRequestFailDelegate OnFailure) const;

    UFUNCTION(BlueprintCallable, Category="Rivet|Matchmaker|Players")
    void MatchmakerPlayersConnected(FMatchmakerPlayersConnectedRequest Request, FMatchmakerPlayersConnectedDelegate OnSuccess, FRivetHttpRequestFailDelegate OnFailure) const;

    UFUNCTION(BlueprintCallable, Category="Rivet|Matchmaker|Players")
    void MatchmakerPlayersDisconnected(FMatchmakerPlayersDisconnectedRequest Request, FMatchmakerPlayersDisconnectedDelegate OnSuccess, FRivetHttpRequestFailDelegate OnFailure) const;
};