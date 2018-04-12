// Script for handling intel collection
// Only to be run on the server
if (!isServer) exitWith {};

// Define parameters
_this params [
	["_intel", nil, [objNull]]
];

// Mark the intel as collected
_intel setVariable ["intelState", 1, true];

// Update the correct task
[] call compile format [
	"['intel%1'] spawn SXP_fnc_updateTask",
	_intel getVariable "intelNum"
];