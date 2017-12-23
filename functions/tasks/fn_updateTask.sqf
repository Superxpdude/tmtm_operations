// Function for updating mission tasks when objectives are completed.
// Only execute on the server. Tasks should only be created server-side.
if (!isServer) exitWith {};

// Code for task updates goes into these fields. Can be any code required, including new task creation, task state updates, etc.
switch (toLower (_this select 0)) do {
	case "present1_complete": {
		// Setting a task state to completed
		["present1", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		if ((!alive building1) && (!alive building2) && (!alive building3) && (!alive building4) && (!alive building5) && (!alive building6) && (!alive building7)) then {
			["presents_complete"] call SXP_fnc_updateTask;
		};
	};
	case "present2_complete": {
		// Setting a task state to completed
		["present2", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		if ((!alive building1) && (!alive building2) && (!alive building3) && (!alive building4) && (!alive building5) && (!alive building6) && (!alive building7)) then {
			["presents_complete"] call SXP_fnc_updateTask;
		};
	};
	case "present3_complete": {
		// Setting a task state to completed
		["present3", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		if ((!alive building1) && (!alive building2) && (!alive building3) && (!alive building4) && (!alive building5) && (!alive building6) && (!alive building7)) then {
			["presents_complete"] call SXP_fnc_updateTask;
		};
	};
	case "present4_complete": {
		// Setting a task state to completed
		["present4", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		if ((!alive building1) && (!alive building2) && (!alive building3) && (!alive building4) && (!alive building5) && (!alive building6) && (!alive building7)) then {
			["presents_complete"] call SXP_fnc_updateTask;
		};
	};
	case "present5_complete": {
		// Setting a task state to completed
		["present5", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		if ((!alive building1) && (!alive building2) && (!alive building3) && (!alive building4) && (!alive building5) && (!alive building6) && (!alive building7)) then {
			["presents_complete"] call SXP_fnc_updateTask;
		};
	};
	case "present6_complete": {
		// Setting a task state to completed
		["present6", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		if ((!alive building1) && (!alive building2) && (!alive building3) && (!alive building4) && (!alive building5) && (!alive building6) && (!alive building7)) then {
			["presents_complete"] call SXP_fnc_updateTask;
		};
	};
	case "present7_complete": {
		// Setting a task state to completed
		["present7", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		if ((!alive building1) && (!alive building2) && (!alive building3) && (!alive building4) && (!alive building5) && (!alive building6) && (!alive building7)) then {
			["presents_complete"] call SXP_fnc_updateTask;
		};
	};
	case "presents_complete": {
		["presents", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		// Add code for finale here
		["falseEnd", true] spawn SXP_fnc_endMissionFake;
	};
	case "create_tanks": {
		[] spawn {
			[
				[
					"HQ", 
					"So as it turns out, the non-believers seem to have acquired some mines..."
					,0
				],
				[
					"HQ", 
					"and by 'some mines' we mean 'about 10 trucks worth'..."
					,5
				],
				[
					"HQ", 
					"Our recon elves have spotted them placing APERS mines in between Balota and Chernogorsk..."
					,10
				],
				[
					"HQ", 
					"However, we have located some old soviet mine-clearing equipment in a shed to the north-east..."
					,15
				],
				[
					"HQ", 
					"You might want to go grab that equipment before trying to get through the minefields."
					,20
				]
			] remoteExec ["BIS_fnc_EXP_camp_playSubtitles", 0];
			sleep 30;
			[
				[true, "zeus_unit"],
				["getTanks", ""],
				"tanks",
				"marker_task_getTanks",
				"ASSIGNED",
				1000,
				true,
				"use",
				true
			] call BIS_fnc_taskCreate;
		};
	};
	case "get_tanks": {
		["getTanks", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "ssvan1": {
		["saveChristmas1", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		[
				[true, "zeus_unit"],
				["saveChristmas2", "secretSanta"],
				"saveChristmas2",
				"marker_task_recoverVan",
				"ASSIGNED",
				10000,
				true,
				"car",
				true
			] call BIS_fnc_taskCreate;
	};
	case "ssvan2": {
		["saveChristmas2", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		["trueEnd", true] call BIS_fnc_endMission;
	};
};