// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rivet/Public/MatchmakerPlayersDisconnected.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakerPlayersDisconnected() {}
// Cross Module References
	RIVET_API UClass* Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint();
	RIVET_API UClass* Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_NoRegister();
	RIVET_API UClass* Z_Construct_UClass_URivetHttpEndpoint();
	RIVET_API UFunction* Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedResponse();
	UPackage* Z_Construct_UPackage__Script_Rivet();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedRequest;
class UScriptStruct* FMatchmakerPlayersDisconnectedRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest, (UObject*)Z_Construct_UPackage__Script_Rivet(), TEXT("MatchmakerPlayersDisconnectedRequest"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedRequest.OuterSingleton;
}
template<> RIVET_API UScriptStruct* StaticStruct<FMatchmakerPlayersDisconnectedRequest>()
{
	return FMatchmakerPlayersDisconnectedRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerToken;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerPlayersDisconnected.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerPlayersDisconnectedRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics::NewProp_PlayerToken_MetaData[] = {
		{ "Category", "MatchmakerPlayersDisconnectedRequest" },
		{ "ModuleRelativePath", "Public/MatchmakerPlayersDisconnected.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics::NewProp_PlayerToken = { "PlayerToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerPlayersDisconnectedRequest, PlayerToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics::NewProp_PlayerToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics::NewProp_PlayerToken_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics::NewProp_PlayerToken,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
		nullptr,
		&NewStructOps,
		"MatchmakerPlayersDisconnectedRequest",
		sizeof(FMatchmakerPlayersDisconnectedRequest),
		alignof(FMatchmakerPlayersDisconnectedRequest),
		Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedRequest.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedResponse;
class UScriptStruct* FMatchmakerPlayersDisconnectedResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedResponse, (UObject*)Z_Construct_UPackage__Script_Rivet(), TEXT("MatchmakerPlayersDisconnectedResponse"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedResponse.OuterSingleton;
}
template<> RIVET_API UScriptStruct* StaticStruct<FMatchmakerPlayersDisconnectedResponse>()
{
	return FMatchmakerPlayersDisconnectedResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerPlayersDisconnected.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerPlayersDisconnectedResponse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
		nullptr,
		&NewStructOps,
		"MatchmakerPlayersDisconnectedResponse",
		sizeof(FMatchmakerPlayersDisconnectedResponse),
		alignof(FMatchmakerPlayersDisconnectedResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedResponse.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature_Statics
	{
		struct _Script_Rivet_eventMatchmakerPlayersDisconnectedDelegate_Parms
		{
			FMatchmakerPlayersDisconnectedResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Rivet_eventMatchmakerPlayersDisconnectedDelegate_Parms, Response), Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedResponse, METADATA_PARAMS(nullptr, 0) }; // 28627402
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchmakerPlayersDisconnected.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rivet, nullptr, "MatchmakerPlayersDisconnectedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature_Statics::_Script_Rivet_eventMatchmakerPlayersDisconnectedDelegate_Parms), Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMatchmakerPlayersDisconnectedDelegate_DelegateWrapper(const FScriptDelegate& MatchmakerPlayersDisconnectedDelegate, FMatchmakerPlayersDisconnectedResponse Response)
{
	struct _Script_Rivet_eventMatchmakerPlayersDisconnectedDelegate_Parms
	{
		FMatchmakerPlayersDisconnectedResponse Response;
	};
	_Script_Rivet_eventMatchmakerPlayersDisconnectedDelegate_Parms Parms;
	Parms.Response=Response;
	MatchmakerPlayersDisconnectedDelegate.ProcessDelegate<UObject>(&Parms);
}
	void UMatchmakerPlayersDisconnectedEndpoint::StaticRegisterNativesUMatchmakerPlayersDisconnectedEndpoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMatchmakerPlayersDisconnectedEndpoint);
	UClass* Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_NoRegister()
	{
		return UMatchmakerPlayersDisconnectedEndpoint::StaticClass();
	}
	struct Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics
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
	UObject* (*const Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URivetHttpEndpoint,
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MatchmakerPlayersDisconnected.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerPlayersDisconnected.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Category", "MatchmakerPlayersDisconnectedEndpoint" },
		{ "ModuleRelativePath", "Public/MatchmakerPlayersDisconnected.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMatchmakerPlayersDisconnectedEndpoint, OnSuccess), Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersDisconnectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics::NewProp_OnSuccess_MetaData)) }; // 3399799681
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchmakerPlayersDisconnectedEndpoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics::ClassParams = {
		&UMatchmakerPlayersDisconnectedEndpoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint()
	{
		if (!Z_Registration_Info_UClass_UMatchmakerPlayersDisconnectedEndpoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMatchmakerPlayersDisconnectedEndpoint.OuterSingleton, Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMatchmakerPlayersDisconnectedEndpoint.OuterSingleton;
	}
	template<> RIVET_API UClass* StaticClass<UMatchmakerPlayersDisconnectedEndpoint>()
	{
		return UMatchmakerPlayersDisconnectedEndpoint::StaticClass();
	}
	UMatchmakerPlayersDisconnectedEndpoint::UMatchmakerPlayersDisconnectedEndpoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchmakerPlayersDisconnectedEndpoint);
	UMatchmakerPlayersDisconnectedEndpoint::~UMatchmakerPlayersDisconnectedEndpoint() {}
	struct Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersDisconnected_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersDisconnected_h_Statics::ScriptStructInfo[] = {
		{ FMatchmakerPlayersDisconnectedRequest::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedRequest_Statics::NewStructOps, TEXT("MatchmakerPlayersDisconnectedRequest"), &Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerPlayersDisconnectedRequest), 4193333483U) },
		{ FMatchmakerPlayersDisconnectedResponse::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedResponse_Statics::NewStructOps, TEXT("MatchmakerPlayersDisconnectedResponse"), &Z_Registration_Info_UScriptStruct_MatchmakerPlayersDisconnectedResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerPlayersDisconnectedResponse), 28627402U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersDisconnected_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMatchmakerPlayersDisconnectedEndpoint, UMatchmakerPlayersDisconnectedEndpoint::StaticClass, TEXT("UMatchmakerPlayersDisconnectedEndpoint"), &Z_Registration_Info_UClass_UMatchmakerPlayersDisconnectedEndpoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMatchmakerPlayersDisconnectedEndpoint), 3588951479U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersDisconnected_h_888275242(TEXT("/Script/Rivet"),
		Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersDisconnected_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersDisconnected_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersDisconnected_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersDisconnected_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
