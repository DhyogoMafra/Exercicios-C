#include <stdio.h>
 
int main() {
    
    int code_peca1, quant_peca1;
    int code_peca2, quant_peca2;
    double valor_peca1, valor_peca2, total;

    printf("\nDigite o codigo da peca 1: ");
    scanf("%d", &code_peca1);
    
    printf("\nDigite a quantidade das pecas 1: ");
    scanf("%d", &quant_peca1);

    printf("\nDigite o valor da peca 1: ");
    scanf("%lf", &valor_peca1);

    
    printf("\nDigite o codigo da peca 2: ");
    scanf("%d", &code_peca2);

    printf("\nDigite a quantidade das pecas 1: ");
    scanf("%d", &quant_peca2);

    printf("\nDigite o valor da peca 1: ");
    scanf("%lf", &valor_peca2);
    
    total = ((quant_peca1 * valor_peca1) + (quant_peca2 * valor_peca2));
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}