#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
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

/*int main (){
srand(time(0));

char c[][7] = { 
"ahsdgs", 
"sasdge" 
  };
  
int i = rand() % 2;
//printf("%d",i);
char ans[] = "______";
char r[7];
strcpy (r, hintGen (c, i, ans));
for(int i = 0; i < 6; i++){
	printf("%c", r[i]);
	} 
}*/
