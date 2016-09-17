// Initialise dynamic groups
["Initialize", [true]] call BIS_fnc_dynamicGroups;

// Generate the deactivation code for the east wind device
deviceCode = [];
while {(count deviceCode) < 6} do {
	deviceCode pushBack (floor (random 10));
};

// Initial mission objects that should not be curator editable
private "_blacklistedMissionObjects";
_blacklistedMissionObjects = [

];

// Make all initial mission objects to be editable by the Instructor
{
	// Make sure object is not already in editable objects and is not black listed
	if !(_x in curatorEditableObjects zeus_module) then {
		zeus_module addCuratorEditableObjects [[_x], true];
	};
} forEach playableUnits + switchableUnits + allMissionObjects "LandVehicle" + allMissionObjects "Man" + allMissionObjects "Air" + allMissionObjects "Reammobox_F" - _blacklistedMissionObjects - allMissionObjects "VirtualMan_F";

// Create tasks
[east,["secureCastle"], ["AAF forces are holding the East Wind prototype inside of Kastro. Move into the castle to secure the device.", "Secure the Device", ""], device, "ASSIGNED", 1, true, "target" , true] call BIS_fnc_taskCreate;


// Create duplicate tasks for zeus
/*
if (!isNil "zeus_unit") then {

} else {

};
*/
// Initialize variable for device activation
deviceActivated = false;
publicVariable "deviceActivated";

device setVariable ["disabled", false, true];

cmd_marid animate ["HideTurret", 1];
cmd_marid lockTurret [[0], true];

[missionNamespace, cmd_marid, "Command APC"] call BIS_fnc_addRespawnPosition;

// Set the fog to dissipate as the mission goes on
3600 setFog [0,12,25];
3600 setOvercast 0;