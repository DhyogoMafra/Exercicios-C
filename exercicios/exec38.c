#include <stdio.h>
 
int main() {
    
    char nome[100];
    double salario_fixo, total_vendas, total;

    printf("\nDigite seu nome: ");
    scanf("%s", nome);

    printf("\nDigite o salario fixo: ");
    scanf("%lf", &salario_fixo);

    printf("\nDigite o toal de vendas: ");
    scanf("%lf", &total_vendas);

    
    total = (total_vendas * 15 / 100 + salario_fixo);

    printf("TOTAL = %.2lf\n", total);
 
    return 0;
}