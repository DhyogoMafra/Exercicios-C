#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Criar um jogo de adivinhação:
O computador gera um número aleatório entre 1 e 100
O usuário tenta adivinhar*/

int main() {
    int numero, chute;

    srand(time(NULL));

    numero = rand() % 100 + 1;

    printf("Tente adivinhar o numero entre 1 e 100\n");

    do {
        printf("Digite seu chute: ");
        scanf("%d", &chute);

        if (chute > numero) {
            printf("O chute foi maior\n");

        } else if (chute < numero) {
            printf("O chute foi menor\n");

        } 
        
    } while (chute != numero);

    printf("Parabens! Voce acertou!\n");

    return 0;
}