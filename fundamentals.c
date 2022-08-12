// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"	//includes library includes and a single function prototype

/*
	Author: Sy Dau, sdau@myseneca.ca, 188197214, August 12, 2022 , CPR101, Summer 2022 Final Project V2
*/

/*
	Purpose: Prompts the user to enter a non-empty string then outputs the string and the number of
	characters that string contains
*/
void fundamentals(void)
{
	printf("*** Start of Indexing Strings Demo ***\n");
	char buffer2[BUFFER_SIZE];		//stores what is inside of the buffer

	//prompts for a string until "q" is entered
	do {
		//prompts the user for a non empty string
		printf("Type not empty string (q- to quit):\n");
		fgets(buffer2, BUFFER_SIZE, stdin);
		buffer2[strlen(buffer2) - 1] = '\0';

		//validates for a non "q" string
		if (strcmp(buffer2, "q") != 0)
		{
			//outputs the string and the number of characters it contains
			printf("The length of \'%s\' is %d characters\n",
				buffer2, (int)strlen(buffer2));
		}
	} while (strcmp(buffer2, "q") != 0);
	printf("*** End of Indexing Strings Demo ***\n\n");
}