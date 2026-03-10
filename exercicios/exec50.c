#include <stdio.h>

// Peça 10 números e depois mostre eles ao contrário.

int main() {

    int num[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do elemento [%d]: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", num[i]);
    }

    printf("\n");

    for (int i = 9; i >= 0; i--) {
        printf("%d ", num[i]);
    }
    
    printf("\n");


    return 0;
}