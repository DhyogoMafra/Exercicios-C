#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero;
    int fatorial = 1;

    printf("\n Digite um numero: ");
    scanf("%d", &numero);

    if(numero < 0) {
        printf("Erro: Fatorial nao e definido para numero negativos.\n");
        return 1;
    }

    for(int i = 1; i <= numero; i++) {
        int antes = fatorial;
        fatorial *= i;
         printf("O fatorial de %d e: %d x %d = %d\n", numero, antes, i, fatorial);
    }

    return 0;
}