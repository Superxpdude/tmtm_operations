// SXPloadouts.hpp
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
	};
	class B_Officer_F
	{	
		displayName = "Police Commissioner";
		
		weapons[] = {"hlc_rifle_M4", "CUP_hgun_Glock17", "Binocular"};
		primaryWeaponItems[] = {"CUP_acc_Flashlight", "30Rnd_556x45_Stanag_red"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_acc_Glock17_Flashlight", "CUP_17Rnd_9x19_glock17"};
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "CUP_H_C_Policecap_01";
		facewearClass = "G_Aviator";
		vestClass = "V_TacVest_blk_POLICE";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "Itemctab"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_556x45_Stanag_red", 4}, {"SmokeShell", 2}};
		backpackItems[] = {};
	};
	class cmd_medic
	{	
		displayName = "Police Command Medic";
		
		weapons[] = {"hlc_rifle_M4", "CUP_hgun_Glock17", "Binocular"};
		primaryWeaponItems[] = {"CUP_acc_Flashlight", "30Rnd_556x45_Stanag_red"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_acc_Glock17_Flashlight", "CUP_17Rnd_9x19_glock17"};
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_MilCap_Black";
		facewearClass = "";
		vestClass = "V_TacVest_blk_POLICE";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "Itemctab"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_556x45_Stanag_red", 4}, {"SmokeShell", 2}};
		backpackItems[] = {{"ACE_fieldDressing", 50}, {"ACE_epinephrine", 10}, {"ACE_morphine", 10}, {"ACE_bloodIV", 3}};
	};
	class RM_SWAT_TL_Red_01
	{	
		displayName = "SWAT Leader (Red)";
		
		weapons[] = {"hlc_rifle_ACR_Carb_black", "CUP_hgun_Glock17", "Binocular"};
		primaryWeaponItems[] = {"CUP_acc_Flashlight", "CUP_optic_CompM4", "30Rnd_556x45_Stanag_red"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_acc_Glock17_Flashlight", "CUP_17Rnd_9x19_glock17"};
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_Helmet_01";
		facewearClass = "G_RM_SWAT_Balaclava";
		vestClass = "RM_SWAT_Vest_Red_01";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemAndroid"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_556x45_Stanag_red", 8}, {"SmokeShell", 2}, {"ACE_M84", 3}};
		backpackItems[] = {};
	};
	class RM_SWAT_TL_Blue_01
	{	
		displayName = "SWAT Leader (Blue)";
		
		weapons[] = {"hlc_rifle_ACR_Carb_black", "CUP_hgun_Glock17", "Binocular"};
		primaryWeaponItems[] = {"CUP_acc_Flashlight", "CUP_optic_CompM4", "30Rnd_556x45_Stanag_red"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_acc_Glock17_Flashlight", "CUP_17Rnd_9x19_glock17"};
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_Helmet_01";
		facewearClass = "G_RM_SWAT_Balaclava";
		vestClass = "RM_SWAT_Vest_Blue_01";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemAndroid"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_556x45_Stanag_red", 8}, {"SmokeShell", 2}, {"ACE_M84", 3}};
		backpackItems[] = {};
	};
	class RM_SWAT_Operator_Red_01
	{	
		displayName = "SWAT Operator (Blue)";
		
		weapons[] = {"hlc_rifle_ACR_Carb_black", "CUP_hgun_Glock17", "Binocular"};
		primaryWeaponItems[] = {"CUP_acc_Flashlight", "CUP_optic_CompM4", "30Rnd_556x45_Stanag_red"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_acc_Glock17_Flashlight", "CUP_17Rnd_9x19_glock17"};
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_Helmet_01";
		facewearClass = "G_RM_SWAT_Balaclava";
		vestClass = "RM_SWAT_Vest_Red_01";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_556x45_Stanag_red", 8}, {"SmokeShell", 2}, {"ACE_M84", 3}};
		backpackItems[] = {};
	};
	class RM_SWAT_Operator_Blue_01
	{	
		displayName = "SWAT Operator (Blue)";
		
		weapons[] = {"hlc_rifle_ACR_Carb_black", "CUP_hgun_Glock17", "Binocular"};
		primaryWeaponItems[] = {"CUP_acc_Flashlight", "CUP_optic_CompM4", "30Rnd_556x45_Stanag_red"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_acc_Glock17_Flashlight", "CUP_17Rnd_9x19_glock17"};
		
		uniformClass = "RM_SWAT_Uniform_01";
		headgearClass = "RM_SWAT_Helmet_01";
		facewearClass = "G_RM_SWAT_Balaclava";
		vestClass = "RM_SWAT_Vest_Blue_01";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_556x45_Stanag_red", 8}, {"SmokeShell", 2}, {"ACE_M84", 3}};
		backpackItems[] = {};
	};
	class B_Soldier_SL_F
	{	
		displayName = "Police Squad Leader";
		
		weapons[] = {"hlc_rifle_M4", "CUP_hgun_Glock17", "Binocular"};
		primaryWeaponItems[] = {"CUP_acc_Flashlight", "30Rnd_556x45_Stanag_red"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_acc_Glock17_Flashlight", "CUP_17Rnd_9x19_glock17"};
		
		uniformClass = "CUP_U_C_Policeman_01";
		headgearClass = "H_Cap_police";
		facewearClass = "G_Shades_Black";
		vestClass = "V_TacVest_blk_POLICE";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemAndroid"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_556x45_Stanag_red", 4}, {"SmokeShell", 2}};
		backpackItems[] = {};
	};
	class B_Soldier_F
	{	
		displayName = "Police Officer";
		
		weapons[] = {"hlc_rifle_M4", "CUP_hgun_Glock17", "Binocular"};
		primaryWeaponItems[] = {"CUP_acc_Flashlight", "30Rnd_556x45_Stanag_red"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_acc_Glock17_Flashlight", "CUP_17Rnd_9x19_glock17"};
		
		uniformClass = "CUP_U_C_Policeman_01";
		headgearClass = "H_Cap_police";
		facewearClass = "G_Shades_Black";
		vestClass = "V_TacVest_blk_POLICE";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_556x45_Stanag_red", 4}, {"SmokeShell", 2}};
		backpackItems[] = {};
	};
	class B_Medic_F
	{	
		displayName = "Police Squad Leader";
		
		weapons[] = {"hlc_rifle_M4", "CUP_hgun_Glock17", "Binocular"};
		primaryWeaponItems[] = {"CUP_acc_Flashlight", "30Rnd_556x45_Stanag_red"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_acc_Glock17_Flashlight", "CUP_17Rnd_9x19_glock17"};
		
		uniformClass = "CUP_U_C_Policeman_01";
		headgearClass = "H_Cap_police";
		facewearClass = "G_Shades_Black";
		vestClass = "V_TacVest_blk_POLICE";
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_556x45_Stanag_red", 4}, {"SmokeShell", 2}};
		backpackItems[] = {{"ACE_fieldDressing", 50}, {"ACE_epinephrine", 10}, {"ACE_morphine", 10}, {"ACE_bloodIV", 3}};
	};
};