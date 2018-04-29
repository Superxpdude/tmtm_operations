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
	
	class nato_base
	{
		displayName = "NATO Base Loadout";
		
		weapons[] = {"arifle_MX_F", "hgun_Pistol_heavy_01_F", "Binocular"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "30Rnd_65x39_caseless_mag_Tracer"}; 
		secondaryWeaponItems[] = {};
		handgunItems[] = {"acc_flashlight_pistol", "11Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam";
		headgearClass = "H_HelmetSpecB";
		facewearClass = "";
		vestClass = "V_PlateCarrier2_rgr";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}, {"11Rnd_45ACP_Mag", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_mag_Tracer", 7}, {"SmokeShell", 4}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}, {"MiniGrenade", 2}};
		backpackItems[] = {};
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10},{"ACE_epinephrine", 2},{"ACE_morphine", 4}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	
	class B_Officer_F: nato_base
	{
		displayName = "NATO Commander";
		
		weapons[] = {"arifle_MX_F", "hgun_Pistol_heavy_01_F", "Laserdesignator"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Beret_02";
		facewearClass = "G_Aviator";
		vestClass = "V_PlateCarrier1_rgr";
		backpackClass = "TFAR_rt1523g_sage";
		
		vestItems[] = {{"30Rnd_65x39_caseless_mag_Tracer", 7}, {"SmokeShell", 4}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}, {"MiniGrenade", 2}, {"Laserbatteries", 1}};
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemcTAB"};
	};
	
	class cmd_medic: nato_base
	{
		displayName = "NATO Command Medic";
		
		weapons[] = {"arifle_MX_F", "hgun_Pistol_heavy_01_F", "Laserdesignator"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_HelmetSpecB_snakeskin";
		facewearClass = "G_Aviator";
		backpackClass = "TFAR_rt1523g_sage";
		
		vestItems[] = {{"30Rnd_65x39_caseless_mag_Tracer", 7}, {"SmokeShell", 4}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}, {"MiniGrenade", 2}, {"Laserbatteries", 1}};
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemcTAB"};
		
		basicMedBackpack[] = {{"ACE_fieldDressing", 50},{"ACE_epinephrine", 10},{"ACE_morphine", 15},{"ACE_bloodIV", 2}};
	};
	
	class B_Crew_F: nato_base
	{
		displayName = "NATO Crewman";
		
		weapons[] = {"arifle_MXC_F", "hgun_Pistol_heavy_01_F", "Binocular"};
		primaryWeaponItems[] = {"optic_Holosight", "acc_flashlight", "30Rnd_65x39_caseless_mag_Tracer"}; 
		
		uniformClass = "U_B_CombatUniform_mcam_vest";
		headgearClass = "H_HelmetCrew_B";
		facewearClass = "G_Tactical_Clear";
		backpackClass = "B_AssaultPack_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR"};
		vestItems[] = {{"30Rnd_65x39_caseless_mag_Tracer", 5}, {"SmokeShell", 4}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 1}};
		backpackItems[] = {{"ToolKit", 1}};
	};
	
	class crew_lead: B_Crew_F
	{
		displayName = "NATO Crew Lead";
		
		backpackClass = "TFAR_rt1523g_sage";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemAndroid"};
	};
	
	class B_Engineer_F: nato_base
	{
		displayName = "NATO Engineer";
		
		weapons[] = {"arifle_MX_F", "hgun_Pistol_heavy_01_F", "Binocular"};
		primaryWeaponItems[] = {"optic_Holosight", "acc_flashlight", "30Rnd_65x39_caseless_mag_Tracer"}; 
		
		uniformClass = "U_B_CombatUniform_mcam";
		headgearClass = "H_HelmetSpecB_blk";
		facewearClass = "G_Tactical_Clear";
		vestClass = "V_Chestrig_rgr";
		backpackClass = "B_AssaultPack_rgr";
		
		backpackItems[] = {{"ToolKit", 1}};
	};
	
	class engineer_lead: B_Engineer_F
	{
		displayName = "NATO Engineer Lead";
		
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemAndroid"};
	};
	
	class B_HeliCrew_F: nato_base
	{
		displayName = "NATO Heli Crewman";
		
		weapons[] = {"arifle_MXC_Black_F", "hgun_Pistol_heavy_01_F", "Binocular"};
		primaryWeaponItems[] = {"30Rnd_65x39_caseless_mag_Tracer"};
		handgunItems[] = {"acc_flashlight_pistol", "11Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_HeliPilotCoveralls";
		headgearClass = "H_CrewHelmetHeli_B";
		facewearClass = "";
		vestClass = "V_TacVest_blk";
		backpackClass = "B_AssaultPack_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR"};
		vestItems[] = {{"30Rnd_65x39_caseless_mag_Tracer", 5}, {"SmokeShell", 4}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}};
		backpackItems[] = {{"ToolKit", 1}};
	};
	
	class B_HeliPilot_F: B_HeliCrew_F
	{
		displayName = "NATO Heli Pilot";
		
		backpackClass = "TFAR_rt1523g_black";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemAndroid"};
	};
	
	class B_Soldier_SL_F: nato_base
	{
		displayName = "NATO Squad Leader";
		
		weapons[] = {"arifle_MX_GL_F", "hgun_Pistol_heavy_01_F", "Binocular"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "30Rnd_65x39_caseless_mag_Tracer", "3Rnd_HE_Grenade_shell"}; 
		handgunItems[] = {"acc_flashlight_pistol", "11Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam";
		headgearClass = "H_HelmetSpecB_sand";
		facewearClass = "G_Tactical_Clear";
		vestClass = "V_PlateCarrierSpec_rgr";
		backpackClass = "TFAR_rt1523g_sage";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemAndroid"};
		vestItems[] = {{"30Rnd_65x39_caseless_mag_Tracer", 7}, {"SmokeShell", 3}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}};
		backpackItems[] = {{"3Rnd_HE_Grenade_shell", 5}, {"3Rnd_Smoke_Grenade_shell", 2}, {"3Rnd_SmokeRed_Grenade_shell", 1}};
	};
	
	class B_Soldier_TL_F: B_Soldier_SL_F
	{
		displayName = "NATO Team Leader";
		
		headgearClass = "H_HelmetSpecB";
		facewearClass = "G_Tactical_Clear";
		backpackClass = "B_AssaultPack_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR"};
	};
	
	class B_Medic_F: nato_base
	{
		displayName = "NATO Medic";
		
		headgearClass = "H_HelmetSpecB_snakeskin";
		facewearClass = "G_Tactical_Clear";
		backpackClass = "B_FieldPack_cbr";
		
		basicMedBackpack[] = {{"ACE_fieldDressing", 90},{"ACE_epinephrine", 15},{"ACE_morphine", 30},{"ACE_bloodIV", 5}};
	};
	
	class B_Soldier_M_F: nato_base
	{
		displayName = "NATO Marksman";
		
		weapons[] = {"srifle_DMR_03_tan_F", "hgun_Pistol_heavy_01_F", "Rangefinder"};
		primaryWeaponItems[] = {"optic_DMS", "acc_flashlight", "bipod_01_F_snd", "ACE_20Rnd_762x51_Mag_Tracer"};
		
		facewearClass = "G_Tactical_Clear";
		
		vestItems[] = {{"ACE_20Rnd_762x51_Mag_Tracer", 7}, {"SmokeShell", 4}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}};
	};
	
	class B_Soldier_AR_F: nato_base
	{
		displayName = "NATO Autorifleman";
		
		weapons[] = {"LMG_Mk200_F", "hgun_Pistol_heavy_01_F", "Binocular"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "bipod_01_F_blk", "200Rnd_65x39_cased_Box_Tracer"};
		
		backpackClass = "B_AssaultPack_rgr";
		
		vestItems[] = {{"200Rnd_65x39_cased_Box_Tracer", 1}, {"SmokeShell", 4}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}};
		backpackItems[] = {{"200Rnd_65x39_cased_Box_Tracer", 3}};
	};
	
	class B_Soldier_LAT_F: nato_base
	{
		displayName = "NATO Rifleman (AT)";
		
		weapons[] = {"arifle_MX_F", "launch_MRAWS_green_F", "hgun_Pistol_heavy_01_F", "Binocular"};
		secondaryWeaponItems[] = {"acc_flashlight", "MRAWS_HEAT_F"};
		
		backpackClass = "B_AssaultPack_rgr";
		
		backpackItems[] = {{"MRAWS_HEAT_F", 2},{"MRAWS_HE_F", 1}};
	};
	
	class B_Soldier_F: nato_base
	{
		displayName = "NATO Rifleman";
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
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemAndroid", "NVGogglesB_grn_F"};
		uniformItems[] = {{"ItemcTabHCam", 1}, {"ACE_EntrenchingTool", 1}, {"11Rnd_45ACP_Mag", 1}};
		vestItems[] = {{"30Rnd_556x45_Stanag_Tracer_Red", 5}, {"SmokeShell", 4}, {"SmokeShellGreen", 2}, {"SmokeShellRed", 2}, {"MiniGrenade", 2}, {"Laserbatteries", 1}};
		backpackItems[] = {{"ToolKit", 1}};
		
		basicMedUniform[] = {{"ACE_fieldDressing", 10},{"ACE_epinephrine", 2},{"ACE_morphine", 4}};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	class B_Recon_Medic_F: B_Recon_TL_F
	{
		displayName = "Recon Medic";
		
		uniformClass = "U_B_CTRG_Soldier_urb_1_F";
		backpackClass = "B_AssaultPack_rgr";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR", "NVGogglesB_grn_F"};
		
		basicMedBackpack[] = {{"ACE_fieldDressing", 40},{"ACE_epinephrine", 10},{"ACE_morphine", 10},{"ACE_bloodIV", 2}};
		
		advMedBackpack[] = {};
	};
	class B_Recon_F: B_Recon_TL_F
	{
		displayName = "Recon Scout";
		
		backpackClass = "B_AssaultPack_blk";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_anprc152", "ItemMicroDAGR", "NVGogglesB_grn_F"};
	};
};