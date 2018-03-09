// Script to handle initial mission briefings
// General guidelines would be to include briefings for the following
// Situation, Mission, and Assets
// Briefings are listed in the opposite order that they are written below. New diaryRecords are always placed at the top of the list.
// https://community.bistudio.com/wiki/createDiaryRecord

player createDiaryRecord ["Diary", ["Assets", "Your available assets for this mission are:<br/>
	- 1x Challenger 2<br/>
	- 2x HMMWV TOW<br/>
	- 5x Mastiff PPV<br/>
	- 5x FV432 Bulldog<br/>
	- 5x Land Rover M2 Special<br/>
	- 1x MTVR Fuel<br/>
	- 1x MTVR Ammo<br/>
	- 1x MTVR Repair<br/>
	- 2x M119 (Static)<br/>
	- 3x IFV-6a Cheetah (Static)
"]];
player createDiaryRecord ["Diary", ["Mission", "Your primary mission is to defend Artillery Base Alpha from the invading enemy forces.<br/><br/>
Your secondary objective is to defend the anti-aircraft radar in Gorka. Without this radar, we will have no advance warning of incoming enemy aircraft. Defend this if at all possible.
"]];
player createDiaryRecord ["Diary", ["Situation", "NATO forces currently occupy central Chernarus, and a task force has been deployed to protect Artillery Base Alpha (a critical fire base located near the town of Novy Sobor).<br/><br/>
Hostile forces have been spotted preparing for an assault on the Artillery Base, aiming to destroy or occupy the compound. Friendly forces have been tasked with repelling the enemy invasion and protecting the Artillery base."]];