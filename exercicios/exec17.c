#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1, num2, soma, subtracao, multiplicacao;
    float divisao;

    printf("\n Digite o primerio numero: ");
    scanf("%d", &num1);

    printf("\n Digite o segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    
    printf("A soma de %d + %d = %d\n", num1, num2, soma);
    printf("A subtracao de %d - %d = %d\n", num1, num2, subtracao);
    printf("A multiplicacao de %d x %d = %d\n", num1, num2, multiplicacao);

    if(num2 != 0) {
        divisao = num1 / num2;
        printf("A divisao de %d / %d = %.2f\n", num1, num2, divisao);

    } else {
        printf("Erro: (nao e possivel dividir por zero!)\n");
    }
   

    return 0;

}