#include <stdio.h>
#include <ctype.h>

/*Peça uma palavra e:
Converta tudo para MAIÚSCULO
Conte quantos números existem nela*/

int main() {

    char palavra[100];
    int contador = 0;

    printf("\nDigite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        // Verificar se é número

        if (isdigit(palavra[i])) {
            contador++;
        }
        
        // converter para maiúsculo
        palavra[i] = toupper(palavra[i]);

    }

    printf("Convertido em maiusculo: %s\n", palavra);
    printf("Existem %d numeros na palavra\n", contador);

    return 0;
}