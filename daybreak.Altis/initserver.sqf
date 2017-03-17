// Initialise dynamic groups
["Initialize", [true]] call BIS_fnc_dynamicGroups;

// Initial mission objects that should not be curator editable
private "_blacklistedMissionObjects";
_blacklistedMissionObjects = [
	laptop_1,
	laptop_2,
	laptop_3,
	device
];

// Make all initial mission objects to be editable by the Instructor
{
	// Make sure object is not already in editable objects and is not black listed
	if !(_x in curatorEditableObjects zeus_module) then {
		zeus_module addCuratorEditableObjects [[_x], true];
	};
} forEach playableUnits + switchableUnits + allMissionObjects "LandVehicle" + allMissionObjects "Man" + allMissionObjects "Air" + allMissionObjects "Reammobox_F" - _blacklistedMissionObjects - allMissionObjects "VirtualMan_F";

// Create tasks
[east,["secure_fob"], ["AAF forces have been using this shipping compound as a forward operating base. Securing the compound will give friendly forces a good outpost to use for the assault on Kavala.", "Secure AAF Compound", ""], getMarkerPos "marker_aaf_compound", "ASSIGNED", 7, true, "attack" , true] call bis_fnc_taskCreate;
[east,["secure_hospital"], ["AAF forces are using the hospital as a staging area. Secure the hospital to prevent additional airborne reinforcements.", "Secure the Hospital", ""], getMarkerPos "marker_hospital", "CREATED", 6, true, "attack" , true] call bis_fnc_taskCreate;
[east,["secure_castle"], ["Kastro is currently being used as a heavily defended fortress by AAF command. The castle is currently occupied by multiple anti-air and mortar assets, eliminating them will significantly weaken the AAF support capabilities.", "Secure Kastro", ""], getMarkerPos "marker_castle", "CREATED", 5, true, "target" , true] call bis_fnc_taskCreate;
[east,["intel_1"], ["Retrieving NATO data will allow us to pinpoint the location of the East Wind device.", "Retrieve NATO Intel", ""], getMarkerPos "marker_intel_1", "CREATED", 4, true, "download" , true] call bis_fnc_taskCreate;
[east,["intel_2"], ["Retrieving NATO data will allow us to pinpoint the location of the East Wind device.", "Retrieve NATO Intel", ""], getMarkerPos "marker_intel_2", "CREATED", 3, true, "download" , true] call bis_fnc_taskCreate;
[east,["intel_3"], ["Retrieving NATO data will allow us to pinpoint the location of the East Wind device.", "Retrieve NATO Intel", ""], getMarkerPos "marker_intel_3", "CREATED", 2, true, "download" , true] call bis_fnc_taskCreate;
[east,["device"], ["NATO forces are holding an East Wind prototype somewhere near Kavala. The exact location is unknown, perhaps if we could find some NATO intel we could pinpoint the location.", "Secure the Device", ""], objNull, "CREATED", 1, true, "interact" , true] call bis_fnc_taskCreate;


// Create duplicate tasks for zeus
if (!isNil "zeus_unit") then {
	[zeus_unit,["secure_fob_zeus"], ["AAF forces have been using this shipping compound as a forward operating base. Securing the compound will give friendly forces a good outpost to use for the assault on Kavala.", "Secure AAF Compound", ""], getMarkerPos "marker_aaf_compound", "ASSIGNED", 7, true, "attack" , true] call bis_fnc_taskCreate;
	[zeus_unit,["secure_hospital_zeus"], ["AAF forces are using the hospital as a staging area. Secure the hospital to prevent additional airborne reinforcements.", "Secure the Hospital", ""], getMarkerPos "marker_hospital", "CREATED", 6, true, "attack" , true] call bis_fnc_taskCreate;
	[zeus_unit,["secure_castle_zeus"], ["Kastro is currently being used as a heavily defended fortress by AAF command. The castle is currently occupied by multiple anti-air and mortar assets, eliminating them will significantly weaken the AAF support capabilities.", "Secure Kastro", ""], getMarkerPos "marker_castle", "CREATED", 5, true, "target" , true] call bis_fnc_taskCreate;
	[zeus_unit,["intel_1_zeus"], ["Retrieving NATO data will allow us to pinpoint the location of the East Wind device.", "Retrieve NATO Intel", ""], getMarkerPos "marker_intel_1", "CREATED", 4, true, "download" , true] call bis_fnc_taskCreate;
	[zeus_unit,["intel_2_zeus"], ["Retrieving NATO data will allow us to pinpoint the location of the East Wind device.", "Retrieve NATO Intel", ""], getMarkerPos "marker_intel_2", "CREATED", 3, true, "download" , true] call bis_fnc_taskCreate;
	[zeus_unit,["intel_3_zeus"], ["Retrieving NATO data will allow us to pinpoint the location of the East Wind device.", "Retrieve NATO Intel", ""], getMarkerPos "marker_intel_3", "CREATED", 2, true, "download" , true] call bis_fnc_taskCreate;
	[zeus_unit,["device_zeus"], ["NATO forces are holding an East Wind prototype somewhere near Kavala. The exact location is unknown, perhaps if we could find some NATO intel we could pinpoint the location.", "Secure the Device", ""], objNull, "CREATED", 1, true, "interact" , true] call bis_fnc_taskCreate;
} else {
	[west,["secure_fob_zeus"], ["AAF forces have been using this shipping compound as a forward operating base. Securing the compound will give friendly forces a good outpost to use for the assault on Kavala.", "Secure AAF Compound", ""], getMarkerPos "marker_aaf_compound", "ASSIGNED", 7, true, "attack" , true] call bis_fnc_taskCreate;
	[west,["secure_hospital_zeus"], ["AAF forces are using the hospital as a staging area. Secure the hospital to prevent additional airborne reinforcements.", "Secure the Hospital", ""], getMarkerPos "marker_hospital", "CREATED", 6, true, "attack" , true] call bis_fnc_taskCreate;
	[west,["secure_castle_zeus"], ["Kastro is currently being used as a heavily defended fortress by AAF command. The castle is currently occupied by multiple anti-air and mortar assets, eliminating them will significantly weaken the AAF support capabilities.", "Secure Kastro", ""], getMarkerPos "marker_castle", "CREATED", 5, true, "target" , true] call bis_fnc_taskCreate;
	[west,["intel_1_zeus"], ["Retrieving NATO data will allow us to pinpoint the location of the East Wind device.", "Retrieve NATO Intel", ""], getMarkerPos "marker_intel_1", "CREATED", 4, true, "download" , true] call bis_fnc_taskCreate;
	[west,["intel_2_zeus"], ["Retrieving NATO data will allow us to pinpoint the location of the East Wind device.", "Retrieve NATO Intel", ""], getMarkerPos "marker_intel_2", "CREATED", 3, true, "download" , true] call bis_fnc_taskCreate;
	[west,["intel_3_zeus"], ["Retrieving NATO data will allow us to pinpoint the location of the East Wind device.", "Retrieve NATO Intel", ""], getMarkerPos "marker_intel_3", "CREATED", 2, true, "download" , true] call bis_fnc_taskCreate;
	[west,["device_zeus"], ["NATO forces are holding an East Wind prototype somewhere near Kavala. The exact location is unknown, perhaps if we could find some NATO intel we could pinpoint the location.", "Secure the Device", ""], objNull, "CREATED", 1, true, "interact" , true] call bis_fnc_taskCreate;
};

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