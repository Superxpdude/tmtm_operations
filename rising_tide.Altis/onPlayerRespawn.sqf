_unit = _this select 0;
_loadout = _unit getVariable ["loadout", "config"];
if (_loadout == "config") then {
	_loadout = typeOf _unit;
};
[_unit, missionConfigFile >> "CfgRespawnInventory" >> _loadout] call BIS_fnc_loadInventory;
[_unit, "tmtm"] remoteExec ["BIS_fnc_setUnitInsignia", 0, true];

{
     _x addCuratorEditableObjects [_unit,true];
} forEach allCurators;