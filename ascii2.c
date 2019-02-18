//Autor: Alex Aranda Salinas
//Data: 18-2-19
#include <stdio.h>

int main() {
	char c;
	int n,i;
		
	printf("TAULA ASCII MAJÃšSCULES 18-2-2019\n");
	printf("CAR  HEX  DEC\n");
	n='Z'-'A';
	for (i=n;i>=0;i--) {
		c='A'+i;
		printf("%c    %x   %d\n",c,c,c);
	}
	return(0);
}
