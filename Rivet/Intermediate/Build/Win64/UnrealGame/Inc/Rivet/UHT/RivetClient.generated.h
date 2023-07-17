// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RivetClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URivetClient;
struct FMatchmakerLobbiesFindRequest;
struct FMatchmakerLobbiesJoinRequest;
struct FMatchmakerLobbiesReadyRequest;
struct FMatchmakerPlayersConnectedRequest;
struct FMatchmakerPlayersDisconnectedRequest;
#ifdef RIVET_RivetClient_generated_h
#error "RivetClient.generated.h already included, missing '#pragma once' in RivetClient.h"
#endif
#define RIVET_RivetClient_generated_h

#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_SPARSE_DATA
#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMatchmakerPlayersDisconnected); \
	DECLARE_FUNCTION(execMatchmakerPlayersConnected); \
	DECLARE_FUNCTION(execMatchmakerLobbiesReady); \
	DECLARE_FUNCTION(execMatchmakerLobbiesJoin); \
	DECLARE_FUNCTION(execMatchmakerLobbiesFind); \
	DECLARE_FUNCTION(execCreateRivetClient);


#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMatchmakerPlayersDisconnected); \
	DECLARE_FUNCTION(execMatchmakerPlayersConnected); \
	DECLARE_FUNCTION(execMatchmakerLobbiesReady); \
	DECLARE_FUNCTION(execMatchmakerLobbiesJoin); \
	DECLARE_FUNCTION(execMatchmakerLobbiesFind); \
	DECLARE_FUNCTION(execCreateRivetClient);


#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_ACCESSORS
#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURivetClient(); \
	friend struct Z_Construct_UClass_URivetClient_Statics; \
public: \
	DECLARE_CLASS(URivetClient, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rivet"), NO_API) \
	DECLARE_SERIALIZER(URivetClient) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_INCLASS \
private: \
	static void StaticRegisterNativesURivetClient(); \
	friend struct Z_Construct_UClass_URivetClient_Statics; \
public: \
	DECLARE_CLASS(URivetClient, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rivet"), NO_API) \
	DECLARE_SERIALIZER(URivetClient) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URivetClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URivetClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URivetClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URivetClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URivetClient(URivetClient&&); \
	NO_API URivetClient(const URivetClient&); \
public: \
	NO_API virtual ~URivetClient();


#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URivetClient(URivetClient&&); \
	NO_API URivetClient(const URivetClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URivetClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URivetClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URivetClient) \
	NO_API virtual ~URivetClient();


#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_13_PROLOG
#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_SPARSE_DATA \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_RPC_WRAPPERS \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_ACCESSORS \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_INCLASS \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_SPARSE_DATA \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_ACCESSORS \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIVET_API UClass* StaticClass<class URivetClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
