// setup_artillery.sqf
// Handles setting up the static artillery vehicles at the base
// Has to be executed where the vehicle is local

// Lock the driver's seat
_this lockDriver true;
// Lock the commander's turret
_this lockTurret [[0,0], true];
// Remove all fuel from the vehicle
_this setFuel 0;