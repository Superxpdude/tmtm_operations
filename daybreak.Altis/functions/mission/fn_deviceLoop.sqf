// Device loop function
// To be spawned by the device start function
// Handles looping and creating earthquake effects where appropriate
// Also handles calling SXP_fnc_deviceEnd if the device is not disarmed in time

// Define variables
_this params [
	["_timeout", 1800, [0]]
];

estimatedTimeLeft _timeout;

// Define the initial modulo
private _modulo = 300;

// Determine the end time
private _endTime = diag_tickTime + _timeout;

// Determine the next time to execute an event
private _eventTime = diag_tickTime + ((_endTime - diag_tickTime) % _modulo);

// Start the device loop
while {(missionNamespace getVariable ["deviceState", 0]) == 1} do {
	waitUntil {(diag_tickTime > _eventTime) OR (diag_tickTime > _endTime)};
	private _currentTime = _endTime - diag_tickTime;
	switch true do {
		case (_currentTime > 2000): {[1] remoteExec ["BIS_fnc_earthquake", 0]};
		case ((_currentTime < 1999) && (_currentTime > 1100)): {[2] remoteExec ["BIS_fnc_earthquake", 0]};
		case ((_currentTime < 1099) && (_currentTime > 350)): {[3] remoteExec ["BIS_fnc_earthquake", 0]};
		case ((_currentTime < 349) && (_currentTime > 200)): {[3] remoteExec ["BIS_fnc_earthquake", 0]; _modulo = 180;};
		case ((_currentTime < 199) && (_currentTime > 70)): {[3] remoteExec ["BIS_fnc_earthquake", 0]; _modulo = 60;};
		case ((_currentTime < 60) && (_currentTime > 10)): {[4] remoteExec ["BIS_fnc_earthquake", 0]; _modulo = 60;}; // Big earthquake for the last one
	};
	
	// If time runs out, exit the loop.
	if (_currentTime <= 0) exitWith {missionNamespace setVariable ["deviceState", 3, true]};
	// Set the new _eventTime variable
	_eventTime = diag_tickTime + ((_endTime - diag_tickTime) % _modulo);
	// Ensures that we don't get two earthquakes at the same time
	sleep 1.5;
};	

if ((missionNamespace getVariable ["deviceState", 1]) != 2) then {
	[objNull, "activated"] remoteExec ["SXP_fnc_deviceEnd", 2];
};