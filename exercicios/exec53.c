#include <stdio.h>

//Peça 10 números e descubra: o maior, o segundo maior e o terceiro maior;

int main(void) {

    int num[10], maior, segundo_maior, terceiro_maior;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do elemento [%d]: ", i + 1);
        scanf("%d", &num[i]);

        if (i == 0) {
            maior = num[i];
        }

        if (num[i] > maior) {
            terceiro_maior = segundo_maior;
            segundo_maior = maior;
            maior = num[i];

    } else if (num[i] > segundo_maior) {
        segundo_maior = num[i];

    }else if (num[i] < terceiro_maior) {
        terceiro_maior = num[i];
    }

  }

    printf("O maior elemento e [%d], o segundo maior e [%d] e o terceiro maior e [%d]", maior, segundo_maior, terceiro_maior);


    return 0;
}

