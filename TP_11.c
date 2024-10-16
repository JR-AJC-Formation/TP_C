#include <stdio.h>

int main() {
    /* Initialisation du tableau */
    int tableau[] = {1, 2, 3, 4, 5};
    printf("TP 11: Affichages de tableau\n");
    
    /* Affichage dans l'ordre*/
    printf("Tableau: ");
    /* sizeof(tableau)/sizeof(int) donne la taille du tableau, peux importe sa taille */
    for(int i = 0; i < sizeof(tableau)/sizeof(int); ++i) {
        printf("%d ", tableau[i]);
    }
    /* Affichage inversé*/
    printf("\nInverse: ");
    for(int i = sizeof(tableau)/sizeof(int) - 1; i >= 0; --i) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
