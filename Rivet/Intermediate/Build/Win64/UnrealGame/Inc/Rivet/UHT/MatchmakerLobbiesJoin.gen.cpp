// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rivet/Public/MatchmakerLobbiesJoin.h"
#include "Rivet/Public/MatchmakerCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakerLobbiesJoin() {}
// Cross Module References
	RIVET_API UClass* Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint();
	RIVET_API UClass* Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_NoRegister();
	RIVET_API UClass* Z_Construct_UClass_URivetHttpEndpoint();
	RIVET_API UFunction* Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerJoinLobby();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerJoinPlayer();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerJoinPort();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse();
	UPackage* Z_Construct_UPackage__Script_Rivet();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinRequest;
class UScriptStruct* FMatchmakerLobbiesJoinRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest, (UObject*)Z_Construct_UPackage__Script_Rivet(), TEXT("MatchmakerLobbiesJoinRequest"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinRequest.OuterSingleton;
}
template<> RIVET_API UScriptStruct* StaticStruct<FMatchmakerLobbiesJoinRequest>()
{
	return FMatchmakerLobbiesJoinRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LobbyId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesJoin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerLobbiesJoinRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics::NewProp_LobbyId_MetaData[] = {
		{ "Category", "MatchmakerLobbiesJoinRequest" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesJoin.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerLobbiesJoinRequest, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics::NewProp_LobbyId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics::NewProp_LobbyId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
		nullptr,
		&NewStructOps,
		"MatchmakerLobbiesJoinRequest",
		sizeof(FMatchmakerLobbiesJoinRequest),
		alignof(FMatchmakerLobbiesJoinRequest),
		Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinRequest.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinResponse;
class UScriptStruct* FMatchmakerLobbiesJoinResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse, (UObject*)Z_Construct_UPackage__Script_Rivet(), TEXT("MatchmakerLobbiesJoinResponse"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinResponse.OuterSingleton;
}
template<> RIVET_API UScriptStruct* StaticStruct<FMatchmakerLobbiesJoinResponse>()
{
	return FMatchmakerLobbiesJoinResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesJoin.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerLobbiesJoinResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Lobby_MetaData[] = {
		{ "Category", "MatchmakerLobbiesJoinResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesJoin.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerLobbiesJoinResponse, Lobby), Z_Construct_UScriptStruct_FMatchmakerJoinLobby, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Lobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Lobby_MetaData)) }; // 735720133
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Ports_ValueProp = { "Ports", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMatchmakerJoinPort, METADATA_PARAMS(nullptr, 0) }; // 2486083397
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Ports_Key_KeyProp = { "Ports_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Ports_MetaData[] = {
		{ "Category", "MatchmakerLobbiesJoinResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesJoin.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Ports = { "Ports", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerLobbiesJoinResponse, Ports), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Ports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Ports_MetaData)) }; // 2486083397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "MatchmakerLobbiesJoinResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesJoin.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerLobbiesJoinResponse, Player), Z_Construct_UScriptStruct_FMatchmakerJoinPlayer, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Player_MetaData)) }; // 909540124
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Lobby,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Ports_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Ports_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Ports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewProp_Player,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
		nullptr,
		&NewStructOps,
		"MatchmakerLobbiesJoinResponse",
		sizeof(FMatchmakerLobbiesJoinResponse),
		alignof(FMatchmakerLobbiesJoinResponse),
		Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinResponse.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature_Statics
	{
		struct _Script_Rivet_eventMatchmakerLobbiesJoinDelegate_Parms
		{
			FMatchmakerLobbiesJoinResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Rivet_eventMatchmakerLobbiesJoinDelegate_Parms, Response), Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse, METADATA_PARAMS(nullptr, 0) }; // 2562328086
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesJoin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rivet, nullptr, "MatchmakerLobbiesJoinDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature_Statics::_Script_Rivet_eventMatchmakerLobbiesJoinDelegate_Parms), Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMatchmakerLobbiesJoinDelegate_DelegateWrapper(const FScriptDelegate& MatchmakerLobbiesJoinDelegate, FMatchmakerLobbiesJoinResponse Response)
{
	struct _Script_Rivet_eventMatchmakerLobbiesJoinDelegate_Parms
	{
		FMatchmakerLobbiesJoinResponse Response;
	};
	_Script_Rivet_eventMatchmakerLobbiesJoinDelegate_Parms Parms;
	Parms.Response=Response;
	MatchmakerLobbiesJoinDelegate.ProcessDelegate<UObject>(&Parms);
}
	void UMatchmakerLobbiesJoinEndpoint::StaticRegisterNativesUMatchmakerLobbiesJoinEndpoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMatchmakerLobbiesJoinEndpoint);
	UClass* Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_NoRegister()
	{
		return UMatchmakerLobbiesJoinEndpoint::StaticClass();
	}
	struct Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics
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
	UObject* (*const Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URivetHttpEndpoint,
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MatchmakerLobbiesJoin.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesJoin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Category", "MatchmakerLobbiesJoinEndpoint" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesJoin.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMatchmakerLobbiesJoinEndpoint, OnSuccess), Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesJoinDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics::NewProp_OnSuccess_MetaData)) }; // 4257667757
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchmakerLobbiesJoinEndpoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics::ClassParams = {
		&UMatchmakerLobbiesJoinEndpoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint()
	{
		if (!Z_Registration_Info_UClass_UMatchmakerLobbiesJoinEndpoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMatchmakerLobbiesJoinEndpoint.OuterSingleton, Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMatchmakerLobbiesJoinEndpoint.OuterSingleton;
	}
	template<> RIVET_API UClass* StaticClass<UMatchmakerLobbiesJoinEndpoint>()
	{
		return UMatchmakerLobbiesJoinEndpoint::StaticClass();
	}
	UMatchmakerLobbiesJoinEndpoint::UMatchmakerLobbiesJoinEndpoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchmakerLobbiesJoinEndpoint);
	UMatchmakerLobbiesJoinEndpoint::~UMatchmakerLobbiesJoinEndpoint() {}
	struct Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesJoin_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesJoin_h_Statics::ScriptStructInfo[] = {
		{ FMatchmakerLobbiesJoinRequest::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinRequest_Statics::NewStructOps, TEXT("MatchmakerLobbiesJoinRequest"), &Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerLobbiesJoinRequest), 3851576664U) },
		{ FMatchmakerLobbiesJoinResponse::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerLobbiesJoinResponse_Statics::NewStructOps, TEXT("MatchmakerLobbiesJoinResponse"), &Z_Registration_Info_UScriptStruct_MatchmakerLobbiesJoinResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerLobbiesJoinResponse), 2562328086U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesJoin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMatchmakerLobbiesJoinEndpoint, UMatchmakerLobbiesJoinEndpoint::StaticClass, TEXT("UMatchmakerLobbiesJoinEndpoint"), &Z_Registration_Info_UClass_UMatchmakerLobbiesJoinEndpoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMatchmakerLobbiesJoinEndpoint), 3795304960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesJoin_h_2845153549(TEXT("/Script/Rivet"),
		Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesJoin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesJoin_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesJoin_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesJoin_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
