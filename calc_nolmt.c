#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main() {
    double result = 0; 
    char operator;
    double value;

    printf("\n Entrez un nombre : ");
    scanf("%lf", &result);

    while (1) {
        printf("\nEntrez l'operation ( + , - , * ,  /  )         ou q pour quitter) : ");
        scanf(" %c", &operator);

        if (operator == 'q') {
            break; 
        }

        printf("Entrez un nombre : ");
        scanf("%lf", &value);

        switch (operator) {
            case '+':
                result = result + value;
                break;
            case '-':
                result = result - value;
                break;
            case '*':
              result = result * value;
                break;
            case '/':
                if (value != 0) {
                    result = result / value;
                } else {
                    printf("Division par z�ro impossible.\n");
                }
                break;
            default:
                printf("Op�ration non reconnue.\n"); //jj
                
        }
             system("cls");
        printf("Resultat actuel : %.2lf\n", result);
        
    }
system("cls");
    printf("Resultat final : %.2lf\n", result);

    return 0;
}
