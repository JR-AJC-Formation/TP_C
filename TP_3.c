#include <stdio.h>

int uinput;


int main() {
    /* Affichage du titre du TP */
    printf("TP 3: operations sur variables\n");
    /* Affichage de la valeur de chaque variable et de leurs taille en mémoire */
    printf("Quelle est la taille d'un coté du carré ? ");
    scanf("%d", &uinput);
    printf("Ce carre a pour perimetre %d\n", uinput * 4);
    printf("Ce carre a pour surface %d\n", uinput * uinput);
    return 0;
}