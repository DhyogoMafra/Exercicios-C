#include <stdio.h>
#include <stdbool.h>

// Dado um número inteiro x, retornar true se x é um palíndromo, e false de outra forma.

int main() {

    int x;

    printf("\nDigite um numero: ");
    scanf("%d", &x);

    if (x < 0) {
        printf("Nao eh palindromo");    // número negativo não é palíndromo
        return 0;
    }

    int original = x;                  // guarda o número original
    int invertido = 0;                 // começa com 0

    while (x > 0) {
        int digito = x % 10;           // pega último número
        invertido = invertido * 10 + digito;
        x = x / 10;                    // remove último número
    }

    if (original == invertido) {
        printf("Eh palindromo\n");
    } else {
        printf("Nao eh palindromo");
    }

    return 0;
}