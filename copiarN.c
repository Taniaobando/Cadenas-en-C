#include <stdio.h>
#include <stdlib.h>


char copiarN (char *cadOrigen,char*cadDestino, int n){
 	  cadDestino= (char*)malloc(n+1);
 	  for (int j=0; j<n; j++){
 	  	cadDestino[j]= cadOrigen[j];
 	  	cadDestino[j+1]='\0';
 	  }

 	  printf("%s\n",cadDestino);
 	  return *cadDestino;
}


int main(int argu,char *argv[]){
	char *a=argv[1];
	char *o=argv[2];
	char *l=argv[3];
	int d=atoi(l);
	copiarN(a,o,d);


} 