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
	class win
	{
		title = "Mission Completed"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
		subtitle = "Gorgona has been cleared"; // Subtitle below the title when the closing shot is triggered
		description = "You did it."; // Description visible on the debriefing screen after the closing shot
		//pictureBackground = ""; // Image file used as a background on the debriefing screen
		//picture = ""; // Icon used for the closing shot
		//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
	};
};