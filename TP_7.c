#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int pt_ordi = 0, pt_joueur = 0;

int main() {
    /* Initialisation du random */
    srand(time(NULL));
    /* Initialisation des variables */
    int jeu_ordinateur = 0, jeu_utilisateur = 0;
    const int VALEUR_MIN = 1, VALEUR_MAX = 3;
    /* Affichage du titre du TP */
    printf("TP 6: Pierre Feuille Ciseaux\n");
    do {
        /* Génération d'un nombre par l'ordinateur*/
        jeu_ordinateur = (rand() % VALEUR_MAX) + VALEUR_MIN;
        printf("Que voulez-vous jouer (1- Pierre, 2- Papier, 3- Ciseaux): ");
        scanf("%d", &jeu_utilisateur);
        /* Vérification de la validité de l'entrée utilisateur */
        if(jeu_utilisateur < VALEUR_MIN || jeu_utilisateur > VALEUR_MAX) {
            printf("Veuillez rentrer une valeur entre %d et %d\n", VALEUR_MIN, VALEUR_MAX);
            continue;
        }
        printf("Joueur joue %d et ordinateur joue %d >>>> ", jeu_utilisateur, jeu_ordinateur);
        /* Match null, sinon on vérifie les autres possibilités */
        if(jeu_ordinateur == jeu_utilisateur) {
            printf("match null\n");
        } else {
            switch (jeu_utilisateur) {
                case 1: // Pierre
                    if (jeu_ordinateur == 2) {
                        printf("Ordinateur gagne 1 point\n");
                        pt_ordi++;
                    } else {
                        printf("Joueur gagne 1 point\n");
                        pt_joueur++;
                    }
                    break;
                case 2: // Feuille
                    if (jeu_ordinateur == 3) {
                        printf("Ordinateur gagne 1 point\n");
                        pt_ordi++;
                    } else {
                        printf("Joueur gagne 1 point\n");
                        pt_joueur++;
                    }
                    break;
                case 3: // Cisceaux
                    if (jeu_ordinateur == 1) {
                        printf("Ordinateur gagne 1 point\n");
                        pt_ordi++;
                    } else {
                        printf("Joueur gagne 1 point\n");
                        pt_joueur++;
                    }
                    break;
            }
        }
        /* Affichage des points*/
        printf("Points: Ordi: %d et joueur: %d\n", pt_ordi, pt_joueur);
    } while (!(pt_ordi >= 3 || pt_joueur >= 3));
    /* Annonce du vainqueur */
    printf("Fin du jeu! Vainqueur est %s\n", jeu_utilisateur >= VALEUR_MAX ? "Joueur" : "Ordinateur");
    return 0;
}