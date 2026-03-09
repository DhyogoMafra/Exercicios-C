#include <stdio.h>

// Peça 10 números e diga quantos são pares.

int main() {

    int num[10], quant_num = 0;

    for (int i = 0; i < 10; i++) {
        printf("\nDigite o valor do elemento [%d]: ", i + 1);
        scanf("%d", &num[i]);
       
    }

    for (int i = 0; i < 10; i++) {
            if (num[i] % 2 == 0) {
                quant_num = quant_num + 1;
       }

     }

     printf("Contem %d numeros pares\n", quant_num);

    return 0;

}