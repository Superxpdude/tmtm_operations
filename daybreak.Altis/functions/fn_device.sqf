// Script for handling the activation of the device
if (!isServer) exitWith {};
if (deviceActivated) exitWith {};

// Mark the device as being activated
deviceActivated = true;
publicVariable "deviceActivated";

// Wait a few seconds, then start the first earthquake
sleep 5;
[1] remoteExec ["BIS_fnc_earthquake", 0];
// Start changing the weather to overcast
2700 setOvercast 1;
estimatedTimeLeft 2700;
sleep 300;
[1] remoteExec ["BIS_fnc_earthquake", 0];
estimatedTimeLeft 2400;
sleep 300;
[1] remoteExec ["BIS_fnc_earthquake", 0];
estimatedTimeLeft 2100;
sleep 300;
[2] remoteExec ["BIS_fnc_earthquake", 0];
estimatedTimeLeft 1800;
sleep 300;
[2] remoteExec ["BIS_fnc_earthquake", 0];
estimatedTimeLeft 1500;
sleep 300;
[2] remoteExec ["BIS_fnc_earthquake", 0];
estimatedTimeLeft 1200;
sleep 300;
[3] remoteExec ["BIS_fnc_earthquake", 0];
estimatedTimeLeft 900;
sleep 300;
[3] remoteExec ["BIS_fnc_earthquake", 0];
estimatedTimeLeft 600;
sleep 300;
[4] remoteExec ["BIS_fnc_earthquake", 0];
estimatedTimeLeft 300;
sleep 300;

// Fail the mission
device setVariable ["disabled", true, true];
[4] remoteExec ["BIS_fnc_earthquake", 0];
sleep 3;
[] spawn {
	private ["_allUnits", "_grp"];
	_allUnits = allUnits call BIS_fnc_arrayShuffle;
	_grp = createGroup civilian;
	{
		_nul = _grp createUnit ["ModuleLightning_F", getPosATL _x, [], 0, "FORM"];
		_x setDamage 1;
		sleep 0.1;
	} forEach _allUnits;
};
sleep 3;
"eastWind" call BIS_fnc_endMissionServer;