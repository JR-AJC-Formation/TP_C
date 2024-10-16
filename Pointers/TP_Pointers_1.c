#include <stdio.h>

int main() {
    /* Déclaration des variables */
    int x = 128;
    int *pointeur = &x;
    /* Affichage du titre du TP */
    printf("TP Pointeurs 1: Modification par pointeurs\n");
    printf("Entier: %d Adresse de l'entier: %p Adresse du pointeur: %p\n", x, &x, &pointeur);
    *pointeur = 64;
    printf("Entier après modif: %d Adresse de l'entier: %p Adresse du pointeur: %p\n", x, &x, &pointeur);
    return 0;
}