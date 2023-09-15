#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y , z ,k ;
    printf("  : veuillez saisir les nombres a inverse \n");
     printf(" le 1er :  ");
    scanf("%d",&x);
    printf(" le 2eme :  ");
    scanf("%d",&y);
    printf(" le 3eme :  ");
    scanf("%d",&z);

    printf(" vous avez enter %d%d%d \n",x,y,z);
   
    k = x ;
     x = z ;
     z = k ;
     printf("l'ordre inverse est : %d%d%d \n",x,y,z);
   
   
    return 0;
}
