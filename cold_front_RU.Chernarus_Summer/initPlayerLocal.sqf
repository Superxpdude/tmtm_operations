// initPlayerLocal.sqf
// Executes on a client machine when they load the mission, regardless of if it's at mission start or JIP.
// _this = [player:Object, didJIP:Boolean]

// Initialise dynamic groups on the player side
["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;

// Create initial briefings for the players
[] execVM "scripts\briefing.sqf";

waitUntil {player == player};
//null = [80,43200,false,300] execvm "AL_snowstorm\al_snow.sqf";