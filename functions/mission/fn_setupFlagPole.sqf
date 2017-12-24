// Flag pole setup script
// Adds the holdaction to teleport to the command vehicle

[
	_this select 0,
	"Teleport to Command SUV",
	"media\holdActions\holdAction_alert.paa",
	"media\holdActions\holdAction_alert.paa",
	"((player distance _target) < 10)",
	"((player distance _target) < 10)",
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