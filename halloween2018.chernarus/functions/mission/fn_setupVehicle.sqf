// SXP_fnc_setupVehcile
// Handles setting up a specific vehicle on mission start.
// Only runs on the server

if (!isServer) exitWith {};

// Define parameters
params [
	["_veh", nil, [objNull]],
	["_type", nil, [""]]
];

// Check to make sure both variables are defined
if ((isNil "_veh") or (isNil "_type")) exitWith {};

switch _type do {
	case "crashed_humvee": {
		_veh engineOn true;
		_veh setPilotLight true;
	};
};