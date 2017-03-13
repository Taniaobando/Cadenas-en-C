
#include <stdio.h>
#include <stdlib.h>

int longc(char *cad){
	int n = 0;
	while (cad[n]!='\0'){
		n++;
	}
	printf("%dLongitud de cadena\n",n);
	return n;
}
char *haciaMayu(char *cadT){
	int lb= longc(cadT);
	char ta;
	int h;
	char *pun=cadT;
	cadT= (char*) malloc(lb+1);
	for (int i=0; i<lb;i++ ){
		cadT[i]=pun[i];
		cadT[i+1]='\0';
	}
	for(int h=0;h<lb;h++){
		char ta= cadT[h];
		if(ta>=97 && ta<=122){
			ta=ta-32;

			}
		cadT[h]=ta;
	}

	printf("%s\n", cadT);
}
 int main(int argu,char *argv[]){
	char *a=argv[1];
	
	haciaMayu(a);
}