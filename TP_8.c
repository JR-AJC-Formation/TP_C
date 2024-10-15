#include <stdio.h>

int uinput;

int main() {
    /* Affichage du titre du TP */
    printf("TP 8: Tables de multiplication\n");
    printf("Quelle table de multiplication afficher ? ");
    scanf("%d", &uinput);

    for(int i = 0; i <= 10; ++i) {
        printf("%dx%d = %d\n", uinput, i, uinput*i);
    }
    printf("Tables entre 0 et %d\n", uinput);
    for(int i = 0; i < uinput; ++i) {
        printf("Table de %d\n", i);
        for(int j = 0; j <= 10; ++j) {
            printf("%dx%d = %d\n", i, j, i*j);
        }
    }

    return 0;
}