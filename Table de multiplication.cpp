#include <stdio.h>
#include <stdlib.h>






int main (){
	int N, i;
	
	printf("veuilez saisir un nombre pour afficher sa table de multiplication : ");
	scanf("%d",&N);
	
	for(i=0;i<=10;i++){
		printf("%d * %d = %d \n",N,i,N*i);
	}
			
	return 0;
	
}

