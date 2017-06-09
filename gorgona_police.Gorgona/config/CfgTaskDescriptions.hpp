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
	class task_helipad
	{
		title = "Secure the Helipad";
		description = "Securing the helipad will provide a location for reinforcements and supplies to arrive on the island.";
		marker = "";
	};
	class task_villa
	{
		title = "Secure the Villa";
		description = "Clear the Villa of all hostiles.";
		marker = "";
	};
	class task_prison
	{
		title = "Secure the Prison";
		description = "Clear the prison of all hostile forces. Anyone holding a weapon can be considered hostile, no friendlies are still active around the prison.";
		marker = "";
	};
	class task_town
	{
		title = "Secure the Town";
		description = "We need to secure the main portion of the town to clear the terrorists from the island.";
		marker = "";
	};
};