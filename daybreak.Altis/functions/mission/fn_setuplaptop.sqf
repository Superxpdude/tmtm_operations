// Function for setting up intel laptops.
private ["_laptop", "_num"];
_laptop = param [0, nil, [objNull]];
_num = param [1, nil, [0]];

if ((isNil "_laptop") or (isNil "_num")) exitWith {};
if (isServer) then {
	_laptop setVariable ["dlStarted", false, true];
	_laptop setVariable ["laptopNum", _num, true];
};
	
[
	_laptop,
	"Download data",
	"media\holdAction_usb.paa",
	"media\holdAction_usb.paa",
	"!(_target getVariable 'dlStarted') && ((player distance _target) < 5)",
	"!(_target getVariable 'dlStarted') && ((player distance _target) < 5)",
	nil,
	nil,
	{[_this select 0] remoteExec ["SXP_fnc_download", 2];},
	nil,
	[],
	3,
	1000,
	false,
	false
] call BIS_fnc_holdActionAdd;