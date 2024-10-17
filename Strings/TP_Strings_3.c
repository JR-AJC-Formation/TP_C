#include <stdio.h>

/**
    Exercice 3 : Comparer deux chaînes de caractères

    Énoncé : Écris un programme qui demande à l'utilisateur
    d'entrer deux chaînes de caractères et vérifie si elles
    sont égales, sans utiliser la fonction strcmp().
 */

int main() {
    /* Déclaration de variables*/
    char* string1[128];
    char* string2[128];
    int length = 0;

    printf("Entrez une chaine de caratères: ");
    /* Scanf considère un espace comme la fin d'un string! /!\ */
    fgets(*string1, 128, stdin);
    // fflush stdin
    int c;
    while((c = getchar()) != '\n' && c != EOF);
    printf("Entrez une seconde chaine de caratères: ");
    fgets(*string2, 128, stdin);
    while((c = getchar()) != '\n' && c != EOF);
    /* Tant que le string n'est pas fini, on compte */
    while(*(string1 + length) != '\0'/*|| *(string2 + length) != '\0'*/) {
        /* Si une des chaines est à \0 mais pas l'autre taille différente*/
        length++;/*
        if(*(string1 + length) != '\0' && *(string2 + length) != '\0')
            length++;
        else {
            /* Donc la chaine est différente, on quitte *
            printf("Chaine différentes");
            return 0;
        }*/
            
    }
    
    /* Affichage de la chaine inversé */
    printf("Chaine inversée: ");
    length -= 2; // -2 pour le retour à la ligne et '\0'
    for(; length >= 0; --length) {
        printf("%c", *(string1 + length));
    }
    printf("\n");
    return 0;
}