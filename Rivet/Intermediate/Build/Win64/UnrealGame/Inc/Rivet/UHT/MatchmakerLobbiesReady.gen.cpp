// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rivet/Public/MatchmakerLobbiesReady.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakerLobbiesReady() {}
// Cross Module References
	RIVET_API UClass* Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint();
	RIVET_API UClass* Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_NoRegister();
	RIVET_API UClass* Z_Construct_UClass_URivetHttpEndpoint();
	RIVET_API UFunction* Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyRequest();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyResponse();
	UPackage* Z_Construct_UPackage__Script_Rivet();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyRequest;
class UScriptStruct* FMatchmakerLobbiesReadyRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyRequest, (UObject*)Z_Construct_UPackage__Script_Rivet(), TEXT("MatchmakerLobbiesReadyRequest"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyRequest.OuterSingleton;
}
template<> RIVET_API UScriptStruct* StaticStruct<FMatchmakerLobbiesReadyRequest>()
{
	return FMatchmakerLobbiesReadyRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesReady.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerLobbiesReadyRequest>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
		nullptr,
		&NewStructOps,
		"MatchmakerLobbiesReadyRequest",
		sizeof(FMatchmakerLobbiesReadyRequest),
		alignof(FMatchmakerLobbiesReadyRequest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyRequest.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyResponse;
class UScriptStruct* FMatchmakerLobbiesReadyResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyResponse, (UObject*)Z_Construct_UPackage__Script_Rivet(), TEXT("MatchmakerLobbiesReadyResponse"));
	}
	return Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyResponse.OuterSingleton;
}
template<> RIVET_API UScriptStruct* StaticStruct<FMatchmakerLobbiesReadyResponse>()
{
	return FMatchmakerLobbiesReadyResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesReady.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerLobbiesReadyResponse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
		nullptr,
		&NewStructOps,
		"MatchmakerLobbiesReadyResponse",
		sizeof(FMatchmakerLobbiesReadyResponse),
		alignof(FMatchmakerLobbiesReadyResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyResponse.InnerSingleton, Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature_Statics
	{
		struct _Script_Rivet_eventMatchmakerLobbiesReadyDelegate_Parms
		{
			FMatchmakerLobbiesReadyResponse Response;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Rivet_eventMatchmakerLobbiesReadyDelegate_Parms, Response), Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyResponse, METADATA_PARAMS(nullptr, 0) }; // 3131679839
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesReady.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rivet, nullptr, "MatchmakerLobbiesReadyDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature_Statics::_Script_Rivet_eventMatchmakerLobbiesReadyDelegate_Parms), Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMatchmakerLobbiesReadyDelegate_DelegateWrapper(const FScriptDelegate& MatchmakerLobbiesReadyDelegate, FMatchmakerLobbiesReadyResponse Response)
{
	struct _Script_Rivet_eventMatchmakerLobbiesReadyDelegate_Parms
	{
		FMatchmakerLobbiesReadyResponse Response;
	};
	_Script_Rivet_eventMatchmakerLobbiesReadyDelegate_Parms Parms;
	Parms.Response=Response;
	MatchmakerLobbiesReadyDelegate.ProcessDelegate<UObject>(&Parms);
}
	void UMatchmakerLobbiesReadyEndpoint::StaticRegisterNativesUMatchmakerLobbiesReadyEndpoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMatchmakerLobbiesReadyEndpoint);
	UClass* Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_NoRegister()
	{
		return UMatchmakerLobbiesReadyEndpoint::StaticClass();
	}
	struct Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics
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
	UObject* (*const Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URivetHttpEndpoint,
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MatchmakerLobbiesReady.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesReady.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Category", "MatchmakerLobbiesReadyEndpoint" },
		{ "ModuleRelativePath", "Public/MatchmakerLobbiesReady.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMatchmakerLobbiesReadyEndpoint, OnSuccess), Z_Construct_UDelegateFunction_Rivet_MatchmakerLobbiesReadyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics::NewProp_OnSuccess_MetaData)) }; // 93646964
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchmakerLobbiesReadyEndpoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics::ClassParams = {
		&UMatchmakerLobbiesReadyEndpoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint()
	{
		if (!Z_Registration_Info_UClass_UMatchmakerLobbiesReadyEndpoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMatchmakerLobbiesReadyEndpoint.OuterSingleton, Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMatchmakerLobbiesReadyEndpoint.OuterSingleton;
	}
	template<> RIVET_API UClass* StaticClass<UMatchmakerLobbiesReadyEndpoint>()
	{
		return UMatchmakerLobbiesReadyEndpoint::StaticClass();
	}
	UMatchmakerLobbiesReadyEndpoint::UMatchmakerLobbiesReadyEndpoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchmakerLobbiesReadyEndpoint);
	UMatchmakerLobbiesReadyEndpoint::~UMatchmakerLobbiesReadyEndpoint() {}
	struct Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesReady_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesReady_h_Statics::ScriptStructInfo[] = {
		{ FMatchmakerLobbiesReadyRequest::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyRequest_Statics::NewStructOps, TEXT("MatchmakerLobbiesReadyRequest"), &Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerLobbiesReadyRequest), 1099657557U) },
		{ FMatchmakerLobbiesReadyResponse::StaticStruct, Z_Construct_UScriptStruct_FMatchmakerLobbiesReadyResponse_Statics::NewStructOps, TEXT("MatchmakerLobbiesReadyResponse"), &Z_Registration_Info_UScriptStruct_MatchmakerLobbiesReadyResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchmakerLobbiesReadyResponse), 3131679839U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesReady_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMatchmakerLobbiesReadyEndpoint, UMatchmakerLobbiesReadyEndpoint::StaticClass, TEXT("UMatchmakerLobbiesReadyEndpoint"), &Z_Registration_Info_UClass_UMatchmakerLobbiesReadyEndpoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMatchmakerLobbiesReadyEndpoint), 1213265447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesReady_h_3205545708(TEXT("/Script/Rivet"),
		Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesReady_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesReady_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesReady_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_MatchmakerLobbiesReady_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
