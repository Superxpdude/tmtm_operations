// Device loop function
// To be spawned by the device start function
// Handles looping and creating earthquake effects where appropriate
// Also handles calling SXP_fnc_deviceEnd if the device is not disarmed in time

// Define variables
_this params [
	["_timeout", 1800, [0]]
];

estimatedTimeLeft _timeout;

// Start the download loop
for [{_i=0}, {_i <= _timeout}, {_i = _i + 1}] do {
	// Check if we've hit any of the "milestones" and play the earthquake effect
	switch (floor (_timeout - _i)) do {
		case 2700;
		case 2400;
		case 2100: {
			[1] remoteExec ["BIS_fnc_earthquake", 0];
			estimatedTimeLeft (_timeout - _i);
		};
		case 1800;
		case 1500;
		case 1200: {
			[2] remoteExec ["BIS_fnc_earthquake", 0];
			estimatedTimeLeft (_timeout - _i);
		};
		case 900;
		case 600: {
			[3] remoteExec ["BIS_fnc_earthquake", 0];
			estimatedTimeLeft (_timeout - _i);
		};
		case 300: {
			[4] remoteExec ["BIS_fnc_earthquake", 0];
			estimatedTimeLeft (_timeout - _i);
		};
	};
	if ((missionNamespace getVariable ["deviceState", 1]) == 2) exitWith {};
	// Wait one second, then repeat
	sleep 1;
};

if ((missionNamespace getVariable ["deviceState", 1]) != 2) then {
	[objNull, "activated"] remoteExec ["SXP_fnc_deviceEnd", 2];
};