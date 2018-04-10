/*
	XPT_fnc_radioVehicleSetup
	Author: Superxpdude
	Handles setting up radios for vehicles. 
	Prevents an issue where pre-placed vehicles would not use the defined LR preset frequencies.
	
	Parameters:
		0: Object - Vehicle that needs radios set up.
		
	Returns: Nothing
*/

// Define variables
_vehicle = _this param [0, objNull, [objNull]];

// Check if the vehicle exists.
if (isNull _vehicle) exitWith {};

// Check if the vehicle is local.
if !(local _vehicle) exitWith {};

