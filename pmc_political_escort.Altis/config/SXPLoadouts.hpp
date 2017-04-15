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
	class vip
	{
		displayName = "VIP";
		// VIP doesn't get any weapons
		weapons[] = {};
		primaryWeaponItems[] = {};
		secondaryWeaponItems[] = {};
		handgunItems[] = {};
		
		uniformClass = "U_NikosAgedBody";
		headgearClass = "H_HelmetB_black";
		facewearClass = "";
		vestClass = "CUP_V_PMC_IOTV_Black_Empty";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc148jem", "ItemAndroid"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {}; 
		backpackItems[] = {};
	};
	class rifleman
	{
		class loadout_base
		{
			displayName = "Rifleman";
			weapons[] = {"CUP_arifle_Mk16_STD","Binocular"}; // No handguns for riflemen
			primaryWeaponItems[] = {"CUP_optic_CompM2_Desert","30Rnd_556x45_Stanag_red"};
			secondaryWeaponItems[] = {};
			handgunItems[] = {};
			
			uniformClass = "CUP_I_B_PMC_Unit_7";
			headgearClass = "CUP_H_PMC_Cap_PRR_Grey";
			facewearClass = "G_Shades_Black";
			vestClass = "CUP_V_PMC_CIRAS_Black_Patrol";
			backpackClass = "";
			
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc148jem", "ItemMicroDAGR"};
			uniformItems[] = {{"ACE_fieldDressing",10},{"ACE_epinephrine",3},{"ACE_morphine",3},{"ACE_EntrenchingTool",1},{"ItemcTabHCam",1},{"SmokeShell",2},{"SmokeShellGreen",2},{"MiniGrenade",2}};
			vestItems[] = {{"30Rnd_556x45_Stanag_red",7}}; 
			backpackItems[] = {};
		};
		class uniform_black_back: loadout_base
		{
			headgearClass = "CUP_H_PMC_Cap_Back_PRR_Grey";
		};
		class uniform_plaid2: loadout_base
		{
			uniformClass = "CUP_I_B_PMC_Unit_6";
			headgearClass = "CUP_H_PMC_Cap_PRR_Tan";
		};
		class uniform_plaid2_back: uniform_plaid2
		{
			headgearClass = "CUP_H_PMC_Cap_Back_PRR_Tan";
		};
		class uniform_plaid: loadout_base
		{
			uniformClass = "CUP_I_B_PMC_Unit_5";
			headgearClass = "CUP_H_PMC_Cap_PRR_Burberry";
		};
		class uniform_plaid_back: uniform_plaid
		{
			headgearClass = "CUP_H_PMC_Cap_Back_PRR_Burberry";
		};
		class uniform_red: loadout_base
		{
			uniformClass = "CUP_I_B_PMC_Unit_8";
			headgearClass = "CUP_H_PMC_Cap_PRR_Grey";
		};
		class uniform_red_back: uniform_red
		{
			headgearClass = "CUP_H_PMC_Cap_Back_PRR_Grey";
		};
	};
};