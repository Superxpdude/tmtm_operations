// Functions library
// Defines custom functions for the mission. Anything that needs to be called more than once should be a function
// https://community.bistudio.com/wiki/Functions_Library_(Arma_3)

// If you need to add additional functions, create a new section below using your tag of choice (Ex: SXP = Superxpdude)
// See the functions library wiki page for additional details

/*
class EX // Function TAG, used for the first part of the function name
{
	class example // Function category, defines the folder that the file is located in
	{
		class example {}; // Function class. Defines the file 
	};
};
*/

class SXP
{
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