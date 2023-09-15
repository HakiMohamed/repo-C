#include <stdio.h>

int main() {
    char C;
    
    printf("veuiller saisir un caractere : ");
    scanf("%c",&C);
    if( C >=65 && C <=90) {
        printf("%c est  MAJISCULE ", C);
        
    }
   
    else {
    printf(" %c est miniscule" ,C);
      }
    
    
    

  

    return 0;
}

