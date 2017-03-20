// initPlayerLocal.sqf
// Executes on a client machine when they load the mission, regardless of if it's at mission start or JIP.
// _this = [player:Object, didJIP:Boolean]

// Initialise dynamic groups on the player side
["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;

// Create initial briefings for the players
[] execVM "scripts\briefing.sqf";

// Spawn the "mission name" text box on mission start
[] spawn {
	sleep 5;
	[parseText format ["<t align='right' size='1.6'><t font='PuristaBold' size='1.8'>%1<br/></t>%2<br/>%3</t>",
		toUpper "Daybreak", 
		"by Superxpdude", 
		"06:30:00"],
		true,
		nil,
		10
	] call BIS_fnc_textTiles;
};
