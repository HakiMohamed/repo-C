#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char C ;
	printf("veuiller saisir un caractere : ");
	scanf(" %c",&C);
	
	switch(C){
		case 'A' : printf("ce caractere est un voyelle ");
		break;
		case 'a' : printf("ce caractere est un voyelle ");
		break;
		case 'E': printf("ce caractere est un voyelle ");
		break;
		case 'e' : printf("ce caractere est un voyelle ");
		break;
		case 'U' : printf("ce caractere est un voyelle ");
		break;
		case 'u' : printf("ce caractere est un voyelle ");
		break;
		case 'I' : printf("ce caractere est un voyelle ");
		break;
		case 'i' : printf("ce caractere est un voyelle ");
		break;
		case 'O' : printf("ce caractere est un voyelle ");
		break;
		case 'o' : printf("ce caractere est un voyelle ");
		break;
		case 'Y' : printf("ce caractere est un voyelle ");
		break;
		case 'y' : printf("ce caractere est un voyelle ");
		break;
		default : printf("ce caractere est    NON    voyelle ");
		break;
	}
	return 0;
} 
