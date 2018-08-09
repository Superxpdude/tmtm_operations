// Mission endings
// Handles the mission ending screen
// https://community.bistudio.com/wiki/Debriefing

class victory
{
	title = "Mission Completed";
	subtitle = "CSAT forces are retreating.";
	description = "The CSAT assault force has given up their attempt to capture Artillery Base Alpha. NATO forces are in the process of organizing a counter-attack to push the remaining CSAT forces out of Chernarus.";
	pictureBackground = "media\loadscreen.paa";
	//picture = ""; // Icon used for the closing shot
	//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
};
class failure
{
	title = "Mission Failed";
	subtitle = "Artillery Base Alpha has fallen to CSAT forces.";
	description = "Artillery Base Alpha has been captured by the invading CSAT forces. Remaining NATO forces are scattered and without support; any groups capable of doing so are beginning their evacuation of the surrounding areas.";
	pictureBackground = "media\loadscreen.paa";
	//picture = ""; // Icon used for the closing shot
	//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
};