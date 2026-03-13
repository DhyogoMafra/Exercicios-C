#include <stdio.h>

// Peça 10 números e descubra: se existe numeros repetidos;

int main(void) {

    int num[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do elemento [%d]: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            
            if (num[i] == num[j]) {
                printf("Existem numeros repetidos!\n");
                return 0;
            }
        
        }

    }

    printf("Nao existem numeros repetidos!\n");

    return 0;
}