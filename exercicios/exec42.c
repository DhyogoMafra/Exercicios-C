#include <stdio.h>

// Numero invertido
int main() {

    int num, resto, invertido = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (num != 0) {

        resto = num % 10; // pega o ultimo dígito
        invertido = invertido * 10 + resto; // adiciona um numero ao invertido
        num = num / 10; // remove o ltimo dígito

    }

    printf("Numero invertido: %d", invertido);

    return 0;
}