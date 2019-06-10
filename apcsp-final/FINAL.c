#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUMWORDS 20

void printImage (int mistakes);
int checkLetters(char input, char word[][7], int index, char ans[]);
float score(char *r);

int main (int argc, char * argv[]) 
{
	printf("Playing: Hangman\n");

	char wordList[NUMWORDS][7]={"apples","orange","author","banana","bridge","castle","camera","coffee","debate","finals","finish","garden","hidden","making","lawyer","office","online","player","reader","school",};
	char input;
	float re = 0;
	int guesses = 0;

	//char ansC[6];

	//Choose a random word
	srand(time(NULL));
	int wordNum = (int)(rand()%NUMWORDS);

	char ans[] = "______\n";
	printImage (guesses);

	while(guesses < 6 && re < 0.99)
	{
		//printf("%d",i);
		//scanf("%c", &input);
		input=getchar();
		getchar();
		if(checkLetters(input, wordList, wordNum, ans)<2)
			guesses++;
		printf("%s\n", ans); 
		
		//printf("%d",i);HINT
		//strcpy (r, hintGen (wordList, i, ans));
		//for(int i = 0; i < 6; i++){
		//printf("%c", r[i]);
		//hintGen (wordList, index, ansC);

		re = score(ans);
		printf("Percent guessed correctly: ");
		printf("%f\n",re);
	printImage (guesses);

	}
	if(guesses == 6){
	printf("You lost!\n");
	printf("The word was ");
	printf("%s\n", wordList[wordNum]);
	}
	if(re > 0.99){
	printf("You won\n");
	}

}













int checkLetters(char input, char word[][7], int index, char ans[]){
	int close = 0;
		/*
	  	0 = guess is way off
	 	1 = guess is very close
	  	2 = guess is correct
		*/
	char convert;
	convert = input;
	if(input <='Z' && input >='A'){
		convert = input + 'a'-'A';
	}
	
	for(int i = 0; i < 6; i++){
		int cb;
		if(convert == word[index][i]){
			ans[i] = word[index][i];
			cb = 2;
		}
		else if(convert == word[index][i]-1 || convert == word[index][i]+1){
			cb = 1;
		}else{
			cb =0;
		}
		if (cb > close){
			close = cb;
		}
	}

	if(close == 0){
		printf("This is way off! Try again!\n");
	}else if(close == 1){
		printf("Your guess is close! Try again!\n");	
	}else{
		printf("Correct! Nice job!\n");
	}

	return close;
}

void printImage (int mistakes)
{
        {
        if (mistakes == 0) 
                {
                printf("________\n");
                printf("|     | \n");
                printf("|       \n");
                printf("|       \n");
                printf("|       \n");
                printf("|       \n");
                printf("________\n");
                }
        else if (mistakes == 1) 
                {
                printf("________\n");
                printf("|     | \n");
                printf("|     ⚇ \n");
                printf("|       \n");
                printf("|       \n");
                printf("|       \n");
                printf("________\n");
                }
        else if (mistakes == 2) 
                {
                printf("________\n");
                printf("|     | \n");
                printf("|     ⚇ \n");
                printf("|     | \n");
                printf("|       \n");
                printf("|       \n");
                printf("________\n");
                }
        else if (mistakes == 3) 
                {
                printf("________\n");
                printf("|     | \n");
                printf("|     ⚇ \n");
                printf("|    ╱| \n");
                printf("|       \n");
                printf("|       \n");
                printf("________\n");
                }
        else if (mistakes == 4) 
                {
                printf("________\n");
                printf("|     | \n");
                printf("|     ⚇ \n");
                printf("|    ╱|╲\n");
                printf("|       \n");
                printf("|       \n");
                 printf("________\n");
                }
        else if (mistakes == 5) 
                {
                printf("________\n");
                printf("|     | \n");
                printf("|     ⚇ \n");
                printf("|    ╱|╲\n");
                printf("|    ╱  \n");
                printf("|       \n");
                printf("________\n");
                }
        else if (mistakes == 6) 
                {
                printf("________\n");
                printf("|     | \n");
                printf("|     ⚇ \n");
                printf("|    ╱|╲ \n");
                printf("|    ╱ ╲\n");
                printf("|       \n");
                printf("________\n");
                }
        }
}
int rand (void);

char * hintGen (char c[][7], int index, char ansC[]){
	int r = rand () % 3;  
	for (int i = 0; i < 6; i++){
		//printf("#: %d\n",r);
		//printf("%c",c[index][i]);

		if (r == 0){
	        	ansC[i] = c[index][i];
        		//printf ("%c %cn", ansC[i], c[index][i]);
        		r = rand () % 3;
		}else{
			r = rand() % 3;
		}
	}
	return ansC;
}

float score(char *r)
{
	float s = 0;
	float ret = 0;
	for(int i = 0; i < 6; i++){
		if(r[i] != '_'){
			s++;
		}
	}
	ret = s/6;
	return ret;
}

