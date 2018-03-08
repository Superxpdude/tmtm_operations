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
		uniformItems[] = {{"hlc_15Rnd_9x19_B_P226", 2}, {"SmokeShell", 2}}; // Items to place in uniform. Includes weapon magazines
		vestItems[] = {}; // Items to place in vest. Includes weapon magazines
		backpackItems[] = {}; // Items to place in backpack. Includes weapon magazines
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}}; // Items to be placed in the uniform only when basic medical is being used
		basicMedVest[] = {}; // Items to be placed in the vest only when basic medical is being used
		basicMedBackpack[] = {}; // Items to be placed in the backpack only when basic medical is being used
		
		advMedUniform[] = {}; // Items to be placed in the uniform only when advanced medical is being used
		advMedVest[] = {}; // Items to be placed in the vest only when advanced medical is being used
		advMedBackpack[] = {}; // Items to be placed in the backpack only when advanced medical is being used
	};
};