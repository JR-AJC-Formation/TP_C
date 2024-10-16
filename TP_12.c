#include <stdio.h>
#define TAILLE_TAB 5
 
/*
    [acces] tableau]
    tableau[x] element indice X
    tableau : adresse du tableau
    *tableau : premier element du tableau
    *(tableau + X) : element d indice X
*/
// fonction affichage en utilisant pointeur *tableau
void affichage(int *tableau, int size) {
    for (int i = 0; i < size; i++)
        printf("[%d]", tableau[i]);
}

int main() {
    int tableau[TAILLE_TAB] = {1, 2, 3, 5, 6};

    (*affichage)(tableau, TAILLE_TAB);

    printf("\n\n");
    tableau[2] = 99;

    (*affichage)(tableau, TAILLE_TAB);
    printf("\n");

    return 0;
}