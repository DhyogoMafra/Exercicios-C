#include <stdio.h>
#include <stdlib.h>

int main() {

    int soma = 0;

    for(int i = 0; i <= 10; i++) {
        int antes = soma;
        soma = soma + i;
        printf("%d + %d = %d\n", antes, i, soma);
    }
    return 0;
}