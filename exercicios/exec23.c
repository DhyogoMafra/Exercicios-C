#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero, cont = 1;

    printf("\n Digite um numero: ");
    scanf("%d", &numero);

    while(cont <= numero) {
        printf("%d\n", cont);
        cont++;
    }

    return 0;
}