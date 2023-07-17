// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rivet/Public/MatchmakerLobbiesFind.h"
#include "Rivet/Public/MatchmakerCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakerLobbiesFind() {}
// Cross Module References
	RIVET_API UClass* Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint();
	RIVET_API UClass* Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_NoRegister();
	RIVET_API UClass* Z_Construct_UClass_URivetHttpEndpoint();
	RIVET_API UFunction* Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerJoinLobby();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerJoinPlayer();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerJoinPort();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse();
	UPackage* Z_Construct_UPackage__Script_Rivet();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindRequest;
class UScriptStruct* FMatchmakerLobbiesFindRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest, (UObject*)Z_Construct_UPackage__Script_Rivet(), TEXT("MatchmakerLobbiesFindRequest"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindRequest.OuterSingleton;
}
template<> RIVET_API UScriptStruct* StaticStruct<FMatchmakerLobbiesFindRequest>()
{
	return FMatchmakerLobbiesFindRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameModes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameModes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameModes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Regions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Regions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Regions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreventAutoCreateLobby_MetaData[];
#endif
		static void NewProp_PreventAutoCreateLobby_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PreventAutoCreateLobby;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesFind.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerLobbiesFindRequest>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_GameModes_Inner = { "GameModes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_GameModes_MetaData[] = {
		{ "Category", "MatchmakerLobbiesFindRequest" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesFind.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_GameModes = { "GameModes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerLobbiesFindRequest, GameModes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_GameModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_GameModes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_Regions_Inner = { "Regions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_Regions_MetaData[] = {
		{ "Category", "MatchmakerLobbiesFindRequest" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesFind.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_Regions = { "Regions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerLobbiesFindRequest, Regions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_Regions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_Regions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_PreventAutoCreateLobby_MetaData[] = {
		{ "Category", "MatchmakerLobbiesFindRequest" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesFind.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_PreventAutoCreateLobby_SetBit(void* Obj)
	{
		((FMatchmakerLobbiesFindRequest*)Obj)->PreventAutoCreateLobby = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_PreventAutoCreateLobby = { "PreventAutoCreateLobby", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchmakerLobbiesFindRequest), &Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_PreventAutoCreateLobby_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_PreventAutoCreateLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_PreventAutoCreateLobby_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_GameModes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_GameModes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_Regions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_Regions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewProp_PreventAutoCreateLobby,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
		nullptr,
		&NewStructOps,
		"MatchmakerLobbiesFindRequest",
		sizeof(FMatchmakerLobbiesFindRequest),
		alignof(FMatchmakerLobbiesFindRequest),
		Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindRequest.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindResponse;
class UScriptStruct* FMatchmakerLobbiesFindResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse, (UObject*)Z_Construct_UPackage__Script_Rivet(), TEXT("MatchmakerLobbiesFindResponse"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindResponse.OuterSingleton;
}
template<> RIVET_API UScriptStruct* StaticStruct<FMatchmakerLobbiesFindResponse>()
{
	return FMatchmakerLobbiesFindResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lobby_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Lobby;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ports_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Ports_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ports_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Ports;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesFind.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerLobbiesFindResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Lobby_MetaData[] = {
		{ "Category", "MatchmakerLobbiesFindResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesFind.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerLobbiesFindResponse, Lobby), Z_Construct_UScriptStruct_FMatchmakerJoinLobby, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Lobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Lobby_MetaData)) }; // 735720133
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Ports_ValueProp = { "Ports", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMatchmakerJoinPort, METADATA_PARAMS(nullptr, 0) }; // 2486083397
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Ports_Key_KeyProp = { "Ports_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Ports_MetaData[] = {
		{ "Category", "MatchmakerLobbiesFindResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesFind.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Ports = { "Ports", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerLobbiesFindResponse, Ports), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Ports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Ports_MetaData)) }; // 2486083397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "MatchmakerLobbiesFindResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesFind.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerLobbiesFindResponse, Player), Z_Construct_UScriptStruct_FMatchmakerJoinPlayer, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Player_MetaData)) }; // 909540124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Lobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Ports_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Ports_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Ports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewProp_Player,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
		nullptr,
		&NewStructOps,
		"MatchmakerLobbiesFindResponse",
		sizeof(FMatchmakerLobbiesFindResponse),
		alignof(FMatchmakerLobbiesFindResponse),
		Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindResponse.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature_Statics
	{
		struct _Script_Rivet_eventMatchmakerLobbiesFindDelegate_Parms
		{
			FMatchmakerLobbiesFindResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Rivet_eventMatchmakerLobbiesFindDelegate_Parms, Response), Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse, METADATA_PARAMS(nullptr, 0) }; // 547729057
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesFind.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rivet, nullptr, "MatchmakerLobbiesFindDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature_Statics::_Script_Rivet_eventMatchmakerLobbiesFindDelegate_Parms), Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMatchmakerLobbiesFindDelegate_DelegateWrapper(const FScriptDelegate& MatchmakerLobbiesFindDelegate, FMatchmakerLobbiesFindResponse Response)
{
	struct _Script_Rivet_eventMatchmakerLobbiesFindDelegate_Parms
	{
		FMatchmakerLobbiesFindResponse Response;
	};
	_Script_Rivet_eventMatchmakerLobbiesFindDelegate_Parms Parms;
	Parms.Response=Response;
	MatchmakerLobbiesFindDelegate.ProcessDelegate<UObject>(&Parms);
}
	void UMatchmakerLobbiesFindEndpoint::StaticRegisterNativesUMatchmakerLobbiesFindEndpoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMatchmakerLobbiesFindEndpoint);
	UClass* Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_NoRegister()
	{
		return UMatchmakerLobbiesFindEndpoint::StaticClass();
	}
	struct Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URivetHttpEndpoint,
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MatchmakerLobbiesFind.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesFind.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Category", "MatchmakerLobbiesFindEndpoint" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesFind.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMatchmakerLobbiesFindEndpoint, OnSuccess), Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesFindDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics::NewProp_OnSuccess_MetaData)) }; // 2517286646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchmakerLobbiesFindEndpoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics::ClassParams = {
		&UMatchmakerLobbiesFindEndpoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint()
	{
		if (!Z_Registration_Info_UClass_UMatchmakerLobbiesFindEndpoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMatchmakerLobbiesFindEndpoint.OuterSingleton, Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMatchmakerLobbiesFindEndpoint.OuterSingleton;
	}
	template<> RIVET_API UClass* StaticClass<UMatchmakerLobbiesFindEndpoint>()
	{
		return UMatchmakerLobbiesFindEndpoint::StaticClass();
	}
	UMatchmakerLobbiesFindEndpoint::UMatchmakerLobbiesFindEndpoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchmakerLobbiesFindEndpoint);
	UMatchmakerLobbiesFindEndpoint::~UMatchmakerLobbiesFindEndpoint() {}
	struct Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesFind_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesFind_h_Statics::ScriptStructInfo[] = {
		{ FMatchmakerLobbiesFindRequest::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerLobbiesFindRequest_Statics::NewStructOps, TEXT("MatchmakerLobbiesFindRequest"), &Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerLobbiesFindRequest), 782142023U) },
		{ FMatchmakerLobbiesFindResponse::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerLobbiesFindResponse_Statics::NewStructOps, TEXT("MatchmakerLobbiesFindResponse"), &Z_Registration_Info_UScriptStruct_MatchmakerLobbiesFindResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerLobbiesFindResponse), 547729057U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesFind_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMatchmakerLobbiesFindEndpoint, UMatchmakerLobbiesFindEndpoint::StaticClass, TEXT("UMatchmakerLobbiesFindEndpoint"), &Z_Registration_Info_UClass_UMatchmakerLobbiesFindEndpoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMatchmakerLobbiesFindEndpoint), 4074551228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesFind_h_2605118085(TEXT("/Script/Rivet"),
		Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesFind_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesFind_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesFind_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesFind_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
