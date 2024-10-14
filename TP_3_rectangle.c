#include <stdio.h>

int hauteur;
int largeur;


int main() {
    /* Affichage du titre du TP */
    printf("TP 3: operations sur variables\n");
    /* Affichage de la valeur de chaque variable et de leurs taille en mémoire */
    printf("Quelle est la hauteur et largeur du rectangle ? ");
    scanf("%d%d", &hauteur, &largeur);
    printf("Ce rectangle a pour perimetre %d\n", 2*hauteur + 2*largeur);
    printf("Ce rectangle a pour surface %d\n", hauteur * largeur);
    return 0;
}