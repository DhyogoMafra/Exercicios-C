#include <stdio.h>

// Soma dos numeros de um Vetor

int main() {

    int v[5];
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor do elemento [%d]: ", i + 1);
        scanf("%d", &v[i]);
        soma += v[i];
    }

    printf("A soma dos indices e: %d\n", soma);

    return 0;
}