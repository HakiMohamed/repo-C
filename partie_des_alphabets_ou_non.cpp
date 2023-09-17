#include <stdio.h>
#include <stdlib.h>

int main (){
	char C;
	
	printf("veuillez saisir une caractere :");
	scanf("%c",&C);
	
	if(C >='A'&&C<='Z'){
		
		printf("ce caractere est parti des alphabets [ MAJISCULE ]");
		
	}
	
	else if (C>='a'&&C<='z'){
	
	printf("ce caractere est parti des alphabets [ MINISCULE ]");
	}
	
	
	else {
	printf("ce caractere n'est pas un alphabets !! ");
	}
	
	return 0;
	
	
	
}


