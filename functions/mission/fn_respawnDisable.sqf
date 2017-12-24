// Respawn disable script
// Disables respawn for all dead players

setPlayerRespawnTime 1e10;
["cmdDestroyed"] remoteExec ["BIS_fnc_showNotification", 0];
