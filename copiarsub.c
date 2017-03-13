#include <stdio.h>
#include <stdlib.h>

char copiarSub (char *cadO,char *cadD, int n, int m){
 	cadD= (char*) malloc(m-n+1);
 	int Neil=0;
 	for (int h=n; h<=m; h++){
	 	cadD[Neil]= cadO[h];
	 	cadD[Neil+1]= '\0'; 	
	 	Neil=Neil+1;		

 	}
 	printf("%s\n",cadD);
 	return *cadD;
 }

int main(int argu,char *argv[]){
	char *a=argv[1];
	char *o=argv[2];
	char *l=argv[3];
	char *s=argv[4];
	int d=atoi(l);
	int n=atoi(s);
	copiarSub(a,o,d,n);

} 