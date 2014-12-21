#pragma once

#include "CommandTable.h"

extern CommandInfo kCommandInfo_GetNumFollowers;
extern CommandInfo kCommandInfo_GetNthFollower;
extern CommandInfo kCommandInfo_GetNumDetectedActors;
extern CommandInfo kCommandInfo_GetNthDetectedActor;
extern CommandInfo kCommandInfo_SetDetectionState;

extern CommandInfo kCommandInfo_OffersWeapons;
extern CommandInfo kCommandInfo_OffersArmor;
extern CommandInfo kCommandInfo_OffersClothing;
extern CommandInfo kCommandInfo_OffersBooks;
extern CommandInfo kCommandInfo_OffersLights;
extern CommandInfo kCommandInfo_OffersIngredients;
extern CommandInfo kCommandInfo_OffersApparatus;
extern CommandInfo kCommandInfo_OffersMiscItems;
extern CommandInfo kCommandInfo_OffersMagicItems;
extern CommandInfo kCommandInfo_OffersSpells;
extern CommandInfo kCommandInfo_OffersPotions;
extern CommandInfo kCommandInfo_OffersTraining;
extern CommandInfo kCommandInfo_OffersRecharging;
extern CommandInfo kCommandInfo_OffersRepair;
extern CommandInfo kCommandInfo_OffersServicesC;
extern CommandInfo kCommandInfo_GetTrainerSkill;
extern CommandInfo kCommandInfo_GetTrainerLevel;

extern CommandInfo kCommandInfo_SetOffersWeapons;
extern CommandInfo kCommandInfo_SetOffersArmor;
extern CommandInfo kCommandInfo_SetOffersClothing;
extern CommandInfo kCommandInfo_SetOffersBooks;
extern CommandInfo kCommandInfo_SetOffersIngredients;
extern CommandInfo kCommandInfo_SetOffersSpells;
extern CommandInfo kCommandInfo_SetOffersLights;
extern CommandInfo kCommandInfo_SetOffersMiscItems;
extern CommandInfo kCommandInfo_SetOffersMagicItems;
extern CommandInfo kCommandInfo_SetOffersApparatus;
extern CommandInfo kCommandInfo_SetOffersPotions;
extern CommandInfo kCommandInfo_SetOffersTraining;
extern CommandInfo kCommandInfo_SetOffersRecharging;
extern CommandInfo kCommandInfo_SetOffersRepair;
extern CommandInfo kCommandInfo_SetOffersServicesC;
extern CommandInfo kCommandInfo_GetServicesMask;
extern CommandInfo kCommandInfo_SetTrainerSkill;
extern CommandInfo kCommandInfo_SetTrainerLevel;

extern CommandInfo kCommandInfo_GetNumPackages;
extern CommandInfo kCommandInfo_GetNthPackage;

extern CommandInfo kCommandInfo_IsBlocking;
extern CommandInfo kCommandInfo_IsAttacking;
extern CommandInfo kCommandInfo_IsRecoiling;
extern CommandInfo kCommandInfo_IsDodging;
extern CommandInfo kCommandInfo_IsStaggered;

extern CommandInfo kCommandInfo_IsMovingForward;
extern CommandInfo kCommandInfo_IsMovingBackward;
extern CommandInfo kCommandInfo_IsMovingLeft;
extern CommandInfo kCommandInfo_IsMovingRight;
extern CommandInfo kCommandInfo_IsTurningLeft;
extern CommandInfo kCommandInfo_IsTurningRight;

extern CommandInfo kCommandInfo_IsInAir;
extern CommandInfo kCommandInfo_IsJumping;
extern CommandInfo kCommandInfo_IsOnGround;
extern CommandInfo kCommandInfo_IsFlying;
extern CommandInfo kCommandInfo_GetFallTimer;

extern CommandInfo kCommandInfo_IsPowerAttacking;
extern CommandInfo kCommandInfo_IsCasting;
extern CommandInfo kCommandInfo_IsAnimGroupPlaying;
extern CommandInfo kCommandInfo_AnimPathIncludes;

extern CommandInfo kCommandInfo_GetProcessLevel;

extern CommandInfo kCommandInfo_GetFollowers;

extern CommandInfo kCommandInfo_SetPackageTarget;

extern CommandInfo kCommandInfo_GetPackageOffersServices;
extern CommandInfo kCommandInfo_GetPackageMustReachLocation;
extern CommandInfo kCommandInfo_GetPackageMustComplete;
extern CommandInfo kCommandInfo_GetPackageLockDoorsAtStart;
extern CommandInfo kCommandInfo_GetPackageLockDoorsAtEnd;
extern CommandInfo kCommandInfo_GetPackageLockDoorsAtLocation;
extern CommandInfo kCommandInfo_GetPackageUnlockDoorsAtStart;
extern CommandInfo kCommandInfo_GetPackageUnlockDoorsAtEnd;
extern CommandInfo kCommandInfo_GetPackageUnlockDoorsAtLocation;
extern CommandInfo kCommandInfo_GetPackageContinueIfPCNear;
extern CommandInfo kCommandInfo_GetPackageOncePerDay;
extern CommandInfo kCommandInfo_GetPackageSkipFalloutBehavior;
extern CommandInfo kCommandInfo_GetPackageAlwaysRun;
extern CommandInfo kCommandInfo_GetPackageAlwaysSneak;
extern CommandInfo kCommandInfo_GetPackageAllowSwimming;
extern CommandInfo kCommandInfo_GetPackageAllowFalls;
extern CommandInfo kCommandInfo_GetPackageArmorUnequipped;
extern CommandInfo kCommandInfo_GetPackageWeaponsUnequipped;
extern CommandInfo kCommandInfo_GetPackageDefensiveCombat;
extern CommandInfo kCommandInfo_GetPackageUseHorse;
extern CommandInfo kCommandInfo_GetPackageNoIdleAnims;

extern CommandInfo kCommandInfo_SetPackageOffersServices;
extern CommandInfo kCommandInfo_SetPackageMustReachLocation;
extern CommandInfo kCommandInfo_SetPackageMustComplete;
extern CommandInfo kCommandInfo_SetPackageLockDoorsAtStart;
extern CommandInfo kCommandInfo_SetPackageLockDoorsAtEnd;
extern CommandInfo kCommandInfo_SetPackageLockDoorsAtLocation;
extern CommandInfo kCommandInfo_SetPackageUnlockDoorsAtStart;
extern CommandInfo kCommandInfo_SetPackageUnlockDoorsAtEnd;
extern CommandInfo kCommandInfo_SetPackageUnlockDoorsAtLocation;
extern CommandInfo kCommandInfo_SetPackageContinueIfPCNear;
extern CommandInfo kCommandInfo_SetPackageOncePerDay;
extern CommandInfo kCommandInfo_SetPackageSkipFalloutBehavior;
extern CommandInfo kCommandInfo_SetPackageAlwaysRun;
extern CommandInfo kCommandInfo_SetPackageAlwaysSneak;
extern CommandInfo kCommandInfo_SetPackageAllowSwimming;
extern CommandInfo kCommandInfo_SetPackageAllowFalls;
extern CommandInfo kCommandInfo_SetPackageArmorUnequipped;
extern CommandInfo kCommandInfo_SetPackageWeaponsUnequipped;
extern CommandInfo kCommandInfo_SetPackageDefensiveCombat;
extern CommandInfo kCommandInfo_SetPackageUseHorse;
extern CommandInfo kCommandInfo_SetPackageNoIdleAnims;

extern CommandInfo kCommandInfo_GetActorPackages;
extern CommandInfo kCommandInfo_GetCurrentPackage;
extern CommandInfo kCommandInfo_GetCurrentEditorPackage;

extern CommandInfo kCommandInfo_GetPackageData;
extern CommandInfo kCommandInfo_GetPackageScheduleData;
extern CommandInfo kCommandInfo_GetPackageLocationData;
extern CommandInfo kCommandInfo_GetPackageTargetData;

extern CommandInfo kCommandInfo_SetPackageData;
extern CommandInfo kCommandInfo_SetPackageScheduleData;
extern CommandInfo kCommandInfo_SetPackageLocationData;
extern CommandInfo kCommandInfo_SetPackageTargetData;

extern CommandInfo kCommandInfo_GetPackageType;
extern CommandInfo kCommandInfo_GetCurrentPackageProcedure;