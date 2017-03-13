

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


int posIniCarac(char *cad, char car){
    int lb= longc(cad);
    
   	for(int i=0; i<lb; i++){
		if (cad[i]==car){
			printf("%d\n", i);
			return i;
		}

		else if(i==lb-1){
			printf("-1\n");
			return -1;
		}


     }
}
 int main(int argu,char *argv[]){
	char *a=argv[1];
	char *car=argv[2];
	char c=car[0];
	posIniCarac(a,c);
}