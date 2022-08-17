// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"	//includes library includes and a single function prototype

/*
	Author: Sy Dau, sdau@myseneca.ca, 188197214, August 17, 2022 , CPR101, Summer 2022 Final Project V3
*/

/*
	Purpose: Prompts the user to enter a string that is not "q" then copies it to a destination string
*/
void fundamentals(void)
{
	printf("*** Start of Indexing Strings Demo ***\n");
	char destination[BUFFER_SIZE];
	char source[BUFFER_SIZE];		//stores what is inside of the buffer

	//prompts for a string until "q" is entered
	do {
		//resets the destination string to empty
		destination[0] = '\0';
		printf("Destination string is reset to empty\n");

		//prompts the user for a string
		printf("Type the source string (q - to quit) : \n");
		fgets(source, BUFFER_SIZE, stdin);
		source[strlen(source) - 1] = '\0';

		//validates for a non "q" string
		if (strcmp(source, "q") != 0)
		{
			//copies the source string to the destination string
			strcpy(destination, source);
			printf("New destination string is \'%s\'\n", destination);
		}
	} while (strcmp(source, "q") != 0);
	printf("*** End of Indexing Strings Demo ***\n\n");
}