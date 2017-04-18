// Function for handling the end of the device loop
// Handles both "disarmed" and "activated" endings
// Only to be run on the server
if (!isServer) exitWith {};

// Define variables
_this params [
	["_device", nil, [objNull]],
	["_end", nil, [""]]
];

// If end type is nil, exit
if (isNil "_end") exitWith {};

switch (toLower _end) do {
	case "disarmed": {
		// Mark the device as disarmed
		missionNamespace setVariable ["deviceState", 2, true];
		// Complete the associated task
		["deviceTask", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		// Wait a few seconds, then end the mission
		[] spawn {
			sleep 5;
			["victory", true, true] remoteExec ["BIS_fnc_endMission", 0];
		};
	};
	case "activated": {
		// Device activated, RIP everything
		// Mark the device as activated
		missionNamespace setVariable ["deviceState", 3, true];
		// Fail the associated task
		["deviceTask", "FAILED", true] call BIS_fnc_taskSetState;
		// Begin the end of the world
		[] spawn {
			// Play an earthquake effect
			[4] remoteExec ["BIS_fnc_earthquake", 0];
			// Wait for the earthquake to start
			sleep 3;
			// Begin the destruction of everything
			private ["_allUnits", "_grp"];
			// Generate a randomized group of all units
			_allUnits = allUnits call BIS_fnc_arrayShuffle;
			// Create an empty group
			_grp = createGroup civilian;
			{
				// Create a lightning bolt module
				_nul = _grp createUnit ["ModuleLightning_F", getPosATL _x, [], 0, "FORM"];
				// Make sure the unit is 100% dead
				_x setDamage 1;
				// Wait 0.1 seconds
				sleep 0.1;
			} forEach _allUnits; // Kill every living thing on the map
			// Wait 3 seconds for dramatic effect
			sleep 3;
			// End the mission once everything is dead
			["eastWind", false, true] remoteExec ["BIS_fnc_endMission", 0];
		};
	};
};