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
		displayName = "Commander"; // Currently unused, basically just a human-readable name for the loadout
		
		weapons[] = {"CUP_arifle_Mk17_CQC_Black", "hlc_pistol_P226R_Combat", "Rangefinder"}; // Weapons for the unit, fills the primary weapon, launcher, pistol, and binocular slots
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}; // Primary weapon items. Includes magazine you want loaded initially
		secondaryWeaponItems[] = {}; // Secondary weapon items (launchers). Includes magazine you want loaded initially.
		handgunItems[] = {"acc_flashlight_pistol", "hlc_15Rnd_9x19_B_P226"}; // Handgun items. Includes magazine you want loaded initially.
		
		uniformClass = "CUP_I_B_PMC_Unit_28";
		headgearClass = "H_Beret_blk";
		facewearClass = "G_Aviator";
		vestClass = "CUP_V_PMC_CIRAS_Winter_TL";
		backpackClass = "TFAR_anprc155_coyote";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemcTab", "TFAR_anprc148jem"}; // Linked items for the unit, use for map, compass, radio, watch, gps, and NVGs
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}, {"hlc_15Rnd_9x19_B_P226", 3}, {"SmokeShell", 1}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {{"CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR", 4}, {"SmokeShell", 1}}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 15}, {"ACE_epinephrine", 2}, {"ACE_morphine", 5}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
	};
	class cmd_medic
	{
		
	};
	class I_engineer_F
	{
		
	};
	class I_Soldier_SL_F
	{
		
	};
	class I_medic_F
	{
		
	};
	class I_Soldier_TL_F
	{
		
	};
	class I_Soldier_AR_F
	{
		
	};
	class I_Soldier_M_F
	{
		
	};
	class I_Soldier_exp_F
	{
		
	};
	class I_Soldier_F
	{
		
	};
};