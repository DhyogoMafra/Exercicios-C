#include <stdio.h>

int main(){

    float num1, num2, resultado;
    int opcao = 0;

    printf("=== Menu de Operacoes ===\n");
    printf("1 - adicao (+)\n");
    printf("2 - subtracao (-)\n");
    printf("3 - multiplicacao (x)\n");
    printf("4 - divisao (/)\n");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if(opcao == 1){
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
    }
    else if(opcao == 2){
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
    }
    else if(opcao == 3){
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);
    }
    else if(opcao == 4){
        if (num2 != 0){
        resultado = num1 / num2;
        printf("Resultado: %.2f\n", resultado);
        } else{
            printf("Erro: divisao por zero!\n");
        }
    }
    else{
        printf("Opcao invalida!\n");
    }

return 0;
}