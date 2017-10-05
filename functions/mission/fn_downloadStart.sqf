// Script for starting the intel download from a laptop
// Only to be run on the server
if (!isServer) exitWith {};

// Define parameters
_this params [
	["_laptop", nil, [objNull]]
];

// Grab the download time from the laptop
private ["_downloadTime"];
_downloadTime = _laptop getVariable ["downloadTime", 30];

// Terminate if the laptop doesn't exist
if (isNil "_laptop") exitWith {};

// Mark the laptop state as "downloading"
_laptop setVariable ["downloadState", 1, true];

// Check if the device is activated
// Activate the device if it has not been activated yet
if ((missionNamespace getVariable ["deviceState", -1]) == 0) then {
	// Activate the device
	[] spawn SXP_fnc_deviceStart;
};

// Start the download loop
for [{_i=0}, {_i <= _downloadTime}, {_i = _i + 1}] do {
	// Change the texture of the laptop to display the progress
	[] call compile format [
		'%1 setObjectTextureGlobal [0, "media\downloadScreens\laptop_dl_%2.paa"];',
		_laptop,
		floor ((_i / _downloadTime) * 10)
	];
	// Wait one second, then repeat
	sleep 1;
};

// Mark the download as completed
_laptop setVariable ["downloadState", 2, true];