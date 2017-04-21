// Mission endings
// Handles the mission ending screen
// https://community.bistudio.com/wiki/Debriefing

class cfgDebriefing
{
	class example
	{
		title = "Example Ending"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
		subtitle = "The mission maker should change this"; // Subtitle below the title when the closing shot is triggered
		description = "This should be changed before the mission is finished"; // Description visible on the debriefing screen after the closing shot
		//pictureBackground = ""; // Image file used as a background on the debriefing screen
		//picture = ""; // Icon used for the closing shot
		//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
	};
	class victory
	{
		title = "Mission Accomplished";
		subtitle = "The device has been disabled";
		description = "The East Wind device has been disabled before it was fully charged. A special recovery team has been dispatched to return the device to CSAT high command.";
		//pictureBackground = "";
		//picture = "";
		//pictureColor[] = {1,1,1,1};
	};
	class eastWind
	{
		title = "Mission Failed";
		subtitle = "The East Wind device has been activated";
		description = "The East Wind device reached maximum charge and has caused significant damage to Altis. The existence of the device and its potential is now known to the world.";
		//pictureBackground = "";
		//picture = "";
		//pictureColor[] = {1,1,1,1};
	};
};