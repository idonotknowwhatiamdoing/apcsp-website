#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "checkLetters.c"
#include "hintGen.c"
#include "scoreCount.c"

#define TRUE
#define FALSE

int main (int argc, char * argv[]) 
{
	//Create an array of strings
	int numwords = 20;
	scanf("%d", &numwords)
	char inputString[6];
	("orange", inputString);
	("apples", inputString);
	char wordList[numwords][6];

}

//Check if lowercase
int checkLowercase (char *inputString) 
{
	int numwords = 20;
	char wordList[numwords][6];
	int charindex = 0;
	while (charindex < strlen(inputString)) 
	{
	if (!('a' <= inputString[charindex]) 
		{
		return FALSE;
			}
	else
			{
	charindex++;
		}
		return TRUE;
	}
	if (checkLowercase(inputString) == TRUE) 
		{
        	//Copy string into word bank
         	int charindex;
         	for (charindex = 0; charindex < 6; charindex++) {
		wordList[counter][charindex] = inputString[charindex];
        	}
        counter++;
        printf("\n");
        } 
	 	else 
		{
		printf("Invalid input. Try again.\n")
		continue;
      		}
   	}
	//Choose a random word
	srand(time(NULL));
	int numwords = 20;
	int wordNum = (int)(rand()%numwords);
	char *word = &wordList[wordNum][0];
	printf("%s", word);
}
