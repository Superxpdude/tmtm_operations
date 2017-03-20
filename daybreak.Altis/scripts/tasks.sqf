// Script for creating player tasks
// Only to be run on the server. BIS_fnc_taskCreate is global.
if (!isServer) exitWith {};

// Example task syntax below
/*
[
	true, // Owners of the task. See wiki page for details
	["task name", "parent task name"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["description", "title", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank.
	[0,0,0], // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"attack", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;
*/

if (isNil "zeus_unit") then {
	// Put initial tasks here
} else {
	// Put second copy of tasks here.
	// Due to a bug in BIS_fnc_taskCreate, zeus will not be set as an owner unless explicitly defined.
	// However, if zeus isn't present, trying to use the object will throw script errors.
	// Copy the tasks from above into this section, and replace the owner with an array
	// Example: true, would turn into [true, zeus_unit],
};


// Previously created tasks.
// Update these to use the framework when possible
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