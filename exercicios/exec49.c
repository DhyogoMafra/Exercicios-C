#include <stdio.h>

// Peça 10 números e mostre a média.

int main() {
    
    float num[10], soma = 0, media;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do elemento [%d]: ", i + 1);
        scanf("%f", &num[i]);
        soma += num[i];
    }

    media = soma / 10;

    printf("A media dos numeros e [%.1f]\n", media);

    return 0;

}