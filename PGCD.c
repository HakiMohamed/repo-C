#include <stdio.h>


int pgcd(int a, int b) {
    if (b == 0) {
        return a; 
    } else {
        return pgcd(b, a % b); 
    }
}

int main() {
    int a, b;

    printf("Entrez deux entiers non nuls (a > b) : ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Les entiers doivent être non nuls.\n");
    } else if (a < b) {
        printf("a doit être strictement supérieur à b.\n");
    } else {
        int resultat = pgcd(a, b);
        printf("Le PGCD de %d et %d est : %d\n", a, b, resultat);
    }

    return 0;
}

