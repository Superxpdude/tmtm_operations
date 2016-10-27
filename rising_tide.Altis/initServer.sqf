// Initialise dynamic groups
["Initialize", [true]] call BIS_fnc_dynamicGroups;

// Initial mission objects that should not be curator editable
private "_blacklistedMissionObjects";
_blacklistedMissionObjects = [

];

// Initialize zeus modules
{
	private ["_zeusModule"];
	_zeusModule = _x;
	{
		// Make sure object is not already in editable objects and is not black listed
		if !(_x in curatorEditableObjects zeus_module) then {
			zeus_module addCuratorEditableObjects [[_x], true];
		};
	} forEach playableUnits + switchableUnits + allMissionObjects "LandVehicle" + allMissionObjects "Man" + allMissionObjects "Air" + allMissionObjects "Reammobox_F" - _blacklistedMissionObjects - allMissionObjects "VirtualMan_F";
} forEach allCurators;

// Create tasks
//[east,["secureCastle"], ["AAF forces are holding the East Wind prototype inside of Kastro. Move into the castle to secure the device.", "Secure the Device", ""], device, "ASSIGNED", 1, true, "target" , true] call BIS_fnc_taskCreate;


// Create duplicate tasks for zeus
/*
if (!isNil "zeus_unit") then {

} else {

};
*/