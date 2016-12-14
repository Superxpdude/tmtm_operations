// initServer.sqf
// Executes only on the server at mission start
// No parameters are passed to this script

// Initialise dynamic groups
["Initialize", [true]] call BIS_fnc_dynamicGroups;

// Create a list of mission objects that should not be curator editable
private "_blacklistedMissionObjects";
_blacklistedMissionObjects = [];

// Make all initial mission objects editable by all curators
{
	private "_curator";
	_curator = _x;
	{
		// Make sure object is not already in editable objects and is not black listed
		if !(_x in curatorEditableObjects _curator) then {
			_curator addCuratorEditableObjects [[_x], true];
		};
	} forEach playableUnits + switchableUnits + allMissionObjects "LandVehicle" + allMissionObjects "Man" + allMissionObjects "Air" + allMissionObjects "Reammobox_F" - _blacklistedMissionObjects - allMissionObjects "VirtualMan_F";
} forEach allCurators;

// Create tasks
if (isNil "zeus_unit") then {
	[true, "defend_alpha", ["Defend Artillery Base Alpha from the impending CSAT assault.", "Defend Artillery Base Alpha", "marker_arty_base"], getMarkerPos "marker_arty_base", "ASSIGNED", 0, true, "defend", true] call BIS_fnc_taskCreate;
} else {
	[[true, zeus_unit], "defend_alpha", ["Defend Artillery Base Alpha from the impending CSAT assault.", "Defend Artillery Base Alpha", "marker_arty_base"], getMarkerPos "marker_arty_base", "ASSIGNED", 0, true, "defend", true] call BIS_fnc_taskCreate;
};