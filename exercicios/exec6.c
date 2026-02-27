#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero;

    printf("\n Digite um numero: ");
    scanf("%d", &numero);

    if(numero > 0) {
        printf("Este numero e positivo\n");
    }

    else if(numero < 0) {
        printf("Este numero e negativo\n");
    }

    else {
        printf("O numero e zero\n");
    }

    return 0;
}