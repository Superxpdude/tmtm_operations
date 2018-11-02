// ORBAT Viewer
// Can be used for indicating the structure of a given side/team, as well as their map positions.
// https://community.bistudio.com/wiki/ORBAT_Viewer

class tmtm
{
	insignia = __EVAL(MISSIONLOCATION + "media\insignia\tmtm.paa");
	texture = __EVAL(MISSIONLOCATION + "media\insignia\tmtm_small.paa");
	
	id = 1;
	idType = 0;
	side = "east";
	size = "Platoon";
	type = "Assault";
	colorInsignia[] = {1,1,1,1};
	commander = "Meme"
	commanderRank = "Colonel";
	tags[] = {TMTM, Meme};
	text = "%1 TMTM %3";
	textShort = "%1 TMTM %3";
	color[] = {1,1,1,1};
	description = "The world's most highly skilled meme team";
};