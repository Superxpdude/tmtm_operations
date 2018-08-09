// XPTloadouts.hpp
// Used for defining advanced respawn loadouts for players
// Default behaviour is to check if the player unit has a special loadout defined. Otherwise, it will check to see if the classname matches a loadout
// Advanced functionality allows mission creator to define exactly where items are placed in unit inventories
// Also supports sub-loadout randomization. If a loadout has sub-classes defined, the script will automatically select one of them to apply to the unit.
class loadouts
{
	class example
	{
		displayName = "Example Loadout"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {"Titan_AP"}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"9Rnd_45ACP_Mag"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrig_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
		
	};
	class CUP_O_RU_Soldier_VDV
	{
		displayName = "Rifleman";
		
		weapons[] = {"hlc_rifle_ak74","CUP_hgun_Makarov","Binocular"};
		primaryWeaponItems[] = {"HLC_Optic_1p29","hlc_30Rnd_545x39_t_ak"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_8Rnd_9x18_Makarov_M"};
		
        uniformClass = "CUP_U_O_RUS_Flora_1_VDV";
        headgearClass = "CUP_H_RUS_6B27";
        facewearClass = "";
        vestClass = "CUP_V_RUS_6B3_1";
        backpackClass = "";
        
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR"};
        uniformItems[] = {{"CUP_8Rnd_9x18_Makarov_M",3},{"SmokeShell",2},{"SmokeShellRed",2},{"SmokeShellBlue",2}};
        vestItems[] = {{"hlc_30Rnd_545x39_t_ak",8},{"CUP_HandGrenade_RGD5",3}};
        backpackItems[] = {};
		
		basicMedUniform[] = {{"ACE_fieldDressing",10},{"ACE_epinephrine",2},{"ACE_morphine",4}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	class CUP_O_RU_Officer_VDV
	{
		displayName = "Officer";
		
		weapons[] = {"hlc_rifle_ak74m","CUP_hgun_Makarov","Rangefinder"};
		primaryWeaponItems[] = {"hlc_optic_kobra","hlc_30Rnd_545x39_t_ak"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_8Rnd_9x18_Makarov_M"};
		
        uniformClass = "CUP_U_O_RUS_Flora_2_VDV";
        headgearClass = "CUP_H_RUS_Beret_VDV";
        facewearClass = "G_Aviator";
        vestClass = "CUP_V_CDF_6B3_5_Green";
        backpackClass = "TFAR_mr3000_multicam";
        
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemcTab"};
        uniformItems[] = {{"CUP_8Rnd_9x18_Makarov_M",3},{"SmokeShell",2}};
        vestItems[] = {{"hlc_30Rnd_545x39_t_ak",8},{"SmokeShell",3},{"SmokeShellRed",3},{"SmokeShellBlue",3}};
        backpackItems[] = {};
		
		basicMedUniform[] = {{"ACE_fieldDressing",10},{"ACE_epinephrine",2},{"ACE_morphine",4}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	class CUP_O_RU_Soldier_SL_VDV: CUP_O_RU_Soldier_VDV
	{
		displayName = "Squad Leader";
		
		weapons[] = {"hlc_rifle_ak74m_GL","CUP_hgun_Makarov","Rangefinder"};
		primaryWeaponItems[] = {"HLC_Optic_1p29","hlc_30Rnd_545x39_t_ak","CUP_1Rnd_HE_GP25_M"};
		
        backpackClass = "TFAR_mr3000_multicam";
        
        linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemAndroid"};
        backpackItems[] = {{"CUP_1Rnd_HE_GP25_M",11},{"CUP_1Rnd_SMOKE_GP25_M",6},{"CUP_1Rnd_SmokeRed_GP25_M",6}};
	};
	class CUP_O_RU_Soldier_TL_VDV: CUP_O_RU_Soldier_VDV
	{
		displayName = "Team Leader";
		
		weapons[] = {"hlc_rifle_ak74m_GL","CUP_hgun_Makarov","Rangefinder"};
		primaryWeaponItems[] = {"HLC_Optic_1p29","hlc_30Rnd_545x39_t_ak","CUP_1Rnd_HE_GP25_M"};
		
        backpackClass = "CUP_B_AlicePack_Khaki";
        
        backpackItems[] = {{"CUP_1Rnd_HE_GP25_M",11},{"CUP_1Rnd_SMOKE_GP25_M",6},{"CUP_1Rnd_SmokeRed_GP25_M",6}};
	};
	class CUP_O_RU_Soldier_Marksman_VDV: CUP_O_RU_Soldier_VDV
	{
		displayName = "Marksman";
		
		weapons[] = {"CUP_srifle_SVD","CUP_hgun_Makarov","Rangefinder"};
		primaryWeaponItems[] = {"CUP_optic_PSO_1","CUP_SVD_camo_g_half","CUP_10Rnd_762x54_SVD_M"};
		
        vestItems[] = {{"CUP_10Rnd_762x54_SVD_M",15},{"CUP_HandGrenade_RGD5",3}};
	};
	class CUP_O_RU_Soldier_AR_VDV: CUP_O_RU_Soldier_VDV
	{
		displayName = "Machinegunner";
		
		weapons[] = {"CUP_lmg_Pecheneg","CUP_hgun_Makarov","Binocular"};
		primaryWeaponItems[] = {"CUP_optic_PechenegScope","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
		
        vestClass = "CUP_V_RUS_6B3_3";
        backpackClass = "CUP_B_RUS_Pack_AR";
        
        vestItems[] = {{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1},{"CUP_HandGrenade_RGD5",3}};
        backpackItems[] = {{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",4}};
	};
	class CUP_O_RU_Soldier_AT_VDV: CUP_O_RU_Soldier_VDV
	{
		displayName = "Rifleman (AT)";
		
		weapons[] = {"hlc_rifle_ak74","CUP_hgun_Makarov","CUP_launch_RPG7V","Binocular"};
		secondaryWeaponItems[] = {"CUP_optic_PGO7V3","CUP_PG7V_M"};
		
        vestClass = "CUP_V_RUS_6B3_2";
        backpackClass = "CUP_B_RUS_Pack_AT";
        
        backpackItems[] = {{"CUP_PG7V_M",3}};
	};
	class CUP_O_RU_Medic_VDV: CUP_O_RU_Soldier_VDV
	{
		displayName = "Medic";
		
		backpackClass = "CUP_B_AlicePack_Bedroll";
		
		basicMedBackpack[] = {{"ACE_fieldDressing",100},{"ACE_epinephrine",30},{"ACE_morphine",50},{"ACE_bloodIV",5}};
	};
	class cmd_medic: CUP_O_RU_Medic_VDV
	{
		displayName = "Command Medic";
		backpackClass = "TFAR_mr3000_multicam";
		basicMedBackpack[] = {{"ACE_fieldDressing",80},{"ACE_epinephrine",20},{"ACE_morphine",50},{"ACE_bloodIV",3}};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "Itemctab"};
	};
	class CUP_O_RU_Crew_VDV: CUP_O_RU_Soldier_VDV
	{
		displayName = "Crewman";
		
		weapons[] = {"hlc_rifle_aks74u","CUP_hgun_Makarov","Binocular"};
		
		uniformClass = "CUP_U_O_RUS_Flora_2_VDV";
		headgearClass = "CUP_H_RUS_TSH_4_Brown";
		vestClass = "CUP_V_CDF_6B3_2_Green";
		backpackClass = "B_FieldPack_oli";
		
		backpackItems[] = {{"ToolKit",1}};
	};
	class crew_lead: CUP_O_RU_Crew_VDV
	{
		displayName = "Lead Crewman";
		backpackClass = "TFAR_mr3000_multicam";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemAndroid"};
	};
	class arty_op: CUP_O_RU_Crew_VDV
	{
		displayName = "Artillery Operator";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemcTab"};
	};
};