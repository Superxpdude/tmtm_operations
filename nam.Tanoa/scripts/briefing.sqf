// Script to handle initial mission briefings
// General guidelines would be to include briefings for the following
// Situation, Mission, and Assets
// Briefings are listed in the opposite order that they are written below. New diaryRecords are always placed at the top of the list.
// https://community.bistudio.com/wiki/createDiaryRecord

//player createDiaryRecord ["Diary", ["Assets", "Example Mission Assets"]];
//player createDiaryRecord ["Diary", ["Mission", "Example Mission Briefing"]];
//player createDiaryRecord ["Diary", ["Situation", "Example Situation Briefing"]];

waitUntil {!isNull player};
if (player isKindOf "VirtualMan_F") then {
	player createDiarySubject ["zeusmenu", "Zeus Menu"];
	player createDiaryRecord ["zeusmenu", ["Zeus Actions",
		"<br/>
		<executeClose expression='[""fortunate_son""] remoteExec [""SXP_fnc_playMusic"", 0]'>Play Music: It ain't me</execute><br/>
		<br/>
		<executeClose expression='[""majorVictory""] call SXP_fnc_endMission'>End Mission: Major Victory</execute><br/>
		<executeClose expression='[""minorVictory""] call SXP_fnc_endMission'>End Mission: Minor Victory</execute><br/>
		<executeClose expression='[""missionFailed""] call SXP_fnc_endMission'>End Mission: Mission Failed</execute><br/>"
	]];	
};