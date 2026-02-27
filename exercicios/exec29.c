#include <stdio.h>
#include <stdlib.h>

int main() {

    int soma = 0, v1[5];

    for(int i = 0; i < 5; i++) {
        printf("\n Digite o valor do elemento %d: ", i + 1);
        scanf("%d", &v1[i]);
        soma += v1[i];
    }
    
    printf("\n Soma Total = %d\n", soma);

    return 0;
}