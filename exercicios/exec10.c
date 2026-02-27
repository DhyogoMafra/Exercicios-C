#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero;
    int soma = 0;

    printf("\n Digite um numero: ");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++) {

        int antes = soma;
        soma = soma + i;
        printf("%d + %d = %d\n", antes, i, soma);
    }

    return 0;
}