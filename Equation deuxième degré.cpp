#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, racine1, racine2;

    printf("Entrez les coefficients de l'equation du second degre (a, b, c) : ");
    scanf("%lf %lf %lf", &a, &b, &c);

  
    discriminant = b * b - 4 * a * c;
	printf("discriminant =%l.2f\n",discriminant);
    if (discriminant > 0) {
     
        racine1 = (-b + sqrt(discriminant)) / (2 * a);
        racine2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Les solutions sont : x1 = %lf et x2 = %lf\n", racine1, racine2);
    } else if (discriminant == 0) {
     
        racine1 = -b / (2 * a);
        printf("La solution double est : x = %lf\n", racine1);
    } else {
      
        double reelPart = -b / (2 * a);
        double imaginairePart = sqrt(-discriminant) / (2 * a);
        printf("Pas de solution reelle. Les solutions complexes sont : \n");
        printf("x1 = %lf + %lfi\n", reelPart, imaginairePart);
        printf("x2 = %lf - %lfi\n", reelPart, imaginairePart);
    }

    return 0;
}

