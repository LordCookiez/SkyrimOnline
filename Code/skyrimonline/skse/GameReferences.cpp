#include "GameReferences.h"
#include "GameObjects.h"
#include "GameForms.h"
#include "GameExtraData.h"
#include "GameRTTI.h"
#include "GameData.h"
#include "NiNodes.h"

const _CreateRefHandleByREFR	CreateRefHandleByREFR = (_CreateRefHandleByREFR)0x0065CC00;
const _LookupREFRByHandle		LookupREFRByHandle = (_LookupREFRByHandle)0x004A9180;
const _LookupREFRObjectByHandle		LookupREFRObjectByHandle = (_LookupREFRObjectByHandle)0x004951F0;

const UInt32 * g_invalidRefHandle = (UInt32*)0x01310630;

bool IAnimationGraphManagerHolder::SetVariableFloat(BSFixedString* apVariable, float aValue)
{
	return CALL_MEMBER_FN(this, SetVariableFloat)(apVariable, aValue);
}

bool IAnimationGraphManagerHolder::SetVariableInt(BSFixedString* apVariable, UInt32 aValue)
{
	return CALL_MEMBER_FN(this, SetVariableInt)(apVariable, aValue);
}

bool IAnimationGraphManagerHolder::SetVariableBool(BSFixedString* apVariable, bool aValue)
{
	UInt8 val = aValue ? 1 : 0;
	return CALL_MEMBER_FN(this, SetVariableBool)(apVariable, aValue);
}

UInt32 TESObjectREFR::CreateRefHandle(void)
{
	if (handleRefObject.GetRefCount() > 0)
	{
		UInt32 refHandle = 0;
		CreateRefHandleByREFR(&refHandle, this);
		return refHandle;
	}
	else
	{
		return *g_invalidRefHandle;
	}
}

TESForm * Actor::GetEquippedObject(bool abLeftHand)
{
	if(!processManager) 
		return NULL;

	if(abLeftHand)
		return processManager->equippedObject[ActorProcessManager::kEquippedHand_Left];
	else
		return processManager->equippedObject[ActorProcessManager::kEquippedHand_Right];

	return NULL;
}

TintMask * PlayerCharacter::GetOverlayTintMask(TintMask * original)
{
	SInt32 curIndex = -1;
	if(!overlayTintMasks)
		return NULL;

	TintMask * foundMask;
	for(UInt32 i = 0; i < tintMasks.count; i++)
	{
		tintMasks.GetNthItem(i, foundMask);
		if(foundMask == original) {
			curIndex = i;
			break;
		}
	}

	overlayTintMasks->GetNthItem(curIndex, foundMask);
	if(foundMask)
		return foundMask;

	return NULL;
}

void Actor::UpdateHairColor()
{
	TESNPC* npc = DYNAMIC_CAST(baseForm, TESForm, TESNPC);
	if(npc && npc->headData) {
		BGSColorForm * hairColor = npc->headData->hairColor; // Non-player actors won't have this
		if(hairColor) {
			NiColorA val;
			val.r = hairColor->color.red / 128.0;
			val.g = hairColor->color.green / 128.0;
			val.b = hairColor->color.blue / 128.0;
			NiColorA * color = &val;

			NiNode * model = GetNiRootNode(0);
			if(model) {
				UpdateModelHair(model, &color);
			}
		}
	}
}

void Actor::UpdateSkinColor()
{
	TESNPC* npc = DYNAMIC_CAST(baseForm, TESForm, TESNPC);
	if(npc) {
		NiColorA val;
		val.r = npc->color.red / 255.0;
		val.g = npc->color.green / 255.0;
		val.b = npc->color.blue / 255.0;
		NiColorA * color = &val;

		NiNode * thirdPerson = GetNiRootNode(0);
		NiNode * firstPerson = GetNiRootNode(1);
		if(thirdPerson) {
			UpdateModelSkin(thirdPerson, &color); // Update for 3rd Person
		}
		if(firstPerson) {
			UpdateModelSkin(firstPerson, &color); // Update for 1st Person
		}
	}
}

bool Actor::VisitFactions(FactionVisitor & visitor)
{
	TESNPC* npc = DYNAMIC_CAST(baseForm, TESForm, TESNPC);
	if(npc) {
		for(UInt32 i = 0; i < npc->actorData.factions.count; i++)
		{
			TESActorBaseData::FactionInfo info;
			npc->actorData.factions.GetNthItem(i, info);
			if(visitor.Accept(info.faction, info.rank))
				return true;
		}

		ExtraFactionChanges* pFactionChanges = static_cast<ExtraFactionChanges*>(extraData.GetByType(kExtraData_FactionChanges));
		if (pFactionChanges) {
			for(UInt32 i = 0; i < pFactionChanges->factions.count; i++)
			{
				ExtraFactionChanges::FactionInfo info;
				pFactionChanges->factions.GetNthItem(i, info);
				if(visitor.Accept(info.faction, info.rank))
					return true;
			}
		}
	}

	return false;
}