/*
	Author: Karel Moricky
	Edited by: Iwillnevertell, DYN

	Description:
	Ends mission with specific ending.

	Parameter(s):
		0 (Optional):
			STRING - end name (default: "end1")
			ARRAY in format [endName,ID], will be composed to "endName_ID" string
		1 (Optional): BOOL - true to end mission, false to fail mission (default: true)
		2 (Optional):
			BOOL - true for signature closing shot (default: true)
			NUMBER - duration of a simple fade out to black
		3 (Optional): BOOL - false to disable automatic music during signature shot (default: true)
		4 (Optional): BOOL - true to cancel all pending tasks (default: false)

	Returns:
	BOOL
*/

#define TERMINATE_DEAD	if ((missionNamespace getVariable ["BIS_fnc_endMission_checkAliveState",true]) && !ismultiplayer && !alive player) exitwith {{_x cuttext ["","plain"]} foreach [_layerNoise,_layerInterlacing,_layerStatic,_layerEnd]};

private ["_var","_spawn"];
_var = _fnc_scriptName + str floor random 99999;
_spawn = [_var,_this] spawn {
	scriptname "BIS_fnc_endMission";
	_fnc_scriptName = "BIS_fnc_endMission";

	//--- Reminder button - only for internal use
	if ((!isNil {BIS_fnc_dbg_reminder_value}) && {!isNil {BIS_fnc_dbg_reminder}}) then {
		[] call BIS_fnc_dbg_reminder;
	};

	private ["_end","_win","_fade","_winPrevious","_playmusic","_completeTasks"];
	_var = _this select 0;
	_this = _this select 1;
	_end = _this param [0,"end1",["",[]]];
	_win = _this param [1,true,[true]];
	_fade = _this param [2,true,[true,0]];
	_playmusic = _this param [3,true,[true]];
	_completeTasks = _this param [4,false,[false]];

	//--- Terminate when end is goof, but already running one is not
	_winPrevious = missionnamespace getvariable ["BIS_fnc_missionHandlers_win",_win];
	if (!_winPrevious && _win) exitwith {};

	//--- Replace already running end
	if !(isnil {BIS_fnc_endMission_effects}) then {terminate BIS_fnc_endMission_effects;};
	BIS_fnc_endMission_effects = missionnamespace getvariable [_var,[] spawn {}];
	missionnamespace setvariable [_var,nil];

	if (typename _end == typename []) then {
		_endName = _end param [0,"end",[""]];
		_endID = _end param [1,1,[0]];
		_end = _endName + "_" + str _endID;
	};
	if (_end == "") then {_end = "end1"};

	if (typename _fade == typename true) then {
		_fade = [0,-1] select _fade;
	};
	enablesaving [false,false];

	//--- Save for external use
	missionnamespace setvariable ["BIS_fnc_missionHandlers_win",_win]; //--- ToDo: Detect win type in engine
	missionnamespace setvariable ["BIS_fnc_missionHandlers_end",_end]; //--- ToDo: Detect end type in engine

	if (_fade < 0) then {

		_layerNoise = "BIS_fnc_endMission_noise" call bis_fnc_rscLayer;
		_layerInterlacing = "BIS_fnc_endMission_interlacing" call bis_fnc_rscLayer;
		_layerStatic = "BIS_fnc_endMission_static" call bis_fnc_rscLayer;
		_layerEnd = "BIS_fnc_endMission_end" call bis_fnc_rscLayer;
		{_x cuttext ["","plain"]} foreach [_layerNoise,_layerInterlacing,_layerStatic,_layerEnd]; //--- Clear existing effects
		
		if (_playmusic) then {
			_musicvolume = musicvolume;
			_soundvolume = soundVolume;
			0.2 fademusic 0;
			sleep 0.2;
			_musicList = if (isnull curatorcamera) then {["EventTrack02_F_Curator","EventTrack01_F_Curator"]} else {["EventTrack02_F_Curator","EventTrack03_F_Curator"]};
			playmusic (_musicList select _win);
			0 fademusic _musicvolume;
			sleep 0.4;
		};

		setacctime 1;
		_layerStatic cutrsc ["RscStatic","plain"];

		sleep 0.3;
		TERMINATE_DEAD

		showhud false;
		RscMissionEnd_end = _end;
		RscMissionEnd_win = _win;
		_layerEnd cutrsc ["RscMissionEnd","plain"];

		sleep 9;
		TERMINATE_DEAD

		RscNoise_color = [1,1,1,0];
		_layerNoise cutrsc ["RscNoise","black"];
		_layerStatic cutrsc ["RscStatic","plain"];

		sleep 0.5;
		TERMINATE_DEAD

		RscNoise_color = [1,1,1,1];
		_layerInterlacing cutrsc ["RscInterlacing","plain"];

		2.5 fadesound 0;
		2.5 fademusic 0;

		sleep 2.5;
		TERMINATE_DEAD

		RscDisplayDebriefing_noise = true;
	} else {
		cuttext ["","black out",_fade];
		sleep _fade;
	};

	if ((missionNamespace getVariable ["BIS_fnc_endMission_checkAliveState",true]) && !ismultiplayer && !alive player) exitwith {
		if (_fade >= 0) then {cuttext ["","plain"];};
	};
	
	sleep 5;
	
	0 fadeMusic 1;
	0 fadeSound 1;
	
	_layerNoise = "BIS_fnc_endMission_noise" call bis_fnc_rscLayer;
    _layerInterlacing = "BIS_fnc_endMission_interlacing" call bis_fnc_rscLayer;
    _layerStatic = "BIS_fnc_endMission_static" call bis_fnc_rscLayer;
    _layerEnd = "BIS_fnc_endMission_end" call bis_fnc_rscLayer;
    {_x cuttext ["","plain"]} foreach [_layerNoise,_layerInterlacing,_layerStatic,_layerEnd];
	
	showhud true;
	
	[] spawn SXP_fnc_missionFinale;
};
missionnamespace setvariable [_var,_spawn];
true