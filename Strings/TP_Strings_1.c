#include <stdio.h>

/**
    Exercice 1 : Calculer la longueur d'une chaîne de caractères

    Énoncé : Écris un programme qui demande à l'utilisateur d'entrer
    une chaîne de caractères, puis calcule et affiche sa longueur sans
    utiliser la fonction strlen().
 */

int main() {
    /* Déclaration de variables*/
    char* string;
    int length = 0;

    printf("Entrez une chaine de caratères: ");
    /* Scanf considère un espace comme la fin d'un string! /!\ */
    fgets(string, 128, stdin);
    /* Tant que le string n'est pas fini, on compte */
    while(*(string + length) != '\0') 
        length++;
    /* Affichage de la taille, retour à la ligne compté donc -1 */
    printf("Taille de la chaine: %d\n", length - 1);
    return 0;
}