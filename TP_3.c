#include <stdio.h>

int uinput;


int main() {
    /* Affichage du titre du TP */
    printf("TP 3: operations sur variables\n");
    /* On demande la taille du carré à l'utilisateur*/
    printf("Quelle est la taille d'un coté du carré ? ");
    scanf("%d", &uinput);
    /* On calcule la taille du périmetre et la surface */
    printf("Ce carre a pour perimetre %d\n", uinput * 4);
    printf("Ce carre a pour surface %d\n", uinput * uinput);
    return 0;
}