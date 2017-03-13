
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
 char *concatenarCadenas(char *cad1, char*cad2){
	int i;
	char *p;
  	int lb= longc(cad1);
 	int lc=longc(cad2);
	int j=0;
 	int v= lb + lc;
         p= (char*) malloc(v+1);

	for (i=0;i<lb;i++){
		p[i]=cad1[i];
		}

 	for(; i <v; i++,j++){
 		p[i]=cad2[j];
		p[v+1]='\0'; 


 	}
 	printf("%s\n",p);
 	return p;

 }

 int main(int argu,char *argv[]){
	char *a=argv[1];
	char *o=argv[2];
	
	concatenarCadenas(a,o);
}