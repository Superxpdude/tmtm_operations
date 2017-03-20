// initServer.sqf
// Executes only on the server at mission start
// No parameters are passed to this script

// Initialise dynamic groups
["Initialize", [true]] call BIS_fnc_dynamicGroups;

// Create a list of mission objects that should not be curator editable
private "_blacklistedMissionObjects";
_blacklistedMissionObjects = [
	laptop_1,
	laptop_2,
	laptop_3,
	device
];

// Make all initial mission objects editable by all curators
{
	private "_curator";
	_curator = _x;
	{
		// Make sure object is not already in editable objects and is not black listed
		if !(_x in curatorEditableObjects _curator) then {
			_curator addCuratorEditableObjects [[_x], true];
		};
	} forEach playableUnits + switchableUnits + allMissionObjects "LandVehicle" + allMissionObjects "Man" + allMissionObjects "Air" + allMissionObjects "Reammobox_F" - _blacklistedMissionObjects - allMissionObjects "VirtualMan_F";
} forEach allCurators;

// Call the script to handle initial task setup
[] execVM "scripts\tasks.sqf";

// Begin mission-specific init
// Initialize variable for device activation
deviceActivated = false;
publicVariable "deviceActivated";
// Initialize variable that tracks if device is active
device setVariable ["disabled", false, true];

// Set up the command APC
cmd_marid animate ["HideTurret", 1];
cmd_marid lockTurret [[0], true];
[missionNamespace, cmd_marid, "Command APC"] call BIS_fnc_addRespawnPosition;

// Set the fog to dissipate as the mission goes on
3600 setFog [0,12,25];
3600 setOvercast 0;