// Function to handle ending the mission on all clients
// Call the function with one of the parameters below to handle ending the mission.
// Any code can be inserted within the switch fields. Can also be used for advanced ending scenarios
// Example: TvT where both sides see different endings.

// Only run on the server
if (!isServer) exitWith {};

// Begin the switch section
switch (toLower (_this select 0)) do {
	case "win": {
		["defend_alpha", "SUCCEEDED"] remoteExec ["BIS_fnc_taskSetState", 2];
		if (alive aar) then {
			["defend_aar", "SUCCEEDED"] remoteExec ["BIS_fnc_taskSetState", 2];
		};
		sleep 5;
		["victory",true,true,true] remoteExec ["BIS_fnc_endMission", 0, true];
	};
	case "fail": {
		["defend_alpha", "FAILED"] remoteExec ["BIS_fnc_taskSetState", 2];
		if (alive aar) then {
			["defend_aar", "FAILED"] remoteExec ["BIS_fnc_taskSetState", 2];
		};
		sleep 5;
		["failure",true,true,true] remoteExec ["BIS_fnc_endMission", 0, true];
	};
};