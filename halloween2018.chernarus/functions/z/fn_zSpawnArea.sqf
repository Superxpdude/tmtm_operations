/*
	SXP_fnc_zSpawnArea
	Author: Superxpdude
	Spawns a number of zombies within an area
	
	Executes only on the server
	
	Parameters:
		0: Trigger - Trigger that defines the spawn area
		1: Scalar - Number of zombies to spawn
		
	Returns: Nothing
*/
#define DEFAULTZOMBIEAMOUNT 20

// Only run on the server
if (!isServer) exitWith {};

// Define our parameters
params [
	["_trigger", nil, [objNull]],
	["_amount", 0, [0]]
];

(triggerArea _trigger) params [
	["_triggerX", 0],
	["_triggerY", 0],
	["_triggerAngle", 0],
	["_triggerRectangle", false]
];

// If the amount is a negative number, treat it as a ratio.
if (_amount < 0) then {
	_multiplier = _amount * -1; // Make the multiplier a positive number
	_amount = DEFAULTZOMBIEAMOUNT * _multiplier;
};

_triggerPos = getPos _trigger;
_activeDist = (sqrt ((_triggerX^2)+(_triggerY^2))) + 100; // Accounts for the corners of the square being further away from the trigger
_minDist = 150; // Prevents spawns within x distance meters of a player

// Wait until there are players in range

waitUntil {
	sleep 15; // Only check this every 15 seconds
	({(_triggerPos distance _x) < _activeDist} count allPlayers > 0)
};

while {_amount > 0} do {
	// Start spawning
	private ["_pos"];
	/*
	for "_x" from 1 to 3000 do {
	
	};
	*/
	// Keep attempting to find a location until we get a good one
	_relocate = true;
	while {_relocate} do {
		_pos = [(_triggerPos select 0) + ((random (_triggerX * 2)) - _triggerX), (_triggerPos select 1) + ((random (_triggerY * 2)) - _triggerY), 0];
		// Check to make sure that our position is inside the trigger, on land, and away from any players
		if ((_pos inArea _trigger) and (!surfaceIsWater _pos) and (({(_pos distance [getPos (vehicle _x) select 0, getPos (vehicle _x) select 1, 0]) < _minDist} count allPlayers) == 0)) then {_relocate = false};
	};
	
	// Determine how many to spawn
	_spawnCount = (floor (random (_amount min 5))) + 1;
	
	// TEMP - Create a marker as a debug measure to make sure it works
	_marker = createMarkerLocal [format ["marker%1", random 1000000], _pos];
	_marker setMarkerTypeLocal "hd_dot";
	//_marker setMarkerColorLocal "ColorRed";
	_marker setMarkerSizeLocal [0.5,0.5];
	
	switch _spawnCount do {
		case 1: {_marker setMarkerColorLocal "ColorBlue"; _marker setMarkerTextLocal "1";};
		case 2: {_marker setMarkerColorLocal "ColorGreen"; _marker setMarkerTextLocal "2";};
		case 3: {_marker setMarkerColorLocal "ColorYellow"; _marker setMarkerTextLocal "3";};
		case 4: {_marker setMarkerColorLocal "ColorOrange"; _marker setMarkerTextLocal "4";};
		case 5: {_marker setMarkerColorLocal "ColorRed"; _marker setMarkerTextLocal "5";};
	};
	
	_amount = _amount - _spawnCount;
	
};