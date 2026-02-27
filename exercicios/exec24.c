#include <stdio.h>
#include <stdlib.h>

int main () {

    int senha;

    printf("\n Digite sua senha: ");
    scanf("%d", &senha);

    while (senha != 1234) {
        printf("Senha Incorreta! Tente Novamente: ");
        scanf("%d", &senha);

    }

    printf("Senha Correta!\n");


    return 0;
}