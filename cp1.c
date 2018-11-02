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
	char line8[] = {"Female voice: - \2Well...I see you're awake..\"\n\n"};
	char line9[] = {"Female voice: - \"I assume your limbs.... weak....  currently...\"\n\n"};
	char line10[] = {"Female voice: - \"By the way... have you any clue of where you might be right now?...\"\n\n"};
	char line11[] = {"\t1) No...\n"};
	char line12[] = {"\t2) uggh...\n"};
	char line13[] = {"\t3) wha..t..are .. y..you.. talking.. about?..\n\n"};	
	char line14[] = {"Answer: "};
	
// FUNKTION SOM TAR EN CHAR ARRAY OCH SKRIVER UT ALLA BOKSTÄVER 1 ÅT GÅNGEN.
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
	char answer_1[] = {"\nYou - No...\n\nFemale voice - \"..Well...I thought so..\"\n"};
	char answer_2[] = {"\nYou - uggh...\n\nFemale voice - \"..Hmpf...Still to tired to even handle some questions i see...\"\n"};
	char answer_3[] = {"\nYou - wha..t..are .. y..you.. talking.. about?\n\nFemale voice - \"...hmm..I should probably come back later...\"\n"};	
// IMPLEMENTERA EN IF SATS FÖR ANDRA SYMBOLINPUTS SOM  "" ,.-!"#¤%&/()=  ""
	if (strlen(answer1Buffer) == 1) {
		if (isdigit(answer1Buffer[0])) {
			int i = atoi(answer1Buffer);
			if (i == 1) {
				sleepfunc(answer_1, 10);
			} else if (i == 2) {
				sleepfunc(answer_2, 10);
			} else if (i == 3) {
				sleepfunc(answer_3, 10);
			} else {
				printf("Invalid answer...\n");
				sleepfunc(line14, 10);
				scanf("%s", &answer1);
				question1(answer1);
			}	
		} else {
				printf("Invalid answer...\n");
				sleepfunc(line14, 10);
				scanf("%s", &answer1);
				question1(answer1);
		}	
	} else {
			printf("Invalid answer...\n");
			sleepfunc(line14, 10);
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

	return 0;
}	
