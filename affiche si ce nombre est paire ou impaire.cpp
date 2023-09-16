#include <stdio.h>
#include <stdlib.h>


int main() {
 int N ;

printf("veuiller entrer un nombre : ");
scanf("%d",&N);

if(N % 2 == 0)
printf("le nombre %d est un nombre paire ",N);
else
printf("le nombre %d est un nombre impaire ",N);


return 0;
}
