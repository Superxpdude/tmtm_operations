// initPlayerServer.sqf
// Runs once on the server for each player that joins the game.
// This will run multiple times at mission start if multiple players are present
// _this = [player:Object, didJIP:Boolean]
if (((_this select 0) == zeus_unit) AND (_this select 1)) then {
	[] spawn {
		unassignCurator zeus_module;
		sleep 1;
		(_this select 0) assignCurator zeus_module;
	};
};