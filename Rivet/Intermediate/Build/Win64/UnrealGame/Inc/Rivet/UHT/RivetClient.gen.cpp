// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rivet/Public/RivetClient.h"
#include "Rivet/Public/MatchmakerLobbiesFind.h"
#include "Rivet/Public/MatchmakerLobbiesJoin.h"
#include "Rivet/Public/MatchmakerLobbiesReady.h"
#include "Rivet/Public/MatchmakerPlayersConnected.h"
#include "Rivet/Public/MatchmakerPlayersDisconnected.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRivetClient() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RIVET_API UClass* Z_Construct_UClass_URivetClient();
	RIVET_API UClass* Z_Construct_UClass_URivetClient_NoRegister();
	RIVET_API UFunction* Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature();
	RIVET_API UFunction* Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature();
	RIVET_API UFunction* Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature();
	RIVET_API UFunction* Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature();
	RIVET_API UFunction* Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature();
	RIVET_API UFunction* Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyRequest();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest();
	UPackage* Z_Construct_UPackage__Script_Rivet();
// End Cross Module References
	DEFINE_FUNCTION(URivetClient::execMatchmakerPlayersDisconnected)
	{
		P_GET_STRUCT(FMatchmakerPlayersDisconnectedRequest,Z_Param_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MatchmakerPlayersDisconnected(Z_Param_Request,FMatchmakerPlayersDisconnectedDelegate(Z_Param_OnSuccess),FRivetHttpRequestFailDelegate(Z_Param_OnFailure));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URivetClient::execMatchmakerPlayersConnected)
	{
		P_GET_STRUCT(FMatchmakerPlayersConnectedRequest,Z_Param_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MatchmakerPlayersConnected(Z_Param_Request,FMatchmakerPlayersConnectedDelegate(Z_Param_OnSuccess),FRivetHttpRequestFailDelegate(Z_Param_OnFailure));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URivetClient::execMatchmakerLobbiesReady)
	{
		P_GET_STRUCT(FMatchmakerLobbiesReadyRequest,Z_Param_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MatchmakerLobbiesReady(Z_Param_Request,FMatchmakerLobbiesReadyDelegate(Z_Param_OnSuccess),FRivetHttpRequestFailDelegate(Z_Param_OnFailure));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URivetClient::execMatchmakerLobbiesJoin)
	{
		P_GET_STRUCT(FMatchmakerLobbiesJoinRequest,Z_Param_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MatchmakerLobbiesJoin(Z_Param_Request,FMatchmakerLobbiesJoinDelegate(Z_Param_OnSuccess),FRivetHttpRequestFailDelegate(Z_Param_OnFailure));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URivetClient::execMatchmakerLobbiesFind)
	{
		P_GET_STRUCT(FMatchmakerLobbiesFindRequest,Z_Param_Request);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnSuccess);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnFailure);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MatchmakerLobbiesFind(Z_Param_Request,FMatchmakerLobbiesFindDelegate(Z_Param_OnSuccess),FRivetHttpRequestFailDelegate(Z_Param_OnFailure));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URivetClient::execCreateRivetClient)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RivetToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URivetClient**)Z_Param__Result=URivetClient::CreateRivetClient(Z_Param_RivetToken);
		P_NATIVE_END;
	}
	void URivetClient::StaticRegisterNativesURivetClient()
	{
		UClass* Class = URivetClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateRivetClient", &URivetClient::execCreateRivetClient },
			{ "MatchmakerLobbiesFind", &URivetClient::execMatchmakerLobbiesFind },
			{ "MatchmakerLobbiesJoin", &URivetClient::execMatchmakerLobbiesJoin },
			{ "MatchmakerLobbiesReady", &URivetClient::execMatchmakerLobbiesReady },
			{ "MatchmakerPlayersConnected", &URivetClient::execMatchmakerPlayersConnected },
			{ "MatchmakerPlayersDisconnected", &URivetClient::execMatchmakerPlayersDisconnected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URivetClient_CreateRivetClient_Statics
	{
		struct RivetClient_eventCreateRivetClient_Parms
		{
			FString RivetToken;
			URivetClient* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_RivetToken;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URivetClient_CreateRivetClient_Statics::NewProp_RivetToken = { "RivetToken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventCreateRivetClient_Parms, RivetToken), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URivetClient_CreateRivetClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventCreateRivetClient_Parms, ReturnValue), Z_Construct_UClass_URivetClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URivetClient_CreateRivetClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_CreateRivetClient_Statics::NewProp_RivetToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_CreateRivetClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URivetClient_CreateRivetClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rivet|Matchmaker|Lobbies" },
		{ "ModuleRelativePath", "Public/RivetClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URivetClient_CreateRivetClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URivetClient, nullptr, "CreateRivetClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_URivetClient_CreateRivetClient_Statics::RivetClient_eventCreateRivetClient_Parms), Z_Construct_UFunction_URivetClient_CreateRivetClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetClient_CreateRivetClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URivetClient_CreateRivetClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetClient_CreateRivetClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URivetClient_CreateRivetClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URivetClient_CreateRivetClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics
	{
		struct RivetClient_eventMatchmakerLobbiesFind_Parms
		{
			FMatchmakerLobbiesFindRequest Request;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnFailure;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventMatchmakerLobbiesFind_Parms, Request), Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest, METADATA_PARAMS(nullptr, 0) }; // 782142023
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventMatchmakerLobbiesFind_Parms, OnSuccess), Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2517286646
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventMatchmakerLobbiesFind_Parms, OnFailure), Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 940752575
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics::NewProp_OnFailure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rivet|Matchmaker|Lobbies" },
		{ "ModuleRelativePath", "Public/RivetClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URivetClient, nullptr, "MatchmakerLobbiesFind", nullptr, nullptr, sizeof(Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics::RivetClient_eventMatchmakerLobbiesFind_Parms), Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics
	{
		struct RivetClient_eventMatchmakerLobbiesJoin_Parms
		{
			FMatchmakerLobbiesJoinRequest Request;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnFailure;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventMatchmakerLobbiesJoin_Parms, Request), Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest, METADATA_PARAMS(nullptr, 0) }; // 3851576664
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventMatchmakerLobbiesJoin_Parms, OnSuccess), Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 4257667757
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventMatchmakerLobbiesJoin_Parms, OnFailure), Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 940752575
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics::NewProp_OnFailure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rivet|Matchmaker|Lobbies" },
		{ "ModuleRelativePath", "Public/RivetClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URivetClient, nullptr, "MatchmakerLobbiesJoin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics::RivetClient_eventMatchmakerLobbiesJoin_Parms), Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics
	{
		struct RivetClient_eventMatchmakerLobbiesReady_Parms
		{
			FMatchmakerLobbiesReadyRequest Request;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnFailure;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventMatchmakerLobbiesReady_Parms, Request), Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyRequest, METADATA_PARAMS(nullptr, 0) }; // 1099657557
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventMatchmakerLobbiesReady_Parms, OnSuccess), Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 93646964
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventMatchmakerLobbiesReady_Parms, OnFailure), Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 940752575
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics::NewProp_OnFailure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rivet|Matchmaker|Lobbies" },
		{ "ModuleRelativePath", "Public/RivetClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URivetClient, nullptr, "MatchmakerLobbiesReady", nullptr, nullptr, sizeof(Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics::RivetClient_eventMatchmakerLobbiesReady_Parms), Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics
	{
		struct RivetClient_eventMatchmakerPlayersConnected_Parms
		{
			FMatchmakerPlayersConnectedRequest Request;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnFailure;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventMatchmakerPlayersConnected_Parms, Request), Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest, METADATA_PARAMS(nullptr, 0) }; // 1331045971
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventMatchmakerPlayersConnected_Parms, OnSuccess), Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 901693569
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventMatchmakerPlayersConnected_Parms, OnFailure), Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 940752575
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics::NewProp_OnFailure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rivet|Matchmaker|Players" },
		{ "ModuleRelativePath", "Public/RivetClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URivetClient, nullptr, "MatchmakerPlayersConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics::RivetClient_eventMatchmakerPlayersConnected_Parms), Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics
	{
		struct RivetClient_eventMatchmakerPlayersDisconnected_Parms
		{
			FMatchmakerPlayersDisconnectedRequest Request;
			FScriptDelegate OnSuccess;
			FScriptDelegate OnFailure;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventMatchmakerPlayersDisconnected_Parms, Request), Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest, METADATA_PARAMS(nullptr, 0) }; // 4193333483
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventMatchmakerPlayersDisconnected_Parms, OnSuccess), Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3399799681
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetClient_eventMatchmakerPlayersDisconnected_Parms, OnFailure), Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 940752575
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics::NewProp_OnFailure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rivet|Matchmaker|Players" },
		{ "ModuleRelativePath", "Public/RivetClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URivetClient, nullptr, "MatchmakerPlayersDisconnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics::RivetClient_eventMatchmakerPlayersDisconnected_Parms), Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URivetClient);
	UClass* Z_Construct_UClass_URivetClient_NoRegister()
	{
		return URivetClient::StaticClass();
	}
	struct Z_Construct_UClass_URivetClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EnvToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMatchmakerUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultMatchmakerUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvMatchmakerUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EnvMatchmakerUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchmakerUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MatchmakerUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URivetClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URivetClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URivetClient_CreateRivetClient, "CreateRivetClient" }, // 487392679
		{ &Z_Construct_UFunction_URivetClient_MatchmakerLobbiesFind, "MatchmakerLobbiesFind" }, // 210738319
		{ &Z_Construct_UFunction_URivetClient_MatchmakerLobbiesJoin, "MatchmakerLobbiesJoin" }, // 1319618087
		{ &Z_Construct_UFunction_URivetClient_MatchmakerLobbiesReady, "MatchmakerLobbiesReady" }, // 2076962870
		{ &Z_Construct_UFunction_URivetClient_MatchmakerPlayersConnected, "MatchmakerPlayersConnected" }, // 496515820
		{ &Z_Construct_UFunction_URivetClient_MatchmakerPlayersDisconnected, "MatchmakerPlayersDisconnected" }, // 1729478337
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivetClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RivetClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RivetClient.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivetClient_Statics::NewProp_DefaultToken_MetaData[] = {
		{ "ModuleRelativePath", "Public/RivetClient.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URivetClient_Statics::NewProp_DefaultToken = { "DefaultToken", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivetClient, DefaultToken), METADATA_PARAMS(Z_Construct_UClass_URivetClient_Statics::NewProp_DefaultToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivetClient_Statics::NewProp_DefaultToken_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivetClient_Statics::NewProp_EnvToken_MetaData[] = {
		{ "ModuleRelativePath", "Public/RivetClient.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URivetClient_Statics::NewProp_EnvToken = { "EnvToken", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivetClient, EnvToken), METADATA_PARAMS(Z_Construct_UClass_URivetClient_Statics::NewProp_EnvToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivetClient_Statics::NewProp_EnvToken_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivetClient_Statics::NewProp_Token_MetaData[] = {
		{ "Category", "RivetClient" },
		{ "ModuleRelativePath", "Public/RivetClient.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URivetClient_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivetClient, Token), METADATA_PARAMS(Z_Construct_UClass_URivetClient_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivetClient_Statics::NewProp_Token_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivetClient_Statics::NewProp_DefaultMatchmakerUrl_MetaData[] = {
		{ "ModuleRelativePath", "Public/RivetClient.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URivetClient_Statics::NewProp_DefaultMatchmakerUrl = { "DefaultMatchmakerUrl", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivetClient, DefaultMatchmakerUrl), METADATA_PARAMS(Z_Construct_UClass_URivetClient_Statics::NewProp_DefaultMatchmakerUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivetClient_Statics::NewProp_DefaultMatchmakerUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivetClient_Statics::NewProp_EnvMatchmakerUrl_MetaData[] = {
		{ "ModuleRelativePath", "Public/RivetClient.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URivetClient_Statics::NewProp_EnvMatchmakerUrl = { "EnvMatchmakerUrl", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivetClient, EnvMatchmakerUrl), METADATA_PARAMS(Z_Construct_UClass_URivetClient_Statics::NewProp_EnvMatchmakerUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivetClient_Statics::NewProp_EnvMatchmakerUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivetClient_Statics::NewProp_MatchmakerUrl_MetaData[] = {
		{ "ModuleRelativePath", "Public/RivetClient.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URivetClient_Statics::NewProp_MatchmakerUrl = { "MatchmakerUrl", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivetClient, MatchmakerUrl), METADATA_PARAMS(Z_Construct_UClass_URivetClient_Statics::NewProp_MatchmakerUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivetClient_Statics::NewProp_MatchmakerUrl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URivetClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivetClient_Statics::NewProp_DefaultToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivetClient_Statics::NewProp_EnvToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivetClient_Statics::NewProp_Token,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivetClient_Statics::NewProp_DefaultMatchmakerUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivetClient_Statics::NewProp_EnvMatchmakerUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivetClient_Statics::NewProp_MatchmakerUrl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URivetClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URivetClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URivetClient_Statics::ClassParams = {
		&URivetClient::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URivetClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URivetClient_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URivetClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URivetClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URivetClient()
	{
		if (!Z_Registration_Info_UClass_URivetClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URivetClient.OuterSingleton, Z_Construct_UClass_URivetClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URivetClient.OuterSingleton;
	}
	template<> RIVET_API UClass* StaticClass<URivetClient>()
	{
		return URivetClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URivetClient);
	URivetClient::~URivetClient() {}
	struct Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URivetClient, URivetClient::StaticClass, TEXT("URivetClient"), &Z_Registration_Info_UClass_URivetClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URivetClient), 1030146676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_3317798946(TEXT("/Script/Rivet"),
		Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
