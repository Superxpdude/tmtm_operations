// SXP_fnc_setupVehicle
// Handles setting up vehicles at mission start, and upon respawn

// Only run on the server
if (!isServer) exitWith {};

// Define variables
_this params [
	["_newVeh", nil, [objNull]],
	["_oldVeh", nil, [objNull]]
];

// If newVeh is nil, exit the script
if (isNil "_newVeh") exitWith {};

// Start our switch block, check the vehicle classname to determine what needs to be done for setup
switch (toLower (typeOf _newVeh)) do {
	// Nyx AT
	case (toLower "I_LT_01_AT_F"): {
		// Configure the appearance
		[
			_newVeh,
			["Indep_Olive",1], 
			["showTools",1,"showCamonetHull",1,"showBags",1,"showSLATHull",0]
		] call BIS_fnc_initVehicle;
		
		// Enable datalink
		_newVeh setVehicleReportRemoteTargets true;
		_newVeh setVehicleReceiveRemoteTargets true;
		_newVeh setVehicleReportOwnPosition true;
	};
	// Nyx Recon
	case (toLower "I_LT_01_scout_F"): {
		// Configure the appearance
		[
			_veh,
			["Indep_Olive",1], 
			["showTools",1,"showCamonetHull",1,"showBags",1,"showSLATHull",0]
		] call BIS_fnc_initVehicle;
		
		// Enable datalink
		_newVeh setVehicleReportRemoteTargets true;
		_newVeh setVehicleReceiveRemoteTargets true;
		_newVeh setVehicleReportOwnPosition true;
	};
	// AH-99
	case (toLower "B_Heli_Attack_01_dynamicLoadout_F"): {
		// Configure pylons
		_newVeh setPylonLoadout ["PylonLeft1", "PylonMissile_1Rnd_LG_scalpel", false, [0]];
		_newVeh setPylonLoadout ["PylonLeft2", "PylonMissile_1Rnd_LG_scalpel", false, [0]];
		_newVeh setPylonLoadout ["PylonLeft3", "PylonRack_12Rnd_missiles", false, []];
		_newVeh setPylonLoadout ["PylonRight1", "PylonMissile_1Rnd_LG_scalpel", false, [0]];
		_newVeh setPylonLoadout ["PylonRight2", "PylonMissile_1Rnd_LG_scalpel", false, [0]];
		_newVeh setPylonLoadout ["PylonRight3", "PylonRack_12Rnd_missiles", false, []];
		
		// Enable datalink
		_newVeh setVehicleReportRemoteTargets true;
		_newVeh setVehicleReceiveRemoteTargets true;
		_newVeh setVehicleReportOwnPosition true;
	};
	// Bobcat
	case (toLower "B_APC_Tracked_01_CRV_F"): {
		[
			_newVeh,
			["Sand",1], 
			["showAmmobox",1,"showWheels",1,"showCamonetHull",0,"showBags",1]
		] call BIS_fnc_initVehicle;

		// Enable datalink
		_newVeh setVehicleReportRemoteTargets true;
		_newVeh setVehicleReceiveRemoteTargets true;
		_newVeh setVehicleReportOwnPosition true;
	};
	// Rhino MGS UP
	case (toLower "B_AFV_Wheeled_01_up_cannon_F"): {
		[
			_newVeh,
			["Sand",1], 
			["showCamonetHull",0,"showCamonetTurret",0,"showSLATHull",1]
		] call BIS_fnc_initVehicle;
		
		// Enable datalink
		_newVeh setVehicleReportRemoteTargets true;
		_newVeh setVehicleReceiveRemoteTargets true;
		_newVeh setVehicleReportOwnPosition true;
	};
	
	case (toLower "B_APC_Wheeled_01_cannon_F"): {
		[
			_newVeh,
			["Sand",1], 
			["showBags",1,"showCamonetHull",0,"showCamonetTurret",0,"showSLATHull",1,"showSLATTurret",1]
		] call BIS_fnc_initVehicle;
		
		// Enable datalink
		_newVeh setVehicleReportRemoteTargets true;
		_newVeh setVehicleReceiveRemoteTargets true;
		_newVeh setVehicleReportOwnPosition true;
	};
	
};