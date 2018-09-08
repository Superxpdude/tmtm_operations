// SXP_fnc_setupUnit
// Handles setting up a specific unit on mission start.
// Only runs on the server

if (!isServer) exitWith {};

// Define parameters
params [
	["_unit", nil, [objNull]],
	["_type", nil, [""]]
];

// Check to make sure both variables are defined
if ((isNil "_unit") or (isNil "_type")) exitWith {};

switch _type do {
	case "helipilot": {
	
	};
	case "humvee_soldier": {
		
	};
};