#include <stdio.h>
#include <stdlib.h>


int main() {
	int  N1 , N2;
	char OP;
	
	printf("veuiller saisir la valeur du N1 :");
	scanf("%d",&N1);
	printf("veuiller saisir l'operateur :");
	scanf(" %c",&OP);
	printf("veuiller saisir la valeur du N2 :");
	scanf("%d",&N2);
	

	switch(OP){
		case '+' : printf("%d",N1+N2);
		break;
		case '-' : printf("%d",N1-N2);
		break;
		case '*' : printf("%d",N1*N2);
		break;
		case '/' : 
		if(N2!=0){
			printf("%d",N1/N2);
		}
		
		else printf("logiquement nous peut pas diviser sur 0 !!");
		break;
		
	}
	
	
	return 0;
}
