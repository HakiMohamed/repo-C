#include <stdio.h>
#include <stdio.h>



int main(){
	int T[10] ,MAX, MIN;
	int i;
	printf("veuillez saisir les elements du tableau :\n");
	for(i=0;i<10;i++){
		printf("le %d nombre du tableau :",i+1);
		scanf("%d",&T[i]);
		
	}
	for(i=0;i<10;i++){
	
	printf("T[%d] = %d\n",i+1,T[i]);
}
MAX =T[0];
MIN = T[0];
for(i=0;i<10;i++){
	if(T[i]>MAX)
	MAX = T[i];
	else if(T[i]<MIN)
	MIN = T[i];
	
}
printf("le max des elemnts du tableau est : %d\n ",MAX);
printf("le min des elemnts du tableau est : %d \n",MIN);


	
	return 0;
}

