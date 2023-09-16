#include <stdio.h>
#include <stdlib.h>


int main() {
 int A, B, S ;

printf("veuiller entrer un nombre :");
scanf("%d",&A);
printf("veuiller entrer un nombre :");
scanf("%d",&B);

if(A==B)
S=(A+B)*3;
else
S=A+B;
printf("le resultat est %d ",S);
return 0;
}
