#include <stdio.h>

int n1;
int n2;
char op;

int main() {
    /* Affichage du titre du TP */
    printf("TP 5: Les Conditions\n");
    printf("Entrez une opération (format: nXn où n un entier et X un opérateur)\n>");
    scanf("%d%c%d", &n1, &op, &n2);
    switch (op) {
        case '+':
            printf("%d + %d = %d\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%d - %d = %d\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%d * %d = %d\n", n1, n2, n1 * n2);
            break;
        case '/':
            if(n2 == 0) {
                printf("Division par zéro impossible!\n");
                return -1;
            }
            printf("%d / %d = %f\n", n1, n2, (float)n1 / n2);
            break;
        default:
            printf("Opérateurs autorisés: + - * /\n");
            return -1;
    }
    return 0;
}