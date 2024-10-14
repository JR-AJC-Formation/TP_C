#include <stdio.h>
#include <math.h>

int inputcercle;
int inputhauteur;


int main() {
    /* Affichage du titre du TP */
    printf("TP 4: Complements sur les variables\n");
    /* On demande la taille du cercle à l'utilisateur*/
    printf("Quelle est le rayon du cercle ? ");
    scanf("%d", &inputcercle);
    /* On calcule le diamètre, circonférence et aire du cercle */
    printf("Ce cercle a pour diametre %d\n", inputcercle * 2);
    printf("Ce cercle a pour circonference %f\n", 2 * inputcercle * M_PI);
    printf("Ce cercle a pour aire %f\n\n", M_PI * pow(inputcercle, 2));

    /* On demande la taille du volume à l'utilisateur*/
    printf("Quelle est la hauteur du volume ? ");
    scanf("%d", &inputhauteur);
    /* On calcule le diamètre, circonférence et aire du cercle */
    printf("Ce cylindre a pour volume %f\n", M_PI * pow(inputcercle, 2) * inputhauteur);
    printf("Ce cone a pour volume %f\n", M_PI * pow(inputcercle, 2) * inputhauteur / 3);
    return 0;
}