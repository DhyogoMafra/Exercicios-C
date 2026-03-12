#include <stdio.h>
#include <string.h>

// Escreva uma função para encontrar a string de prefixo comum mais longa entre uma matriz de strings.

char* longestCommonPrefix(char** strs, int strsSize) {

    if (strsSize == 0) return "";
    
    for (int i = 0; strs[0][i] != '\0'; i++) {
        char c = strs[0][i];

    for (int j = 1; j < strsSize; j++) {
        if (strs[j][i] != c) {
            strs[0][i] = '\0';
            return strs[0];
        }
    }
    }

    return strs[0];
}

int main(void) {

    int n;

    printf("Quantas Palavras? ");
    scanf("%d", &n);

    char palavras[n][100];
    char *strs[n];

    for (int i = 0; i < n; i++) {
        printf("Digite a palavra %d: ", i + 1);
        scanf("%s", palavras[i]);
        strs[i] = palavras[i];
    }

    char *resultado = longestCommonPrefix(strs, n);

    printf("Prefixo comum: %s\n", resultado);

    return 0;

}