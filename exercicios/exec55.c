#include <stdio.h>
#include <string.h>

// Conte quantas palavras contem uma frase;

int main(void) {

    char frase[100];
    int contador = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            contador++;
        }

    }

    printf("A frase contem [%d] palavras\n", contador + 1);

    return 0;
}