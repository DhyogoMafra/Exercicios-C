#include <stdio.h>
#include <stdlib.h>

// Soma 1 a 100

int main() {

    int soma = 0;

    for(int i = 1; i <= 100; i++) {
        int antes = soma;
        soma = soma + i;
        printf("%d + %d = %d\n", antes, i, soma);
    }

    return 0;
}