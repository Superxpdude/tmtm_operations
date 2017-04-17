if (!isNil "csat_officer") then {
	[
		(getMissionConfig "cfgORBAT") >> "tmtm",
		nil,nil,nil,nil,nil,nil,nil,nil,nil,nil,
		name csat_officer
	] remoteExec ["BIS_fnc_ORBATSetGroupParams", 0];
};

// Let all clients know that ORBAT is ready to go.
orbat_setup = true;
publicVariable "orbat_setup";