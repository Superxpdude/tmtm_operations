// Respawn enable script
// Re-enables respawn for all dead players.

if (alive player) then {
	setPlayerRespawnTime 180;
} else {
	setPlayerRespawnTime 10;
};