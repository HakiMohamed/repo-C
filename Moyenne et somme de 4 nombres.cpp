#include <stdio.h>

int main() {
    int A, B , C , D ;
    float S , M;
    
    printf("veuiller saisir la valeur du A : ");
    scanf("%d",&A);
    printf("veuiller saisir la valeur du B : ");
    scanf("%d",&B);
    printf("veuiller saisir la valeur du C : ");
    scanf("%d",&C);
    printf("veuiller saisir la valeur du D : ");
    scanf("%d",&D);
    S= A+B+C+D;
    M=S/4;
    printf("La some des nombres est : %.2f \n",S);
    printf("La moyenne des nombres est : %.2f ",M);
  

    return 0;
}

