// Script to set up the command vehicle

if (!isServer) exitWith {};

_this params [
	["_newVehicle", objNull, [objNull]],
	["_oldVehicle", objNull, [objNull]]
];

if (isNull _oldVehicle) then {
	_newVehicle addMPEventHandler ["MPKilled", {
		[] remoteExec ["SXP_fnc_respawnDisable", 0, false];
		missionNamespace setVariable ["SXP_var_respawnDisabled", true, true];
	}];
} else {
	[] remoteExec ["SXP_fnc_respawnEnable", 0, false];
	_newVehicle setVariable ["ACE_isRepairVehicle", true, true];
};