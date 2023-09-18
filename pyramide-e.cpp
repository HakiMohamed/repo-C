#include <stdio.h>
#include <stdlib.h>




int main(){
	
	int i, j , k ,N;
	  printf("veuillez saisir le nombre du ligne de pyramide : ");
	  scanf("%d",&N);
	  
	  
	  for (i=1;i<=N;i++){
	  	
		  
		  for(j=1;j<=N-i;j++){
	  		printf(" ");
		  }
		  
		  for(k=1;k<=i*2-1;k++){
	  		printf("*");
		  }
	  	
	  	
	  	
	  	
	  	
	  	
	  	printf("\n");
	  	
	  }
	
	
	
	
	
	
	
	
	
	
	
}
