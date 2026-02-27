#include <stdio.h>
#include <stdlib.h>

int main() {

    // Comparação If Else

    int num1, num2;

    printf("\n Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("\n Digite o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2) {
        printf("Este numero e o maior: %d\n", num1);
    }

    else if(num2 > num1) {
        printf("Este numero e maior: %d\n", num2);
    }

    else{
        printf("Os dois numero sao iguais\n");
    }

    return 0;
}