// Släkten Valdio, första kvinnan heter Jazenca Valdio, hennes bror Paulo Valdio 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>

void sleepfunc(char string[], int Sleepsize);
void question1(char answer1Buffer[]);
char answer1[10];

	char line1[] = {"\tYou wake up in a dark room...\n"};
	char line2[] = {"\tIt is cold...\n\n"};
	char line3[] = {"\tAnd the floor is wet...\n\n"};
	char line4[] = {"\tYou shudder as a shallow... cold.. wind encircles your skin.....\n\n"};
	char line5[] = {"\tThen...\n\n"};
	char line6[] = {"\tA voice comes forth in the dark...\n"};
	char line7[] = {"\tVicious....insidious.....\n\n"};
	char line8[] = {"Female voice: - \"...I see you're awake..\"\n\n"};
	char line9[] = {"Female voice: - \"I assume your limbs.... weak....  currently...\"\n\n"};
	char line10[] = {"Female voice: - \"By the way... have you any clue of where you might be right now?...\"\n\n"};
	char line11[] = {"\t1) No...\n"};
	char line12[] = {"\t2) uggh...\n"};
	char line13[] = {"\t3) wha..t..are .. y..you.. talking.. about?..\n\n"};	
	char line14[] = {"Answer: "};
	char line15[] = {"Female voice - \"Anyway... before i leave i will have some fun with you...\"\n\n"};
	char line16[] = {"You - \"wh.. o.. wha..... t..\"\n\n"};
	char line17[] = {"\tAs you try to come to your senses, unease spreads through your body...\n"};
	char line18[] = {"\tTo move, speak or breath....merely thinking of it amplifies the agony.\n\n"};
	char line19[] = {"\t..... ... .. .\n\n"};
	char line20[] = {"\tThe Female creature wearing a black jacket with metalornaments,\n"};
	char line21[] = {"\tunfolds her right sleeve exposing her surrounding to an atrocious forearm\n"};
	char line22[] = {"\tmarked by scars. Scars seemingly derived from some gruesome ritual.\n\n"};
	char line23[] = {"\tAs she hold her left hand above her wicked forearm the veins in her face become more\n"};
	char line24[] = {"\tand more....distinct.\n\n"};
	char line25[] = {"\tSaliva starts to drip from her lips as she vaguely whisper some strange phrases...\n\n"};
	char line26[] = {"\t... Then suddenly a sinister, yet subtle outburst.\n\n"};
	char line27[] = {"\tThe female snatches and sends forth a wrinkled red beam towards you\n\n"};
	char line28[] = {"\t*WOZZZRNHGGH....ZZRNNNGHH*\n\n"};
	char line29[] = {"You - \"GAAAAHH!!!....I..IT ....Huuu....HUUUURTS!\"\n\n"};
	char line30[] = {"Female voice -\"..mmmmh..he..he ...aaah..\"\n\n"};
	char line31[] = {"\tThe spell makes everything in your body twinge and distorts the mind as it\n"};
	char line32[] = {"\tforces you to process the most horrendous thoughts one could possibly imagine!\n\n"};
	char line33[] = {"\tThe female though, seem to be getting more and more excited the longer the spell has its hold\n"};	
	char line34[] = {"\ton you.\n\n"};
	char line35[] = {"\t*RATSSCHHHH!!*\n\n"};
	char line36[] = {"Female voice - \"AAAH...What the!...\"\n\n"};
	char line37[] = {"\tThe spell is interupted!\n\n"};
	char line38[] = {"Male voice - \"Stop it!... you wicked bitch of a sister..\"\n\n"};
	char line39[] = {"Female voice - \"Paulo!...you stupid..\"\n\n"};
	char line40[] = {"Paulo - \"...Shut up...\"\n\n"};
	char line41[] = {"Paulo - \"You shouldn't be risking the death of our friend here...\"\n\n"};
	char line42[] = {"Paulo - \"...Jazenca...\"\n\n"};
	char line43[] = {"Jazenca - \"Ooh, i think he can handle it..he..he...mmh...aaah...\"\n\n"};
	char line44[] = {"Paulo - \"Mother told us not to touch him, and she might not be too pleased hearing about this.\"\n\n"};
	char line45[] = {"Jazenca - \"You dare tell her about this...\"\n\n"};
	char line46[] = {"Paulo - \"...Come now, its time for the rite..\"\n\n"};
	char line47[] = {"Jazenca - \"heh!..Oh brother why don't you come and hold me first...\"\n\n"};
	char line48[] = {"\tJazenca rips her shirt apart and exposes her bosom..\n\n"};
	char line49[] = {"\tAt the blink of an eye, Paulo stands close to his sister gripping her neck with his\n"};
	char line50[] = {"\tscarred arm moaning ferosiously but somewhat quietly.\n\n"};
	char line51[] = {"Paulo- \"Grrrnngghhh\"\n\n"};
	char line52[] = {"\tBut then..\n\tPaulo retires and walks toward the gate leading out of the room.\n"};
	char line53[] = {"\tHe halts right before entrance, turns his head towards you and smiles..\n\n"};
	char line54[] = {"Paulo - \"he..he...he\"\n\n"};
	char line55[] = {""};
	
// FUNKTION SOM TAR EN CHAR ARRAY OCH SKRIVER UT ALLA BOKSTÄVER 1 ÅT GÅNGEN OCH ÄNDRAR PRINTHASTIGHETEN MED Sleep().
void sleepfunc(char string[], int Sleepsize)
{
	int index;
	for (index = 0; string[index] != '\0'; index++) {
		printf("%c", string[index]);
		Sleep(Sleepsize);
		fflush(stdout);
	}
}

void question1(char answer1Buffer[])
{
	char answer_1[] = {"\nYou - \"No...\"\n\nFemale voice - \"..Well...I thought so..\"\n\n"};
	char answer_2[] = {"\nYou - \"uggh...\"\n\nFemale voice - \"..Hmpf...Still to tired to even handle some questions i see...\"\n\n"};
	char answer_3[] = {"\nYou - \"wha..t..are .. y..you.. talking.. about?\"\n\nFemale voice - \"...hmm..I should probably come back later...\"\n\n"};	
// IMPLEMENTERA EN IF SATS FÖR ANDRA SYMBOLINPUTS SOM  "" ,.-!"#¤%&/()=  ""
	if (strlen(answer1Buffer) == 1) {
		if (isdigit(answer1Buffer[0])) {
			int i = atoi(answer1Buffer);
			if (i == 1) {
				sleepfunc(answer_1, 30);
			} else if (i == 2) {
				sleepfunc(answer_2, 30);
			} else if (i == 3) {
				sleepfunc(answer_3, 30);
			} else {
				printf("Invalid answer...\n");
				sleepfunc(line14, 30);
				scanf("%s", &answer1);
				question1(answer1);
			}	
		} else {
				printf("Invalid answer...\n");
				sleepfunc(line14, 30);
				scanf("%s", &answer1);
				question1(answer1);
		}	
	} else {
			printf("Invalid answer...\n");
			sleepfunc(line14, 30);
			scanf("%s", &answer1);
			question1(answer1);	
	}
}


int main(int argc, char *argv[])
{

	printf("\n\n");

	sleepfunc(line1, 0);	
	sleepfunc(line2, 0);
	sleepfunc(line3, 0);
	sleepfunc(line4, 0);
	sleepfunc(line5, 0);
	sleepfunc(line6, 0);
	sleepfunc(line7, 0);
	sleepfunc(line8, 0); 
	sleepfunc(line9, 0);
	sleepfunc(line10, 0);
	sleepfunc(line11, 0);
	sleepfunc(line12, 0);
	sleepfunc(line13, 0);
	sleepfunc(line14, 0);
	
	scanf("%s", &answer1);

	question1(answer1);	

	sleepfunc(line15, 0);
	sleepfunc(line16, 0);
	sleepfunc(line17, 0);
	sleepfunc(line18, 0);
	sleepfunc(line19, 0);	
	sleepfunc(line20, 0);
	sleepfunc(line21, 0);
	sleepfunc(line22, 0);
	sleepfunc(line23, 0);
	sleepfunc(line24, 0);	
	sleepfunc(line25, 0);
	sleepfunc(line26, 0);
	sleepfunc(line27, 0);
	sleepfunc(line28, 0);
	sleepfunc(line29, 0);
	sleepfunc(line30, 0);
	sleepfunc(line31, 0);
	sleepfunc(line32, 0);
	sleepfunc(line33, 0);	
	sleepfunc(line34, 0);
	sleepfunc(line35, 0); 
	sleepfunc(line36, 0); 
	sleepfunc(line37, 0); 
	sleepfunc(line38, 0); 
	sleepfunc(line39, 0);
	sleepfunc(line40, 0); 
	sleepfunc(line41, 0); 
	sleepfunc(line42, 0); 
	sleepfunc(line43, 0);
	sleepfunc(line44, 0);
	sleepfunc(line45, 0); 
	sleepfunc(line46, 0); 
	sleepfunc(line47, 0); 
	sleepfunc(line48, 0);
	sleepfunc(line49, 0); 
	sleepfunc(line50, 0); 
	sleepfunc(line51, 0);
	sleepfunc(line52, 0);
	sleepfunc(line53, 0); 
	sleepfunc(line54, 0); 
	
	return 0;
}	
