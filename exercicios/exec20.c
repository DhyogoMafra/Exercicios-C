#include <stdio.h>
#include <stdlib.h>

int main() {

    float nota1, nota2, nota3, nota4, nota5, media, soma;

    printf("\n Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("\n Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("\n Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("\n Digite a quarta nota: ");
    scanf("%f", &nota4);

    printf("\n Digite a quinta nota: ");
    scanf("%f", &nota5);

    soma = nota1 + nota2 + nota3 + nota4 + nota5;
    media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    printf("A soma das notas e: %.2f\n", soma);
    printf("A medias das notas e: %.2f\n", media);

    return 0;

    

}