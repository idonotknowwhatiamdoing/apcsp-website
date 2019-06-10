#include <stdio.h>

// always include my own header file
#include "hellofunc.h"

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

