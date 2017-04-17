// initServer.sqf
// Executes only on the server at mission start
// No parameters are passed to this script

// Initialise dynamic groups
["Initialize", [true]] call BIS_fnc_dynamicGroups;

// Initialize our headless client variables
sxp_hc_clientID = 0;
sxp_hc_enabled = false;
sxp_hc_zeusEnabled = true;

// Push the HC variables to all clients
{
	publicVariable _x;
} forEach ["sxp_hc_clientID", "sxp_hc_enabled", "sxp_hc_zeusEnabled"];

// Add the event handler for handling HC disconnects
addMissionEventHandler ["PlayerDisconnected", {_this call SXP_fnc_hcDisconnect;}];

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

// Add any mission specific code after this point

// Mark the device as not being activated yet
deviceActivated = false;
publicVariable "deviceActivated";

// Mark the device as not being disabled
device setVariable ["disabled", false, true];

// Set up the command APC
cmd_marid animate ["HideTurret", 1];
cmd_marid lockTurret [[0], true];

// Add respawn locations
[missionNamespace, cmd_marid, "Command APC"] call BIS_fnc_addRespawnPosition;

// Set the fog to dissipate as the mission goes on
3600 setFog [0,12,25];
3600 setOvercast 0;

if (!isNil "csat_officer") then {
	[
		(getMissionConfig "cfgORBAT") >> "tmtm",
		nil,nil,nil,nil,nil,nil,nil,nil,nil,nil,
		name csat_officer
	] remoteExec ["BIS_fnc_ORBATSetGroupParams", 0];
};

// Let all clients know that ORBAT is ready to go.
orbat_setup = true;
publicVariable "orbat_setup";