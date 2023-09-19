#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int  i,  TAILLE,SM=0, SI=0,EG=0,POSx=0,POSm=0;
	float T[20], S=0,M,MAX,MIN;
	
	printf(" veuillez saisir le nombre des notes  : ");
	scanf("%d",&TAILLE);
	printf(" veuillez saisir les elements du tableau (les notes entre 0 et 20 ) : \n");
	for(i=0;i<TAILLE;i++){
	do{
	
	
		printf(" %d NOTE : ",i+1);
		scanf("%f",&T[i]);
		if(T[i] <= 0 || T[i]>=20){
			printf("votre note n'est pas accepter car est < 0 ou > a 20 ! \n");
			
		
		}
			
		}while(T[i]<0 || T[i]>20);
		S=S+T[i];
	}
	M=S/i;
	printf(" la somme des elements du tableau  : %.2f \n",S);
	printf(" la moyenne es elements du tableau  : %.2f \n",M);
	
	for(i=0;i<TAILLE;i++){
		if(T[i]>M){
			printf("T[%d] est superieur a la moyenne \n",i+1);
			SM++;
		}
		else if(T[i]<M){
			printf("T[%d] est inferieur a la moyenne \n",i+1);
			SI++;
	}
	else {
			printf("T[%d] est egal a la moyenne \n",i+1);
			EG++;
	}
	
	
	
	
	
}
printf("le nombre des notes superieur a la moyenne est %d \n",SM);
	printf("le nombre des notes inferieur a la moyenne est %d \n ",SI);
	printf("le nombre des notes egal  la moyenne est %d \n",EG);
	MIN=T[0];
	MAX=T[0];
	for(i=0;i<TAILLE;i++){
		if(MAX<T[i]){
			MAX = T[i];
			POSx=i+1;
		}
		
	}
	
	for(i=0;i<TAILLE;i++){
		if(MIN>T[i]){
			MIN = T[i];
			POSm=i+1;
		}
		
	}
	
	printf("la valeur maximale des elements du tableau est %.2f est sa position est %d\n",MAX,POSx);
	printf("la valeur minimale des elements du tableau est %.2f, est sa position est %d\n",MIN,POSm);
	
return 0;
}
