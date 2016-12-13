// Respawn Inventories
// Used for giving a unit a custom inventory upon respawn.
// Mostly only used with the "MenuInventory" respawn template.
// https://community.bistudio.com/wiki/Arma_3_Respawn#Respawn_Templates
class CfgRespawnInventory
{
	class B_Officer_F
	{
		displayName = "NATO Commander";
		uniformClass = "Blue_Snow_Camo";
		backpack = "tf_rt1523g_black";
		weapons[] = {"hgun_Pistol_heavy_01_F","Rangefinder","hlc_rifle_G36KMLIC","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue"};
		items[] = {"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_EntrenchingTool"};
		linkedItems[] = {"V_JaKdo_Plate_Winter","H_JaKdo_Woolhat_winter","G_Combat","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemcTab","optic_MRCO","acc_flashlight"};
	};
	class cmd_medic
	{
		displayName = "Command Medic";
		uniformClass = "Blue_Snow_Camo";
		backpack = "tf_rt1523g_black";
		weapons[] = {"hgun_Pistol_heavy_01_F","Rangefinder","hlc_rifle_G36KMLIC","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag"};
		items[] = {"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_EntrenchingTool","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine"};
		linkedItems[] = {"V_JaKdo_Plate_Winter","Blue_Snow_Helmet","G_Combat","ItemMap","ItemCompass","ItemWatch","tf_anprc152_6","ItemMicroDAGR","optic_MRCO","acc_flashlight"};
	};
	class crew_lead
	{
		displayName = "Lead Crewman";
		uniformClass = "Blue_Snow_Camo";
		backpack = "tf_rt1523g_black";
		weapons[] = {"hgun_Pistol_heavy_01_F","Rangefinder","hlc_rifle_G36CMLIC","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag"};
		items[] = {"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_EntrenchingTool","ToolKit","ACE_SpraypaintBlue","ACE_SpraypaintBlue"};
		linkedItems[] = {"V_JaKdo_Plate_Winter","Blue_Snow_Helmet","G_Combat","ItemMap","ItemCompass","ItemWatch","tf_anprc152_6","ItemMicroDAGR","optic_ACO","acc_flashlight"};
	};
	class B_Crew_F
	{
		displayName = "Crewman";
		uniformClass = "Blue_Snow_Camo";
		backpack = "B_JaKdo_Carryall_winter";
		weapons[] = {"hgun_Pistol_heavy_01_F","Rangefinder","hlc_rifle_G36CMLIC","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag"};
		items[] = {"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_EntrenchingTool","ToolKit","ACE_SpraypaintBlue","ACE_SpraypaintBlue"};
		linkedItems[] = {"V_JaKdo_Plate_Winter","Blue_Snow_Helmet","G_Combat","ItemMap","ItemCompass","ItemWatch","tf_anprc152_6","ItemMicroDAGR","optic_ACO","acc_flashlight"};
	};
	class B_Soldier_SL_F
	{
		displayName = "Squad Leader";
		uniformClass = "Blue_Snow_Camo";
		backpack = "tf_rt1523g_black";
		weapons[] = {"hgun_Pistol_heavy_01_F","Rangefinder","hlc_rifle_G36MLIAG36","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		items[] = {"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_EntrenchingTool"};
		linkedItems[] = {"V_JaKdo_Plate_Winter","Blue_Snow_Helmet","G_Combat","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemAndroid","optic_MRCO","acc_flashlight"};
	};
	class B_Soldier_TL_F
	{
		displayName = "Team Leader";
		uniformClass = "Blue_Snow_Camo";
		backpack = "B_JaKdo_Carryall_winter";
		weapons[] = {"hgun_Pistol_heavy_01_F","hlc_rifle_G36MLIAG36","Binocular","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		items[] = {"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_EntrenchingTool"};
		linkedItems[] = {"V_JaKdo_Plate_Winter","Blue_Snow_Helmet","G_Combat","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemMicroDAGR","optic_MRCO","acc_flashlight"};
	};
	class B_Soldier_M_F
	{
		displayName = "Marksman";
		uniformClass = "Blue_Snow_Camo";
		backpack = "B_JaKdo_Carryall_winter";
		weapons[] = {"hgun_Pistol_heavy_01_F","Rangefinder","hlc_rifle_g3ka4","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_b_G3"};
		items[] = {"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_EntrenchingTool"};
		linkedItems[] = {"V_JaKdo_Plate_Winter","Blue_Snow_Helmet","G_Combat","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemMicroDAGR","optic_DMS","acc_flashlight","bipod_01_blk"};
	};
	class B_Soldier_AR_F
	{
		displayName = "Autorifleman";
		uniformClass = "Blue_Snow_Camo";
		backpack = "B_JaKdo_Carryall_winter";
		weapons[] = {"hgun_Pistol_heavy_01_F","hlc_lmg_mk48mod1","Rangefinder","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","hlc_100Rnd_762x51_M_M60E4","hlc_100Rnd_762x51_M_M60E4","hlc_100Rnd_762x51_M_M60E4","hlc_100Rnd_762x51_M_M60E4","hlc_100Rnd_762x51_M_M60E4","hlc_100Rnd_762x51_M_M60E4"};
		items[] = {"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_EntrenchingTool"};
		linkedItems[] = {"V_JaKdo_Plate_Winter","Blue_Snow_Helmet","G_Combat","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemMicroDAGR","optic_MRCO","acc_flashlight"};
	};
	class B_Soldier_AT_F
	{
		displayName = "Anti-Tank Specialist";
		uniformClass = "Blue_Snow_Camo";
		backpack = "B_JaKdo_Carryall_winter";
		weapons[] = {"hgun_Pistol_heavy_01_F","Rangefinder","hlc_rifle_G36KMLIC","launch_NLAW_F","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","NLAW_F","NLAW_F","NLAW_F","NLAW_F"};
		items[] = {"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_EntrenchingTool"};
		linkedItems[] = {"V_JaKdo_Plate_Winter","Blue_Snow_Helmet","G_Combat","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemMicroDAGR","optic_MRCO","acc_flashlight"};
	};
	class B_Soldier_AAT_F
	{
		displayName = "Asst. Anti Tank";
		uniformClass = "Blue_Snow_Camo";
		backpack = "B_JaKdo_Carryall_winter";
		weapons[] = {"hgun_Pistol_heavy_01_F","Rangefinder","hlc_rifle_G36MLIC","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","NLAW_F","NLAW_F","NLAW_F","NLAW_F"};
		items[] = {"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_EntrenchingTool"};
		linkedItems[] = {"V_JaKdo_Plate_Winter","Blue_Snow_Helmet","G_Combat","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemMicroDAGR","optic_MRCO","acc_flashlight"};
	};
	class B_Soldier_A_F
	{
		displayName = "Ammo Bearer";
		uniformClass = "Blue_Snow_Camo";
		backpack = "B_JaKdo_Carryall_winter";
		weapons[] = {"hgun_Pistol_heavy_01_F","Rangefinder","hlc_rifle_G36MLIC","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag"};
		items[] = {"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_EntrenchingTool"};
		linkedItems[] = {"V_JaKdo_Plate_Winter","Blue_Snow_Helmet","G_Combat","ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemMicroDAGR","optic_MRCO","acc_flashlight"};
	};
	class B_Medic_F
	{
		displayName = "Medic";
		uniformClass = "Blue_Snow_Camo";
		backpack = "B_JaKdo_Carryall_winter";
		weapons[] = {"hgun_Pistol_heavy_01_F","Rangefinder","hlc_rifle_G36KMLIC","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag"};
		items[] = {"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_EntrenchingTool","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_bloodIV","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine"};
		linkedItems[] = {"V_JaKdo_Plate_Winter","Blue_Snow_Helmet","G_Combat","ItemMap","ItemCompass","ItemWatch","tf_anprc152_6","ItemMicroDAGR","optic_MRCO","acc_flashlight"};
	};
};