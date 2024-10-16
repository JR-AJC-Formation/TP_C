#include <stdio.h>

int var1 = 12, var2 = 9;

/* Inversion d'int */
void inverse() {
    int temp;
    printf("Inversion...\n");
    temp = var1;
    var1 = var2;
    var2 = temp;
}

int main() {
    printf("TP 10: Inversion de variables\n");
    printf("var1 = %d var2 = %d\n", var1, var2);
    inverse();
    printf("var1 = %d var2 = %d\n", var1, var2);
    
    return 0;
}
