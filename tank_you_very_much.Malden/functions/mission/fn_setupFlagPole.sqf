// Flag pole setup script
// Adds the holdaction to teleport to the command vehicle

[
	_this select 0,
	"teleport to the Command Vehicle",
	"media\holdActions\holdAction_alert.paa",
	"media\holdActions\holdAction_alert.paa",
	"((player distance _target) < 10) && (alive cmd_vehicle)",
	"((player distance _target) < 10) && (alive cmd_vehicle)",
	nil,
	nil,
	{(_this select 1) moveInCargo cmd_vehicle},
	nil,
	[],
	1,
	1000, // Maximum priority
	false,
	false
] call BIS_fnc_holdActionAdd;