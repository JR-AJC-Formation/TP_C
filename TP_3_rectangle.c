#include <stdio.h>

int hauteur;
int largeur;


int main() {
    /* Affichage du titre du TP */
    printf("TP 3: operations sur variables\n");
    /* On demande la taille du rectangle à l'utilisateur*/
    printf("Quelle est la hauteur et largeur du rectangle ? ");
    scanf("%d%d", &hauteur, &largeur);
    /* On calcule la taille du périmetre et la surface */
    printf("Ce rectangle a pour perimetre %d\n", 2*hauteur + 2*largeur);
    printf("Ce rectangle a pour surface %d\n", hauteur * largeur);
    return 0;
}