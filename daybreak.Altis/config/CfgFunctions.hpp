// Functions library
// Defines custom functions for the mission. Anything that needs to be called more than once should be a function
// https://community.bistudio.com/wiki/Functions_Library_(Arma_3)

class cfgFunctions
{
	// Don't change anything in this class
	class SXP
	{
		// Don't change anything in this class
		class curator
		{
			// Don't change any of these classes
			class addUnitToZeus {};
			class eventHandlers {postInit = 1;};
			class grpPlaced {};
			class objPlaced {};
			class setVehicleCargo {};
			class zeusRemoveNVGs {};
		};
		// Don't change anything in this class
		class inventory {
			// Don't change any of these classes
			class loadInventory {};
		};
		// The functions below are intended to be called to change mission states.
		// Edit the function files located in functions\mission\ to work with your mission.
		class mission {
			// Don't change any of these classes
			class endMission {};
			class updateTask {};
		// Don't change anything in this class
		class system
		{
			// Don't change any of these classes
			class loadRadioSettings {};
			class mapMarkers {};
			class mapMarkersLocal {};
			class saveRadioSettings {};
			class setupHC {};
			class setupTFAR {preInit = 1;};
		};
	};
};