// Function for updating mission tasks when objectives are completed.
if (!isServer) exitWith {};
switch (toLower (_this select 0)) do {
	case "intel1": {
		["intel_1", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		[
			[true, "zeus_unit"],
			["intel_2", "retrieve_tank"],
			"task_intel_2",
			task_pos_intel_2,
			"ASSIGNED",
			100,
			true,
			"intel",
			true
		] call BIS_fnc_taskCreate;
	};
	case "intel2": {
		["intel_2", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		[
			[true, "zeus_unit"],
			["intel_3", "retrieve_tank"],
			"task_intel_3",
			task_pos_intel_3,
			"ASSIGNED",
			100,
			true,
			"intel",
			true
		] call BIS_fnc_taskCreate;
	};
	case "intel3": {
		["intel_3", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		[
			[true, "zeus_unit"],
			["intel_4", "retrieve_tank"],
			"task_intel_4",
			task_pos_tank,
			"ASSIGNED",
			100,
			true,
			"intel",
			true
		] call BIS_fnc_taskCreate;
	};
	case "tank_located": {
		["intel_tank", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		["retrieve_tank", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		[
			[true, "zeus_unit"],
			"recover_tank",
			"task_tank_recover",
			task_pos_base,
			"ASSIGNED",
			100,
			true,
			"default",
			true
		] call BIS_fnc_taskCreate;
	};
	case "tank_recovered": {
		["recover_tank", "SUCCEEDED", true] call BIS_fnc_taskSetState;
		["victory",true,true,true] remoteExec ["BIS_fnc_endMission", 0, true];
	};
	case "failure": {
		["retrieve_tank", "FAILED", true] call BIS_fnc_taskSetState;
		["recover_tank", "FAILED", true] call BIS_fnc_taskSetState;
		["failure",false,true,true] remoteExec ["BIS_fnc_endMission", 0, true];
	};
};