// Script to handle initial mission briefings
// General guidelines would be to include briefings for the following
// Situation, Mission, and Assets
// Briefings are listed in the opposite order that they are written below. New diaryRecords are always placed at the top of the list.
// https://community.bistudio.com/wiki/createDiaryRecord

player createDiaryRecord ["Diary", ["Assets", "Your available assets for this mission are:<br/>
	- 1x FV-720 Mora<br/>
	- 2x AFV-4 Gorgon<br/>
	- 5x HEMTT Transport<br/>
	- 5x Hunter HMG<br/>
	- 5x Hunter Unarmed<br/>
	- 1x HEMTT Fuel<br/>
	- 1x HEMTT Ammo<br/>
	- 1x HEMTT Repair<br/>
	- 1x M4 Scorcher (Static)
"]];
player createDiaryRecord ["Diary", ["Mission", "Your primary mission is to defend Artillery Base Alpha from the invading CSAT forces.<br/><br/>
Your secondary objective is to defend the anti-aircraft radar in Gorka. Without this radar, we will have no advance warning of incoming enemy aircraft. Defend this if at all possible.
"]];
player createDiaryRecord ["Diary", ["Situation", "NATO forces currently occupy central Chernarus, and a Canadian task force has been deployed to protect Artillery Base Alpha (a critical fire base located near the town of Novy Sobor).<br/><br/>
CSAT forces have been spotted preparing for an assault on the Artillery Base, aiming to destroy or occupy the compound. The Canadian forces have been tasked with repelling the CSAT invasion and protecting the Artillery base."]];