#include <stdio.h>
#include <math.h.>

/*Peça um número e mostre: Raiz quadrada
 Número elevado ao quadrado
Arredondado para cima e para baixo*/

int main() {

    double num;

    printf("\nDigite um numero: ");
    scanf("%lf", &num);

    if (num < 0) {
        printf("Não existe raiz real para numero negativo\n");

    } else {
        printf("Raiz: %.2lf\n", sqrt(num));
    }

    printf("Quadrado: %.2lf\n", pow(num, 2));
    printf("Ceil: %.2lf\n", ceil(num));
    printf("Floor: %.2lf\n", floor(num));

    return 0;
}