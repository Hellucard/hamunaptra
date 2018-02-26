/*
 * commandsNEW.h
 *
 *  Created on: 16/01/2010
 *      Author: victor
 */

#ifndef COMMANDSNEW_H_
#define COMMANDSNEW_H_

#include "ActionShot1Command.h"
#include "ActionShot2Command.h"
#include "ActivateCloneCommand.h"
#include "ActivateQuestCommand.h"
#include "AddAllowedPlayerCommand.h"
#include "AddBannedPlayerCommand.h"
#include "AddFriendCommand.h"
#include "AddIgnoreCommand.h"
#include "AddMapLocationCommand.h"
#include "AddPowerCommand.h"
#include "AdminCommand.h"
#include "AdjustLotCountCommand.h"
#include "AiIgnoreCommand.h"
#include "AimCommand.h"
#include "AlertCommand.h"
#include "AnimalAttackCommand.h"
#include "AnimalCalmCommand.h"
#include "AnimalScareCommand.h"
#include "AnonCommand.h"
#include "ApplyDiseaseCommand.h"
#include "ApplyPoisonCommand.h"
#include "ApplyPoisonDartCommand.h"
#include "ApplyPowerupCommand.h"
#include "AreatrackCommand.h"
#include "AssignDroidCommand.h"
#include "AssistCommand.h"
#include "AssociateDroidControlDeviceWithShipCommand.h"
#include "AttackCommand.h"
#include "AuctionCommand.h"
#include "AuctionAcceptCommand.h"
#include "AuctionBidCommand.h"
#include "AuctionCancelCommand.h"
#include "AuctionCreateCommand.h"
#include "AuctionQueryCommand.h"
#include "AuctionRetrieveCommand.h"
#include "AuctionsayCommand.h"
#include "AvoidIncapacitationCommand.h"
#include "BandFlourishCommand.h"
#include "BattlefieldStatusCommand.h"
#include "Berserk1Command.h"
#include "Berserk2Command.h"
#include "BetCommand.h"
#include "BleedingShotCommand.h"
#include "BlindAttackCommand.h"
#include "BoardShuttleCommand.h"
#include "BodyShot1Command.h"
#include "BodyShot2Command.h"
#include "BodyShot3Command.h"
#include "BoostmoraleCommand.h"
#include "BroadcastCommand.h"
#include "BroadcastAreaCommand.h"
#include "BroadcastGalaxyCommand.h"
#include "BroadcastPlanetCommand.h"
#include "BurstRunCommand.h"
#include "RocketBootsCommand.h"
#include "BurstShot1Command.h"
#include "BurstShot2Command.h"
#include "CancelCraftingSessionCommand.h"
#include "CenterOfBeingCommand.h"
#include "ChangeBandMusicCommand.h"
#include "ChangeDanceCommand.h"
#include "ChangeMusicCommand.h"
#include "ChannelForceCommand.h"
#include "ChargeShot1Command.h"
#include "ChargeShot2Command.h"
#include "CheckForceStatusCommand.h"
#include "CitybanCommand.h"
#include "CitypardonCommand.h"
#include "ClaimVeteranRewardCommand.h"
#include "ClearCompletedQuestCommand.h"
#include "ClearVeteranRewardCommand.h"
#include "ClientQualifiedForSkillCommand.h"
#include "CloneCommand.h"
#include "CloseContainerCommand.h"
#include "CloseLotteryContainerCommand.h"
#include "ColorlightsCommand.h"
#include "CombatCommand.h"
#include "CombatEscapeCommand.h"
#include "CombatModeCheckCommand.h"
#include "CombatSpamCommand.h"
#include "CombatTargetCommand.h"
#include "CompleteQuestCommand.h"
#include "ConcealCommand.h"
#include "ConcealShotCommand.h"
#include "ConfusionShotCommand.h"
#include "ConsentCommand.h"
#include "CorpseCommand.h"
#include "CounterAttackCommand.h"
#include "CoupDeGraceCommand.h"
#include "CraftCommand.h"
#include "CreateCreatureCommand.h"
#include "CreateEffectCommand.h"
#include "CreateManfSchematicCommand.h"
#include "CreateMissionElementCommand.h"
#include "CreateNPCCommand.h"
#include "CreatePrototypeCommand.h"
#include "CreateSpawningElementCommand.h"
#include "CreateSpawningElementWithDifficultyCommand.h"
#include "CreatureAreaAttackCommand.h"
#include "CreatureAreaBleedingCommand.h"
#include "CreatureAreaComboCommand.h"
#include "CreatureAreaDiseaseCommand.h"
#include "CreatureAreaKnockdownCommand.h"
#include "CreatureAreaPoisonCommand.h"
#include "CreatureRangedAttackCommand.h"
#include "CreditsCommand.h"
#include "CripplingShotCommand.h"
#include "CsAppendCommentCommand.h"
#include "CsCancelTicketCommand.h"
#include "CsConnectPlayerCommand.h"
#include "CsCreateTicketCommand.h"
#include "CsDisconnectPlayerCommand.h"
#include "CsGetArticleCommand.h"
#include "CsGetCommentsCommand.h"
#include "CsGetTicketsCommand.h"
#include "CsRequestCategoriesCommand.h"
#include "CsSearchKnowledgeBaseCommand.h"
#include "CuiConsentResponseCommand.h"
#include "CureDiseaseCommand.h"
#include "CurePoisonCommand.h"
#include "CustomizeDroidCommand.h"
#include "CustomizeVehicleCommand.h"
#include "DatabaseCommand.h"
#include "DazzleCommand.h"
#include "DeactivateQuestCommand.h"
#include "DeathBlowCommand.h"
#include "DeathCountCommand.h"
#include "DeclareOvertCommand.h"
#include "DeclareresidenceCommand.h"
#include "DeclineCommand.h"
#include "DefaultAttackCommand.h"
#include "DefaultDroidAttackCommand.h"
#include "DefuseMinefieldCommand.h"
#include "DelegateFactionPointsCommand.h"
#include "DenyServiceCommand.h"
#include "DeployTrapCommand.h"
#include "DestroyCommand.h"
#include "DestroystructureCommand.h"
#include "DetonateDroidCommand.h"
#include "DiagnoseCommand.h"
#include "DisarmingShot1Command.h"
#include "DisarmingShot2Command.h"
#include "DisbandCommand.h"
#include "DismissGroupMemberCommand.h"
#include "DismountCommand.h"
#include "DismountandstoreCommand.h"
#include "DistractCommand.h"
#include "DiveShotCommand.h"
#include "DizzyAttackCommand.h"
#include "DoubleTapCommand.h"
#include "DragIncapacitatedPlayerCommand.h"
#include "DrainForceCommand.h"
#include "DuelCommand.h"
#include "DumpTargetInformationCommand.h"
#include "DumpZoneInformationCommand.h"
#include "EatCommand.h"
#include "EditAppearanceCommand.h"
#include "EditBankCommand.h"
#include "EditBankAccountCommand.h"
#include "EditStatsCommand.h"
#include "EmboldenpetsCommand.h"
#include "EmptyMailTargetCommand.h"
#include "EndDuelCommand.h"
#include "EnragepetsCommand.h"
#include "EquilibriumCommand.h"
#include "ExecuteKnowledgeBaseMessageCommand.h"
#include "ExtinguishFireCommand.h"
#include "ExtractObjectCommand.h"
#include "EyeShotCommand.h"
#include "FactoryCrateSplitCommand.h"
#include "FanShotCommand.h"
#include "FastBlastCommand.h"
#include "FeignDeathCommand.h"
#include "FindCommand.h"
#include "FindFriendCommand.h"
#include "FindMyTrainerCommand.h"
#include "FindObjectCommand.h"
#include "FindPlayerCommand.h"
#include "FireAcidCone1Command.h"
#include "FireAcidCone2Command.h"
#include "FireAcidSingle1Command.h"
#include "FireAcidSingle2Command.h"
#include "FireHeavyWeaponCommand.h"
#include "VenomDartCommand.h"
#include "FirejetCommand.h"
#include "FireLightningCone1Command.h"
#include "FireLightningCone2Command.h"
#include "FireLightningSingle1Command.h"
#include "FireLightningSingle2Command.h"
#include "FirstAidCommand.h"
#include "FishCommand.h"
#include "FlameCone1Command.h"
#include "FlameCone2Command.h"
#include "FlameSingle1Command.h"
#include "FlameSingle2Command.h"
#include "FlashSpeederCommand.h"
#include "FlourishCommand.h"
#include "FlurryShot1Command.h"
#include "FlurryShot2Command.h"
#include "FlushingShot1Command.h"
#include "FlushingShot2Command.h"
#include "ForageCommand.h"
#include "ForceAbsorb1Command.h"
#include "ForceAbsorb2Command.h"
#include "ForceArmor1Command.h"
#include "ForceArmor2Command.h"
#include "ForceChokeCommand.h"
#include "ForceCommandCommand.h"
#include "ForceCureDiseaseCommand.h"
#include "ForceCurePoisonCommand.h"
#include "ForceFeedback1Command.h"
#include "ForceFeedback2Command.h"
#include "ForceIntimidateSingleCommand.h"
#include "ForceIntimidate1Command.h"
#include "ForceIntimidate2Command.h"
#include "ForceBreachCommand.h"
#include "ForceKnockdown1Command.h"
#include "ForceKnockdown2Command.h"
#include "ForceKnockdown3Command.h"
#include "ForceLightningCone1Command.h"
#include "ForceLightningCone2Command.h"
#include "ForceLightningSingle1Command.h"
#include "ForceLightningSingle2Command.h"
#include "ForceMeditateCommand.h"
#include "ForceOfWillCommand.h"
#include "ForceProtectionCommand.h"
#include "ForceResistBleedingCommand.h"
#include "ForceResistDiseaseCommand.h"
#include "ForceResistPoisonCommand.h"
#include "ForceResistStatesCommand.h"
#include "ForceRun1Command.h"
#include "ForceRun2Command.h"
#include "ForceRun3Command.h"
#include "ForceShield1Command.h"
#include "ForceShield2Command.h"
#include "ForceSpeed1Command.h"
#include "ForceSpeed2Command.h"
#include "ForceThrow1Command.h"
#include "ForceThrow2Command.h"
#include "ForceWeaken1Command.h"
#include "ForceWeaken2Command.h"
#include "FormupCommand.h"
#include "FreezePlayerCommand.h"
#include "FullAutoArea1Command.h"
#include "FullAutoArea2Command.h"
#include "FullAutoSingle1Command.h"
#include "FullAutoSingle2Command.h"
#include "GallopCommand.h"
#include "GallopStopCommand.h"
#include "GcCommand.h"
#include "GcwStatusCommand.h"
#include "GenerateCraftedItemCommand.h"
#include "GetAccountInfoCommand.h"
#include "GetAttributesCommand.h"
#include "GetAttributesBatchCommand.h"
#include "GetFriendListCommand.h"
#include "GetGameTimeCommand.h"
#include "GetIgnoreListCommand.h"
#include "GetMapLocationsCommand.h"
#include "GetObjVarsCommand.h"
#include "GetPlayerIdCommand.h"
#include "GetPrototypeCommand.h"
#include "GetRankCommand.h"
#include "GetSpawnDelaysCommand.h"
#include "GetStationNameCommand.h"
#include "GetVeteranRewardTimeCommand.h"
#include "GetVeteranRewardTimeCsCommand.h"
#include "GiveItemCommand.h"
#include "GiveMaintenanceToVendorCommand.h"
#include "GivevendormaintCommand.h"
#include "GmForceCommandCommand.h"
#include "GmCreateClassResourceCommand.h"
#include "GmCreateSpecificResourceCommand.h"
#include "GmForceRankCommand.h"
#include "GmFsVillageCommand.h"
#include "GmJediStateCommand.h"
#include "GmReviveCommand.h"
#include "GotoCommand.h"
#include "GrantBadgeCommand.h"
#include "GrantPadawanTrialsEligibilityCommand.h"
#include "GrantSkillCommand.h"
#include "RegrantSkillsCommand.h"
#include "RecalcForceCommand.h"
#include "GrantTitleCommand.h"
#include "GrantZoningRightsCommand.h"
#include "GroupChatCommand.h"
#include "GroupLootCommand.h"
#include "GuildCommand.h"
#include "GuildremoveCommand.h"
#include "GuildstatusCommand.h"
#include "HarmfulCommand.h"
#include "HarmlessCommand.h"
#include "HarvestCorpseCommand.h"
#include "HarvesterActivateCommand.h"
#include "HarvesterDeactivateCommand.h"
#include "HarvesterDiscardHopperCommand.h"
#include "HarvesterGetResourceDataCommand.h"
#include "HarvesterHarvestCommand.h"
#include "HarvesterMakeCrateCommand.h"
#include "HarvesterSelectResourceCommand.h"
#include "HarvesterTakeSurvey Command.h"
#include "HasVeteranRewardCommand.h"
#include "HaveconsentCommand.h"
#include "HeadShot1Command.h"
#include "HeadShot2Command.h"
#include "HeadShot3Command.h"
#include "HealActionSelf1Command.h"
#include "HealActionSelf2Command.h"
#include "HealActionWoundOther1Command.h"
#include "HealActionWoundOther2Command.h"
#include "HealActionWoundSelf1Command.h"
#include "HealActionWoundSelf2Command.h"
#include "HealAllOther1Command.h"
#include "HealAllOther2Command.h"
#include "HealAllSelf1Command.h"
#include "HealAllSelf2Command.h"
#include "HealBattleFatigueOther1Command.h"
#include "HealBattleFatigueOther2Command.h"
#include "HealBattleFatigueSelf1Command.h"
#include "HealBattleFatigueSelf2Command.h"
#include "HealDamageCommand.h"
#include "HealDroidDamageCommand.h"
#include "HealDroidWoundCommand.h"
#include "HealEnhanceCommand.h"
#include "HealHealthSelf1Command.h"
#include "HealHealthSelf2Command.h"
#include "HealHealthWoundOther1Command.h"
#include "HealHealthWoundOther2Command.h"
#include "HealHealthWoundSelf1Command.h"
#include "HealHealthWoundSelf2Command.h"
#include "HealMindCommand.h"
#include "HealMindSelf1Command.h"
#include "HealMindSelf2Command.h"
#include "HealMindWoundOther1Command.h"
#include "HealMindWoundOther2Command.h"
#include "HealMindWoundSelf1Command.h"
#include "HealMindWoundSelf2Command.h"
#include "HealPetCommand.h"
#include "HealStateCommand.h"
#include "HealStatesOtherCommand.h"
#include "HealStatesSelfCommand.h"
#include "HealthShot1Command.h"
#include "HealthShot2Command.h"
#include "HealWoundCommand.h"
#include "HoloEmoteCommand.h"
#include "ImagedesignCommand.h"
#include "InitializeComponentCommand.h"
#include "InnateCommand.h"
#include "InsertItemIntoShipComponentSlotCommand.h"
#include "InstallMissionTerminalCommand.h"
#include "InstallShipComponentCommand.h"
#include "InsureCommand.h"
#include "Intimidate1Command.h"
#include "Intimidate2Command.h"
#include "IntimidationAttackCommand.h"
#include "InviteCommand.h"
#include "InvulnerableCommand.h"
#include "ItemmovebackCommand.h"
#include "ItemmovedownCommand.h"
#include "ItemmoveforwardCommand.h"
#include "ItemmoveupCommand.h"
#include "ItemrotateleftCommand.h"
#include "ItemrotaterightCommand.h"
#include "JediMindTrickCommand.h"
#include "JoinCommand.h"
#include "JoinGameCommand.h"
#include "KickCommand.h"
#include "KillCommand.h"
#include "KillPlayerCommand.h"
#include "KipUpShotCommand.h"
#include "KneelCommand.h"
#include "KnockdownAttackCommand.h"
#include "KnockdownFireCommand.h"
#include "LagCommand.h"
#include "LastDitchCommand.h"
#include "LaunchFireworkCommand.h"
#include "LeaveGameCommand.h"
#include "LeaveGroupCommand.h"
#include "LegShot1Command.h"
#include "LegShot2Command.h"
#include "LegShot3Command.h"
#include "LfgCommand.h"
#include "ListActiveQuestsCommand.h"
#include "ListCompletedQuestsCommand.h"
#include "ListenCommand.h"
#include "ListGuildsCommand.h"
#include "LogoutCommand.h"
#include "LogoutServerCommand.h"
#include "LootCommand.h"
#include "LootAiCorpseCommand.h"
#include "LootPlayerCorpseCommand.h"
#include "LowBlowCommand.h"
#include "MakeLeaderCommand.h"
#include "MakeMasterLooterCommand.h"
#include "MakeSurveyCommand.h"
#include "ManufactureCommand.h"
#include "MaskscentCommand.h"
#include "MaxCombatAbilityCommand.h"
#include "MaxStatsCommand.h"
#include "MedicalForageCommand.h"
#include "MeditateCommand.h"
#include "MediumDiseaseCommand.h"
#include "MediumPoisonCommand.h"
#include "Melee1hBlindHit1Command.h"
#include "Melee1hBlindHit2Command.h"
#include "Melee1hBodyHit1Command.h"
#include "Melee1hBodyHit2Command.h"
#include "Melee1hBodyHit3Command.h"
#include "Melee1hDizzyHit1Command.h"
#include "Melee1hDizzyHit2Command.h"
#include "Melee1hHealthHit1Command.h"
#include "Melee1hHealthHit2Command.h"
#include "Melee1hHit1Command.h"
#include "Melee1hHit2Command.h"
#include "Melee1hHit3Command.h"
#include "Melee1hLunge1Command.h"
#include "Melee1hLunge2Command.h"
#include "Melee1hScatterHit1Command.h"
#include "Melee1hScatterHit2Command.h"
#include "Melee1hSpinAttack1Command.h"
#include "Melee1hSpinAttack2Command.h"
#include "Melee2hArea1Command.h"
#include "Melee2hArea2Command.h"
#include "Melee2hArea3Command.h"
#include "Melee2hHeadHit1Command.h"
#include "Melee2hHeadHit2Command.h"
#include "Melee2hHeadHit3Command.h"
#include "Melee2hHit1Command.h"
#include "Melee2hHit2Command.h"
#include "Melee2hHit3Command.h"
#include "Melee2hLunge1Command.h"
#include "Melee2hLunge2Command.h"
#include "Melee2hMindHit1Command.h"
#include "Melee2hMindHit2Command.h"
#include "Melee2hSpinAttack1Command.h"
#include "Melee2hSpinAttack2Command.h"
#include "Melee2hSweep1Command.h"
#include "Melee2hSweep2Command.h"
#include "MildDiseaseCommand.h"
#include "MildPoisonCommand.h"
#include "MindBlast1Command.h"
#include "MindBlast2Command.h"
#include "MindShot1Command.h"
#include "MindShot2Command.h"
#include "MinefieldAttackCommand.h"
#include "MoneyCommand.h"
#include "MountCommand.h"
#include "MoveFurnitureCommand.h"
#include "MultiTargetPistolShotCommand.h"
#include "MultiTargetShotCommand.h"
#include "NameStructureCommand.h"
#include "NewbiehelperCommand.h"
#include "NewbieRequestStartingLocationsCommand.h"
#include "NewbieSelectStartingLocationCommand.h"
#include "NextCraftingStageCommand.h"
#include "NpcCommand.h"
#include "NpcConversationSelectCommand.h"
#include "NpcConversationStartCommand.h"
#include "NpcConversationStopCommand.h"
#include "ObjectCommand.h"
#include "ObjvarCommand.h"
#include "OpenContainerCommand.h"
#include "OpenLotteryContainerCommand.h"
#include "OverChargeShot1Command.h"
#include "OverChargeShot2Command.h"
#include "OverrideActiveMonthsCommand.h"
#include "OverridePadawanTrialsEligibilityCommand.h"
#include "PanicShotCommand.h"
#include "PauseDanceCommand.h"
#include "PauseMusicCommand.h"
#include "PaWithdrawCommand.h"
#include "PaymaintenanceCommand.h"
#include "PeaceCommand.h"
#include "PermissionListModifyCommand.h"
#include "PistolMeleeDefense1Command.h"
#include "PistolMeleeDefense2Command.h"
#include "PlaceBattlefieldStructureCommand.h"
#include "PlaceStructureCommand.h"
#include "PlaceStructureModeCommand.h"
#include "PlanetCommand.h"
#include "PlanetsayCommand.h"
#include "PlanetwarpCommand.h"
#include "PlanetwarpTargetCommand.h"
#include "PointBlankArea1Command.h"
#include "PointBlankArea2Command.h"
#include "PointBlankSingle1Command.h"
#include "PointBlankSingle2Command.h"
#include "PolearmActionHit1Command.h"
#include "PolearmActionHit2Command.h"
#include "PolearmArea1Command.h"
#include "PolearmArea2Command.h"
#include "PolearmHit1Command.h"
#include "PolearmHit2Command.h"
#include "PolearmHit3Command.h"
#include "PolearmLegHit1Command.h"
#include "PolearmLegHit2Command.h"
#include "PolearmLegHit3Command.h"
#include "PolearmLunge1Command.h"
#include "PolearmLunge2Command.h"
#include "PolearmSpinAttack1Command.h"
#include "PolearmSpinAttack2Command.h"
#include "PolearmStun1Command.h"
#include "PolearmStun2Command.h"
#include "PolearmSweep1Command.h"
#include "PolearmSweep2Command.h"
#include "PostureDownAttackCommand.h"
#include "PostureUpAttackCommand.h"
#include "PowerBoostCommand.h"
#include "ProneCommand.h"
#include "PurchaseReinforcementCommand.h"
#include "PurchaseTicketCommand.h"
#include "QuickHealCommand.h"
#include "RallyCommand.h"
#include "ReconnectToTransferServerCommand.h"
#include "RecruitSkillTrainerCommand.h"
#include "RegainConsciousnessCommand.h"
#include "RegenerationCommand.h"
#include "RegisterWithLocationCommand.h"
#include "ReloadCommand.h"
#include "RemoteCommand.h"
#include "RemoveAllowedPlayerCommand.h"
#include "RemoveBannedPlayerCommand.h"
#include "RemoveFriendCommand.h"
#include "RemoveIgnoreCommand.h"
#include "RepairBattlefieldStructureCommand.h"
#include "RepairShipComponentInSlotCommand.h"
#include "ReportCommand.h"
#include "RequestBadgesCommand.h"
#include "RequestBiographyCommand.h"
#include "RequestCharacterMatchCommand.h"
#include "RequestCharacterSheetInfoCommand.h"
#include "RequestCoreSampleCommand.h"
#include "RequestCraftingSessionCommand.h"
#include "RequestDraftSlotsCommand.h"
#include "RequestDraftSlotsBatchCommand.h"
#include "RequestManfSchematicSlotsCommand.h"
#include "RequestResourceWeightsCommand.h"
#include "RequestResourceWeightsBatchCommand.h"
#include "RequestSetStatMigrationDataCommand.h"
#include "RequestStatMigrationDataCommand.h"
#include "RequestStatMigrationStartCommand.h"
#include "RequestStatMigrationStopCommand.h"
#include "RequestStimpackCommand.h"
#include "RequestSurveyCommand.h"
#include "RequestWaypointAtPositionCommand.h"
#include "RescueCommand.h"
#include "ResendLoginMessageToAllCommand.h"
#include "ResetJediCommand.h"
#include "ResourceCommand.h"
#include "ResourceContainerSplitCommand.h"
#include "ResourceContainerTransferCommand.h"
#include "ResourceSetNameCommand.h"
#include "ResSampleLoopCommand.h"
#include "RestartConversionCommand.h"
#include "RestartCraftingSessionCommand.h"
#include "RetreatCommand.h"
#include "RevivePlayerCommand.h"
#include "RevokeBadgeCommand.h"
#include "RevokeSkillCommand.h"
#include "RolePlayCommand.h"
#include "RollShotCommand.h"
#include "RotateFurnitureCommand.h"
#include "SaberComboHit1Command.h"
#include "SaberComboHit2Command.h"
#include "SaberComboHit3Command.h"
#include "Saber1hFlurryCommand.h"
#include "Saber1hFlurry2Command.h"
#include "SaberHeadHit1Command.h"
#include "SaberHeadHit2Command.h"
#include "SaberHeadHit3Command.h"
#include "Saber1hHit1Command.h"
#include "Saber1hHit2Command.h"
#include "Saber1hHit3Command.h"
#include "SaberBodyHit1Command.h"
#include "SaberBodyHit2Command.h"
#include "SaberBodyHit3Command.h"
#include "Saber2hFrenzyCommand.h"
#include "Saber2hHit1Command.h"
#include "Saber2hHit2Command.h"
#include "Saber2hHit3Command.h"
#include "Saber2hPhantomCommand.h"
#include "SaberSweep1Command.h"
#include "SaberSweep2Command.h"
#include "SaberSweep3Command.h"
#include "SaberPolearmDervishCommand.h"
#include "SaberPolearmDervish2Command.h"
#include "SaberPolearmHit1Command.h"
#include "SaberPolearmHit2Command.h"
#include "SaberPolearmHit3Command.h"
#include "SaberLegHit1Command.h"
#include "SaberLegHit2Command.h"
#include "SaberLegHit3Command.h"
#include "SaberSpinAttack1Command.h"
#include "SaberSpinAttack2Command.h"
#include "SaberSpinAttack3Command.h"
#include "SaberSlash1Command.h"
#include "SaberSlash2Command.h"
#include "SaberThrow1Command.h"
#include "SaberThrow2Command.h"
#include "SaberThrow3Command.h"
#include "SampleCommand.h"
#include "SampleDNACommand.h"
#include "ScatterShot1Command.h"
#include "ScatterShot2Command.h"
#include "ScriptCommand.h"
#include "SearchCorpseCommand.h"
#include "SecretSpawnSpamCommand.h"
#include "SeGogglesCommand.h"
#include "SelectDraftSchematicCommand.h"
#include "ServerCommand.h"
#include "ServerDestroyObjectCommand.h"
#include "ServerSysGroupCommand.h"
#include "SetBiographyAdminCommand.h"
#include "SetBiographyCommand.h"
#include "SetBoostmoraleCommand.h"
#include "SetChargeCommand.h"
#include "SetCurrentSkillTitleCommand.h"
#include "SetExperienceCommand.h"
#include "SetFactionCommand.h"
#include "SetFactionStandingCommand.h"
#include "SetFirstNameCommand.h"
#include "SetFormupCommand.h"
#include "SetGodModeCommand.h"
#include "SetHueCommand.h"
#include "SetIntimidateCommand.h"
#include "SetLastNameCommand.h"
#include "SetLoginMessageCommand.h"
#include "SetLoginTitleCommand.h"
#include "SetMatchMakingCharacterIdCommand.h"
#include "SetMatchMakingPersonalIdCommand.h"
#include "SetMaximumSpawnTimeCommand.h"
#include "SetMinimumSpawnTimeCommand.h"
#include "SetMoodCommand.h"
#include "SetMoodInternalCommand.h"
#include "SetNameCommand.h"
#include "SetNameCommand.h"
#include "SetOwnerCommand.h"
#include "SetPerformanceBuffTargetCommand.h"
#include "SetpermissionCommand.h"
#include "SetPlanetLimitCommand.h"
#include "SetPlayerAppearanceCommand.h"
#include "SetPlayerStateCommand.h"
#include "SetprivacyCommand.h"
#include "SetPublicStateCommand.h"
#include "SetRankCommand.h"
#include "SetRetreatCommand.h"
#include "SetSpeedCommand.h"
#include "SetSpokenLanguageCommand.h"
#include "SetSteadyaimCommand.h"
#include "SetTEFCommand.h"
#include "SetVeteranRewardCommand.h"
#include "SetWarcryCommand.h"
#include "SetWaypointActiveStatusCommand.h"
#include "SetWaypointNameCommand.h"
#include "ShowCouncilRankCommand.h"
#include "ShowDanceVisualsCommand.h"
#include "ShowFactionInformationCommand.h"
#include "ShowMusicianVisualsCommand.h"
#include "ShowPvPRatingCommand.h"
#include "ShowSpawnRegionCommand.h"
#include "SitServerCommand.h"
#include "SkillCommand.h"
#include "SmokebombCommand.h"
#include "SniperShotCommand.h"
#include "SnoopCommand.h"
#include "SocialCommand.h"
#include "SocialInternalCommand.h"
#include "SpatialChatCommand.h"
#include "SpatialChatInternalCommand.h"
#include "SpawnStatusCommand.h"
#include "SplitCreditsWithGroupCommand.h"
#include "SpotlightCommand.h"
#include "SprayShotCommand.h"
#include "StandCommand.h"
#include "StartBandCommand.h"
#include "StartCitySpawnerCommand.h"
#include "StartDanceCommand.h"
#include "StartleShot1Command.h"
#include "StartleShot2Command.h"
#include "StartMusicCommand.h"
#include "StartSpawnerCommand.h"
#include "StartTargetSpawnerCommand.h"
#include "StartTraceLoggingCommand.h"
#include "StatCommand.h"
#include "SteadyaimCommand.h"
#include "StopBandCommand.h"
#include "StopBleedingCommand.h"
#include "StopCitySpawnerCommand.h"
#include "StopCraftingSessionCommand.h"
#include "StopDanceCommand.h"
#include "StoplisteningCommand.h"
#include "StopMusicCommand.h"
#include "StoppingShotCommand.h"
#include "StopSpawnerCommand.h"
#include "StopTargetSpawnerCommand.h"
#include "StopTraceLoggingCommand.h"
#include "StopwatchingCommand.h"
#include "StrafeShot1Command.h"
#include "StrafeShot2Command.h"
#include "StrongDiseaseCommand.h"
#include "StrongPoisonCommand.h"
#include "StructurestatusCommand.h"
#include "StunAttackCommand.h"
#include "SuppressionFire1Command.h"
#include "SuppressionFire2Command.h"
#include "SurpriseShotCommand.h"
#include "SurrenderSkillCommand.h"
#include "SurveyCommand.h"
#include "SynchronizedUiListenCommand.h"
#include "SynchronizedUiStopListeningCommand.h"
#include "SystemMessageCommand.h"
#include "TakeCoverCommand.h"
#include "TameCommand.h"
#include "TargetCommand.h"
#include "TauntCommand.h"
#include "AreaTauntCommand.h"
#include "TeachCommand.h"
#include "TeleportCommand.h"
#include "TeleportTargetCommand.h"
#include "TeleportToCommand.h"
#include "TeleportGroupCommand.h"
#include "TellpetCommand.h"
#include "TendDamageCommand.h"
#include "TendDamageToolCommand.h"
#include "TendWoundCommand.h"
#include "TendWoundsToolCommand.h"
#include "ThreatenShotCommand.h"
#include "ThrowGrenadeCommand.h"
#include "ThrowTrapCommand.h"
#include "TipCommand.h"
#include "ToggleAwayFromKeyBoardCommand.h"
#include "ToggleDisplayingFactionRankCommand.h"
#include "TorsoShotCommand.h"
#include "TotalHealOtherCommand.h"
#include "TotalHealSelfCommand.h"
#include "TransferForceCommand.h"
#include "TransferItemCommand.h"
#include "TransferItemArmorCommand.h"
#include "TransferItemMiscCommand.h"
#include "TransferItemWeaponCommand.h"
#include "TransferstructureCommand.h"
#include "TumbleToKneelingCommand.h"
#include "TumbleToProneCommand.h"
#include "TumbleToStandingCommand.h"
#include "TurretFireCommand.h"
#include "UnarmedBlind1Command.h"
#include "UnarmedBodyHit1Command.h"
#include "UnarmedCombo1Command.h"
#include "UnarmedCombo2Command.h"
#include "UnarmedDizzy1Command.h"
#include "UnarmedHeadHit1Command.h"
#include "UnarmedHit1Command.h"
#include "UnarmedHit2Command.h"
#include "UnarmedHit3Command.h"
#include "UnarmedKnockdown1Command.h"
#include "UnarmedKnockdown2Command.h"
#include "UnarmedLegHit1Command.h"
#include "UnarmedLunge1Command.h"
#include "UnarmedLunge2Command.h"
#include "UnarmedSpinAttack1Command.h"
#include "UnarmedSpinAttack2Command.h"
#include "UnarmedStun1Command.h"
#include "UnassociateDroidControlDeviceWithShipCommand.h"
#include "UnCityBanCommand.h"
#include "UnconsentCommand.h"
#include "UnderHandShotCommand.h"
#include "UnfreezePlayerCommand.h"
#include "UninstallShipComponentCommand.h"
#include "UninviteCommand.h"
#include "UnsnoopCommand.h"
#include "UseReconDroneCommand.h"
#include "UseSkillBuffCommand.h"
#include "VentriloquismCommand.h"
#include "ToggleCombatTauntsCommand.h"
#include "VertFurnitureCommand.h"
#include "VitalizeCommand.h"
#include "VolleyFireCommand.h"
#include "VolleyFireAttackCommand.h"
#include "Warcry1Command.h"
#include "Warcry2Command.h"
#include "WarningShotCommand.h"
#include "WatchCommand.h"
#include "WildShot1Command.h"
#include "WildShot2Command.h"
#include "WipeItemsCommand.h"
#include "WookieeRoarCommand.h"
#include "CityInfoCommand.h"
#include "EjectCommand.h"
#include "LaunchIntoSpaceCommand.h"
#include "UnstickCommand.h"
#include "WaypointCommand.h"
#include "CreateVendorCommand.h"
#include "RequestQuestTimersAndCountersCommand.h"
#include "PilotShipCommand.h"
#include "UnpilotShipCommand.h"
#include "LeaveStationCommand.h"
#include "OpenWingsCommand.h"
#include "CloseWingsCommand.h"
#include "LaunchMissileCommand.h"
#include "LaunchCountermeasureCommand.h"
#include "BoosterOnCommand.h"
#include "BoosterOffCommand.h"
#include "InspectCommand.h"
#include "DockCommand.h"
#include "PumpreactorCommand.h"
#include "IffscrambleCommand.h"
#include "DroidCommand.h"
#include "LootAllCommand.h"
#include "ServerAsteroidDataListenCommand.h"
#include "ServerAsteroidDataStopListeningCommand.h"
#include "DisableTargetCommand.h"
#include "DestroyTargetCommand.h"
#include "SendFormObjectDataCommand.h"
#include "InspacerepairCommand.h"
#include "LightEngineScrambleCommand.h"
#include "HyperspaceCommand.h"
#include "AborthyperspaceCommand.h"
#include "EweaponsCommand.h"
#include "EshieldsCommand.h"
#include "EthrustCommand.h"
#include "VrepairCommand.h"
#include "Bstrike1Command.h"
#include "Bstrike2Command.h"
#include "Bstrike3Command.h"
#include "Ptrap1Command.h"
#include "Ptrap2Command.h"
#include "Epulse1Command.h"
#include "Epulse2Command.h"
#include "Epulse3Command.h"
#include "NblastCommand.h"
#include "VrepairotherCommand.h"
#include "UndockCommand.h"
#include "Jstart1Command.h"
#include "Jstart2Command.h"
#include "Jstart3Command.h"
#include "EscapePodCommand.h"
#include "InspacereloadCommand.h"
#include "InspacerrCommand.h"
#include "RequestSpaceTrainerCommand.h"
#include "SetPvPCommand.h"



#endif /* COMMANDSNEW_H_ */

