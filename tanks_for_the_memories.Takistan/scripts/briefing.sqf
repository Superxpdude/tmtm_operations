// Script to handle initial mission briefings
// General guidelines would be to include briefings for the following
// Situation, Mission, and Assets
// Briefings are listed in the opposite order that they are written below. New diaryRecords are always placed at the top of the list.
// https://community.bistudio.com/wiki/createDiaryRecord

player createDiaryRecord ["Diary", ["Assets","
What remains of your NATO strike force is the following: <br/><br/>
 - 2x M2A1 Slammer<br/>
 - 2x M2A4 Slammer UP<br/>
 - 1x IFV-6a Cheetah<br/>
 - 1x IFV-6c Panther<br/>
 - 1x CRV-6e Bobcat
"]];

player createDiaryRecord ["Diary", ["Mission","
As your strike force is the most capable at the current time, NATO high command has tasked you with the recovery and destruction of classified NATO intelligence stores across Takistan.<br/><br/>
Your highest priority is the destruction of the intelligence stores. High command has requested, if possible, that you retrieve copies of the data stores before destroying them.<br/><br/>
You have also been tasked with assisting with the evacuation of other NATO forces, many of which are in bad shape from the fighting. However, the recovery and destruction of the data remains the highest priority. Allowing the data to fall into CSAT hands would prove disastrous for NATO forces.
"]];

player createDiaryRecord ["Diary", ["Situation","
Early this morning, CSAT and AAF forces launched a surprise attack on NATO-controlled Takistan. Many NATO forces were caught off-guard by the attack, and have sustained heavy casualties.
Your NATO force has sustained minor casualties, but is mostly at full fighting strength.
"]];