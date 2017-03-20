// Notifications system
// Allows consistent looking mission notifications to be displayed (same appearance as task notifications)
// https://community.bistudio.com/wiki/Notification

class CfgNotifications
{
	class apc_destroyed
	{
		title = "APC Destroyed";
		iconPicture = "";
		iconText = "";
		description = "Command APC destroyed.<br/>Respawn Disabled";
		color[] = {1,1,1,1};
		duration = 5;
		priority = 100;
		difficulty[] = {};
	};
};