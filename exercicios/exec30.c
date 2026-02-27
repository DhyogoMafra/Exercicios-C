#include <stdio.h>
#include <stdlib.h>

int main() {

    int soma = 0, v1[5], media;

    for(int i = 0; i < 5; i++) {
        printf("\n Digite o valor do elemento %d: ", i + 1);
        scanf("%d", &v1[i]);
        soma += v1[i];
    }

    media = soma / 5;
    
    printf("Soma Total = %d\n", soma);
    printf("Media dos Elementos = %d\n", media);

    return 0;
}