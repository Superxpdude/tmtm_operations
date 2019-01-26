// Script for creating player tasks
// Only to be run on the server. BIS_fnc_taskCreate is global.
if (!isServer) exitWith {};

// Example task syntax below
/*
[
	true, // Owners of the task. See wiki page for details
	["task name", "parent task name"], // Name of the task, along with parent name. Parent name is used for nested tasks
	["description", "title", "marker"], // Information about the task. Honestly don't know what the marker does. Leave it blank. Can also use a CfgTaskDescriptions class (class name in string form) instead of this array.
	[0,0,0], // Task destination, can also refer to object location. Good method to use is getMarkerPos. Use objNull for task without location.
	"CREATED", // Task state. Current state of task at the time it's created (usually either "CREATED" or "ASSIGNED")
	10, // Task priority. Taken into account when automatically assigning new tasks when previous tasks are completed.
	true, // Show notification. Leave this as true. Set to false to disable task popup
	"attack", // Task type. Types can be found in CfgTaskTypes, or at https://community.bistudio.com/wiki/Arma_3_Tasks_Overhaul#Appendix
	true // Share task. If true, game will report which players have the task selected.	
] call BIS_fnc_taskCreate;

	Make sure to add the name of the zeus unit into the owner field in string format
	It should look like this when written
	
		[true, "zeus_unit"]
		
	This adds the task to all player units, as well as the "zeus_unit" curator.
	This makes sure that zeus units have the same tasks that the players do
*/
// Place tasks here

[[true, "zeus_unit"], "destroy_aa", ["Neutralize the enemy Anti-Air network by destroying or disabling the anti-air guns.", "Destroy AA Net", ""], objNull, "ASSIGNED", 100, true, "target", true] call BIS_fnc_taskCreate;
[[true, "zeus_unit"], ["destroy_aa1", "destroy_aa"], ["Destroy the Anti-Air gun south of Vagalala.", "Destroy Anti-Air Gun", ""], aa1, "CREATED", 0, true, "target", true] call BIS_fnc_taskCreate;
[[true, "zeus_unit"], ["destroy_aa2", "destroy_aa"], ["Destroy the Anti-Air gun north of the Red Spring surface mine.", "Destroy Anti-Air Gun", ""], aa2, "CREATED", 0, true, "target", true] call BIS_fnc_taskCreate;
[[true, "zeus_unit"], ["destroy_aa3", "destroy_aa"], ["Destroy the Anti-Air gun south of Imone.", "Destroy Anti-Air Gun", ""], aa3, "CREATED", 0, true, "target", true] call BIS_fnc_taskCreate;
[[true, "zeus_unit"], ["destroy_aa4", "destroy_aa"], ["Destroy the Anti-Air guns at the Red Spring surface mine.", "Destroy Anti-Air Guns", ""], aa4, "CREATED", 0, true, "target", true] call BIS_fnc_taskCreate;
[[true, "zeus_unit"], "destroy_ammo", ["Destroy the enemy ammo caches.", "Destroy Ammo Caches", ""], objNull, "CREATED", 70, true, "destroy", true] call BIS_fnc_taskCreate;
[[true, "zeus_unit"], ["destroy_ammo1", "destroy_ammo"], ["Destroy the enemy ammo cache located in the town of Imone.", "Destroy Ammo Cache", ""], ammo1, "CREATED", 0, true, "destroy", true] call BIS_fnc_taskCreate;
[[true, "zeus_unit"], ["destroy_ammo2", "destroy_ammo"], ["Destroy the enemy ammo cache located at Comms Bravo.", "Destroy Ammo Cache", ""], ammo2, "CREATED", 0, true, "destroy", true] call BIS_fnc_taskCreate;