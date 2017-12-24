// Script to handle initial mission briefings
// General guidelines would be to include briefings for the following
// Situation, Mission, and Assets
// Briefings are listed in the opposite order that they are written below. New diaryRecords are always placed at the top of the list.
// https://community.bistudio.com/wiki/createDiaryRecord

//player createDiaryRecord ["Diary", ["Assets", "Example Mission Assets"]];
//player createDiaryRecord ["Diary", ["Mission", "Example Mission Briefing"]];
//player createDiaryRecord ["Diary", ["Situation", "Example Situation Briefing"]];

player createDiaryRecord ["Diary", ["Credits", "
Superxpdude - Mission design and scripting<br/>
Ghost of O'Mally - Unit and object placement"]];

player createDiaryRecord ["Diary", ["Command SUV", "Your command vehicle is essential to your success during this operation. Protect it at all costs.<br/>
It is your mobile respawn point, as well as a mobile repair vehicle.<br/>
<font color='#FF0000' size='15'>RESPAWNING WILL BE TEMPORARILY DISABLED IF THE COMMAND SUV FALLS</font><br/><br/>
You can teleport to the command vehicle using the flag pole at the spawn point."]];

player createDiaryRecord ["Diary", ["Assets", "Your available assets for this mission are:<br/>
	- 5x Armoured SUV (M134)<br/>
	- 5x Armoured SUV (Unarmed)<br/>
	- 1x Command SUV
"]];

player createDiaryRecord ["Diary", ["Mission",
"Our mission today is to destroy the homes of those on the 'Naughty List'. Since it's late at night, they're likely to all be home and sleeping right about now.<br/><br/>
Unfortunately, it looks like some locals don't seem to believe in Santa Claus. They keep sending us messages saying that we're committing 'War Crimes' or something.
It's not like we really care what they think, but they may try to put up a fight to stop us from delivering our 'presents'."
]];

player createDiaryRecord ["Diary", ["Situation",
"So unfortunately due to an incident during a previous operation (something involving a 40mm grenade or something), TMTM has to help Santa deliver his presents this year.
As it turns out there's some silly law called the 'Santa Clause' that requires us to do this. (who even writes these kinds of things?)<br/><br/>
Our task is to deliver presents to those on the 'Naughty List'. Normally this would be coal, however since coal is heavy and takes up a lot of room, we're going to change things up a bit.
We're going to use explosive charges instead. They're much lighter, more compact, and will significantly reduce our workload next year.<br/><br/>
Let's just get this over with so we can all get home and open our presents on time."
]];
