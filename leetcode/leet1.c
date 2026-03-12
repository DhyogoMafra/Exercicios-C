#include <stdio.h>

// Dado um numeral romano, converta-o em um número inteiro.

int valorRomano(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int main(void) {

    char romanos[50];
    int total = 0;

    printf("Digite em algarismos romanos: ");
    scanf("%s", romanos);

    for (int i = 0; romanos[i] != '\0'; i++) {

        int valor_atual = valorRomano(romanos[i]);
        int valor_proximo = valorRomano(romanos[i + 1]);

        if (valor_atual < valor_proximo) {
            total -= valor_atual;
        } else {
            total += valor_atual;
        }
    }

    printf("Em inteiro o numero fica: %d\n", total);

    return 0;
}