// Script for handling intel downloads from laptops. Server only
if (!isServer) exitWith {};

// Define variables
params [
	["_laptop", nil, [objNull]],
	["_duration", 60, [0]]
];
private ["_time", "_progress", "_texture"];

// Exit if the laptop is undefined
if (isNil "_laptop") exitWith {};

// Mark the download as started
_laptop setVariable ["dlStarted", true, true];

// Activate the device if it's the first download
if (!deviceActivated) then {
	deviceActrivated = true;
	publicVariable "deviceActivated";
	[] spawn SXP_fnc_device;
};

// Mark the start time
_startTime = time;
_texture = -1;

// Start the texture loop
while {time < (_startTime + _duration)} do {
	_progress = floor ((time - _startTime)/(_duration));
	if (_progress != _texture) then {
		[] call compile format ["_laptop setObjectTextureGlobal [0, 'media\downloadScreens\laptop_dl_%1.paa']", (_progress * 10)];
	};
	sleep 0.5;
};

// Set the laptop to the "completed" texture
_laptop setObjectTextureGlobal [0, "media\downloadScreens\laptop_dl_10.paa"];

[] call compile format [
	"['intel_%1', 'SUCCEEDED', true] spawn BIS_fnc_taskSetState;
	['intel_%1_zeus', 'SUCCEEDED', true] spawn BIS_fnc_taskSetState;
	laptop_%1_status = true;",
	_laptop getVariable "laptopNum"
];

if ((!isNil "laptop_1_status") && (!isNil "laptop_2_status") && (!isNil "laptop_3_status")) then {
	["device", device] call BIS_fnc_taskSetDestination;
	["device_zeus", device] call BIS_fnc_taskSetDestination;
	[
		device,
		"Disable device",
		"media\holdAction_power.paa",
		"media\holdAction_power.paa",
		"!(_target getVariable 'disabled') && ((player distance _target) < 5)",
		"!(_target getVariable 'disabled') && ((player distance _target) < 5)",
		nil,
		nil,
		{"victory" call BIS_fnc_endMissionServer;},
		nil,
		[],
		5,
		1000,
		false,
		false
	] remoteExec [
		"BIS_fnc_holdActionAdd",
		0,
		true
	];
	
};