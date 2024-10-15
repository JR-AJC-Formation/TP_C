#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int uinput;

int main() {
    /* Affichage du titre du TP */
    printf("TP 9: Le juste prix\n");
    int nombre_mystere = 0, nombre_utilisateur = 0, rejouer = 1;
    const int VALEUR_MIN = 1, VALEUR_MAX = 100, MAX_TENTATIVES = 10;

    srand(time(NULL));

    while (rejouer == 1) {
        nombre_mystere = (rand() % (VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN;
        printf("Devinez quel est mon nombre mystere. Indice: c'est un nombre entre %d et %d\n", VALEUR_MIN, VALEUR_MAX);
        for(int tentatives = 1; tentatives <= MAX_TENTATIVES; ++tentatives) {
            printf("Tentative %d/%d > ", tentatives, MAX_TENTATIVES);
            scanf("%d", &nombre_utilisateur);
            if (nombre_utilisateur == nombre_mystere) {
                printf("\nBravo! Le nombre mystère est bien %d\n", nombre_mystere);
                break;
            }
            printf(nombre_utilisateur < nombre_mystere ? "C'est plus!\n" : "C'est moins !\n");
        }
        printf("Voulez-vous faire une nouvelle partie? (1- Oui, 2- Non)\n> ");
        scanf("%d", &rejouer);
    }
    printf("À bientôt !\n");
    return 0;
}