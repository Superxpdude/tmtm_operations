// Function for ending an intel download
// Called from a holdaction on the intel laptop
// Only to be run on the server
if (!isServer) exitWith {};

// Define parameters
_this params [
	["_laptop", nil, [objNull]]
];

// Mark the download as "data retrieved"
_laptop setVariable ["downloadState", 3, true];

// Turn off the display on the laptop
_laptop setObjectTextureGlobal [0, "media\downloadscreens\laptop_bluescreen.paa"];

// Update the intel task
[] call compile format [
	"['intel_%1', 'SUCCEEDED', true] spawn BIS_fnc_taskSetState",
	_laptop getVariable "laptopNum"
];