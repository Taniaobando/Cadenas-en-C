
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

char *asignarcadena(char *cadM){
	int i;
	int j=0;
	char *a="x";
	int lb= longc(cadM);
	cadM= (char*) malloc(1*lb);

	for (i=0; i<lb; i++){
		cadM[i]=a[j];
		cadM[i+1]='\0'; 
	}
	printf("%s\n",cadM);
	return cadM;

}

 int main(int argu,char *argv[]){
	char *a=argv[1];
	
	asignarcadena(a);
}