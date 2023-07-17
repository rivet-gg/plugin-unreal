// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rivet/Public/RivetHttpEndpoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRivetHttpEndpoint() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RIVET_API UClass* Z_Construct_UClass_URivetHttpEndpoint();
	RIVET_API UClass* Z_Construct_UClass_URivetHttpEndpoint_NoRegister();
	RIVET_API UFunction* Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FRivetErrorResponse();
	UPackage* Z_Construct_UPackage__Script_Rivet();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RivetErrorResponse;
class UScriptStruct* FRivetErrorResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RivetErrorResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RivetErrorResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRivetErrorResponse, (UObject*)Z_Construct_UPackage__Script_Rivet(), TEXT("RivetErrorResponse"));
	}
	return Z_Registration_Info_UScriptStruct_RivetErrorResponse.OuterSingleton;
}
template<> RIVET_API UScriptStruct* StaticStruct<FRivetErrorResponse>()
{
	return FRivetErrorResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRivetErrorResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatusCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseBody_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseBody;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RivetHttpEndpoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRivetErrorResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::NewProp_StatusCode_MetaData[] = {
		{ "Category", "RivetErrorResponse" },
		{ "ModuleRelativePath", "Public/RivetHttpEndpoint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRivetErrorResponse, StatusCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::NewProp_StatusCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::NewProp_StatusCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::NewProp_ResponseBody_MetaData[] = {
		{ "Category", "RivetErrorResponse" },
		{ "ModuleRelativePath", "Public/RivetHttpEndpoint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::NewProp_ResponseBody = { "ResponseBody", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRivetErrorResponse, ResponseBody), METADATA_PARAMS(Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::NewProp_ResponseBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::NewProp_ResponseBody_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::NewProp_StatusCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::NewProp_ResponseBody,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
		nullptr,
		&NewStructOps,
		"RivetErrorResponse",
		sizeof(FRivetErrorResponse),
		alignof(FRivetErrorResponse),
		Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRivetErrorResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_RivetErrorResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RivetErrorResponse.InnerSingleton, Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RivetErrorResponse.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature_Statics
	{
		struct _Script_Rivet_eventRivetHttpRequestFailDelegate_Parms
		{
			FRivetErrorResponse Error;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Rivet_eventRivetHttpRequestFailDelegate_Parms, Error), Z_Construct_UScriptStruct_FRivetErrorResponse, METADATA_PARAMS(nullptr, 0) }; // 262836864
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RivetHttpEndpoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rivet, nullptr, "RivetHttpRequestFailDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature_Statics::_Script_Rivet_eventRivetHttpRequestFailDelegate_Parms), Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRivetHttpRequestFailDelegate_DelegateWrapper(const FScriptDelegate& RivetHttpRequestFailDelegate, FRivetErrorResponse Error)
{
	struct _Script_Rivet_eventRivetHttpRequestFailDelegate_Parms
	{
		FRivetErrorResponse Error;
	};
	_Script_Rivet_eventRivetHttpRequestFailDelegate_Parms Parms;
	Parms.Error=Error;
	RivetHttpRequestFailDelegate.ProcessDelegate<UObject>(&Parms);
}
	void URivetHttpEndpoint::StaticRegisterNativesURivetHttpEndpoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URivetHttpEndpoint);
	UClass* Z_Construct_UClass_URivetHttpEndpoint_NoRegister()
	{
		return URivetHttpEndpoint::StaticClass();
	}
	struct Z_Construct_UClass_URivetHttpEndpoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URivetHttpEndpoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivetHttpEndpoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RivetHttpEndpoint.h" },
		{ "ModuleRelativePath", "Public/RivetHttpEndpoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivetHttpEndpoint_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Category", "RivetHttpEndpoint" },
		{ "ModuleRelativePath", "Public/RivetHttpEndpoint.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URivetHttpEndpoint_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivetHttpEndpoint, OnFailure), Z_Construct_UDelegateFunction_Rivet_RivetHttpRequestFailDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URivetHttpEndpoint_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivetHttpEndpoint_Statics::NewProp_OnFailure_MetaData)) }; // 940752575
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URivetHttpEndpoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivetHttpEndpoint_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URivetHttpEndpoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URivetHttpEndpoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URivetHttpEndpoint_Statics::ClassParams = {
		&URivetHttpEndpoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URivetHttpEndpoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URivetHttpEndpoint_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_URivetHttpEndpoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URivetHttpEndpoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URivetHttpEndpoint()
	{
		if (!Z_Registration_Info_UClass_URivetHttpEndpoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URivetHttpEndpoint.OuterSingleton, Z_Construct_UClass_URivetHttpEndpoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URivetHttpEndpoint.OuterSingleton;
	}
	template<> RIVET_API UClass* StaticClass<URivetHttpEndpoint>()
	{
		return URivetHttpEndpoint::StaticClass();
	}
	URivetHttpEndpoint::URivetHttpEndpoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URivetHttpEndpoint);
	URivetHttpEndpoint::~URivetHttpEndpoint() {}
	struct Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetHttpEndpoint_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetHttpEndpoint_h_Statics::ScriptStructInfo[] = {
		{ FRivetErrorResponse::StaticStruct, Z_Construct_UScriptStruct_FRivetErrorResponse_Statics::NewStructOps, TEXT("RivetErrorResponse"), &Z_Registration_Info_UScriptStruct_RivetErrorResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRivetErrorResponse), 262836864U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetHttpEndpoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URivetHttpEndpoint, URivetHttpEndpoint::StaticClass, TEXT("URivetHttpEndpoint"), &Z_Registration_Info_UClass_URivetHttpEndpoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URivetHttpEndpoint), 3676409067U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetHttpEndpoint_h_4059700647(TEXT("/Script/Rivet"),
		Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetHttpEndpoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetHttpEndpoint_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetHttpEndpoint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetHttpEndpoint_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
