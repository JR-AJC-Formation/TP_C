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
    int tableau1[TAILLE_TAB] = {1, 2, 3, 5, 6};
    int tableau2[TAILLE_TAB];

    printf("Tableau 1: ");
    (*affichage)(tableau1, TAILLE_TAB);
    printf(" Tableau 2: ");
    (*affichage)(tableau2, TAILLE_TAB);
    printf("\nCopie des valeurs de Tableau1 dans Tableau2\n");
    for (int i = 0; i < TAILLE_TAB; i++){
        *(tableau2 + i) = *(tableau1 + i);
    }
    printf("Tableau 1: ");
    (*affichage)(tableau1, TAILLE_TAB);
    printf(" Tableau 2: ");
    (*affichage)(tableau2, TAILLE_TAB);
    printf("\n");
    
    printf("\nModification pour prouver que les valeurs ne sont pas liées\n");
    tableau2[3] = 54;
    printf("Tableau 1: ");
    (*affichage)(tableau1, TAILLE_TAB);
    printf(" Tableau 2: ");
    (*affichage)(tableau2, TAILLE_TAB);
    printf("\n");

    return 0;
}