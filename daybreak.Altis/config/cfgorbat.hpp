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
		insignia = __EVAL((__FILE__ select [0, count __FILE__ - 19]) + "tmtm");
		commander = "Somilo"
		commanderRank = "Colonel";
		tags[] = {TMTM, Meme};
		text = "%1 TMTM %3";
		textShort = "%1 TMTM %3";
		color[] = {1,1,1,1};
		texture = __EVAL((__FILE__ select [0, count __FILE__ - 19]) + "tmtm_small");
		description = "The world's most highly skilled meme team";
	};
};