#include <stdio.h>
#include <stdlib.h>


int main(){
	
	       int N ;
		 printf("veuiller saisir un nombre : ");
	       scanf("%d",&N);
	       
	       if(N<0)
	       	 printf("Le nombre %d est un nombre negatif ",N);
	      else if(N>0)
	       	 printf("Le nombre %d est un nombre positif ",N);
	       	 else
	       	 printf("Le nombre %d est un nombre NUL ",N);
	       	 return 0;
	       	 
}
