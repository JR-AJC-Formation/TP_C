#include <stdio.h>

/**
    Exercice 2 : Inverser une chaîne de caractères

    Énoncé : Écris un programme qui demande à l'utilisateur
    d'entrer une chaîne de caractères, puis affiche la chaîne
    inversée sans utiliser de bibliothèque supplémentaire.
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
    
    /* Affichage de la chaine inversé */
    printf("Chaine inversée: ");
    length -= 2; // -2 pour le retour à la ligne et '\0'
    for(; length >= 0; --length) {
        printf("%c", *(string + length));
    }
    printf("\n");
    return 0;
}