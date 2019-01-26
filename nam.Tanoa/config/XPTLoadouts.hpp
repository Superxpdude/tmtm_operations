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
	
	class B_Officer_F
	{
		displayName = "Commander";
		
		weapons[] = {"CUP_arifle_M16A2_GL", "CUP_hgun_Colt1911", "Binocular"};
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"};
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "H_MilCap_gry";
		facewearClass = "G_Aviator";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "tf_rt1523g_green";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemcTab", "tf_rf7800str"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}};
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"MiniGrenade", 1}};
		backpackItems[] = {{"1Rnd_HE_Grenade_shell", 10}, {"CUP_1Rnd_StarFlare_Green_M203", 4}, {"CUP_1Rnd_StarFlare_Red_M203", 4}, {"CUP_1Rnd_StarFlare_White_M203", 4}};
		
		basicMedUniform[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	
	class cmd_medic
	{
		displayName = "Command Medic";
		
		weapons[] = {"CUP_arifle_M16A2", "CUP_hgun_Colt1911", "Binocular"};
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"};
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "tf_rt1523g_green";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid", "tf_rf7800str"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}};
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"MiniGrenade", 1}};
		backpackItems[] = {{"ACE_quikclot", 80}, {"ACE_epinephrine", 20}, {"ACE_morphine", 20}, {"ACE_bloodIV", 5}};
		
		basicMedUniform[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	
	class B_Soldier_F
	{
		displayName = "Rifleman";
		
		weapons[] = {"CUP_arifle_M16A2", "CUP_hgun_Colt1911", "Binocular"};
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"};
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}};
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"hlc_100Rnd_762x51_M_M60E4", 1}, {"MiniGrenade", 1}};
		backpackItems[] = {};
		
		basicMedUniform[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	
	class B_Soldier_SL_F
	{
		displayName = "Squad Leader";
		
		weapons[] = {"CUP_arifle_M16A2_GL", "CUP_hgun_Colt1911", "Binocular"};
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"};
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "G_Aviator";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "tf_rt1523g_green";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid", "tf_rf7800str"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}};
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"hlc_100Rnd_762x51_M_M60E4", 1}, {"MiniGrenade", 1}};
		backpackItems[] = {{"1Rnd_HE_Grenade_shell", 10}, {"CUP_1Rnd_StarFlare_Green_M203", 4}, {"CUP_1Rnd_StarFlare_Red_M203", 4}, {"CUP_1Rnd_StarFlare_White_M203", 4}};
		
		basicMedUniform[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	
	class B_Soldier_AT_F
	{
		displayName = "Anti-Tank Specialist";
		
		weapons[] = {"CUP_arifle_M16A2", "CUP_launch_M47", "CUP_hgun_Colt1911", "Binocular"};
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag"};
		secondaryWeaponItems[] = {"CUP_Dragon_EP1_M"};
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"};
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}};
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"hlc_100Rnd_762x51_M_M60E4", 1}, {"MiniGrenade", 1}};
		backpackItems[] = {};
		
		basicMedUniform[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	
	class B_Soldier_AAT_F
	{
		displayName = "Assistant Anti-Tank Specialist";
		
		weapons[] = {"CUP_arifle_M16A2", "CUP_hgun_Colt1911", "Binocular"};
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"};
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "B_Carryall_oli";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}};
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"hlc_100Rnd_762x51_M_M60E4", 1}, {"MiniGrenade", 1}};
		backpackItems[] = {{"CUP_Dragon_EP1_M", 1}};
		
		basicMedUniform[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	
	class B_Soldier_A_F
	{
		displayName = "Ammo Bearer";
		
		weapons[] = {"CUP_arifle_M16A2", "CUP_hgun_Colt1911", "Binocular"};
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"};
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "B_Carryall_oli";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}};
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"hlc_100Rnd_762x51_M_M60E4", 1}, {"MiniGrenade", 1}};
		backpackItems[] = {{"CUP_30Rnd_556x45_Stanag", 24}, {"hlc_20Rnd_762x51_B_M14", 2}};
		
		basicMedUniform[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	
	class B_Medic_F
	{
		displayName = "Medic";
		
		weapons[] = {"CUP_arifle_M16A2", "CUP_hgun_Colt1911", "Binocular"};
		primaryWeaponItems[] = {"CUP_30Rnd_556x45_Stanag"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"};
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "B_TacticalPack_oli";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}};
		vestItems[] = {{"CUP_30Rnd_556x45_Stanag", 6}, {"hlc_100Rnd_762x51_M_M60E4", 1}, {"MiniGrenade", 1}};
		backpackItems[] = {};
		
		basicMedUniform[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}};
		basicMedVest[] = {};
		basicMedBackpack[] = {{"ACE_quikclot", 80}, {"ACE_epinephrine", 20}, {"ACE_morphine", 20}, {"ACE_bloodIV", 5}};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	
	class B_Soldier_M_F
	{
		displayName = "Marksman";
		
		weapons[] = {"hlc_rifle_M14_Bipod", "CUP_hgun_Colt1911", "Binocular"};
		primaryWeaponItems[] = {"20Rnd_762x51_Mag", "hlc_optic_artel_m14"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"};
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_FR_BandanaGreen";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}};
		vestItems[] = {{"20Rnd_762x51_Mag", 6}, {"MiniGrenade", 1}};
		backpackItems[] = {};
		
		basicMedUniform[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	
	class B_Soldier_AR_F
	{
		displayName = "Autorifleman";
		
		weapons[] = {"hlc_lmg_m60", "CUP_hgun_Colt1911", "Binocular"};
		primaryWeaponItems[] = {"hlc_100Rnd_762x51_M_M60E4"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"};
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}};
		vestItems[] = {{"hlc_100Rnd_762x51_M_M60E4", 3}, {"MiniGrenade", 1}};
		backpackItems[] = {};
		
		basicMedUniform[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	
	class B_Pilot_F
	{
		displayName = "Pilot";
		
		weapons[] = {"hlc_smg_mp5a3", "hgun_Pistol_Signal_F", "Binocular"};
		primaryWeaponItems[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_acc_Surefiregrip"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"6Rnd_RedSignal_F"};
		
		uniformClass = "U_B_HeliPilotCoveralls";
		headgearClass = "CUP_H_USMC_Helmet_Pilot";
		facewearClass = "G_Aviator";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "B_AssaultPack_sgg";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemAndroid", "tf_anprc152"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"6Rnd_GreenSignal_F", 1}};
		vestItems[] = {{"hlc_30Rnd_9x19_B_MP5", 6}, {"MiniGrenade", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 2}, {"CUP_1Rnd_StarFlare_Red_M203", 4}};
		backpackItems[] = {{"ToolKit", 1}, {"CUP_glaunch_M79", 1}};
		
		basicMedUniform[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	
	class cmd_engineer
	{
		displayName = "Combat Engineer";
		
		weapons[] = {"hlc_smg_mp5a2", "CUP_hgun_Colt1911", "Binocular"};
		primaryWeaponItems[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_acc_Surefiregrip"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"};
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "tf_rt1523g_green";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}};
		vestItems[] = {{"hlc_30Rnd_9x19_B_MP5", 6}, {"MiniGrenade", 1}};
		backpackItems[] = {{"ToolKit", 1}, {"ACE_EntrenchingTool", 1}, {"ACE_SpraypaintGreen", 1}};
		
		basicMedUniform[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	
	class B_Engineer_F
	{
		displayName = "Combat Engineer";
		
		weapons[] = {"hlc_smg_mp5a2", "CUP_hgun_Colt1911", "Binocular"};
		primaryWeaponItems[] = {"hlc_30Rnd_9x19_B_MP5", "hlc_acc_Surefiregrip"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"CUP_7Rnd_45ACP_1911"};
		
		uniformClass = "U_B_JaKdo_Oliv_sleeve";
		headgearClass = "CUP_H_USArmy_Helmet_M1_Olive";
		facewearClass = "";
		vestClass = "V_JaKdo_Tac_Oliv";
		backpackClass = "B_AssaultPack_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemMicroDAGR", "tf_rf7800str"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_HandFlare_Green", 2}, {"ACE_HandFlare_Red", 3}};
		vestItems[] = {{"hlc_30Rnd_9x19_B_MP5", 6}, {"MiniGrenade", 1}};
		backpackItems[] = {{"ToolKit", 1}, {"ACE_EntrenchingTool", 1}, {"ACE_SpraypaintGreen", 1}};
		
		basicMedUniform[] = {{"ACE_quikclot", 10}, {"ACE_epinephrine", 3}, {"ACE_morphine", 3}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
};