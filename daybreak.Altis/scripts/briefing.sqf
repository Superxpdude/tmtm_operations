// Script to handle initial mission briefings
// General guidelines would be to include briefings for the following
// Situation, Mission, and Assets
// Briefings are listed in the opposite order that they are written below. New diaryRecords are always placed at the top of the list.
// https://community.bistudio.com/wiki/createDiaryRecord

//player createDiaryRecord ["Diary", ["Assets", "Example Mission Assets"]];
//player createDiaryRecord ["Diary", ["Mission", "Example Mission Briefing"]];
//player createDiaryRecord ["Diary", ["Situation", "Example Situation Briefing"]];

player createDiaryRecord ["Diary", ["Mission",
"Your mission today is to launch an attack on Kavala at dawn. The town is crawling with AAF forces that need to be cleared out before we can work on locating the East Wind device.<br/>
<br/>
Your first objective is to secure the <marker name='marker_aaf_compound'>AAF compound</marker> south of the city; allowing us to set up a Forward Operating Base for our assault on the city.<br/><br/>
Your next objectives are to eliminate the AAF forces at the <marker name='marker_hospital'>Hospital</marker> and the <marker name='marker_castle'>castle</marker>. We have reports that the AAF are using these locations as strongholds to maintain their grip on Kavala.<br/><br/>
After eliminating the two AAF strongholds, you must then head north to secure three pieces of NATO information that will allow us to pinpoint exactly where they're holding the East Wind device.<br/><br/>
Finally, after we've located the device your mission is to secure the device itself before NATO has an opportunity to uncover its true power."
]];

player createDiaryRecord ["Diary", ["Situation",
"NATO special forces have managed to secure a prototype of the East Wind device; no doubt some of their researchers are already trying to figure out the capabilities of the device. 
We have reliable intelligence that the device is somewhere in the vicinity of Kavala; however we don't yet know the exact location."
]];
