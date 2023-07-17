// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rivet/Public/MatchmakerPlayersConnected.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakerPlayersConnected() {}
// Cross Module References
	RIVET_API UClass* Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint();
	RIVET_API UClass* Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_NoRegister();
	RIVET_API UClass* Z_Construct_UClass_URivetHttpEndpoint();
	RIVET_API UFunction* Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedResponse();
	UPackage* Z_Construct_UPackage__Script_Rivet();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedRequest;
class UScriptStruct* FMatchmakerPlayersConnectedRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest, (UObject*)Z_Construct_UPackage__Script_Rivet(), TEXT("MatchmakerPlayersConnectedRequest"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedRequest.OuterSingleton;
}
template<> RIVET_API UScriptStruct* StaticStruct<FMatchmakerPlayersConnectedRequest>()
{
	return FMatchmakerPlayersConnectedRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerPlayersConnected.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerPlayersConnectedRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics::NewProp_PlayerToken_MetaData[] = {
		{ "Category", "MatchmakerPlayersConnectedRequest" },
		{ "ModuleRelativePath", "Public/MatchmakerPlayersConnected.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics::NewProp_PlayerToken = { "PlayerToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchmakerPlayersConnectedRequest, PlayerToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics::NewProp_PlayerToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics::NewProp_PlayerToken_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics::NewProp_PlayerToken,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
		nullptr,
		&NewStructOps,
		"MatchmakerPlayersConnectedRequest",
		sizeof(FMatchmakerPlayersConnectedRequest),
		alignof(FMatchmakerPlayersConnectedRequest),
		Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedRequest.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedResponse;
class UScriptStruct* FMatchmakerPlayersConnectedResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedResponse, (UObject*)Z_Construct_UPackage__Script_Rivet(), TEXT("MatchmakerPlayersConnectedResponse"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedResponse.OuterSingleton;
}
template<> RIVET_API UScriptStruct* StaticStruct<FMatchmakerPlayersConnectedResponse>()
{
	return FMatchmakerPlayersConnectedResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerPlayersConnected.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerPlayersConnectedResponse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
		nullptr,
		&NewStructOps,
		"MatchmakerPlayersConnectedResponse",
		sizeof(FMatchmakerPlayersConnectedResponse),
		alignof(FMatchmakerPlayersConnectedResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedResponse.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature_Statics
	{
		struct _Script_Rivet_eventMatchmakerPlayersConnectedDelegate_Parms
		{
			FMatchmakerPlayersConnectedResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Rivet_eventMatchmakerPlayersConnectedDelegate_Parms, Response), Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedResponse, METADATA_PARAMS(nullptr, 0) }; // 1815545001
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchmakerPlayersConnected.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rivet, nullptr, "MatchmakerPlayersConnectedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature_Statics::_Script_Rivet_eventMatchmakerPlayersConnectedDelegate_Parms), Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMatchmakerPlayersConnectedDelegate_DelegateWrapper(const FScriptDelegate& MatchmakerPlayersConnectedDelegate, FMatchmakerPlayersConnectedResponse Response)
{
	struct _Script_Rivet_eventMatchmakerPlayersConnectedDelegate_Parms
	{
		FMatchmakerPlayersConnectedResponse Response;
	};
	_Script_Rivet_eventMatchmakerPlayersConnectedDelegate_Parms Parms;
	Parms.Response=Response;
	MatchmakerPlayersConnectedDelegate.ProcessDelegate<UObject>(&Parms);
}
	void UMatchmakerPlayersConnectedEndpoint::StaticRegisterNativesUMatchmakerPlayersConnectedEndpoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMatchmakerPlayersConnectedEndpoint);
	UClass* Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_NoRegister()
	{
		return UMatchmakerPlayersConnectedEndpoint::StaticClass();
	}
	struct Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics
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
	UObject* (*const Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URivetHttpEndpoint,
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MatchmakerPlayersConnected.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerPlayersConnected.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Category", "MatchmakerPlayersConnectedEndpoint" },
		{ "ModuleRelativePath", "Public/MatchmakerPlayersConnected.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMatchmakerPlayersConnectedEndpoint, OnSuccess), Z_Construct_UDelegateFunction_Rivet_MatchmakerPlayersConnectedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics::NewProp_OnSuccess_MetaData)) }; // 901693569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchmakerPlayersConnectedEndpoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics::ClassParams = {
		&UMatchmakerPlayersConnectedEndpoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint()
	{
		if (!Z_Registration_Info_UClass_UMatchmakerPlayersConnectedEndpoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMatchmakerPlayersConnectedEndpoint.OuterSingleton, Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMatchmakerPlayersConnectedEndpoint.OuterSingleton;
	}
	template<> RIVET_API UClass* StaticClass<UMatchmakerPlayersConnectedEndpoint>()
	{
		return UMatchmakerPlayersConnectedEndpoint::StaticClass();
	}
	UMatchmakerPlayersConnectedEndpoint::UMatchmakerPlayersConnectedEndpoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchmakerPlayersConnectedEndpoint);
	UMatchmakerPlayersConnectedEndpoint::~UMatchmakerPlayersConnectedEndpoint() {}
	struct Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersConnected_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersConnected_h_Statics::ScriptStructInfo[] = {
		{ FMatchmakerPlayersConnectedRequest::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedRequest_Statics::NewStructOps, TEXT("MatchmakerPlayersConnectedRequest"), &Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerPlayersConnectedRequest), 1331045971U) },
		{ FMatchmakerPlayersConnectedResponse::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedResponse_Statics::NewStructOps, TEXT("MatchmakerPlayersConnectedResponse"), &Z_Registration_Info_UScriptStruct_MatchmakerPlayersConnectedResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerPlayersConnectedResponse), 1815545001U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersConnected_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMatchmakerPlayersConnectedEndpoint, UMatchmakerPlayersConnectedEndpoint::StaticClass, TEXT("UMatchmakerPlayersConnectedEndpoint"), &Z_Registration_Info_UClass_UMatchmakerPlayersConnectedEndpoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMatchmakerPlayersConnectedEndpoint), 873516347U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersConnected_h_2282580487(TEXT("/Script/Rivet"),
		Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersConnected_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersConnected_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersConnected_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerPlayersConnected_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
