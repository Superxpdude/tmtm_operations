// initServer.sqf
// Executes only on the server at mission start
// No parameters are passed to this script

// Create a list of mission objects that should not be curator editable
XPT_blacklistedMissionObjects = [
	laptop_1,
	laptop_2,
	laptop_3,
	device
];

// Call the template initServer function
[] call XPT_fnc_initServer; // DO NOT CHANGE THIS LINE

// Call the script to handle initial task setup
[] execVM "scripts\tasks.sqf";

// Add any mission specific code after this point

// Create our intel and task arrays
missionNamespace setVariable ["taskArray", ["secure_fob", "secure_hospital", "secure_castle"], true];
missionNamespace setVariable ["intelArray", [laptop_1, laptop_2, laptop_3], true];

// Set the initial device status
missionNamespace setVariable ["deviceState", 0, true];
// 0 = Not activated
// 1 = Activated
// 2 = Disarmed

// Set up the command APC
cmd_marid animate ["HideTurret", 1];
cmd_marid lockTurret [[0], true];

// Add respawn locations
respawn_base = [missionNamespace, "csat_fob_marker", "CSAT FOB"] call BIS_fnc_addRespawnPosition;
respawn_apc = [missionNamespace, cmd_marid, "Command APC"] call BIS_fnc_addRespawnPosition;
respawnLocations = [respawn_apc, respawn_base];

// Set the fog to dissipate as the mission goes on
3600 setFog [0,12,25];
3600 setOvercast 0;