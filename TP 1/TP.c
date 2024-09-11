
#include<stdlib.h>
#include<stdio.h>


char minuscule(char c) {
    // Vérifie si le caractère est une majuscule
    if (c >= 'A' && c <= 'Z') {
        // Convertit le caractère en minuscule
        return c + ('a' - 'A');
    }
    // Retourne le caractère inchangé s'il n'est pas une majuscule
    return c;
}
int main()
{
	printf("Hello World\n");
	
    // EXO RACINES
    
    
    
    // Déclaration des variables
        double a, b, c;
    double discriminant, racine1, racine2;

    // Lecture des coefficients
    printf("Entrez les coefficients a, b et c de l'equation ax^2 + bx + c = 0 :\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Vérifier que a n'est pas nul
    if (a == 0) {
        printf("Le coefficient 'a' ne peut pas être zéro dans une equation du second degré.\n");
        return 1; // Terminer le programme avec une erreur
    }

    // Calcul du discriminant
    discriminant = b * b - 4 * a * c;

    // Vérifier la valeur du discriminant
    if (discriminant > 0) {
        // Deux racines réelles distinctes
        racine1 = (-b + sqrt(discriminant)) / (2 * a);
        racine2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Les racines de l'equation sont : %.2f et %.2f\n", racine1, racine2);
    }
    else if (discriminant == 0) {
        // Une racine réelle double
        racine1 = -b / (2 * a);
        printf("La racine double de l'equation est : %.2f\n", racine1);
    }
    else {
        // Pas de racines réelles
        printf("L'équation n'a pas de racines réelles.\n");
    }



	//EXO MINUSCULES

        char h = 'G';
        printf("Le caractère minuscule de %c est %c\n", h, minuscule(h));
        return 0;
    

    return 0;
}