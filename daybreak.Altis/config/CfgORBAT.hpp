// ORBAT Viewer
// Can be used for indicating the structure of a given side/team, as well as their map positions.
// https://community.bistudio.com/wiki/ORBAT_Viewer

class CfgORBAT
{
	class tmtm
	{
		id = 1;
		idType = 0;
		side = "east";
		size = "Platoon";
		type = "Assault";
		colorInsignia[] = {1,1,1,1};
		insignia = __EVAL((__FILE__ select [0, count __FILE__ - 15]) + "media\insignia\tmtm");
		tags[] = {TMTM, Meme};
		text = "%1 TMTM %3";
		textShort = "%1 TMTM %3";
		color[] = {1,1,1,1};
		texture = __EVAL((__FILE__ select [0, count __FILE__ - 15]) + "media\insignia\tmtm_small");
		description = "The world's most highly skilled meme team";
		assets[] = {{O_APC_Wheeled_02_rcws_F,1}};
		
		class infantry
		{
			id = 1;
			side = "east";
			type = "Infantry";
			text = "Infantry";
			assets[] = {{O_MRAP_02_hmg_F, 3},{O_MRAP_02_F,3},{O_LSV_02_armed_F,4},{O_Truck_03_covered_F,2}};
		};
		
		class apc
		{
			id = 1;
			side = "east";
			type = "MechanizedInfantry";
			text = "Armour";
			assets[] = {{O_APC_Tracked_02_cannon_F,1}};
		};
		
		class air
		{
			id = 1;
			side = "east";
			type = "CombatAviation";
			text = "Aviation";
			assets[] = {{O_T_VTOL_02_infantry_hex_F,1}};
		};
		
		class logistics
		{
			id = 1;
			side = "east";
			type = "Support";
			text = "Logistics";
			assets[] = {{O_Truck_03_repair_F,1},{O_Truck_03_ammo_F,1},{O_Truck_03_fuel_F,1},{O_Truck_03_medical_F,1},{O_Mortar_01_F,2},{O_Quadbike_01_F,2}};
		};
	};
};