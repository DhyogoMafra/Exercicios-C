#include <stdio.h>

// Peça 5 números e mostre eles em ordem crescente.
// Bubble Sort

int main () {

    int v[5];
    int temp;
    
    for (int i = 0; i < 5; i++) {
        printf("\nDigite o valor do elemento [%d]: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }

        for (int i = 0; i < 5; i++) {
            printf("%d | ", v[i]);
        }
    }

    return 0;
}