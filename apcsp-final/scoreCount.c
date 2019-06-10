#include <stdio.h>
#include <string.h>
float score(char r[][7], int index){
	float s = 0;
	float ret = 0;
	for(int i = 0; i < 6; i++){
		if(r[index][i] != '_'){
			s++;
		}
	}
	ret = s/6;
	return ret;
}

/*int main(){
	char c[][7] = {"__as_f"};
	float re = score(c, 0);
	printf("%f\n",re);
}*/
