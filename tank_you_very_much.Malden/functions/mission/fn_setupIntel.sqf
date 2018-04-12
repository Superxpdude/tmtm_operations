// Function for setting up the intel
_this params [
	["_intel", nil, [objNull]],
	["_num", nil, [0]]
];

// Exit the script if either _intel or _num is undefined
if ((isNil "_intel") or (isNil "_num")) exitWith {};

// If run on the server, define the required variables to the laptops.
if (isServer) then {
	_intel setVariable ["intelState", 0, true];
	_intel setVariable ["intelNum", _num, true];
};

// Create our holdactions, only run this part on units that have an interface
if (hasInterface) then {
	[
		_intel,
		"Search for intel",
		"\a3\ui_f\data\igui\cfg\holdactions\holdaction_search_ca.paa",
		"\a3\ui_f\data\igui\cfg\holdactions\holdaction_search_ca.paa",
		"((_target getVariable ['intelState', -1]) == 0) && ((player distance _target) < 5)",
		"((_target getVariable ['intelState', -1]) == 0) && ((player distance _target) < 5)",
		nil,
		nil,
		{_this remoteExec ["SXP_fnc_intelCollect", 2];},
		nil,
		[],
		5, // 5 seconds to collect intel
		1000, // Maximum priority
		false,
		false
	] call BIS_fnc_holdActionAdd;
};