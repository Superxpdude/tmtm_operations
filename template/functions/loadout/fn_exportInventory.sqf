/*
	XPT_fnc_exportInventory
	Author: Superxpdude
	Exports the inventory of the target unit to the clipboard. Exports in XPTLoadouts format.
	
	Parameters:
		0: Object - Unit to have loadout exported
		
	Returns: Nothing
*/

_unit = _this param [0, player, [objNull]];

_export = "";
