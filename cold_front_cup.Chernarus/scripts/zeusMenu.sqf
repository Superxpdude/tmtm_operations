// Script to handle the briefing-based zeus menu
// Used to provide buttons for actions during the mission

// Do not run on a dedicated server or headless client
if (!hasInterface) exitWith {};
// Wait until the player exists
waitUntil {!isNull player};
// Check the kind of player that we're dealing with. Only run if it's a zeus player.
if (!(player isKindOf "VirtualMan_F")) exitWith {};

player createDiaryRecord ["zeusmenu", ["Zeus Actions",
	"<executeClose expression='[true] spawn SXP_fnc_endMission'>End Mission: Victory</execute>
	<br/><executeClose expression='[false] spawn SXP_fnc_endMission'>End Mission: Failure</execute>
	<br/><br/><br/>"
	/*<executeClose expression='[""missionFailed""] call SXP_fnc_endMission'>End Mission: Mission Failed</execute><br/>*/
]];