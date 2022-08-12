// Created By: Boyd McCoy, bmccoy@myseneca.ca
// MANIPULATING SOURCE
// This module reads the and stores two user inputs (strings), concatenates (links) the two inputs
// and displays the concatenated string output.
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80

#include "manipulating.h"	//includes heaer file to point libraries and struct used

// V1
void manipulating(void) {
	printf("*** Start of Concatenating Strings Demo ***\n");
	char	string1[BUFFER_SIZE];	//Variable used to input 1st string
	char	string2[BUFFER_SIZE];	//Variable used to input 2nd string
	do {
		printf("Type the 1st string (q - to quit):\n");
		fgets(string1, BUFFER_SIZE, stdin);		//Reads and stores characters from stream
		string1[strlen(string1) - 1] = '\0';	//Computes the length of the string
		if ((strcmp(string1, "q") != 0)) {		//Continue asking for 2nd string input only if "q" wasn't entered for 1st string
			printf("Type the 2nd string:\n");
			fgets(string2, BUFFER_SIZE, stdin);	//Reads and storescharacters from stream
			string2[strlen(string2) - 1] = '\0';//Computes the length of the string
			strcat(string1, string2);			//Concatenates (links) string1 input and string2 input
			printf("Concatenated String is \'%s\'\n", string1);	//Prints the concatenated string
		}
	} while (strcmp(string1, "q") != 0);	//Keep's looping until "q" is ented as input (FOR 1ST STRING ONLY!!!)
	printf("*** End of Concatenating Strings Demo ***\n\n");
}