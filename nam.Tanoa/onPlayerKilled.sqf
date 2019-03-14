// onPlayerKilled.sqf
// Executes on a player's machine when they die
// _this = [<oldUnit>, <killer>, <respawn>, <respawnDelay>]
_this params ["_oldUnit", "_killer", "_respawn", "_respawnDelay"];

// Call the template onPlayerKilled function
_this call XPT_fnc_onPlayerKilled; // DO NOT CHANGE THIS LINE

// Add any mission specific code after this point
killedArray = _this;
["Initialize", [
		player, 	// Player unit
		[], 	// Whitelisted sides
		false, 		// View AI
		false, 		// Allow free camera
		true, 		// Allow third-person camera
		true, 		// Show focus info widget
		true, 		// Show camera buttons widget
		true, 		// Show control helper widget
		false, 		// Show header widget
		true		// Show entities/location lists
]] spawn BIS_fnc_EGSpectator;