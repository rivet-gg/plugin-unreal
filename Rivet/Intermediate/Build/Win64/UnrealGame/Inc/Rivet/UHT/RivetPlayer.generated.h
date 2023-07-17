// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RivetPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMatchmakerPlayersConnectedResponse;
struct FMatchmakerPlayersDisconnectedResponse;
struct FRivetErrorResponse;
#ifdef RIVET_RivetPlayer_generated_h
#error "RivetPlayer.generated.h already included, missing '#pragma once' in RivetPlayer.h"
#endif
#define RIVET_RivetPlayer_generated_h

#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_SPARSE_DATA
#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerDisconnectedFailure); \
	DECLARE_FUNCTION(execOnPlayerDisconnectedSuccess); \
	DECLARE_FUNCTION(execOnPlayerConnectedFailure); \
	DECLARE_FUNCTION(execOnPlayerConnectedSuccess);


#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerDisconnectedFailure); \
	DECLARE_FUNCTION(execOnPlayerDisconnectedSuccess); \
	DECLARE_FUNCTION(execOnPlayerConnectedFailure); \
	DECLARE_FUNCTION(execOnPlayerConnectedSuccess);


#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_ACCESSORS
#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURivetPlayer(); \
	friend struct Z_Construct_UClass_URivetPlayer_Statics; \
public: \
	DECLARE_CLASS(URivetPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rivet"), NO_API) \
	DECLARE_SERIALIZER(URivetPlayer)


#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesURivetPlayer(); \
	friend struct Z_Construct_UClass_URivetPlayer_Statics; \
public: \
	DECLARE_CLASS(URivetPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Rivet"), NO_API) \
	DECLARE_SERIALIZER(URivetPlayer)


#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URivetPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URivetPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URivetPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URivetPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URivetPlayer(URivetPlayer&&); \
	NO_API URivetPlayer(const URivetPlayer&); \
public: \
	NO_API virtual ~URivetPlayer();


#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URivetPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URivetPlayer(URivetPlayer&&); \
	NO_API URivetPlayer(const URivetPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URivetPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URivetPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URivetPlayer) \
	NO_API virtual ~URivetPlayer();


#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_9_PROLOG
#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_SPARSE_DATA \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_RPC_WRAPPERS \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_ACCESSORS \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_INCLASS \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_SPARSE_DATA \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_ACCESSORS \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIVET_API UClass* StaticClass<class URivetPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_micro_Documents_Unreal_Projects_MultiplayerTest2_Plugins_Rivet_Source_Rivet_Public_RivetPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
