// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rivet/Public/RivetPlayer.h"
#include "Rivet/Public/MatchmakerPlayersConnected.h"
#include "Rivet/Public/MatchmakerPlayersDisconnected.h"
#include "Rivet/Public/RivetHttpEndpoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRivetPlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RIVET_API UClass* Z_Construct_UClass_URivetPlayer();
	RIVET_API UClass* Z_Construct_UClass_URivetPlayer_NoRegister();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedResponse();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedResponse();
	RIVET_API UScriptStruct* Z_Construct_UScriptStruct_FRivetErrorResponse();
	UPackage* Z_Construct_UPackage__Script_Rivet();
// End Cross Module References
	DEFINE_FUNCTION(URivetPlayer::execOnPlayerDisconnectedFailure)
	{
		P_GET_STRUCT(FRivetErrorResponse,Z_Param_Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerDisconnectedFailure(Z_Param_Error);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URivetPlayer::execOnPlayerDisconnectedSuccess)
	{
		P_GET_STRUCT(FMatchmakerPlayersDisconnectedResponse,Z_Param_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerDisconnectedSuccess(Z_Param_Response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URivetPlayer::execOnPlayerConnectedFailure)
	{
		P_GET_STRUCT(FRivetErrorResponse,Z_Param_Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerConnectedFailure(Z_Param_Error);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URivetPlayer::execOnPlayerConnectedSuccess)
	{
		P_GET_STRUCT(FMatchmakerPlayersConnectedResponse,Z_Param_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerConnectedSuccess(Z_Param_Response);
		P_NATIVE_END;
	}
	void URivetPlayer::StaticRegisterNativesURivetPlayer()
	{
		UClass* Class = URivetPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerConnectedFailure", &URivetPlayer::execOnPlayerConnectedFailure },
			{ "OnPlayerConnectedSuccess", &URivetPlayer::execOnPlayerConnectedSuccess },
			{ "OnPlayerDisconnectedFailure", &URivetPlayer::execOnPlayerDisconnectedFailure },
			{ "OnPlayerDisconnectedSuccess", &URivetPlayer::execOnPlayerDisconnectedSuccess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedFailure_Statics
	{
		struct RivetPlayer_eventOnPlayerConnectedFailure_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedFailure_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetPlayer_eventOnPlayerConnectedFailure_Parms, Error), Z_Construct_UScriptStruct_FRivetErrorResponse, METADATA_PARAMS(nullptr, 0) }; // 262836864
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedFailure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedFailure_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedFailure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RivetPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedFailure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URivetPlayer, nullptr, "OnPlayerConnectedFailure", nullptr, nullptr, sizeof(Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedFailure_Statics::RivetPlayer_eventOnPlayerConnectedFailure_Parms), Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedFailure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedFailure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedFailure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedFailure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedFailure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedFailure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedSuccess_Statics
	{
		struct RivetPlayer_eventOnPlayerConnectedSuccess_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedSuccess_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetPlayer_eventOnPlayerConnectedSuccess_Parms, Response), Z_Construct_UScriptStruct_FMatchmakerPlayersConnectedResponse, METADATA_PARAMS(nullptr, 0) }; // 1815545001
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedSuccess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedSuccess_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RivetPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URivetPlayer, nullptr, "OnPlayerConnectedSuccess", nullptr, nullptr, sizeof(Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedSuccess_Statics::RivetPlayer_eventOnPlayerConnectedSuccess_Parms), Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedFailure_Statics
	{
		struct RivetPlayer_eventOnPlayerDisconnectedFailure_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedFailure_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetPlayer_eventOnPlayerDisconnectedFailure_Parms, Error), Z_Construct_UScriptStruct_FRivetErrorResponse, METADATA_PARAMS(nullptr, 0) }; // 262836864
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedFailure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedFailure_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedFailure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RivetPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedFailure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URivetPlayer, nullptr, "OnPlayerDisconnectedFailure", nullptr, nullptr, sizeof(Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedFailure_Statics::RivetPlayer_eventOnPlayerDisconnectedFailure_Parms), Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedFailure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedFailure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedFailure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedFailure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedFailure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedFailure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedSuccess_Statics
	{
		struct RivetPlayer_eventOnPlayerDisconnectedSuccess_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedSuccess_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RivetPlayer_eventOnPlayerDisconnectedSuccess_Parms, Response), Z_Construct_UScriptStruct_FMatchmakerPlayersDisconnectedResponse, METADATA_PARAMS(nullptr, 0) }; // 28627402
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedSuccess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedSuccess_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RivetPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URivetPlayer, nullptr, "OnPlayerDisconnectedSuccess", nullptr, nullptr, sizeof(Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedSuccess_Statics::RivetPlayer_eventOnPlayerDisconnectedSuccess_Parms), Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URivetPlayer);
	UClass* Z_Construct_UClass_URivetPlayer_NoRegister()
	{
		return URivetPlayer::StaticClass();
	}
	struct Z_Construct_UClass_URivetPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URivetPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Rivet,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URivetPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedFailure, "OnPlayerConnectedFailure" }, // 1052455907
		{ &Z_Construct_UFunction_URivetPlayer_OnPlayerConnectedSuccess, "OnPlayerConnectedSuccess" }, // 2521555976
		{ &Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedFailure, "OnPlayerDisconnectedFailure" }, // 1200823079
		{ &Z_Construct_UFunction_URivetPlayer_OnPlayerDisconnectedSuccess, "OnPlayerDisconnectedSuccess" }, // 506077980
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivetPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RivetPlayer.h" },
		{ "ModuleRelativePath", "Public/RivetPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URivetPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URivetPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URivetPlayer_Statics::ClassParams = {
		&URivetPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URivetPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URivetPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URivetPlayer()
	{
		if (!Z_Registration_Info_UClass_URivetPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URivetPlayer.OuterSingleton, Z_Construct_UClass_URivetPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URivetPlayer.OuterSingleton;
	}
	template<> RIVET_API UClass* StaticClass<URivetPlayer>()
	{
		return URivetPlayer::StaticClass();
	}
	URivetPlayer::URivetPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URivetPlayer);
	URivetPlayer::~URivetPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URivetPlayer, URivetPlayer::StaticClass, TEXT("URivetPlayer"), &Z_Registration_Info_UClass_URivetPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URivetPlayer), 2669216091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_655115867(TEXT("/Script/Rivet"),
		Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
