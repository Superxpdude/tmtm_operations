// onPlayerRespawn.sqf
// Executes on a player's machine when they respawn
// _this = [<newUnit>, <oldUnit>, <respawn>, <respawnDelay>]

["Terminate"] call BIS_fnc_EGSpectator;

_unit = _this select 0;
if ((getMissionConfigValue "SXP_customLoadouts") == 1) then {
	// Handle giving units their proper loadouts upon respawn.
	// If the variable "loadout" is given to a unit, that loadout will be used from CfgRespawnInventory
	// If the variable is not used, the classname of the unit will be used.
	_loadout = _unit getVariable ["loadout", "config"];
	if (_loadout == "config") then {
		_loadout = typeOf _unit;
	};

	// Only load the loadout for a unit if that loadout actually exists
	if (isClass ((getMissionConfig "CfgRespawnInventory") >> _loadout)) then {
		removeGoggles _unit;
		[_unit, missionConfigFile >> "CfgRespawnInventory" >> _loadout] call BIS_fnc_loadInventory;
	};
};

// Makes sure the unit is editable by all zeus modules. Needs to be run on the server
if ((side player) != sideLogic) then {
	[_unit] remoteExec ["SXP_fnc_addUnitToZeus", 2];
};

// Sets the insignia of the unit to the TMTM insignia
[_unit, "tmtm"] remoteExec ["BIS_fnc_setUnitInsignia", 0, true];