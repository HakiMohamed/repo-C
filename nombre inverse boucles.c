#include <stdio.h>

int main() {
    int nombre, nombreInverse = 0;

    printf("Entrez un entier : ");
    scanf("%d", &nombre);

   
    while (nombre != 0) {
        int dernierChiffre = nombre % 10;
        nombreInverse = nombreInverse * 10 + dernierChiffre;
        nombre = nombre / 10;
    }

    printf("L'entier inverse est : %d\n", nombreInverse);

    return 0;
}


