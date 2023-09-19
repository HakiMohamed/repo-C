#include <stdio.h>
#include <stdlib.h>

int somme(int A,int B){
    A ;
	B ;
	return A+B;
} 

void Bonjour(){
	printf("CLASSE 3 YOUCODE ");
}


int main(){
	int Z , Y ;
	printf("veuiller saisir la valeur de Z :");
	scanf("%d",&Z);
	
	printf("veuiller saisir la valeur de Y :");
	scanf("%d",&Y);
	
	printf("%d\n",somme(Z,Y));
	Bonjour();
	
	
	return 0;
	
}
