#include <stdio.h>
#include <stdlib.h>
int main() {

    int num, soma = 0;

    printf("\n Digite um numero: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        int antes = soma;
        soma = soma + i;
        printf("%d + %d = %d\n", antes, i, soma);
    }

    return 0;
}