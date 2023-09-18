#include <stdio.h>
#include <stdio.h>



int main(){
	int T[10] ,j,K;
	int i;
	printf("veuillez saisir les elements du tableau :\n");
	for(i=0;i<10;i++){
		printf("le %d nombre du tableau :",i+1);
		scanf("%d",&T[i]);
		
	}


for(i=0;i<10;i++){
	for(j=i+1;j<10;j++){
		if(T[i]>T[j]){
		K=T[i];
		T[i]=T[j];
		T[j]=K;
		}
	}
	
}
for(i=0;i<10;i++){
	printf("T[%d] = %d \n",i+1,T[i]);
	}


	
	return 0;
}

