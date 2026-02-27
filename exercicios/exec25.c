#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero;

    do {
        printf("\n Digite um numero positivo: ");
        scanf("%d", &numero);
        

    } while (numero <= 0);

    printf("Numero Valido!\n");

    return 0;
}