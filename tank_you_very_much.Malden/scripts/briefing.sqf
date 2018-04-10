// Script to handle initial mission briefings
// General guidelines would be to include briefings for the following
// Situation, Mission, and Assets
// Briefings are listed in the opposite order that they are written below. New diaryRecords are always placed at the top of the list.
// https://community.bistudio.com/wiki/createDiaryRecord

player createDiaryRecord ["Diary", ["Assets", "Your available assets for this mission are:<br/>
	- 1x Rhino MGS UP<br/>
	- 1x CRV-6e Bobcat<br/>
	- 1x T810 Ammo<br/>
	- 1x AH-99 Blackfoot<br/>
	- 8x AMV-7 Marshall UP<br/>
	- 1x AWC 303 Nyx (Recon)<br/>
	- 1x AWC 301 Nyx (AT)<br/>
	- 1x Hunter (Command Vehicle)
"]];
player createDiaryRecord ["Diary", ["Mission", "CSAT forces are holding a prototype vehicle on the island. However we don't know its exact location.<br/>
NATO intelligence has informed us that some of the CSAT outposts on the island may have some information regarding the location of the prototype. So we'll need to start there."]];
player createDiaryRecord ["Diary", ["Situation", "NATO intelligence has learned of a CSAT prototype vehicle being held on the island of Malden.<br/>
CSAT controls the north half of the island, with heavy forces being situated in La Trinite. The rest of their forces behind the front line are unknown at this time, although we do know that they have small outposts throughout the northern region."]];