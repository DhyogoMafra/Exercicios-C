#include <stdio.h>
#include <string.h>

// Contar vogais em uma string

int main() {

    char palavra[100];
    int contador = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for(int i = 0; palavra[i] != '\0'; i++) {

        if(strchr("aeiou", palavra[i])) {
            contador++;
        }

    }

    printf("Quantidade de vogais: %d\n", contador);

}