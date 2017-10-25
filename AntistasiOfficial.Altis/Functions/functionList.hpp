
class AS {
	class init {
		file = "Functions";
		class init_hq {};
	};
	class save {
		file = "Save";
		class savePlayer {};
		class saveGame {};
		class loadPlayer {};
		class loadGame {};
		class saveFunctions {};
	};
	class menu {
		file = "UI\functions";
		class UI_clearMenu {};
		class UI_createMenu {};
		class UI_setTText {};
		class UI_itemSelected {};
		class UI_PressPlus {};
		class UI_PressMinus {};
		class UI_showCombo {};
		class UI_sellGear {};
		class UI_changeCategory {};
	};
	class client {
		file = "Functions";
		class AAFassets {};
		class changeRoleStef {};
		class addMoveObjAction {};
		class customSpawnGroup {};
		class gear_loadoutAAF {};
		class gear_loadoutCSAT {};
		class loadTFARsettings {};
		class lockVehicle {};
		//class MAINT_arsenal {};  Stef Disabled because it caused double arsenal entries
		class MAINT_arsInv {};
		class MAINT_missingAmmo {};
		class MAINT_resetPetros {};
		class pickGroup {};
		class protectVehicle {};
		class resetSkills {};
		class saveTFARsettings {};
		class selectRanks {};
		class skillAdjustments {};
		class toggle1PSEH {};
		class unlockVehicle {};
		class updateProgressBar {};
		class keyDownMain {};
		class refuelVehicles {};
		class radioCheck {};
		class getRank {};
		class sellVehicle {};
		class healCamp {};
		class garageVehicle {};
		class addActionMP {};
		class vacuSuck {};
		class storeGear {};
		class dropAllGear {};
		class stripCorpse {};
		class lootCorpses {};
		class startScavenging {};
		class storeAllGear {};
		class getUnlockRequirement {};
		class resetAIStatus {};
		class getSpareCapacity {};
		class fastTravel {};
		class punishPlayer {};
		class deployMinefield {};
		class getMarkerInfo {};
		class setupGearDB {};
		class detectRHS {};
		class detectACE {};
		class moveObject {};
		class respawnPetros {};
		class changeRole {};
		class findRoadSpot {};
		class clearForest {};
		class initPlayerEH {};
		class switchUniformTexture {};
	};
	class server {
		file = "Functions";
		class deployPad {};
		class expandGroup {};
		class fillCargo {};
		class findSpawnSpots {};
		class infoScreen {};
		class initialiseUnits {};
		class initialiseVehicle {};
		class logOutput {};
		class rearmPetros {};
		class selectCMPData {};
		class togglePetrosAnim {};
		class updateArsenal {};
		class weaponReplacement {};
		class weaponsCheck {};
		class increaseAttackTimer {};
		class powerReorg {};
		class powerCheck {};
		class getPatrolTargets {};
		class markerUpdate {};
		class localizar {};
		class isFrontline {};
		class getGarrisonInfo {};
		class fpsChange {};
		class findBaseForConvoy {};
		class findBaseForCA {};
		class findAirportForCA {};
		class fiaRadio {};
		class location {};
		class autoStart {};
		class sellGear {};
		class createItemDB {};
		class removeGear {};
		class insertVehicle {};
		class createLootCrates {};
		class addTimeForIdle {};
		class adjustLamps {};
		class spawnAttack {};
		class getNearbyCities {};
		class destroyCity {};
		class changeCitySupport {};
		class deleteRoadblock {};
		class createRoadblocks {};
		class enemyArtillerySupport {};
		class garrisonMonitor {};
		class reinforcementTimer {};
		class adjustGroupSize {};
		class protectCamoNet {};
		class IslandCheck {};
		class despawnUnits {};
		class despawnUnitsNow {};
		class initialiseFIAUnit {};
		class initialiseFIAGarrisonUnit {};
		class detectTFAR {};
		class spawnBunker {};
		class respawnRoadblock {};
		class createPatrolMarker {};
		class groundTransport {};
		class addGearToCrate {};
		class transferGear {};
		class resetHQ {};
	};
	class QRF {
		file = "Functions";
		class QRF_airCavalry {};
		class QRF_approachTarget {};
		class QRF_dismountTroops {};
		class QRF_fastrope {};
		class QRF_groundAssault {};
		class QRF_gunship {};
		class QRF_leadVehicle {};
		class QRF_loiter {};
		class QRF_RTB {};
		class QRF_truck {};
	};
	class JNA {
		file = "Functions";
		class JNA_getLists {};
		class JNA_pushLists {};
		class JNA_removeItem {};
		class JNA_dropPercentage {};
		class JNA_classifyItem {};
		class JNA_setupGear {};
	};
};