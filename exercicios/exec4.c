#include <stdio.h>
#include <stdlib.h>

int main() {

//Par ou Ímpar

    int num;

    printf("\n Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("O numero e Par\n");

    } else {
        printf("O numero e Impar\n");

    }

    return 0;
}