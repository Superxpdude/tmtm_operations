// initPlayerLocal.sqf
// Executes on a client machine when they load the mission, regardless of if it's at mission start or JIP.
// _this = [player:Object, didJIP:Boolean]
_this params ["_player", "_jip"];

// Call the template initPlayerLocal function
_this call XPT_fnc_initPlayerLocal; // DO NOT CHANGE THIS LINE

// Add any mission-specific code after this point

// Create initial briefings for the players
[] execVM "scripts\briefing.sqf";

// Display the mission start text
[] spawn {
	sleep 5;
	[parseText format ["<t align='right' size='1.6'><t font='PuristaBold' size='1.8'>%1<br/></t>%2<br/>%3</t>",
		toUpper "Daybreak:Reloaded", 
		"by Superxpdude", 
		"06:30:00"],
		true,
		nil,
		10
	] call BIS_fnc_textTiles;
};