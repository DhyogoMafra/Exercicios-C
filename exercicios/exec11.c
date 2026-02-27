#include <stdio.h>
#include <stdlib.h>

// Tabuada

int main() {

    int number;
    int multiplicacao;

    printf("\n Digite um numero: ");
    scanf("%d", &number);

    for(int i = 0; i <= 10; i++) {
        multiplicacao = number * i;
        printf("%d x %d = %d\n", number, i, multiplicacao);

    }

    return 0;
}