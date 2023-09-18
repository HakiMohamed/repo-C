#include <stdio.h>
#include <stdlib.h>

int main() {
    int entier;
    int somme = 0;
    int max = 0;

    printf("Entrez une serie d'entiers positifs (terminee par 0) : \n");

    while (1) {
        scanf("%d", &entier);

        if (entier == 0) {
            break; 
        }

        if (entier <= 100 && entier > 0) {
            somme = somme+ entier;

            if (entier > max) {
                max = entier;
            }
        } else {
            printf("L'entier %d est ignore car il est strictement superieur a 100.\n", entier);
        }
    }

    if (somme > 0) {
        printf("La somme des entiers valides est : %d\n", somme);
        printf("Le maximum des entiers valides est : %d\n", max);
    } else {
        printf("Aucun entier valide n'a ete saisi.\n");
    }

    return 0;
}

