// setup_AA.sqf
// Handles setting up the static AA vehicles at the base
// Has to be executed where the vehicle is local

// Lock the driver's seat
_this lockDriver true;
// Remove all fuel from the vehicle
_this setFuel 0;