#include <stdio.h>

// Peça 10 números e diga quantos são pares, quantos são ímpares e quanto é a soma dos Pares.

int main() {

    int num[10], quant_pares = 0;
    int quant_impares = 0, total_pares = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do elemento [%d]: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (num[i] % 2 == 0) {
            quant_pares = quant_pares + 1;
            total_pares += num[i];
        } else {
            quant_impares = quant_impares + 1;
        }
    }

    printf("Contem [%d] numeros pares\n", quant_pares);
    printf("Contem [%d] numeros impares\n", quant_impares);
    printf("A soma dos pares e [%d]\n", total_pares);

    return 0;
}