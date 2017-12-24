// Mission endings
// Handles the mission ending screen
// https://community.bistudio.com/wiki/Debriefing

class example
{
	title = "Example Ending"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
	subtitle = "The mission maker should change this"; // Subtitle below the title when the closing shot is triggered
	description = "This should be changed before the mission is finished"; // Description visible on the debriefing screen after the closing shot
	//pictureBackground = ""; // Image file used as a background on the debriefing screen
	//picture = ""; // Icon used for the closing shot
	//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
};
class falseEnd
{
	title = "Mission Accomplished";
	subtitle = "All presents have been delivered. Well done.";
	description = "";
	//picture = "";
};
class trueEnd
{
	title = "CHRISTMAS IS SAVED";
	subtitle = "You recovered the van with all of the presents intact!";
	description = "TMTM's forces have successfully delivered the gifts, and recovered the secret santa gifts. Well done!";
	//picture = "";
	pictureBackground = "media\loadscreen.paa";
};