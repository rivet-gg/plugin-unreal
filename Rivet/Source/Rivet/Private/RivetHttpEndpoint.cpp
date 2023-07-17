#include "RivetHttpEndpoint.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "JsonObjectConverter.h"


void URivetHttpEndpoint::ProcessRequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSuccess) const
{
    // Validate request went through
    if (!bSuccess || !HttpResponse.IsValid())
    {
        if (!bSuccess) UE_LOG(LogTemp, Error, TEXT("Request failed."));
        if (!HttpResponse.IsValid()) UE_LOG(LogTemp, Error, TEXT("Response invalid."));

        FRivetErrorResponse Response;
        OnFailure.ExecuteIfBound(Response);

        return;
    }

    // Validate status
    FString ResponseBody = HttpResponse->GetContentAsString();
    if (!EHttpResponseCodes::IsOk(HttpResponse->GetResponseCode()))
    {
        UE_LOG(LogTemp, Error, TEXT("Request status not ok: %d\n%s"), HttpResponse->GetResponseCode(), *ResponseBody);

        FRivetErrorResponse Response;
        Response.StatusCode = HttpResponse->GetResponseCode();
        Response.ResponseBody = ResponseBody;
        OnFailure.ExecuteIfBound(Response);

        return;
    }

    // Parse response
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseBody);
    TSharedPtr<FJsonObject> JsonObject;
    if (!FJsonSerializer::Deserialize(Reader, JsonObject))
    {
        UE_LOG(LogTemp, Error, TEXT("Request returned inalid JSON\n%s"), *ResponseBody);

        FRivetErrorResponse Response;
        Response.StatusCode = HttpResponse->GetResponseCode();
        Response.ResponseBody = ResponseBody;
        OnFailure.ExecuteIfBound(Response);
        
        return;
    }

    // Response succeeded
    UE_LOG(LogTemp, Warning, TEXT("Received succeeded:\n%s"), *ResponseBody);
    HandleResponse(JsonObject);
}
