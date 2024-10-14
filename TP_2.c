#include <stdio.h>

int a = 10;
long b = 150;
short c = 8;
float d = 14975.79;
double e = 146783521.2978354162;
char f = 'y';

int main() {
    /* Affichage du titre du TP */
    printf("TP 2: Memoire et Variables\n");
    /* Affichage de la valeur de chaque variable et de leurs taille en mémoire */
    printf("Mon int = %d et fait %lu octets\n", a, sizeof(a));
    printf("Mon long = %ld et fait %lu octets\n", b, sizeof(b));
    printf("Mon short = %hd et fait %lu octets\n", c, sizeof(c));
    printf("Mon float = %f et fait %lu octets\n", d, sizeof(d));
    printf("Mon double = %f et fait %lu octets\n", e, sizeof(e));
    printf("Mon char = %c et fait %lu octets\n", f, sizeof(f));
    return 0;
}