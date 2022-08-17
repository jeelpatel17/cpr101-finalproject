#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300 
#include "tokenizing.h"//include the header

void tokenizing(void){
 char sentences[BUFFER_SIZE];//declare string words
 char* nextSentences = NULL;//declare char pointer
 int sentencesCounter;//declare int type
 printf("*** Start of Tokenizing Words Demo ***\n");//changed from PNG. provided: move it after the declaration
 do{
  printf("Type a few words separated by space (q - to quit):\n");//print statement
  fgets(sentences, BUFFER_SIZE,stdin);//user indfput data
  sentences[strlen(sentences)-1] = '\0';
  if (strcmp(sentences,"q")!=0){//loop "p" and quit then
   nextSentences = strtok(sentences," ");//function searches for a separator string within a larger string
   sentencesCounter = 1;//initialize wordsCounter to 1
   while(nextSentences){
    printf("Sentences #%d is \'%s\'\n", sentencesCounter++, nextSentences);//print statement
    nextSentences = strtok(NULL, " ");//get next word
   }
  }
 }while(strcmp(sentences, "q")!=0);
 printf("*** End of Tokenizing Words Demo ***\n\n");
}

int main(){ //added void main to compile function
tokenizing();
}

