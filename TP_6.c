#include <stdio.h>

int age;
float taille;
char initiaux[2];

int main() {
    /* Affichage du titre du TP */
    printf("TP 6: Lecture de variables\n");
    printf("Donnez votre age et taille en metres: ");
    scanf("%d%f",&age, &taille);
    printf("Donnez vos initiales: ");
    // fflush for Linux
    int c;
    while((c = getchar()) != '\n' && c != EOF);
    scanf("%c%c", &initiaux[0], &initiaux[1]);
    printf("\nVous avez %d ans et vous mesurez %.2f m\n", age, taille);
    printf("Vos initiales sont %c.%c\n", initiaux[0], initiaux[1]);
    return 0;
}