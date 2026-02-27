#include <stdio.h>

int main() {

    char nome[50], endereco[100], telefone[20], CEP[9];
    
    printf("\n Digite seu nome: ");
    scanf("%s", nome);

    printf("\n Digite seu endereco: ");
    scanf("%s", endereco);

    printf("\n Digite seu cep: ");
    scanf("%s", CEP);

    printf("\n Digite seu telefone: ");
    scanf("%s", telefone);

    printf("\n Seu nome e: %s", nome);
    printf("\n Seu endereco e: %s", endereco);
    printf("\n Seu CEP e: %s e seu telefone e: %s", CEP, telefone);

    return 0;
}