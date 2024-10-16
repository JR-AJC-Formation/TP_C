#include <stdio.h>

int somme(int a, int b) {
    return a + b;
}

int main() {
    /* Déclaration des variables */
    int a = 1, b = 3, c = 0;
    /* Affichage du titre du TP */
    printf("TP Pointeurs 3: Appel de fonction par pointeur\n");
    printf("Entier1: %d Entier2: %d\n", a, b);
    c = (*somme)(a, b);
    printf("Somme: %d\n", c);
    return 0;
}