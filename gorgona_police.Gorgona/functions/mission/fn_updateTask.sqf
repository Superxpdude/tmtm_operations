// Function for updating mission tasks when objectives are completed.
// Only execute on the server. Tasks should only be created server-side.
if (!isServer) exitWith {};

// Code for task updates goes into these fields. Can be any code required, including new task creation, task state updates, etc.
switch (toLower (_this select 0)) do {
	case "task_helipad": {
		// Setting a task state to completed
		["task_helipad", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "task_villa": {
		// Setting a task state to completed
		["task_villa", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "task_prison": {
		// Setting a task state to completed
		["task_prison", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "task_town": {
		// Setting a task state to completed
		["task_town", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "endmissionwin": {
		// Setting a task state to completed
		["win"] spawn SXP_fnc_endMission;
	};
};