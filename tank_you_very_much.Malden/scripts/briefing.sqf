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
player createDiaryRecord ["Diary", ["Mission", "Your primary mission is to defend Artillery Base Alpha from the invading enemy forces.<br/><br/>
Your secondary objective is to defend the anti-aircraft radar in Gorka. Without this radar, we will have no advance warning of incoming enemy aircraft. Defend this if at all possible.
"]];
player createDiaryRecord ["Diary", ["Situation", "NATO forces currently occupy central Chernarus, and a task force has been deployed to protect Artillery Base Alpha (a critical fire base located near the town of Novy Sobor).<br/><br/>
Hostile forces have been spotted preparing for an assault on the Artillery Base, aiming to destroy or occupy the compound. Friendly forces have been tasked with repelling the enemy invasion and protecting the Artillery base."]];