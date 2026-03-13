#include <stdio.h>

// Uso de funções fora do main

int soma(int a, int b) {
    return a + b;
}

int main(void) {

    int num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    resultado = soma(num1, num2);

    printf("O resultado da soma e: %d\n", resultado);

    return 0;

}