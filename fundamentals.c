// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"	//includes library includes and a single function prototype

/*
	Author: Sy Dau, sdau@myseneca.ca, 188197214, August 4, 2022 , CPR101, Summer 2022 Final Project
*/

/*
	Purpose: Prompts the user to enter a non-empty string then prompts the user for a position in
             the string then outputs the corresponding character
*/
void fundamentals(void)
{
	printf("*** Start of Indexing Strings Demo ***\n");
	char buffer1[BUFFER_SIZE];		//stores what is inside of the buffer
	char numInput[NUM_INPUT_SIZE];	//stores the desired character position within the string
	size_t position;

	//prompts for a string until "q" is entered
	do {
		//prompts the user for a non empty string
		printf("Type not empty string (q- to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);
		buffer1[strlen(buffer1) - 1] = '\0';

		//validates for a non "q" string
		if (strcmp(buffer1, "q") != 0)
		{
			//prompts for a character position within the string
			printf("Type the character position within the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);
			numInput[strlen(numInput) - 1] = '\0';
			position = atoi(numInput);

			//checks if the position is outside of the bounds of the string
			if (position >= strlen(buffer1)) {
				position = strlen(buffer1) - 1;
				printf("Too big... Position reduced to max. available\n");
			}

			//outputs a message of the character at the prompted position
			printf("The character found at %d position is \'%c\'\n",
				(int)position, buffer1[position]);
		}
	} while (strcmp(buffer1, "q") != 0);
	printf("*** End of Indexing Strings Demo ***\n\n");
}