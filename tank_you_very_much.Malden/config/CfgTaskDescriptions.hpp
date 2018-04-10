// Task Descriptions
// Can be used for moving task descriptions from script files to configs


// Create new classes under here. BIS_fnc_taskCreate will use either the class passed as the description parameter (in string format)
// The following would be loaded by setting the description to "example";
// If the description is blank (""), then the task ID will be used automatically
class example
{
	title = "Example Task Title";					// Title of task. Displayed as the task name
	description = "Example Task Description";		// Description of task. Additional details displayed when the task is selected on the map screen.
	marker = "";									// Task marker. Leave blank
};

class task_retrieve_tank
{
	title = "Search for the CSAT prototype";
	description = "Search northern Malden for the CSAT prototype. We may be able to gather some information regarding the prototype's location.";
};

class task_intel_1
{
	title = "Search for CSAT intel";
	description = "Search the town of Saint Jean for intel regarding the whereabouts of the CSAT prototype.";
};

class task_intel_2
{
	title = "Search for CSAT intel";
	description = "The documents in Saint Jean mentioned a shipment passing through the town of Larche. Go search the town for more intel.";
};

class task_intel_3
{
	title = "Search for CSAT intel";
	description = "The files in the shipment headquarters mentioned that the shipment was heading to Bosquet. Go search for more intel.";
};

class task_intel_4
{
	title = "Search for CSAT intel";
	description = "The shipment logs from Bosquet mentioned that a new shipment was sent north just half an hour after the original one arrived. The destination was the military base near the airport.";
};

class task_tank_recover
{
	title = "Recover the prototype";
	description = "Now that we have the prototype, we need to get it back to friendly forces. Return the prototype to our base near Houdan.";
};