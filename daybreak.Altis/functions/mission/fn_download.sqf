// Script for handling intel downloads from laptops. Server only
if (!isServer) exitWith {};
_laptop = param [0, nil, [objNull]];
if (isNil "_laptop") exitWith {};
_laptop setVariable ["dlStarted", true, true];

// Activate the device if it's the first download
if (!deviceActivated) then {
	deviceActrivated = true;
	publicVariable "deviceActivated";
	[] spawn SXP_fnc_device;
};

_laptop setObjectTextureGlobal [0, "media\downloadScreens\laptop_dl_0.paa"];
uiSleep 3;
_laptop setObjectTextureGlobal [0, "media\downloadScreens\laptop_dl_1.paa"];
uiSleep 3;
_laptop setObjectTextureGlobal [0, "media\downloadScreens\laptop_dl_2.paa"];
uiSleep 3;
_laptop setObjectTextureGlobal [0, "media\downloadScreens\laptop_dl_3.paa"];
uiSleep 3;
_laptop setObjectTextureGlobal [0, "media\downloadScreens\laptop_dl_4.paa"];
uiSleep 3;
_laptop setObjectTextureGlobal [0, "media\downloadScreens\laptop_dl_5.paa"];
uiSleep 3;
_laptop setObjectTextureGlobal [0, "media\downloadScreens\laptop_dl_6.paa"];
uiSleep 3;
_laptop setObjectTextureGlobal [0, "media\downloadScreens\laptop_dl_7.paa"];
uiSleep 3;
_laptop setObjectTextureGlobal [0, "media\downloadScreens\laptop_dl_8.paa"];
uiSleep 3;
_laptop setObjectTextureGlobal [0, "media\downloadScreens\laptop_dl_9.paa"];
uiSleep 3;
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