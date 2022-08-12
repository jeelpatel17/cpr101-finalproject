#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300 
#include "tokenizing.h"//include the header

void tokenizing(void){
 char phrases[BUFFER_SIZE];//declare string words
 char* nextPhrase = NULL;//declare char pointer
 int phraseCounter;//declare int type
 printf("*** Start of Tokenizing Words Demo ***\n");//changed from PNG. provided: move it after the declaration
 do{
  printf("Type a few words separated by space (q - to quit):\n");//print statement
  fgets(phrases, BUFFER_SIZE,stdin);//user indfput data
  phrases[strlen(phrases)-1] = '\0';
  if (strcmp(phrases,"q")!=0){//loop "p" and quit then
   nextPhrase = strtok(phrases," ");//function searches for a separator string within a larger string
   phraseCounter = 1;//initialize wordsCounter to 1
   while(nextPhrase){
    printf("Phrase #%d is \'%s\'\n", phraseCounter++, nextPhrase);//print statement
    nextPhrase = strtok(NULL, " ");//get next word
   }
  }
 }while(strcmp(phrases, "q")!=0);
 printf("*** End of Tokenizing Words Demo ***\n\n");
}

int main(){ //added void main to compile function
tokenizing();
}

