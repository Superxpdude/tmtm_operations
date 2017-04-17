// Function for updating mission tasks when objectives are completed.
// Only execute on the server. Tasks should only be created server-side.
if (!isServer) exitWith {};

// Code for task updates goes into these fields. Can be any code required, including new task creation, task state updates, etc.
switch (toLower (_this select 0)) do {
	case "secure_fob": {
		["secure_fob", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "secure_hospital": {
		["secure_hospital", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "secure_castle": {
		["secure_castle", "SUCCEEDED", true] call BIS_fnc_taskSetState;
	};
	case "intelactive": {
		{
			// Mark downloading as enabled
			_x setVariable ["downloadState", 0, true];
			// Change laptop texture back to default
			_x setObjectTextureGlobal [0, "\A3\Structures_F\Items\Electronics\Data\Electronics_screens_laptop_CO.paa"];
		} forEach (missionNamespace getVariable ["intelArray", []]);
	};
	case "devicetask": {
		// Check if all of the laptops have had their intel downloaded
		if (({(_x getVariable ["downloadState", 0]) == 3} count (missionNamespace getVariable "taskArray")) == 0) then {
			// Assign the task location
			["deviceTask", device] call BIS_fnc_taskSetDestination;
			["deviceTask", "ASSIGNED", true] call BIS_fnc_taskSetState;
			missionNamespace setVariable ["deviceTaskActive", true, true];
		};
	};
};