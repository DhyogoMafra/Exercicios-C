#include <stdio.h>
#include <string.h>

/* Peça o nome completo do usuário e mostre:
 Quantos caracteres o nome tem
 Qual é o último sobrenome*/

 int main() {

    char nome[100];

    printf("\nDigite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    // remover \n
    nome[strcspn(nome, "\n")] = '\0';

    // Mostrar o tamanho do nome
    printf("O nome tem %lu caracteres\n", strlen(nome));


    // Mostrar Último sobrenome
    char *ultimo = strrchr(nome, ' ');

    if (ultimo != NULL) {
        printf("Ultimo sobrenome: %s\n", ultimo + 1);
    } else {
        printf("Nao ha sobrenome\n");
    }

    
    return 0;
 }
