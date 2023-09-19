#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float Xa , Ya , Xb , Yb , AB;
    printf("veuiller saisir la cordonner X de A :");
    scanf("%f",&Xa);
    printf("veuiller saisir la cordonner X de A :");
    scanf("%f",&Ya);
    printf("veuiller saisir la cordonner X de B :");
    scanf("%f",&Xb);
    printf("veuiller saisir la cordonner X de B :");
    scanf("%f",&Yb);
    AB = sqrt ( pow(Xb - Xa , 2) + pow(Yb - Ya , 2) );
     printf("la distance entre A et B est : %.2f  ", AB);
     
    
    return 0;
}

