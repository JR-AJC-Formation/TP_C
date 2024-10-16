#include <stdio.h>

int somme(int a, int b) {
    return a + b;
}

int main() {
    /* Déclaration des variables */
    int var = 27;
    int *adresse;
    /* Affichage du titre du TP */
    printf("TP Pointeurs 5: Manipulation d'adresse\n");
    /* Adresse de var dans "adresse" */
    adresse = &var;
    printf("Adresse contenue par le pointeur: %p\n", adresse);
    /* Addition dans l'adresse*/
    adresse = adresse + 1;
    printf("Adresse contenue par le pointeur: %p\n", adresse);
    return 0;
}