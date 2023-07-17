// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rivet/Public/MatchmakerCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakerCommon() {}
// Cross Module References
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerJoinLobby();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerJoinPlayer();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerJoinPort();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerJoinPortRange();
	UPackage* Z_Construct_UPackage__Script_Rivet();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerJoinLobby;
class UScriptStruct* FMatchmakerJoinLobby::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerJoinLobby.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerJoinLobby.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerJoinLobby, (UObject*)Z_Construct_UPackage__Script_Rivet(), TEXT("MatchmakerJoinLobby"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerJoinLobby.OuterSingleton;
}
template<> RIVET_API UScriptStruct* StaticStruct<FMatchmakerJoinLobby>()
{
	return FMatchmakerJoinLobby::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// === Matchmaker.Lobbies ===\n" },
		{ "ModuleRelativePath", "Public/MatchmakerCommon.h" },
		{ "ToolTip", "=== Matchmaker.Lobbies ===" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerJoinLobby>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics::NewProp_LobbyId_MetaData[] = {
		{ "Category", "MatchmakerJoinLobby" },
		{ "ModuleRelativePath", "Public/MatchmakerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerJoinLobby, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics::NewProp_LobbyId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics::NewProp_LobbyId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
		nullptr,
		&NewStructOps,
		"MatchmakerJoinLobby",
		sizeof(FMatchmakerJoinLobby),
		alignof(FMatchmakerJoinLobby),
		Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerJoinLobby()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerJoinLobby.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerJoinLobby.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerJoinLobby.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerJoinPortRange;
class UScriptStruct* FMatchmakerJoinPortRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerJoinPortRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerJoinPortRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerJoinPortRange, (UObject*)Z_Construct_UPackage__Script_Rivet(), TEXT("MatchmakerJoinPortRange"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerJoinPortRange.OuterSingleton;
}
template<> RIVET_API UScriptStruct* StaticStruct<FMatchmakerJoinPortRange>()
{
	return FMatchmakerJoinPortRange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerJoinPortRange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "MatchmakerJoinPortRange" },
		{ "ModuleRelativePath", "Public/MatchmakerCommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerJoinPortRange, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "MatchmakerJoinPortRange" },
		{ "ModuleRelativePath", "Public/MatchmakerCommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerJoinPortRange, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::NewProp_Max,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
		nullptr,
		&NewStructOps,
		"MatchmakerJoinPortRange",
		sizeof(FMatchmakerJoinPortRange),
		alignof(FMatchmakerJoinPortRange),
		Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerJoinPortRange()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerJoinPortRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerJoinPortRange.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerJoinPortRange.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerJoinPort;
class UScriptStruct* FMatchmakerJoinPort::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerJoinPort.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerJoinPort.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerJoinPort, (UObject*)Z_Construct_UPackage__Script_Rivet(), TEXT("MatchmakerJoinPort"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerJoinPort.OuterSingleton;
}
template<> RIVET_API UScriptStruct* StaticStruct<FMatchmakerJoinPort>()
{
	return FMatchmakerJoinPort::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hostname_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Hostname;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PortRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsTls_MetaData[];
#endif
		static void NewProp_IsTls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTls;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerJoinPort>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_Host_MetaData[] = {
		{ "Category", "MatchmakerJoinPort" },
		{ "ModuleRelativePath", "Public/MatchmakerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerJoinPort, Host), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_Hostname_MetaData[] = {
		{ "Category", "MatchmakerJoinPort" },
		{ "ModuleRelativePath", "Public/MatchmakerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_Hostname = { "Hostname", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerJoinPort, Hostname), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_Hostname_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_Hostname_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "MatchmakerJoinPort" },
		{ "ModuleRelativePath", "Public/MatchmakerCommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerJoinPort, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_PortRange_MetaData[] = {
		{ "Category", "MatchmakerJoinPort" },
		{ "ModuleRelativePath", "Public/MatchmakerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_PortRange = { "PortRange", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerJoinPort, PortRange), Z_Construct_UScriptStruct_FMatchmakerJoinPortRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_PortRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_PortRange_MetaData)) }; // 1537897153
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_IsTls_MetaData[] = {
		{ "Category", "MatchmakerJoinPort" },
		{ "ModuleRelativePath", "Public/MatchmakerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_IsTls_SetBit(void* Obj)
	{
		((FMatchmakerJoinPort*)Obj)->IsTls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_IsTls = { "IsTls", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchmakerJoinPort), &Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_IsTls_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_IsTls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_IsTls_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_Host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_Hostname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_PortRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewProp_IsTls,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
		nullptr,
		&NewStructOps,
		"MatchmakerJoinPort",
		sizeof(FMatchmakerJoinPort),
		alignof(FMatchmakerJoinPort),
		Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerJoinPort()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerJoinPort.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerJoinPort.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerJoinPort.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerJoinPlayer;
class UScriptStruct* FMatchmakerJoinPlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerJoinPlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerJoinPlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerJoinPlayer, (UObject*)Z_Construct_UPackage__Script_Rivet(), TEXT("MatchmakerJoinPlayer"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerJoinPlayer.OuterSingleton;
}
template<> RIVET_API UScriptStruct* StaticStruct<FMatchmakerJoinPlayer>()
{
	return FMatchmakerJoinPlayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerJoinPlayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics::NewProp_Token_MetaData[] = {
		{ "Category", "MatchmakerJoinPlayer" },
		{ "ModuleRelativePath", "Public/MatchmakerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerJoinPlayer, Token), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics::NewProp_Token_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics::NewProp_Token,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
		nullptr,
		&NewStructOps,
		"MatchmakerJoinPlayer",
		sizeof(FMatchmakerJoinPlayer),
		alignof(FMatchmakerJoinPlayer),
		Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerJoinPlayer()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerJoinPlayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerJoinPlayer.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerJoinPlayer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerCommon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerCommon_h_Statics::ScriptStructInfo[] = {
		{ FMatchmakerJoinLobby::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerJoinLobby_Statics::NewStructOps, TEXT("MatchmakerJoinLobby"), &Z_Registration_Info_UScriptStruct_MatchmakerJoinLobby, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerJoinLobby), 735720133U) },
		{ FMatchmakerJoinPortRange::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerJoinPortRange_Statics::NewStructOps, TEXT("MatchmakerJoinPortRange"), &Z_Registration_Info_UScriptStruct_MatchmakerJoinPortRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerJoinPortRange), 1537897153U) },
		{ FMatchmakerJoinPort::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerJoinPort_Statics::NewStructOps, TEXT("MatchmakerJoinPort"), &Z_Registration_Info_UScriptStruct_MatchmakerJoinPort, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerJoinPort), 2486083397U) },
		{ FMatchmakerJoinPlayer::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerJoinPlayer_Statics::NewStructOps, TEXT("MatchmakerJoinPlayer"), &Z_Registration_Info_UScriptStruct_MatchmakerJoinPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerJoinPlayer), 909540124U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerCommon_h_1572296736(TEXT("/Script/Rivet"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerCommon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
