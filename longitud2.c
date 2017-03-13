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


int main(int arg,char *argv[]){
	char *a=argv[1];
	longc(a);


} 