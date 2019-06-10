#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

char * checkLetters(char input, char word[][7], int index, char ans[]){
	int close = 0;
		/*
	  	0 = guess is way off
	 	1 = guess is very close
	  	2 = guess is correct
		*/
	char convert;
	if(input < 91 && input > 64){
		convert = input + 32;
		printf("%c",convert);
	}
	
	for(int i = 0; i < 6; i++){
		if(convert == word[index][i]-1 || convert == word[index][i]+1){
			close = 1;
			printf("hi");
		}else{
			close = 0;
		}
		
		if(convert == word[index][i]){
			ans[i] = word[index][i];
			close = 2;
		}
	}

	if(close == 0){
		printf("This is way off! Try again!\n");
	}else if(close == 1){
		printf("Your guess is close! Try again!\n");	
	}else{
		printf("Correct! Nice job!\n");
	}

	return ans;
}


/*int main (){
srand(time(0));

char c[][7] = { 
"ahsdgs", 
"sasdga" 
  };
  
int i = rand() % 2;
//printf("%d",i);
char ans[] = "______";
char r[7];
char in = 'A';
strcpy (r, checkLetters(in, c, 1, ans));
for(int i = 0; i < 6; i++){
	printf("%c ", r[i]);
} 
}*/
