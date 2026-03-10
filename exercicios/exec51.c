#include <stdio.h>

// Receba uma frase e mostre ela sem espaços.

int main() {

    char frase[100];
    char SemEspaco[100];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int j = 0;

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') {
            SemEspaco[j] = frase[i];
            j++;
        }
    }

    SemEspaco[j] = '\0';

    printf("A frase sem espaco fica: %s\n", SemEspaco);

    return 0;
}