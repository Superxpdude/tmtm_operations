// SXPloadouts.hpp
// Used for defining advanced respawn loadouts for players
// Default behaviour is to check if the player unit has a special loadout defined. Otherwise, it will check to see if the classname matches a loadout
// Advanced functionality allows mission creator to define exactly where items are placed in unit inventories
class loadouts
{	
	class O_officer_F // Still needs to be updated
	{
		displayName = "CSAT Commander";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class cmdr_assist // Still needs to be updated
	{
		displayName = "Commander's Assistant";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class crew_lead // Still needs to be updated
	{
		displayName = "Lead Crewman";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class O_crew_F // Still needs to be updated
	{
		displayName = "Crewman";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class O_pilot_F // Still needs to be updated
	{
		displayName = "Pilot";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class O_Soldier_SL_F // Still needs to be updated
	{
		displayName = "Squad Leader";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class O_Soldier_TL_F // Still needs to be updated
	{
		displayName = "Team Leader";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class O_Medic_F // Still needs to be updated
	{
		displayName = "Medic";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class O_Soldier_AR_F // Still needs to be updated
	{
		displayName = "Autorifleman";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class O_Soldier_AAR_F // Still needs to be updated
	{
		displayName = "Assistant Autorifleman";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class O_Soldier_AT_F // Still needs to be updated
	{
		displayName = "Missile Specialist";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class O_Soldier_AAT_F // Still needs to be updated
	{
		displayName = "Assistant Missile Specialist";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class O_Sharpshooter_F // Still needs to be updated
	{
		displayName = "Sharpshooter";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class O_Soldier_F // Still needs to be updated
	{
		displayName = "Rifleman";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class O_Soldier_A_F // Still needs to be updated
	{
		displayName = "Ammo Bearer";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class O_engineer_F // Still needs to be updated
	{
		displayName = "Engineer";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
	class O_support_Mort_F // Still needs to be updated
	{
		displayName = "Mortar Operator";
		
		weapons[] = {"arifle_MXC_F", "launch_B_Titan_short_F", "hgun_ACPC2_F", "Binocular"};
		primaryWeaponItems[] = {"optic_ACO", "acc_flashlight", "30Rnd_65x39_caseless_mag"};
		secondaryWeaponItems[] = {"Titan_AP"};
		handgunItems[] = {"9Rnd_45ACP_Mag"};
		
		uniformClass = "U_B_CombatUniform_mcam_tshirt";
		headgearClass = "H_Watchcap_blk";
		facewearClass = "";
		vestClass = "V_Chestrif_khk";
		backpackClass = "B_AssaultPack_mcamo";
		
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		vestItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
		backpackItems[] = {{"FirstAidKit", 3}, {"30Rnd_65x39_caseless_mag", 4}};
	};
};