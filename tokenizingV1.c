#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300 
#include "tokenizing.h"//include the header

void tokenizing(void) {
    char words[BUFFER_SIZE];//declare string words
    char* nextWord = NULL;//declare char pointer
    int wordsCounter;//declare int type
    printf("*** Start of Tokenizing Words Demo ***\n");//changed from PNG. provided: move it after the declaration
    do {
        printf("Type a few words separated by space (q - to quit):\n");//print statement
        fgets(words, BUFFER_SIZE, stdin);//user input data
        words[strlen(words) - 1] = '\0';
        if (strcmp(words, "q") != 0) {//loop "p" and quit then
            nextWord = strtok(words, " ");//function searches for a separator string within a larger string
            wordsCounter = 1;//initialize wordsCounter to 1
            while (nextWord) {
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);//print statement
                nextWord = strtok(NULL, " ");//get next word
            }
        }
    } while (strcmp(words, "q") != 0);
    printf("*** End of Tokenizing Words Demo ***\n\n");
}