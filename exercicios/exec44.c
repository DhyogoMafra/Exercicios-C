#include <stdio.h>
#include <string.h>

// Verificar se uma palavra é Palindromo ou não

int main() {

    char palavra[100];
    int tamanho, i;
    int palindromo = 1;

    printf("\nDigite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for(i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {   //0 com 4
        palindromo = 0;                                //1 com 3
        break;

        }
    }
     if(palindromo) {
        printf("Eh palindromo!\n");
     } else {
        printf("Nao eh palindromo!\n");
     }

     return 0;
}