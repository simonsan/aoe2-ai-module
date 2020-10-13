#pragma once
#include "google/protobuf/any.pb.h"

class ExpertActionHandler
{
public:
	static void AcknowledgeEvent(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void AcknowledgeTaunt(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void AttackNow(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void Build(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void BuildForward(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void BuildGate(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void BuildWall(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void BuyCommodity(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatLocal(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatLocalUsingId(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatLocalUsingRange(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatLocalToSelf(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatToAll(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatToAllUsingId(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatToAllUsingRange(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatToAllies(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatToAlliesUsingId(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatToAlliesUsingRange(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatToEnemies(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatToEnemiesUsingId(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatToEnemiesUsingRange(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatToPlayer(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatToPlayerUsingId(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatToPlayerUsingRange(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ChatTrace(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ClearTributeMemory(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void DeleteBuilding(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void DeleteUnit(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void DisableRule(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void DisableSelf(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void DisableTimer(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void DoNothing(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void EnableRule(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void EnableTimer(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void EnableWallPlacement(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void GenerateRandomNumber(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void Log(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void LogTrace(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void ReleaseEscrow(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void Research(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void Resign(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void SellCommodity(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void SetDifficultyParameter(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void SetDoctrine(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void SetEscrowPercentage(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void SetGoal(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void SetSharedGoal(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void SetSignal(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void SetStance(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void SetStrategicNumber(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void Spy(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void Taunt(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void TauntUsingRange(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void Train(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void TributeToPlayer(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpAddCostData(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpAddObjectById(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpAddObjectCost(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpAddPoint(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpAddResearchCost(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpAssignBuilders(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpBoundPoint(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpBoundPrecisePoint(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpBuild(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpBuildLine(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpBuyCommodity(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpChangeName(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpChatDataToAll(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpChatDataToPlayer(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpChatDataToSelf(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpCleanSearch(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpCopyPoint(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpCreateGroup(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpCrossTiles(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpDeleteDistantFarms(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpDeleteIdleUnits(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpDeleteObjects(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpDisbandGroupType(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpDropResources(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFilterDistance(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFilterExclude(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFilterGarrison(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFilterInclude(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFilterRange(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFilterStatus(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFindFlare(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFindLocal(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFindNextPlayer(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFindPlayer(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFindPlayerFlare(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFindRemote(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFindResource(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFindStatusLocal(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFindStatusRemote(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpFullResetSearch(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGarrison(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGatherInside(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetAttackerClass(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetCostDelta(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetEvent(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetFact(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetFactMax(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetFactMin(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetFactSum(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetFocusFact(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetGroupSize(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetGuardState(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetIndirectGoal(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetObjectData(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetObjectTargetData(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetObjectTypeData(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetPathDistance(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetPlayerColor(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetPlayerFact(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetPoint(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetPointContains(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetPointDistance(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetPointElevation(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetPointTerrain(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetPointZone(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetPreciseTime(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetProjectilePlayer(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetRuleId(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetSearchState(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetSharedGoal(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetSignal(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetTargetFact(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetThreatData(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetTimer(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetUpgradeId(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetVictoryData(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGetVictoryLimit(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpGuardUnit(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpJumpDirect(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpJumpDynamic(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpJumpRule(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpLerpPercent(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpLerpTiles(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpLogData(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpModifyEscrow(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpModifyFlag(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpModifyGoal(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpModifyGroupFlag(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpModifySn(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpReleaseEscrow(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpRemoveObjects(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpRequestHunters(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpResearch(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpResetAttackNow(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpResetBuilding(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpResetCostData(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpResetFilters(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpResetGroup(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpResetPlacement(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpResetScouts(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpResetSearch(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpResetTargetPriorities(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpResetUnit(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpRetaskGatherers(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpRetreatNow(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpRetreatTo(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSellCommodity(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSendFlare(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSendScout(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSetAttackStance(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSetDefensePriority(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSetEvent(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSetGroup(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSetIndirectGoal(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSetOffensePriority(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSetPlacementData(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSetPreciseTargetPoint(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSetSharedGoal(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSetSignal(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSetTargetById(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSetTargetObject(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSetTargetPoint(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSetTimer(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpSetupCostData(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpStoreMapName(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpStoreObjectName(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpStorePlayerChat(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpStorePlayerName(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpStoreTechName(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpStoreText(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpStoreTypeName(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpTargetObjects(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpTargetPoint(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpTrain(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpTributeToPlayer(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpUngarrison(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);
	static void UpUpdateTargets(const google::protobuf::Any& anyCommand, google::protobuf::Any* anyResult);

private:
	ExpertActionHandler() {};
};

