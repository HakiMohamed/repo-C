#include <stdio.h>
#include <stdlib.h>




int main (){
	char C;
	printf("veuiller saisir une cararctere :");
	scanf("%c",&C);
	if(C>='A'&&C<='Z'){
		printf("Ce caractere est partie des alphabets [ MAJISCULE ]");
	}
	else if(C>='a'&&C<='z'){
		printf("Ce caractere est partie des alphabets [ MINISCULE ]");
	}
	
	else
	printf("Ce caractere N'est partie pas a les alphabets [Errone Caractere ]");
	return 0;
	
}

