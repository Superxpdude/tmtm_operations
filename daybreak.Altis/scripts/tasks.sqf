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

// Create tasks
[[east, "zeus_unit"],["secure_fob"], "secure_fob", getMarkerPos "marker_aaf_compound", "ASSIGNED", 7, true, "attack" , true] call bis_fnc_taskCreate;
[[east, "zeus_unit"],["secure_hospital"], "secure_hospital", getMarkerPos "marker_hospital", "CREATED", 6, true, "attack" , true] call bis_fnc_taskCreate;
[[east, "zeus_unit"],["secure_castle"], "secure_castle", getMarkerPos "marker_castle", "CREATED", 5, true, "target" , true] call bis_fnc_taskCreate;
[[east, "zeus_unit"],["intel_1"], "intel_1", getMarkerPos "marker_intel_1", "CREATED", 4, true, "download" , true] call bis_fnc_taskCreate;
[[east, "zeus_unit"],["intel_2"], "intel_2", getMarkerPos "marker_intel_2", "CREATED", 3, true, "download" , true] call bis_fnc_taskCreate;
[[east, "zeus_unit"],["intel_3"], "intel_3", getMarkerPos "marker_intel_3", "CREATED", 2, true, "download" , true] call bis_fnc_taskCreate;
[[east, "zeus_unit"],["device"], "device", objNull, "CREATED", 1, true, "interact" , true] call bis_fnc_taskCreate;