#include <stdio.h>

int main() {
    /* Déclaration des variables */
    int x = 128;
    int *pointeur = &x;
    int *poinpointeur = pointeur;
    /* Affichage du titre du TP */
    printf("TP Pointeurs 2: Modification par pointeur de pointeur\n");
    printf("Entier: %d\nAdresse de l'entier: %p Adresse du pointeur: %p Adresse du poinpointeur: %p\n", x, &x, &pointeur, &poinpointeur);
    *poinpointeur = 64;
    printf("Entier après modif: %d\nAdresse de l'entier: %p Adresse du pointeur: %p Adresse du poinpointeur: %p\n", x, &x, &pointeur, &poinpointeur);
    return 0;
}