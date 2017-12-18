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
	
	class I_officer_F
	{
		displayName = "Commander";
		
		weapons[] = {"CUP_arifle_Mk17_CQC_Black", "hlc_pistol_P226R_Combat", "Rangefinder"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
		
		uniformClass = "CUP_I_B_PMC_Unit_28";
		headgearClass = "H_Beret_blk";
		facewearClass = "G_Aviator";
		vestClass = "CUP_V_PMC_CIRAS_Winter_TL";
		backpackClass = "TFAR_anprc155_coyote";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemcTab", "TFAR_anprc148jem"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}, {"hlc_15Rnd_9x19_B_P226", 3}, {"SmokeShell", 1}};
		vestItems[] = {{"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 4}, {"SmokeShell", 1}};
		backpackItems[] = {};
		
		basicMedUniform[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 2}, {"ACE_morphine", 5}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	class cmd_medic
	{
		class cmd_medic_camo
		{
			displayName = "Command Medic";
			
			weapons[] = {"CUP_arifle_Mk17_CQC_Black", "hlc_pistol_P226R_Combat", "Binocular"};
			primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"};
			secondaryWeaponItems[] = {};
			handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
			
			uniformClass = "CUP_I_B_PMC_Unit_27";
			headgearClass = "H_Watchcap_blk";
			facewearClass = "G_Balaclava_combat";
			vestClass = "CUP_V_PMC_CIRAS_Winter_Veh";
			backpackClass = "TFAR_anprc155_coyote";
			
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemcTab", "TFAR_anprc148jem"};
			uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}, {"hlc_15Rnd_9x19_B_P226", 3}, {"SmokeShell", 1}};
			vestItems[] = {{"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 4}, {"SmokeShell", 1}};
			backpackItems[] = {};
			
			basicMedUniform[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 2}, {"ACE_morphine", 5}};
			basicMedVest[] = {};
			basicMedBackpack[] = {{"ACE_fieldDressing", 75}, {"ACE_epinephrine", 10}, {"ACE_morphine", 40}, {"ACE_bloodIV", 3}};
			
			advMedUniform[] = {};
			advMedVest[] = {};
			advMedBackpack[] = {};
		};
		class cmd_medic_white: cmd_medic_camo
		{
			uniformClass = "CUP_I_B_PMC_Unit_25";
		};
	};
	class I_engineer_F
	{
		displayName = "Command Engineer";
		class engineer_camo
		{
			displayName = "Command Engineer";
		
			weapons[] = {"CUP_arifle_Mk17_CQC_Black", "hlc_pistol_P226R_Combat", "Binocular"};
			primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"};
			secondaryWeaponItems[] = {};
			handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
			
			uniformClass = "CUP_I_B_PMC_Unit_27";
			headgearClass = "H_Watchcap_blk";
			facewearClass = "G_Balaclava_combat";
			vestClass = "CUP_V_PMC_CIRAS_Winter_Veh";
			backpackClass = "B_TacticalPack_blk";
			
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemcTab", "TFAR_anprc148jem"};
			uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}, {"hlc_15Rnd_9x19_B_P226", 3}, {"SmokeShell", 1}};
			vestItems[] = {{"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 4}, {"SmokeShell", 1}};
			backpackItems[] = {{"ToolKit", 1}, {"ACE_wirecutter", 1}};
			
			basicMedUniform[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 2}, {"ACE_morphine", 5}};
			basicMedVest[] = {};
			basicMedBackpack[] = {{"ACE_fieldDressing", 100}, {"ACE_epinephrine", 15}, {"ACE_morphine", 50}, {"ACE_bloodIV", 5}};
			
			advMedUniform[] = {};
			advMedVest[] = {};
			advMedBackpack[] = {};
		};
		class engineer_white: engineer_camo
		{
			uniformClass = "CUP_I_B_PMC_Unit_25";
		};
	};
	class I_Soldier_SL_F
	{
		class squadlead_camo
		{
			displayName = "Squad Leader";
			
			weapons[] = {"CUP_arifle_Mk17_STD_EGLM_black", "hlc_pistol_P226R_Combat", "Rangefinder"};
			primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", "CUP_1Rnd_HE_M203"};
			secondaryWeaponItems[] = {};
			handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
			
			uniformClass = "CUP_I_B_PMC_Unit_27";
			headgearClass = "CUP_H_PMC_Cap_Back_EP_Grey";
			facewearClass = "G_Balaclava_lowprofile";
			vestClass = "CUP_V_PMC_CIRAS_Winter_Grenadier";
			backpackClass = "TFAR_anprc155_coyote";
			
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid", "TFAR_anprc148jem"};
			uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}, {"hlc_15Rnd_9x19_B_P226", 3}, {"SmokeShell", 1}};
			vestItems[] = {{"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 4}, {"SmokeShell", 1}};
			backpackItems[] = {{"CUP_1Rnd_HE_M203", 11}, {"CUP_FlareGreen_M203", 5}, {"CUP_FlareRed_M203", 5}};
			
			basicMedUniform[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 2}, {"ACE_morphine", 5}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
			
			advMedUniform[] = {};
			advMedVest[] = {};
			advMedBackpack[] = {};
		};
		class squadlead_white: squadlead_camo
		{
			uniformClass = "CUP_I_B_PMC_Unit_25";
		};
	};
	class I_medic_F
	{
		displayName = "Medic";
		class medic_camo
		{
			displayName = "Medic";
		
			weapons[] = {"CUP_arifle_Mk17_CQC_Black", "hlc_pistol_P226R_Combat", "Binocular"};
			primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"};
			secondaryWeaponItems[] = {};
			handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
			
			uniformClass = "CUP_I_B_PMC_Unit_26";
			headgearClass = "H_Watchcap_blk";
			facewearClass = "G_Balaclava_combat";
			vestClass = "CUP_V_PMC_CIRAS_Winter_Veh";
			backpackClass = "B_TacticalPack_blk";
			
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "TFAR_anprc148jem"};
			uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}, {"hlc_15Rnd_9x19_B_P226", 3}, {"SmokeShell", 1}};
			vestItems[] = {{"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 4}, {"SmokeShell", 1}};
			backpackItems[] = {};
			
			basicMedUniform[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 2}, {"ACE_morphine", 5}};
			basicMedVest[] = {};
			basicMedBackpack[] = {{"ACE_fieldDressing", 100}, {"ACE_epinephrine", 15}, {"ACE_morphine", 50}, {"ACE_bloodIV", 5}};
			
			advMedUniform[] = {};
			advMedVest[] = {};
			advMedBackpack[] = {};
		};
		class medic_white: medic_camo
		{
			uniformClass = "CUP_I_B_PMC_Unit_18";
		};
	};
	class I_Soldier_TL_F
	{
		class teamlead_camo
		{
			displayName = "Team Leader";
			
			weapons[] = {"CUP_arifle_Mk17_STD_EGLM_black", "hlc_pistol_P226R_Combat", "Binocular"};
			primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", "CUP_1Rnd_HE_M203"};
			secondaryWeaponItems[] = {};
			handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
			
			uniformClass = "CUP_I_B_PMC_Unit_27";
			headgearClass = "H_Watchcap_blk";
			facewearClass = "G_Balaclava_combat";
			vestClass = "CUP_V_PMC_CIRAS_Winter_Grenadier";
			backpackClass = "B_TacticalPack_blk";
			
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "TFAR_anprc148jem"};
			uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}, {"hlc_15Rnd_9x19_B_P226", 3}, {"SmokeShell", 1}};
			vestItems[] = {{"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 4}, {"SmokeShell", 1}};
			backpackItems[] = {{"CUP_1Rnd_HE_M203", 11}, {"CUP_FlareGreen_M203", 5}, {"CUP_FlareRed_M203", 5}};
			
			basicMedUniform[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 2}, {"ACE_morphine", 5}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
			
			advMedUniform[] = {};
			advMedVest[] = {};
			advMedBackpack[] = {};
		};
		class teamlead_white: teamlead_camo
		{
			uniformClass = "CUP_I_B_PMC_Unit_25";
		};
	};
	class I_Soldier_AR_F
	{
		class autorifle_camo
		{
			displayName = "Autorifleman";
			
			weapons[] = {"hlc_lmg_mk48mod1", "hlc_pistol_P226R_Combat", "Binocular"};
			primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "hlc_100Rnd_762x51_T_M60E4"};
			secondaryWeaponItems[] = {};
			handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
			
			uniformClass = "CUP_I_B_PMC_Unit_26";
			headgearClass = "H_Watchcap_blk";
			facewearClass = "G_Balaclava_combat";
			vestClass = "CUP_V_PMC_CIRAS_Winter_Patrol";
			backpackClass = "B_Messenger_Gray_F";
			
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "TFAR_anprc148jem"};
			uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}, {"hlc_15Rnd_9x19_B_P226", 3}, {"SmokeShell", 1}};
			vestItems[] = {{"hlc_100Rnd_762x51_T_M60E4", 2}, {"SmokeShell", 1}};
			backpackItems[] = {{"hlc_100Rnd_762x51_T_M60E4", 3}};
			
			basicMedUniform[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 2}, {"ACE_morphine", 5}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
			
			advMedUniform[] = {};
			advMedVest[] = {};
			advMedBackpack[] = {};
		};
		class autorifle_white: autorifle_camo
		{
			uniformClass = "CUP_I_B_PMC_Unit_18";
		};
	};
	class I_Soldier_M_F
	{
		class marksman_camo
		{
			displayName = "Marksman";
			
			weapons[] = {"CUP_srifle_M110", "hlc_pistol_P226R_Combat", "Rangefinder"};
			primaryWeaponItems[] = {"optic_AMS", "acc_flashlight", "bipod_01_F_blk", "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"};
			secondaryWeaponItems[] = {};
			handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
			
			uniformClass = "CUP_I_B_PMC_Unit_26";
			headgearClass = "H_Watchcap_blk";
			facewearClass = "G_Balaclava_blk";
			vestClass = "CUP_V_PMC_CIRAS_Winter_Veh";
			backpackClass = "";
			
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "TFAR_anprc148jem"};
			uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}, {"hlc_15Rnd_9x19_B_P226", 3}, {"SmokeShell", 1}};
			vestItems[] = {{"CUP_20Rnd_TE1_Red_Tracer_762x51_M110", 4}};
			backpackItems[] = {};
			
			basicMedUniform[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 2}, {"ACE_morphine", 5}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
			
			advMedUniform[] = {};
			advMedVest[] = {};
			advMedBackpack[] = {};
		};
		class marksman_white: marksman_camo
		{
			uniformClass = "CUP_I_B_PMC_Unit_18";
		};
	};
	class I_Soldier_exp_F
	{
		class explosive_camo
		{
			displayName = "Explosive Specialist";
			
			weapons[] = {"CUP_arifle_Mk17_STD_FG_black", "hlc_pistol_P226R_Combat", "Binocular"};
			primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"};
			secondaryWeaponItems[] = {};
			handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
			
			uniformClass = "CUP_I_B_PMC_Unit_26";
			headgearClass = "H_Watchcap_blk";
			facewearClass = "G_Balaclava_combat";
			vestClass = "CUP_V_PMC_CIRAS_Winter_Patrol";
			backpackClass = "B_TacticalPack_blk";
			
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "TFAR_anprc148jem"};
			uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}, {"hlc_15Rnd_9x19_B_P226", 3}, {"SmokeShell", 1}};
			vestItems[] = {{"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 2}, {"ACE_Clacker", 1}, {"MineDetector", 1}, {"ACE_DefusalKit", 1}};
			backpackItems[] = {{"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 2}, {"DemoCharge_Remote_Mag", 10}};
			
			basicMedUniform[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 2}, {"ACE_morphine", 5}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
			
			advMedUniform[] = {};
			advMedVest[] = {};
			advMedBackpack[] = {};
		};
		class explosive_white: explosive_camo
		{
			uniformClass = "CUP_I_B_PMC_Unit_18";
		};
	};
	class I_Soldier_F
	{
		class rifleman_camo
		{
			displayName = "Rifleman";
			
			weapons[] = {"CUP_arifle_Mk17_STD_FG_black", "hlc_pistol_P226R_Combat", "Binocular"};
			primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"};
			secondaryWeaponItems[] = {};
			handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"};
			
			uniformClass = "CUP_I_B_PMC_Unit_26";
			headgearClass = "H_Watchcap_blk";
			facewearClass = "G_Balaclava_combat";
			vestClass = "CUP_V_PMC_CIRAS_Winter_Patrol";
			backpackClass = "";
			
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "TFAR_anprc148jem"};
			uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}, {"hlc_15Rnd_9x19_B_P226", 3}, {"SmokeShell", 1}};
			vestItems[] = {{"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 4}, {"SmokeShell", 1}};
			backpackItems[] = {};
			
			basicMedUniform[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 2}, {"ACE_morphine", 5}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
			
			advMedUniform[] = {};
			advMedVest[] = {};
			advMedBackpack[] = {};
		};
		class rifleman_white: rifleman_camo
		{
			uniformClass = "CUP_I_B_PMC_Unit_18";
		};
	};
};