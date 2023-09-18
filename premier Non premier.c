#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,N,K;
	printf("veuillez saisir un nombre :");
	scanf("%d",&N);
	K=1;
	
	
	for(i=2;i<N/2;i++){
		if(N%i==0){
		K=0;
		break;
		}
	

	}
	
	if(K==1)
		printf("%d est nombre  premier ",N);
		else
		printf("%d est nombre  NON premier ",N);
	
	
	return 0;
}
