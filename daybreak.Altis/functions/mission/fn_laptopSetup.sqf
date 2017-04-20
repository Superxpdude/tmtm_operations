// Function for setting up intel laptops.
_this params [
	["_laptop", nil, [objNull]],
	["_num", nil, [0]]
];

// Exit the script if either _laptop or _num is undefined
if ((isNil "_laptop") or (isNil "_num")) exitWith {};

// If run on the server, define the required variables to the laptops.
if (isServer) then {
	_laptop setVariable ["downloadState", -1, true];
	_laptop setVariable ["laptopNum", _num, true];
	// Set the initial texture for the laptop
	_laptop setObjectTextureGlobal [0, "media\downloadscreens\laptop_lock.paa"];
};
/*
	Laptop downloadStates consist of the following
	-1 = Download not yet enabled
	0 = Download enabled, but not started
	1 = Download in progress
	2 = Download completed, waiting for data pickup
	3 = Download completed, data retrieved
*/

// Create our holdactions, only run this part on units that have an interface
if (hasInterface) then {
	// Create holdaction to start download
	[
		_laptop,
		"Start download",
		"media\holdActions\holdAction_usb.paa",
		"media\holdActions\holdAction_usb.paa",
		"((_target getVariable ['downloadState', -1]) == 0) && ((player distance _target) < 5)",
		"((_target getVariable ['downloadState', -1]) == 0) && ((player distance _target) < 5)",
		nil,
		nil,
		{_this remoteExec ["SXP_fnc_downloadStart", 2];},
		nil,
		[],
		5, // 5 seconds to start the download
		1000, // Maximum priority
		false,
		false
	] call BIS_fnc_holdActionAdd;
	// Create holdaction to retrieve data
	[
		_laptop,
		"Retrieve data",
		"media\holdActions\holdAction_usb.paa",
		"media\holdActions\holdAction_usb.paa",
		"((_target getVariable ['downloadState', -1]) == 2) && ((player distance _target) < 5)",
		"((_target getVariable ['downloadState', -1]) == 2) && ((player distance _target) < 5)",
		nil,
		nil,
		{_this remoteExec ["SXP_fnc_downloadEnd", 2];},
		nil,
		[],
		5, // 5 seconds to grab the data
		1000, // Maximum priority
		false,
		false
	] call BIS_fnc_holdActionAdd;
};