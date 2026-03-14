#include <stdio.h>
#include <string.h>

// Encontre o índice da primeira ocorrência em uma string;

int main(void) {

    char texto[] = "banana";
    char palavra[] = "ana";
    int i, j;

    for (i = 0; i < strlen(texto); i++) {
        for (j = 0; j < strlen(palavra) - strlen(palavra); j++) {

            if (texto[i + j] != palavra[j]) {

                break;
            }
        }

        if (j == strlen(palavra)) {
            printf("Indice encontrado: %d\n", i);
            return 0;
        }
    }

    printf("-1\n");

    return 0;


}