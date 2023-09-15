#include <stdio.h>

int main() {
    int A, B ;
    
    printf("veuiller saisir la valeur du A : ");
    scanf("%d",&A);
    printf("veuiller saisir la valeur du A : ");
    scanf("%d",&B);
    printf(" A + B = %d \n",A+B);
    printf(" A - B = %d \n",A-B);
    printf(" A * B = %d \n",A*B);
    if(B!=0)
    printf(" A / B = %d \n",A/B);
    else 
    printf(" la devision sur zero est imposible !");
    printf(" A %% B = %d \n",A%B);

   

  

    return 0;
}

