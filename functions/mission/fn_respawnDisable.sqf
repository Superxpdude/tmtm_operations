// Function for moving players who are already dead to the spectator role, and disabling respawn.
// Only execute on player clients
if (!hasInterface) exitWith {};
// Only run if respawn has been disabled
if (missionNamespace getVariable ["allowRespawn", true]) exitWith {};
// Set the player respawn time to disabled
setPlayerRespawnTime 1e10;
// Only proceed if the player is already dead
if (!alive player) then {
	// We need to spawn these or it doesn't work
	[] spawn {
		// Wait 4.5 seconds, then start the spectator
		sleep 4.5;
		// Close the existing respawn menu
		["close"] call BIS_fnc_showRespawnMenu;
		// Enable the end-game spectator
		["Initialize", [player, [], true]] call BIS_fnc_EGSpectator; 
	};
};