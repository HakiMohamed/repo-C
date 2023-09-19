#include <stdio.h>
#include <stdlib.h>
#include <time.h>





int main (){
	int Ms;
	srand(time(NULL));
	Ms=(1+rand()%7);
	 printf("\n\n\n\n");
	switch(Ms){
		case 1 : printf(" Luindi ");
		break;
		case 2 : printf("mardi");
		break;
		case 3 : printf("mercredi");
		break;
		case 4 : printf("jeudi");
		break;
		case 5 : printf("vendredi");
		break;
		case 6 : printf("samedi");
		break;
		case 7 : printf("dimanche");
		break;
			}
			printf("\n\n\n\n");
			printf("%d",Ms);
			
	return 0;
	
}

