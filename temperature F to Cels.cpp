#include <stdio.h>
#include <stdlib.h>

int main() {
   
   float F, C;
    printf("veuiller saisir la temperature en fahrenhiet :");
    scanf("%f",&F);
    C = (F-32)/1.8;
    printf(" la temperature en Celsius est %f  ",C);
    if(C <=0)
    printf("  tres froid ");
    else if (C >0 && C <= 15)
    printf("   froid ");
    else if (C >15 && C <= 39)
    printf("   chaud ");
    else if (C >39 )
     printf(" tres chaud ");
   
    return 0;
}

