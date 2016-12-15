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
		title = "Mission Completed"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
		subtitle = "CSAT forces are retreating."; // Subtitle below the title when the closing shot is triggered
		description = "The CSAT assault force has given up their attempt to capture Artillery Base Alpha. NATO forces are in the process of organizing a counter-attack to push the remaining CSAT forces out of Chernarus."; // Description visible on the debriefing screen after the closing shot
		pictureBackground = "media\loadscreen.paa"; // Image file used as a background on the debriefing screen
		//picture = ""; // Icon used for the closing shot
		//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
	};
	class failure
	{
		title = "Mission Failed"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
		subtitle = "Artillery Base Alpha has fallen to CSAT forces."; // Subtitle below the title when the closing shot is triggered
		description = "Artillery Base Alpha has been captured by the invading CSAT forces. Remaining NATO forces are scattered and without support; any groups capable of doing so are beginning their evacuation of the surrounding areas."; // Description visible on the debriefing screen after the closing shot
		pictureBackground = "media\loadscreen.paa"; // Image file used as a background on the debriefing screen
		//picture = ""; // Icon used for the closing shot
		//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
	};
};