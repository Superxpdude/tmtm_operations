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
	class B_Soldier_F
	{
		class random_base
		{
			displayName = "Civilian"; // Currently unused, basically just a human-readable name for the loadout
		
			weapons[] = {"hgun_Pistol_heavy_01_F"};
			primaryWeaponItems[] = {};
			secondaryWeaponItems[] = {};
			handgunItems[] = {"hlc_acc_TLR1","11Rnd_45ACP_Mag"};
			
			uniformClass = "U_C_Poloshirt_blue";
			headgearClass = "H_Cap_blu";
			facewearClass = "";
			vestClass = "CUP_V_CDF_OfficerBelt";
			backpackClass = "";
			
			linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_rf7800str"};
			uniformItems[] = {};
			vestItems[] = {{"ACE_HandFlare_Green", 2},{"ACE_HandFlare_White", 2},{"ACE_HandFlare_Yellow", 2},{"ACE_HandFlare_Red", 2},{"11Rnd_45ACP_Mag", 4}};
			backpackItems[] = {};
			
			basicMedUniform[] = {{"ACE_fieldDressing",12},{"ACE_epinephrine",2},{"ACE_morphine",4}};
			basicMedVest[] = {};
			basicMedBackpack[] = {};
			
			advMedUniform[] = {};
			advMedVest[] = {};
			advMedBackpack[] = {};
		};
		class commoner_red: random_base
		{
			uniformClass = "U_C_Poloshirt_burgundy";
			headgearClass = "H_Cap_red";
		};
		class commoner_redwhite: random_base
		{
			uniformClass = "U_C_Poloshirt_redwhite";
			headgearClass = "H_Cap_red";
		};
		class commoner_salmon: random_base
		{
			uniformClass = "U_C_Poloshirt_salmon";
			headgearClass = "H_Cap_red";
		};
		class commoner_striped: random_base
		{
			uniformClass = "U_C_Poloshirt_stripped";
			headgearClass = "H_Cap_grn";
		};
		class commoner_tricolor: random_base
		{
			uniformClass = "U_C_Poloshirt_tricolour";
			headgearClass = "H_Cap_tan";
		};
		class racer_black: random_base
		{
			uniformClass = "U_C_Driver_1_black";
			headgearClass = "H_RacingHelmet_1_black_F";
		};
		class racer_vrana: random_base
		{
			uniformClass = "U_C_Driver_4";
			headgearClass = "H_RacingHelmet_4_F";
		};
		class guerilla_dark: random_base
		{
			uniformClass = "U_BG_Guerilla2_1";
			headgearClass = "H_Bandanna_gry";
		};
		class marshal: random_base
		{
			uniformClass = "U_Marshal";
			headgearClass = "";
			facewearClass = "G_Shades_Black";
		};
		class orestes: random_base
		{
			uniformClass = "U_OrestesBody";
			headgearClass = "H_Cap_surfer";
			facewearClass = "G_Shades_Black";
		};
		class civ_chernarus_blue: random_base
		{
			uniformClass = "CUP_U_C_Citizen_02";
			headgearClass = "H_Booniehat_khk";
		};
		class civ_chernarus_brown: random_base
		{
			uniformClass = "CUP_U_C_Citizen_01";
			headgearClass = "H_Booniehat_tan";
		};
		class civ_chernarus_green: random_base
		{
			uniformClass = "CUP_U_C_Citizen_04";
			headgearClass = "H_Hat_brown";
		};
		class civ_chernarus_grey: random_base
		{
			uniformClass = "CUP_U_C_Citizen_03";
			headgearClass = "H_Hat_grey";
		};
		class firefighter: random_base
		{
			uniformClass = "CUP_U_C_Fireman_01";
			headgearClass = "CUP_H_C_Fireman_Helmet_01";
		};
		class hunter: random_base
		{
			uniformClass = "U_C_HunterBody_grn";
			headgearClass = "H_Hat_tan";
		};
		class labcoat_blue: random_base
		{
			uniformClass = "CUP_U_C_Labcoat_02";
			headgearClass = "";
		};
		class mechanic_blue: random_base
		{
			uniformClass = "CUP_U_C_Mechanic_02";
			headgearClass = "";
			facewearClass = "G_Lowprofile";
		};
		class cup_paramedic: random_base
		{
			uniformClass = "CUP_U_C_Rescuer_01";
			headgearClass = "";
			facewearClass = "G_Shades_Black"
		};
		class cup_pilot: random_base
		{
			uniformClass = "CUP_U_C_Pilot_01";
			headgearClass = "CUP_H_FR_Headset";
			facewearClass = "G_Aviator";
		};
		class tacticool: random_base
		{
			uniformClass = "CUP_I_B_PMC_Unit_24";
			headgearClass = "CUP_H_FR_Headset";
			facewearClass = "G_Shades_Black";
		};
		class cup_police: random_base
		{
			uniformClass = "CUP_U_C_Policeman_01";
			headgearClass = "CUP_H_C_Policecap_01";
			facewearClass = "G_Aviator";
		};
		class priest: random_base
		{
			uniformClass = "CUP_U_C_Priest_01";
			headgearClass = "";
			facewearClass = "";
		};
		class profiteer_blue: random_base
		{
			uniformClass = "CUP_U_C_Profiteer_02";
			headgearClass = "H_Hat_brown";
			facewearClass = "";
		};
		class profiteer_brown: random_base
		{
			uniformClass = "CUP_U_C_Profiteer_03";
			headgearClass = "";
			facewearClass = "";
		};
		class profiteer_grey: random_base
		{
			uniformClass = "CUP_U_C_Profiteer_01";
			headgearClass = "H_Hat_grey";
			facewearClass = "";
		};
		class profiteer_red: random_base
		{
			uniformClass = "CUP_U_C_Profiteer_04";
			headgearClass = "H_Hat_tan";
			facewearClass = "";
		};
		class rocker_black: random_base
		{
			uniformClass = "CUP_U_C_Rocker_01";
			headgearClass = "H_Cap_blu";
			facewearClass = "";
		};
		class rocker_blue: random_base
		{
			uniformClass = "CUP_U_C_Rocker_03";
			headgearClass = "H_Cap_red";
			facewearClass = "";
		};
		class rocker_brown: random_base
		{
			uniformClass = "CUP_U_C_Rocker_02";
			headgearClass = "CUP_H_PMC_Cap_Grey";
			facewearClass = "";
		};
		class rocker_green: random_base
		{
			uniformClass = "CUP_U_C_Rocker_04";
			headgearClass = "H_Cap_grn";
			facewearClass = "";
		};
		class suit_black: random_base
		{
			uniformClass = "CUP_U_C_Suit_01";
			headgearClass = "";
			facewearClass = "G_Spectacles_Tinted";
		};
		class suit_brown: random_base
		{
			uniformClass = "CUP_U_C_Suit_02";
			headgearClass = "";
			facewearClass = "G_Spectacles_Tinted";
		};
		class woodlander_blue: random_base
		{
			uniformClass = "CUP_U_C_Woodlander_01";
			headgearClass = "CUP_H_C_Ushanka_03";
			facewearClass = "";
		};
		class woodlander_brown: random_base
		{
			uniformClass = "CUP_U_C_Woodlander_02";
			headgearClass = "CUP_H_C_Ushanka_02";
			facewearClass = "";
		};
		class woodlander_camo: random_base
		{
			uniformClass = "CUP_U_C_Woodlander_03";
			headgearClass = "CUP_H_C_Ushanka_04";
			facewearClass = "";
		};
		class woodlander_green: random_base
		{
			uniformClass = "CUP_U_C_Woodlander_04";
			headgearClass = "CUP_H_C_Ushanka_03";
			facewearClass = "";
		};
		class worker_blue: random_base
		{
			uniformClass = "CUP_U_C_Worker_03";
			headgearClass = "";
			facewearClass = "";
		};
		class worker_brown: random_base
		{
			uniformClass = "CUP_U_C_Worker_04";
			headgearClass = "";
			facewearClass = "";
		};
		class worker_green: random_base
		{
			uniformClass = "CUP_U_C_Worker_02";
			headgearClass = "";
			facewearClass = "";
		};
		class worker_grey: random_base
		{
			uniformClass = "CUP_U_C_Worker_01";
			headgearClass = "";
			facewearClass = "";
		};
	};
};