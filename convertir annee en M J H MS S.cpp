#include <stdio.h>
#include <stdlib.h>

int main(){
	system("color 0A");
 int mois,jours,houres,minutes,secondes;
	int D, annee;
	int choix;
	
	printf("\n       1___________________________convertir votre annee EN MOIS : ___________________________________");
	printf("\n       2___________________________convertir votre annee EN JOURES : _________________________________");
	printf("\n       3___________________________convertir votre annee EN HOURES : _________________________________");
	printf("\n       4___________________________convertir votre annee EN MINUTES : ________________________________");
	printf("\n       5___________________________convertir votre annee EN SECONDES : _______________________________\n");
		printf("\n__________________________________________________________________________________________________\n");
		printf("\n\n");
	printf("veuillez saisir votre demande [1-2-3-4-5] : ");
	scanf("%d",&choix);
	printf("\n__________________________________________________________________________________________________\n");
	printf("\n\n");
	printf("veuillez saisir nombres d'annes : ");
	scanf("%d",&annee);
    printf("\n\n");
    printf("\n\n");
mois=annee*12;
jours=annee*365;
houres=jours*24;
minutes=houres*60;
secondes=minutes*60;
printf("\n\n");

	switch(choix){
		system("cls");
		case 1 : printf("                        %d annee et contient %d  mois ",annee,mois);
		break;
		system("cls");
		case 2 : printf("                        %d annee et contient %d  jours ",annee,jours);
		break;
		system("cls");
		case 3 : printf("                        %d annee et contient %d  houres ",annee,houres);
		break;
		system("cls");
		case 4 : printf("                        %d annee et contient %d  minutes ",annee,minutes);
		break;
		system("cls");
		case 5 : printf("                        %d annee et contient %d  secondes ",annee,secondes);
		break;
}
    printf("\n\n");
    printf("\n\n");
	printf("\n\n");
    printf("\n\n");
	return 0;
} 
