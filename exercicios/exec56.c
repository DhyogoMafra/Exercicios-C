#include <stdio.h>

// Somar as matrizes em diagonal por elas mesmas;

int main(void) {

    int i, j;
    int matriz[3][3];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor do elemento [%d][%d]: ",i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        matriz[i][i] += matriz[i][i];
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}