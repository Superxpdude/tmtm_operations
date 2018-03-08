// SXP_fnc_endMission.sqf
// Handles doing everything that needs to be done for ending the mission.
// Passing true means mission success
// Passing false means mission failure
if (_this select 0) then {
	["defend_alpha", "SUCCEEDED"] remoteExec ["BIS_fnc_taskSetState", 2];
	if (alive aar) then {
		["defend_aar", "SUCCEEDED"] remoteExec ["BIS_fnc_taskSetState", 2];
	};
	sleep 5;
	["victory",true,true,true] remoteExec ["BIS_fnc_endMission", 0, true];
} else {
	["defend_alpha", "FAILED"] remoteExec ["BIS_fnc_taskSetState", 2];
	if (alive aar) then {
		["defend_aar", "FAILED"] remoteExec ["BIS_fnc_taskSetState", 2];
	};
	sleep 5;
	["failure",true,true,true] remoteExec ["BIS_fnc_endMission", 0, true];
};