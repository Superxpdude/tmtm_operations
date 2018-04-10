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
player createDiaryRecord ["Diary", ["Mission", "CSAT forces are holding a prototype vehicle on the island. We don't know its exact location however.<br/>
NATO intelligence has informed us that some of the CSAT outposts on the island may have some information regarding the location of the prototype. So we'll need to start there."]];
player createDiaryRecord ["Diary", ["Situation", "NATO intelligence has learned of a CSAT prototype vehicle being held on the island of Malden.<br/>
We don't know what kind of vehicle it is, or what its capabilities are. So we must recover the vehicle so that we can be prepared for whatever CSAT throws at us in the future."]];