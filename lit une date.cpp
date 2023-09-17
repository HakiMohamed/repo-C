#include <stdio.h>
#include <stdlib.h>




int main (){
	int Jr  , AN, Ms;
	printf("veuiller saisir Une date sous le format suivant:  Ex :[ 15-09-2012 ] :\n");
	scanf("%d  %d  %d",&Jr,&Ms,&AN); 
	 printf("\n\n\n\n");
	switch(Ms){
		case 1 : printf("%d-JANVIER-%d",Jr,AN);
		break;
		case 2 : printf("%d-FÉVRIER-%d",Jr,AN);
		break;
		case 3 : printf("%d-MARS-%d",Jr,AN);
		break;
		case 4 : printf("%d-AVRIL-%d",Jr,AN);
		break;
		case 5 : printf("%d-MAI-%d",Jr,AN);
		break;
		case 6 : printf("%d-JUIN-%d",Jr,AN);
		break;
		case 7 : printf("%d-JUILLET-%d",Jr,AN);
		break;
		case 8 : printf("%d-AOÛT-%d",Jr,AN);
		break;
		case 9 : printf("%d-SEPTEMBRE-%d",Jr,AN);
		break;
		case 10 : printf("%d-OCTOBRE-%d",Jr,AN);
		break;
      	case 11 : printf("%d-NOVEMBRE-%d",Jr,AN);
		break;
		case 12 : printf("%d-DÉCEMBRE-%d",Jr,AN);
		break;
			}
			printf("\n\n\n\n");
	return 0;
	
}

