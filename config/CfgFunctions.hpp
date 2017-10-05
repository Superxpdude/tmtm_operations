// Functions library
// Defines custom functions for the mission. Anything that needs to be called more than once should be a function
// https://community.bistudio.com/wiki/Functions_Library_(Arma_3)

// If you need to add additional functions, create a new section below using your tag of choice (Ex: SXP = Superxpdude)
// See the functions library wiki page for additional details

// Don't change anything in this class
class SXP
{
	// The functions below are intended to be called to change mission states.
	// Edit the function files located in functions\mission\ to work with your mission.
	class mission {
		// Don't change any of these classes
		class endMission {};
		class updateTask {};
		
		// Mission specific classes
		class deviceEnd {};
		class deviceLoop {};
		class deviceSetup {};
		class deviceStart {};
		class downloadEnd {};
		class downloadStart {};
		class laptopSetup {};
		class respawnDisable {};
		class respawnSpectator {};
	};
};
