#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, k;

    // Leitura da matriz 3x3
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibe a matriz original
    printf("\nMatriz original:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    // Lê o valor de k
    printf("\nDigite o valor de k: ");
    scanf("%d", &k);

    // Multiplica os elementos da diagonal principal por k
    for (i = 0; i < 3; i++) {
        matriz[i][i] *= k;
    }

    // Exibe a matriz resultante
    printf("\nMatriz apos multiplicar a diagonal principal por %d:\n", k);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}