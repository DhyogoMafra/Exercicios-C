#include <stdio.h>
#include <stdlib.h>

// Peça 5 números ao usuário e mostre: O maior número digitado foi: X;

int main() {

    float v1[5], maior;

    for(int i = 0; i < 5; i++) {
    printf("\n Digite o valor do Elemento %d: ", i + 1);
    scanf("%f", &v1[i]);

    if(i == 0) {
            maior = v1[i];  // primeiro valor vira o maior
        }

        if(v1[i] > maior) {
            maior = v1[i];
        }
}
printf("O maior dos Elementos e: %.2f\n", maior);

return 0;

}