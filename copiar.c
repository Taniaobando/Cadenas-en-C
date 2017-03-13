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
char copiar(char *o,char *q){
	int n= longc(o);
	q=(char*) malloc (n+1);
	for (int i=0;i<=n;i++){
		q[i]=o[i];
	}

	printf("%s\n",q);
	return *q;
}

int main(int argu,char *argv[]){
	char *a=argv[1];
	char *o=argv[2];
	copiar(a,o);


} 