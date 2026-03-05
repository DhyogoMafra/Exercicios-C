#include <stdio.h>

// Verificar se o numero é primo ou não

int main() {

    // num = número digitado pelo usuário
    // primo = variável usada como "sinal"
    // 1 significa que assumimos que o número é primo
    int num, primo = 1;

    // pede um número ao usuário
    printf("Digite um numero: ");
    scanf("%d", &num);

    // números menores ou iguais a 1 não são primos
    if(num <= 1) {
        printf("Nao eh primo");
        return 0; // encerra o programa
    }

    // começa testando divisores a partir do 2
    // i*i <= num é usado para testar apenas até a raiz quadrada do número
    for(int i = 2; i * i <= num; i++) {

        // verifica se o número é divisível por i
        // % calcula o resto da divisão
        if(num % i == 0) {

            // se for divisível, então não é primo
            primo = 0;

            // break interrompe o laço for imediatamente
            // porque já encontramos um divisor
            break;
        }

    }

    // se primo ainda for 1 significa que nenhum divisor foi encontrado
    if(primo)
        printf("Eh primo");
    else
        // se primo virou 0 significa que encontramos um divisor
        printf("Nao eh primo");

    return 0; // final do programa
}