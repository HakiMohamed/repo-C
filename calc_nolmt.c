#include <stdio.h>
#include <stdlib.h>
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
à
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
                    printf("Division par zéro impossible.\n");
                }
                break;
            default:
                printf("Opération non reconnue.\n");
        }

        printf("Resultat actuel : %.2lf\n", result);
    }

    printf("Resultat final : %.2lf\n", result);

    return 0;
}
