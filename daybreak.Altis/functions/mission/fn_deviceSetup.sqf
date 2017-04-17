// Function to handle setting up the device
// To be run on all clients at mission start

// Define parameters
_this params [
	["_device", nil, [objNull]]
];

// Exit the script if the device is undefined
if (isNil "_device") exitWith {};

// Create the holdaction
if (hasInterface) then {
	[
		_device,
		"Disable device",
		"media\holdActions\holdAction_power.paa",
		"media\holdActions\holdAction_power.paa",
		"((missionNamespace getVariable ['deviceState', -1]) == 1) && ((player distance _target) < 5)",
		"((missionNamespace getVariable ['deviceState', -1]) == 1) && ((player distance _target) < 5)",
		nil,
		nil,
		{[_this select 0, "disarmed"] remoteExec ["SXP_fnc_deviceEnd", 2];},
		{[4] remoteExec ["BIS_fnc_earthquake", 0];}, // Play an earthquake effect if the disarming is interrupted
		[],
		15, // 15 seconds to disable the device, long enough that someone can't run in unprotected
		1000, // Maximum priority
		false,
		false
	] call BIS_fnc_holdActionAdd;
};