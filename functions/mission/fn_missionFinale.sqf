// Finale script for TMTM's little helpers

// Display text
"missionBackground" cutText ["", "BLACK", 0.0000001];
"missionLayer" cutText ["Uh oh", "PLAIN", 0];
sleep 7;
"missionLayer" cutText ["While you were out delivering presents, a covert non-believer team stole something from our base...", "PLAIN", 0];
sleep 7;
"missionLayer" cutText ["THEY STOLE THE SECRET SANTA PRESENTS", "PLAIN", 0];
sleep 7;
"missionBackground" cutText ["", "BLACK IN", 7];
"missionLayer" cutText ["GO GET THEM BACK OR TMTM'S CHRISTMAS WILL BE RUINED", "PLAIN"];
sleep 7;
"missionLayer" cutText ["", "PLAIN"];
[
	[true, "zeus_unit"],
	["secretSanta", ""],
	"secretSanta",
	objNull,
	"CREATED",
	0,
	true,
	"car",
	true
] call BIS_fnc_taskCreate;
[
	[true, "zeus_unit"],
	["saveChristmas1", "secretSanta"],
	"saveChristmas1",
	"marker_task_saveChristmas",
	"ASSIGNED",
	10000,
	true,
	"car",
	true
] call BIS_fnc_taskCreate;