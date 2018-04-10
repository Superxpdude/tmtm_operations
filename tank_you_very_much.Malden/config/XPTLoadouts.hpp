// XPTloadouts.hpp
// Used for defining advanced respawn loadouts for players
// Default behaviour is to check if the player unit has a special loadout defined. Otherwise, it will check to see if the classname matches a loadout
// Advanced functionality allows mission creator to define exactly where items are placed in unit inventories
// Also supports sub-loadout randomization. If a loadout has sub-classes defined, the script will automatically select one of them to apply to the unit.
class loadouts
{
	class example
	{
		displayName = "Example Loadout";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"}; 
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrig_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		
		basicMedUniform[] = {};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	
	class B_Recon_TL_F
	{
		displayName = "Recon Team Leader";
		
		weapons[] = {"arifle_SPAR_01_khk_F", "hgun_Pistol_heavy_01_F", "Laserdesignator_01_khk_F"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_pointer_IR", "muzzle_snds_m_khk_F", "30Rnd_556x45_Stanag_Tracer_Red"}; 
		secondaryWeaponItems[] = {};
		handgunItems[] = {"muzzle_snds_acp", "acc_flashlight_pistol", "optic_MRD", "11Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CTRG_Soldier_urb_3_F";
		headgearClass = "H_HelmetB_TI_tna_F";
		facewearClass = "G_Balaclava_TI_G_tna_F";
		vestClass = "V_PlateCarrier1_blk";
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}, {"11Rnd_45ACP_Mag", 1}};
		vestItems[] = {{"30Rnd_556x45_Stanag_Tracer_Red", 5}, {"SmokeShell", 4}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}, {"MiniGrenade", 2}};
		backpackItems[] = {{"ToolKit", 1}};
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10},{"ACE_epinephrine", 2},{"ACE_morphine", 4}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	class B_Recon_Medic_F
	{
		displayName = "Recon Medic";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"}; 
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrig_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		
		basicMedUniform[] = {};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	class B_Recon_F
	{
		displayName = "Recon Scout";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"}; 
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrig_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		
		basicMedUniform[] = {};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
};