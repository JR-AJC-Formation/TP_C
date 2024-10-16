#include <stdio.h>

int somme(int a, int b) {
    return a + b;
}

int main() {
    /* Déclaration des variables */
    int var = 18;
    int *adresse;
    /* Affichage du titre du TP */
    printf("TP Pointeurs 4: Manipulation avancée\n");
    /* Adresse de var dans "adresse" */
    adresse = &var;
    printf("Entier var: %d Entier adresse: %d\n", var, *adresse);
    return 0;
}