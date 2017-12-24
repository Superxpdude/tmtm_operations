// Mission briefings
// Config method of creating custom briefings
/*
	CONFIG BRIEFING EXAMPLE
	The following config is an example of how your briefing should be written
	
	class example	// Config class. Used when calling XPT_fnc_briefingCreate. Needs to be unique.
	{
		category = "Diary";		// Category that the briefing goes in. Use "Diary" for the default briefing class
		entryName = "Title";	// Briefing title. This is usually something like "Situation", "Mission", "Assets", etc.
		entryText = "Text";		// Briefing text. Formatted as structured text, contains the contents of your briefing.
		onStart = 1;			// Briefing on start. Determines if the briefing should be created upon mission start. Set to 0 to disable.
		sides[] = {0,1,2,3};	// Briefing sides. Determines which sides will receive the briefing message on mission start. Good for TvTs.
	};
	
	Briefings will appear ordered from bottom to top as they're listed here.
	This is because the game adds new briefings to the top of the list, and the template adds the briefings from top to bottom.
*/

class briefings
{};