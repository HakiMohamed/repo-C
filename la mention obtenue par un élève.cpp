#include <stdio.h>
#include <stdlib.h>


int main(){
	
	       float somme,NOTE, A,B,C,D,E,F,I;
		 printf("veuiller saisir la note obtenue en math  : ");
	       scanf("%f",&A);
	       printf("veuiller saisir la note obtenue en arabic  : ");
	       scanf("%f",&B);
	       printf("veuiller saisir la note obtenue en francais  : ");
	       scanf("%f",&C);
	       printf("veuiller saisir la note obtenue en sport  : ");
	       scanf("%f",&D);
	       printf("veuiller saisir la note obtenue en physique  : ");
	       scanf("%f",&E);
	       printf("veuiller saisir la note obtenue en science du vie et terre : ");
	       scanf("%f",&F);
	       printf("veuiller saisir la note obtenue en anglais  : ");
	       scanf("%f",&I);
	       system("cls");
	       printf("\n");
	       printf("\n");
	       printf("\n");
	       somme = A+B+C+D+E+F+I;
	       NOTE = somme / 7;
	       if(NOTE<10)
	       	 printf("********************************************** NOTE : %.2f [--RECALE---] ******************************************",NOTE);
	      else if(NOTE>10&&NOTE<12)
	       	 printf("********************************************** NOTE : %.2f [--PASSABLE---] *****************************************",NOTE);
	      else if(NOTE>12&&NOTE<14)
	       	 printf("********************************************** NOTE : %.2f [--ASSEZ BIEN---] ***************************************",NOTE);
	      else if(NOTE>14&&NOTE<16)
	       	 printf("********************************************** NOTE : %.2f [--BIEN---] *********************************************",NOTE);	 
	      else if(NOTE>16)
	       	 printf("********************************************** NOTE : %.2f [--TRES BIEN---] ****************************************",NOTE);
	       printf("\n\n");
	       printf("\n\n");
	       printf("\n");
	       	
	       	 return 0;
	       	 
}
