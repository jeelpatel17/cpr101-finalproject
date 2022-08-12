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

haoyueguo@Haoyues-MacBook-Air version2 % git add tokenizing.c
haoyueguo@Haoyues-MacBook-Air version2 % git status
On branch master
Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

	modified:   tokenizing.c

Untracked files:
  (use "git add <file>..." to include in what will be committed)

	.DS_Store
	opt
	tokenizing
	tokenizing.h
	tokenizing2.c

haoyueguo@Haoyues-MacBook-Air version2 % git commit -m "v2"
[master e690874] v2
 1 file changed, 1 deletion(-)
haoyueguo@Haoyues-MacBook-Air version2 % git status
On branch master
Untracked files:
  (use "git add <file>..." to include in what will be committed)

	.DS_Store
	opt
	tokenizing
	tokenizing.h
	tokenizing2.c

nothing added to commit but untracked files present (use "git add" to track)
haoyueguo@Haoyues-MacBook-Air version2 % git log
commit e690874a277aae1559260693965e6f6939d4407c (HEAD -> master)
Author: HaoyueGuo <hguo49@myseneca.ca>
Date:   Wed Aug 10 10:43:36 2022 -0400

    v2

commit 61e29f9497ff616b3e2c2ee87d3a50b3b438b68d
Author: HaoyueGuo <hguo49@myseneca.ca>
Date:   Wed Aug 10 10:34:17 2022 -0400

    v1

