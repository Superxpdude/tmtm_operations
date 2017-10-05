// Function for moving a player that died from the respawn position menu into the EG spectator.
// Only to be run on player clients
if (!hasInterface) exitWith {};
// Only to be run if respawn has been disabled
if (missionNamespace getVariable ["allowRespawn", true]) exitWith {};

// Wait 4 seconds, then move the player to the EG spectator
[] spawn {
	sleep 4;
	// Close the existing respawn menu
	["close"] call BIS_fnc_showRespawnMenu;
	// Enable the end-game spectator
	["Initialize", [player, [], true]] call BIS_fnc_EGSpectator; 
};