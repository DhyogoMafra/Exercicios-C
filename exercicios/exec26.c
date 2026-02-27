#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero, soma = 0;

    do {
        printf("\n Digite um numero: ");
        scanf("%d", &numero);
        
        if (numero != 0) {

        soma += numero;

        }

    } while (numero != 0);

    printf("o resultado da soma foi: %d\n", soma);

    return 0;
}