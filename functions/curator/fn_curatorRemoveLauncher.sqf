/*
	XPT_fnc_curatorRemoveLauncher
	Author: Superxpdude
	Removes rocket launchers from curator-spawned units.
	Used if you want to make sure that no enemies are spawned with rocket launchers
	
	Parameters:
		0: Object - Unit spawned by a curator
		
	Returns: Nothing
*/

// Define variables
params [
	["_curator", nil, [objNull]],
	["_unit", nil, [objNull]]
];
// Exit if the unit is undefined
if (isNil "_unit") exitWith {};

// Determine if the spawned unit is a vehicle or a man
if (_unit isKindOf "Man") then {
	// If the unit is a "Man", check if they have a launcher
	if ((secondaryWeapon _unit) != "") then {
		// If the unit has a launcher, get rid of it
		_unit removeWeapon (secondaryWeapon _unit);
	};
} else {
	// If the unit is a not a man, check if it has a crew
	if ((count (crew _unit)) > 0) then {
		// If the unit has a crew, run through them one by one and remove their launchers if they have them
		{
			if ((secondaryWeapon _x) != "") then {
			// If the unit has NVGs, remove them
				_x removeWeapon (secondaryWeapon _x);
			};
		} forEach (crew _unit);
	};
};

// Return nothing
nil
