// Function to activate the device
// Only to be run on the server
if (!isServer) exitWith {};

// Only proceed if the device is still in it's "unactivated" state
if ((missionNamespace getVariable ["deviceState", -1]) != 0) exitWith {};

// Mark the device as active
missionNamespace setVariable ["deviceState", 1, true];

// Wait a few seconds before starting the earthquakes
sleep 5;
[1] remoteExec ["BIS_fnc_earthquake", 0];

// Generate a random time for the device countdown
// Minimum possible time is 20 minutes
// Average is 30 minutes
// Maximum possible time is 45 minutes
_deviceTime = random [1200, 1800, 2700];

// Notify the players that something is happening
[
	[
		"HQ", 
		"We're detecting seismic activity in the area around Kavala..."
		,0
	],
	[
		"HQ", 
		"It looks like NATO may have activated the East Wind Device..."
		,5
	],
	[
		"HQ", 
		format ["Based on our calculations, the device will activate in approximately %1 minutes...", (round (_deviceTime/300))*5]
		,10
	],
	[
		"HQ", 
		"Get that device disarmed ASAP."
		,15
	]
] remoteExec ["BIS_fnc_EXP_camp_playSubtitles", 0];

// Start changing the sky to overcast
_deviceTime setOvercast 1;
// Set the "time left" timer (visible by zeus)
estimatedTimeLeft _deviceTime;

// Spawn the deviceLoop function
[_deviceTime] spawn SXP_fnc_deviceLoop;