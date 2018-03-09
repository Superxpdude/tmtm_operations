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
	class nato_base
	{
		displayName = "NATO Base Loadout"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_pistol_P226R_Combat", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CTRG_3";
		headgearClass = "H_HelmetSpecB";
		facewearClass = "";
		vestClass = "V_PlateCarrierL_CTRG";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"hlc_15Rnd_9x19_B_P226", 2}, {"SmokeShell", 2}, {"ItemcTabHCam", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
	};
	
	class B_Officer_F: nato_base
	{
		displayName = "NATO Commander"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_G36C", "hlc_pistol_P226R_Combat", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"acc_flashlight", "CUP_optic_CompM2_Black", "hlc_30rnd_556x45_Tracers_G36"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "U_B_CTRG_2";
		headgearClass = "H_Beret_02";
		facewearClass = "G_Aviator";
		vestClass = "V_PlateCarrierL_CTRG";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemcTab"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		vestItems[] = {{"hlc_30rnd_556x45_Tracers_G36", 7}, {"HandGrenade", 2}, {"SmokeShell", 2}, {"SmokeShellRed", 2}, {"SmokeShellGreen", 2}, {"ACE_EntrenchingTool", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
	};
	
	class B_Medic_F: nato_base
	{
		displayName = "NATO Medic"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"hlc_rifle_G36KA1KSK", "hlc_pistol_P226R_Combat", "Binocular"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "hlc_30rnd_556x45_Tracers_G36"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"}; // Handgun items. Includes magazine you want loaded initially.

		headgearClass = "H_HelmetSpecB_sand";
		facewearClass = "G_Tactical_Clear";
		vestClass = "V_PlateCarrierH_CTRG";
		backpackClass = "B_Carryall_oli";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		vestItems[] = {{"hlc_30rnd_556x45_Tracers_G36", 9}, {"SmokeShell", 4}, {"SmokeShellGreen", 3}, {"SmokeShellRed", 3}, {"ACE_EntrenchingTool", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines

		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {{"ACE_fieldDressing", 100}, {"ACE_bloodIV", 5}, {"ACE_epinephrine", 10}, {"ACE_morphine", 35}}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
	};
	
	class cmd_medic: B_Medic_F
	{
		displayName = "NATO Command Medic"
		
		weapons[] = {"hlc_rifle_G36KA1KSK", "hlc_pistol_P226R_Combat", "Rangefinder"};
		
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemcTab"};
		
		basicMedBackpack[] = {{"ACE_fieldDressing", 60}, {"ACE_bloodIV", 2}, {"ACE_epinephrine", 10}, {"ACE_morphine", 10}};
		
		advMedBackpack[] = {};
	};
	
	class B_Crew_F: nato_base
	{
		displayName = "NATO Crewman";
		
		weapons[] = {"hlc_rifle_G36C", "hlc_pistol_P226R_Combat", "Binocular"};
		primaryWeaponItems[] = {"acc_flashlight", "CUP_optic_CompM2_Black", "hlc_30rnd_556x45_Tracers_G36"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
		
		uniformClass = "U_B_CTRG_1";
		headgearClass = "H_HelmetCrew_B";
		facewearClass = "G_Tactical_Clear";
		vestClass = "V_PlateCarrierL_CTRG";
		backpackClass = "B_AssaultPack_rgr";
		
		vestItems[] = {{"hlc_30rnd_556x45_Tracers_G36", 7}, {"SmokeShell", 4}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}, {"ACE_EntrenchingTool", 1}};
		backpackItems[] = {{"ToolKit", 1}};
	};
	
	class crew_lead: B_Crew_F
	{
		displayName = "NATO Crew Leader";
		
		weapons[] = {"hlc_rifle_G36C", "hlc_pistol_P226R_Combat", "Rangefinder"};
		
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemAndroid"};
	};
	
	class B_Soldier_SL_F: nato_base
	{
		displayName = "NATO Squad Leader";
		
		weapons[] = {"HLC_Rifle_G36KSKAG36", "hlc_pistol_P226R_Combat", "Rangefinder"};
		primaryWeaponItems[] = {"acc_flashlight", "optic_MRCO", "hlc_30rnd_556x45_Tracers_G36", "1Rnd_HE_Grenade_shell"};
		handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
		
		headgearClass = "H_HelmetSpecB_blk";
		facewearClass = "G_Tactical_Clear";
		vestClass = "V_PlateCarrierH_CTRG";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemAndroid"};
		vestItems[] = {{"hlc_30rnd_556x45_Tracers_G36", 9}, {"SmokeShell", 2}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}, {"HandGrenade", 2}, {"ACE_EntrenchingTool", 1}};
		backpackItems[] = {{"1Rnd_HE_Grenade_shell", 11}, {"1Rnd_Smoke_Grenade_shell", 3}, {"1Rnd_SmokeRed_Grenade_shell", 3}, {"1Rnd_SmokeGreen_Grenade_shell", 3}};
	};
	
	class B_Soldier_TL_F: nato_base
	{
		displayName = "NATO Team Leader";
		
		weapons[] = {"HLC_Rifle_G36KSKAG36", "hlc_pistol_P226R_Combat", "Rangefinder"};
		primaryWeaponItems[] = {"acc_flashlight", "optic_MRCO", "hlc_30rnd_556x45_Tracers_G36", "1Rnd_HE_Grenade_shell"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
		
		facewearClass = "G_Tactical_Clear";
		vestClass = "V_PlateCarrierH_CTRG";
		backpackClass = "B_AssaultPack_rgr";
		
		vestItems[] = {{"hlc_30rnd_556x45_Tracers_G36", 9}, {"SmokeShell", 2}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}, {"HandGrenade", 2}, {"ACE_EntrenchingTool", 1}};
		backpackItems[] = {{"1Rnd_HE_Grenade_shell", 11}, {"1Rnd_Smoke_Grenade_shell", 3}, {"1Rnd_SmokeRed_Grenade_shell", 3}, {"1Rnd_SmokeGreen_Grenade_shell", 3}};
	};
	
	class B_Soldier_M_F: nato_base
	{
		displayName = "NATO Marksman";
		
		weapons[] = {"srifle_DMR_02_camo_F", "hlc_pistol_P226R_Combat", "Rangefinder"};
		primaryWeaponItems[] = {"acc_flashlight", "optic_AMS", "bipod_01_F_blk", "10Rnd_338_Mag"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
		
		facewearClass = "G_Tactical_Clear";
		
		vestItems[] = {{"10Rnd_338_Mag", 7}, {"SmokeShell", 2}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}, {"ACE_EntrenchingTool", 1}, {"ACE_RangeCard", 1}};	
	};
	
	class B_Soldier_AR_F: nato_base
	{
		displayName = "NATO Autorifleman";
		
		weapons[] = {"hlc_lmg_mk48", "hlc_pistol_P226R_Combat", "Binocular"};
		primaryWeaponItems[] = {"acc_flashlight", "optic_tws_mg", "bipod_01_F_blk", "hlc_100Rnd_762x51_T_M60E4"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
		
		facewearClass = "G_Tactical_Clear";
		vestClass = "V_PlateCarrierL_CTRG";
		
		vestItems[] = {{"hlc_100Rnd_762x51_T_M60E4", 4}, {"SmokeShell", 2}, {"ACE_EntrenchingTool", 1}, {"optic_MRCO", 1}};
	};
	
	class B_Soldier_AT_F: nato_base
	{
		displayName = "NATO AT Specialist";
		
		weapons[] = {"hlc_rifle_G36KA1KSK", "launch_B_Titan_short_F", "hlc_pistol_P226R_Combat", "Binocular"};
		primaryWeaponItems[] = {"acc_flashlight", "optic_MRCO", "hlc_30rnd_556x45_Tracers_G36"};
		secondaryWeaponItems[] = {"Titan_AT"};
		handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
		
		backpackClass = "B_AssaultPack_cbr";
		
		vestItems[] = {{"hlc_30rnd_556x45_Tracers_G36", 9}, {"SmokeShell", 2}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}, {"HandGrenade", 2}, {"ACE_EntrenchingTool", 1}};
		backpackItems[] = {{"Titan_AT", 1}};
	};
	
	class B_Soldier_AAT_F: nato_base
	{
		displayName = "NATO Asst. AT Specialist";
		
		weapons[] = {"hlc_rifle_G36KA1KSK", "hlc_pistol_P226R_Combat", "Binocular"};
		primaryWeaponItems[] = {"acc_flashlight", "optic_MRCO", "hlc_30rnd_556x45_Tracers_G36"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
		
		backpackClass = "B_Carryall_cbr";
		
		vestItems[] = {{"hlc_30rnd_556x45_Tracers_G36", 9}, {"SmokeShell", 2}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}, {"HandGrenade", 2}, {"ACE_EntrenchingTool", 1}};
		backpackItems[] = {{"Titan_AT", 3}};
	};
	
	class B_Soldier_A_F: nato_base
	{
		displayName = "NATO Ammo Bearer";
		
		weapons[] = {"hlc_rifle_G36KA1KSK", "hlc_pistol_P226R_Combat", "Binocular"};
		primaryWeaponItems[] = {"acc_flashlight", "optic_MRCO", "hlc_30rnd_556x45_Tracers_G36"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
		
		backpackClass = "B_Carryall_khk";
		
		vestItems[] = {{"hlc_30rnd_556x45_Tracers_G36", 9}, {"SmokeShell", 2}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}, {"HandGrenade", 2}, {"ACE_EntrenchingTool", 1}};
		backpackItems[] = {{"hlc_30rnd_556x45_Tracers_G36", 30}, {"hlc_100Rnd_762x51_T_M60E4", 2}};
	};
};