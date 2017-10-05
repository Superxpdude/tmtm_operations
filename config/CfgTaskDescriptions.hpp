// Task Descriptions
// Can be used for moving task descriptions from script files to configs
class CfgTaskDescriptions
{
	// Create new classes under here. BIS_fnc_taskCreate will use either the class passed as the description parameter (in string format)
	// The following would be loaded by setting the description to "example";
	// If the description is blank (""), then the task ID will be used automatically
	class example
	{
		title = "Example Task Title";					// Title of task. Displayed as the task name
		description = "Example Task Description";		// Description of task. Additional details displayed when the task is selected on the map screen.
		marker = "";									// Task marker. Leave blank
	};
	
	class secure_fob
	{
		title = "Secure AAF Compound";
		description = "AAF forces have been using this shipping compound as a forward operating base. Securing the compound will give friendly forces a good outpost to use for the assault on Kavala.";
		marker = "";
	};
	class secure_hospital
	{
		title = "Secure the Hospital";
		description = "AAF forces are using the hospital as a staging area. Secure the hospital to prevent additional airborne reinforcements.";
		marker = "";
	};
	class secure_castle
	{
		title = "Secure Kastro";
		description = "Kastro is currently being used as a heavily defended fortress by AAF command. The castle is currently occupied by multiple anti-air and mortar assets, eliminating them will significantly weaken the AAF support capabilities.";
		marker = "";
	};
	class intel_1
	{
		title = "Retrieve NATO Intel";
		description = "Retrieving NATO data will allow us to pinpoint the location of the East Wind device.";
		marker = "";
	};
	class intel_2
	{
		title = "Retrieve NATO Intel";
		description = "Retrieving NATO data will allow us to pinpoint the location of the East Wind device.";
		marker = "";
	};
	class intel_3
	{
		title = "Retrieve NATO Intel";
		description = "Retrieving NATO data will allow us to pinpoint the location of the East Wind device.";
		marker = "";
	};
	class device
	{
		title = "Secure the Device";
		description = "NATO forces are holding an East Wind prototype somewhere near Kavala. The exact location is unknown, perhaps if we could find some NATO intel we could pinpoint the location.";
		marker = "";
	};
};