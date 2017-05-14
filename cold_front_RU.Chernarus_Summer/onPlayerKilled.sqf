// onPlayerKilled.sqf
// Executes on a player's machine when they die
// _this = [<oldUnit>, <killer>, <respawn>, <respawnDelay>]
_this params ["_oldUnit", "_killer", "_respawn", "_respawnDelay"];

[_oldUnit] call SXP_fnc_saveRadioSettings;

[] spawn {
	["Initialize", [player, [], false]] call BIS_fnc_EGSpectator;
};

// Add any mission specific code after this point
