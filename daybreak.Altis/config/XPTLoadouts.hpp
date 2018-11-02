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
	
	class O_officer_F
	{
		displayName = "CSAT Commander"; 
		
		weapons[] = {"arifle_Katiba_C_F", "hgun_Pistol_heavy_02_F", "Rangefinder"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"6Rnd_45ACP_Cylinder"};
		
		uniformClass = "U_O_OfficerUniform_ocamo";
		headgearClass = "H_MilCap_ocamo";
		facewearClass = "G_Aviator";
		vestClass = "V_HarnessO_brn";
		backpackClass = "TFAR_mr3000";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemcTab"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"6Rnd_45ACP_Cylinder", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 6}, {"SmokeShell", 2}, {"SmokeShellRed", 2}, {"SmokeShellPurple", 2}, {"ACE_EntrenchingTool", 1}};
		backpackItems[] = {};
		
		basicMedUniform[] = {};
		basicMedVest[] = {};
		basicMedBackpack[] = {};
		
		advMedUniform[] = {};
		advMedVest[] = {};
		advMedBackpack[] = {};
	};
	
	class cmdr_assist
	{
		displayName = "Commander's Assistant"; 
		
		weapons[] = {"arifle_Katiba_C_F", "hgun_Pistol_heavy_02_F", "Rangefinder"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"6Rnd_45ACP_Cylinder"};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetO_ocamo";
		facewearClass = "G_Aviator";
		vestClass = "V_HarnessO_brn";
		backpackClass = "TFAR_mr3000";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemcTab"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"6Rnd_45ACP_Cylinder", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 6}, {"SmokeShell", 2}, {"SmokeShellRed", 2}, {"SmokeShellPurple", 2}, {"ACE_EntrenchingTool", 1}};
		backpackItems[] = {};
	};
	
	class crew_lead
	{
		displayName = "Lead Crewman"; 
		
		weapons[] = {"arifle_Katiba_C_F", "Rangefinder"};
		primaryWeaponItems[] = {"optic_ACO_grn", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetCrew_O";
		facewearClass = "G_Bandanna_blk";
		vestClass = "V_HarnessO_brn";
		backpackClass = "TFAR_mr3000";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemAndroid"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 6}, {"SmokeShell", 2}, {"SmokeShellRed", 2}, {"SmokeShellPurple", 2}, {"ACE_EntrenchingTool", 1}};
		backpackItems[] = {{"ToolKit", 1}};
	};
	
	class O_crew_F
	{
		displayName = "Crewman"; 
		
		weapons[] = {"arifle_Katiba_C_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO_grn", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetCrew_O";
		facewearClass = "G_Bandanna_blk";
		vestClass = "V_HarnessO_brn";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 6}, {"SmokeShell", 2}, {"SmokeShellRed", 2}, {"SmokeShellPurple", 2}, {"ACE_EntrenchingTool", 1}};
		backpackItems[] = {};
	};
	
	class pilot_lead
	{
		displayName = "Pilot"; 
		
		weapons[] = {"SMG_02_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO_grn_smg", "acc_flashlight", "30Rnd_9x21_Mag_SMG_02_Tracer_Green"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {};
		
		uniformClass = "U_O_PilotCoveralls";
		headgearClass = "H_PilotHelmetFighter_O";
		facewearClass = "";
		vestClass = "";
		backpackClass = "TFAR_mr3000";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemAndroid"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam", 1}, {"30Rnd_9x21_Mag_SMG_02_Tracer_Green", 2}, {"SmokeShell", 2}, {"SmokeShellPurple", 2}};
		vestItems[] = {};
		backpackItems[] = {{"30Rnd_9x21_Mag_SMG_02_Tracer_Green", 3}, {"ToolKit", 1}};
	};
	
	class O_pilot_F
	{
		displayName = "Pilot"; 
		
		weapons[] = {"SMG_02_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO_grn_smg", "acc_flashlight", "30Rnd_9x21_Mag_SMG_02_Tracer_Green"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {};
		
		uniformClass = "U_O_PilotCoveralls";
		headgearClass = "H_PilotHelmetFighter_O";
		facewearClass = "";
		vestClass = "";
		backpackClass = "B_AssaultPack_ocamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"ItemcTabHCam", 1}, {"30Rnd_9x21_Mag_SMG_02_Tracer_Green", 2}, {"SmokeShell", 2}, {"SmokeShellPurple", 2}};
		vestItems[] = {};
		backpackItems[] = {{"30Rnd_9x21_Mag_SMG_02_Tracer_Green", 3}, {"ToolKit", 1}};
	};
	
	class O_Soldier_SL_F
	{
		displayName = "Squad Leader"; 
		
		weapons[] = {"arifle_Katiba_GL_F", "hgun_Rook40_F", "Rangefinder"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer", "1Rnd_HE_Grenade_shell"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"16Rnd_9x21_Mag"};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_HarnessOGL_brn";
		backpackClass = "TFAR_mr3000";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemAndroid"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"16Rnd_9x21_Mag", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 11}, {"ACE_EntrenchingTool", 1}};
		backpackItems[] = {{"1Rnd_HE_Grenade_shell", 7}, {"1Rnd_SmokeRed_Grenade_shell", 4}, {"1Rnd_SmokePurple_Grenade_shell", 4}, {"1Rnd_Smoke_Grenade_shell", 4}, {"SmokeShellPurple", 4}, {"SmokeShellRed", 4}, {"SmokeShell", 4}, {"HandGrenade", 2}};
	};
	
	class O_Soldier_TL_F
	{
		displayName = "Team Leader"; 
		
		weapons[] = {"arifle_Katiba_GL_F", "hgun_Rook40_F", "Rangefinder"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer", "1Rnd_HE_Grenade_shell"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"16Rnd_9x21_Mag"};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_HarnessOGL_brn";
		backpackClass = "B_FieldPack_ocamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"16Rnd_9x21_Mag", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 11}, {"ACE_EntrenchingTool", 1}};
		backpackItems[] = {{"1Rnd_HE_Grenade_shell", 7}, {"1Rnd_SmokeRed_Grenade_shell", 4}, {"1Rnd_SmokePurple_Grenade_shell", 4}, {"1Rnd_Smoke_Grenade_shell", 4}, {"SmokeShellPurple", 4}, {"SmokeShellRed", 4}, {"SmokeShell", 4}, {"HandGrenade", 2}};
	};
	
	class O_medic_F
	{
		displayName = "Medic"; 
		
		weapons[] = {"arifle_Katiba_C_F", "hgun_Rook40_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO_grn", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"16Rnd_9x21_Mag"};
		
		uniformClass = "U_O_CombatUniform_oucamo";
		headgearClass = "H_HelmetLeaderO_oucamo";
		facewearClass = "";
		vestClass = "V_HarnessO_gry";
		backpackClass = "B_Carryall_oucamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"16Rnd_9x21_Mag", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 8}, {"ACE_EntrenchingTool", 1}, {"SmokeShell", 2}, {"SmokeShellRed", 2}, {"SmokeShellPurple", 2}, {"MiniGrenade", 2}};
		backpackItems[] = {{"ACE_fieldDressing", 90}, {"ACE_bloodIV", 10}, {"ACE_epinephrine", 30}, {"ACE_morphine", 40}};
	};
	
	class O_Soldier_AR_F
	{
		displayName = "Autorifleman"; 
		
		weapons[] = {"LMG_Zafir_F", "hgun_Rook40_F", "Binocular"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "150Rnd_762x54_Box_Tracer"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"16Rnd_9x21_Mag"};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_HarnessO_brn";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"16Rnd_9x21_Mag", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"150Rnd_762x54_Box_Tracer", 2}, {"ACE_EntrenchingTool", 1}, {"SmokeShell", 4}, {"SmokeShellPurple", 2}, {"SmokeShellRed", 2}};
		backpackItems[] = {};
	};
	
	class O_Soldier_AAR_F
	{
		displayName = "Assistant Autorifleman"; 
		
		weapons[] = {"arifle_Katiba_F", "hgun_Rook40_F", "Binocular"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"16Rnd_9x21_Mag"};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_HarnessO_brn";
		backpackClass = "B_FieldPack_ocamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"16Rnd_9x21_Mag", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 8}, {"ACE_EntrenchingTool", 1}, {"SmokeShell", 4}, {"SmokeShellPurple", 4}, {"SmokeShellRed", 4}, {"MiniGrenade", 2}};
		backpackItems[] = {{"150Rnd_762x54_Box", 4}};
	};
	
	class O_Soldier_AT_F
	{
		displayName = "Missile Specialist"; 
		
		weapons[] = {"arifle_Katiba_F", "launch_O_Titan_short_F", "hgun_Rook40_F", "Binocular"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer"};
		secondaryWeaponItems[] = {"Titan_AT"};
		handgunItems[] = {"16Rnd_9x21_Mag"};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_HarnessO_brn";
		backpackClass = "B_FieldPack_ocamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"16Rnd_9x21_Mag", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 8}, {"ACE_EntrenchingTool", 1}, {"SmokeShell", 4}, {"SmokeShellPurple", 4}, {"SmokeShellRed", 4}, {"MiniGrenade", 2}};
		backpackItems[] = {{"Titan_AT", 2}};
	};
	
	class O_Soldier_AAT_F
	{
		displayName = "Assistant Missile Specialist"; 
		
		weapons[] = {"arifle_Katiba_F", "hgun_Rook40_F", "Binocular"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"16Rnd_9x21_Mag"};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_HarnessO_brn";
		backpackClass = "B_FieldPack_ocamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"16Rnd_9x21_Mag", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 8}, {"ACE_EntrenchingTool", 1}, {"SmokeShell", 4}, {"SmokeShellPurple", 4}, {"SmokeShellRed", 4}, {"MiniGrenade", 2}};
		backpackItems[] = {{"Titan_AT", 2}};
	};
	
	class O_Sharpshooter_F
	{
		displayName = "Sharpshooter"; 
		
		weapons[] = {"srifle_DMR_05_hex_F", "hgun_Rook40_F", "Rangefinder"};
		primaryWeaponItems[] = {"optic_KHS_hex", "acc_flashlight", "bipod_02_F_hex", "10Rnd_93x64_DMR_05_Mag"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"16Rnd_9x21_Mag"};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetSpecO_ocamo";
		facewearClass = "";
		vestClass = "V_HarnessO_brn";
		backpackClass = "B_FieldPack_ocamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"16Rnd_9x21_Mag", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"10Rnd_93x64_DMR_05_Mag", 9}, {"ACE_EntrenchingTool", 1}};
		backpackItems[] = {{"SmokeShell", 4}, {"SmokeShellPurple", 4}, {"SmokeShellRed", 4}, {"MiniGrenade", 2}};
	};
	
	class O_Soldier_EXP_F
	{
		displayName = "Explosive Specialist"; 
		
		weapons[] = {"arifle_Katiba_F", "hgun_Rook40_F", "Binocular"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"16Rnd_9x21_Mag"};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_TacVest_khk";
		backpackClass = "B_AssaultPack_ocamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"16Rnd_9x21_Mag", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 6}, {"ACE_EntrenchingTool", 1}, {"MineDetector", 1}, {"ACE_DefusalKit", 1}};
		backpackItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 2}, {"SmokeShell", 4}, {"SmokeShellPurple", 4}, {"SmokeShellRed", 4}, {"MiniGrenade", 2}};
	};
	
	class O_Soldier_F
	{
		displayName = "Rifleman"; 
		
		weapons[] = {"arifle_Katiba_F", "hgun_Rook40_F", "Binocular"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"16Rnd_9x21_Mag"};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_HarnessO_brn";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"16Rnd_9x21_Mag", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 8}, {"ACE_EntrenchingTool", 1}, {"SmokeShell", 4}, {"SmokeShellPurple", 4}, {"SmokeShellRed", 4}, {"MiniGrenade", 2}};
		backpackItems[] = {};
	};
	
	class O_Soldier_A_F
	{
		displayName = "Ammo Bearer"; 
		
		weapons[] = {"arifle_Katiba_F", "hgun_Rook40_F", "Binocular"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"16Rnd_9x21_Mag"};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_HarnessO_brn";
		backpackClass = "B_Carryall_ocamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"16Rnd_9x21_Mag", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 8}, {"ACE_EntrenchingTool", 1}, {"SmokeShell", 4}, {"SmokeShellPurple", 4}, {"SmokeShellRed", 4}, {"MiniGrenade", 2}};
		backpackItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 32}};
	};
	
	class logi_lead
	{
		displayName = "Logistics Coordinator"; 
		
		weapons[] = {"arifle_Katiba_C_F", "hgun_Rook40_F", "Rangefinder"};
		primaryWeaponItems[] = {"optic_MRCO", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"16Rnd_9x21_Mag"};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_HarnessOGL_brn";
		backpackClass = "TFAR_mr3000";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemAndroid"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"16Rnd_9x21_Mag", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 11}, {"ACE_EntrenchingTool", 1}};
		backpackItems[] = {{"ToolKit", 1}, {"ACE_fieldDressing", 40}, {"ACE_bloodIV", 2}, {"ACE_epinephrine", 10}, {"ACE_morphine", 10}};
	};
	
	class O_engineer_F
	{
		displayName = "Combat Engineer"; 
		
		weapons[] = {"arifle_Katiba_C_F", "hgun_Rook40_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO_grn", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"16Rnd_9x21_Mag"};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetLeaderO_ocamo";
		facewearClass = "";
		vestClass = "V_HarnessO_brn";
		backpackClass = "B_FieldPack_ocamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"16Rnd_9x21_Mag", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 7}, {"ACE_EntrenchingTool", 1}, {"ACE_M26_Clacker", 1}, {"SmokeShell", 2}, {"SmokeShellPurple", 2}, {"SmokeShellRed", 2}, {"HandGrenade", 2}, {"MineDetector", 1},  {"ACE_DefusalKit", 1}};
		backpackItems[] = {{"ToolKit", 1}, {"SatchelCharge_Remote_Mag", 1}, {"DemoCharge_Remote_Mag", 2}};
	};
	
	class O_support_Mort_F
	{
		displayName = "Mortar Operator"; 
		
		weapons[] = {"arifle_Katiba_C_F", "hgun_Rook40_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO_grn", "acc_flashlight", "30Rnd_65x39_caseless_green_mag_Tracer"};
		secondaryWeaponItems[] = {};
		handgunItems[] = {"16Rnd_9x21_Mag"};
		
		uniformClass = "U_O_CombatUniform_ocamo";
		headgearClass = "H_HelmetO_ocamo";
		facewearClass = "";
		vestClass = "V_HarnessO_brn";
		backpackClass = "";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "TFAR_fadak", "ItemMicroDAGR"};
		uniformItems[] = {{"ACE_fieldDressing", 10}, {"ACE_epinephrine", 2}, {"ACE_morphine", 4}, {"16Rnd_9x21_Mag", 3}, {"ItemcTabHCam", 1}};
		vestItems[] = {{"30Rnd_65x39_caseless_green_mag_Tracer", 8}, {"ACE_EntrenchingTool", 1}, {"SmokeShell", 4}, {"SmokeShellPurple", 4}, {"SmokeShellRed", 4}, {"MiniGrenade", 2}};
		backpackItems[] = {};
	};
};