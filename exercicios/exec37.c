#include <stdio.h>
#include <stdlib.h>

//  Alocação Dinâmica de Vetor

int main(void) {

    int *p; //  criando um ponteiro para o vetor
    int i, quant_elementos;

    //  recebendo a quantidade de elementos
    printf("\nDigite a quantidade de elementos do vetor: ");
    scanf("%d", &quant_elementos);

    //  Alocando a memória para o vetor de acordo com a quantidade de elementos do Vetor
    p = (int *)(malloc(quant_elementos * sizeof(int)));

    //  caso não seja possível alocar a memória suficiente enviar mensagem e sair do programa com exit(1)
    if(p == NULL) {
        printf("\nErro de alocacao de memoria");
        exit(1);
    }
    printf("\n");

    //  recebendo os dados para o vetor
    for( i = 0; i < quant_elementos; i++) {
        printf("Digite o numero para o indice [%d]: ", i);
        scanf("%d", &p[i]);
    }
    printf("\n");

    //  percorre o vetor mostrando os valores armazenados
    for( i = 0; i < quant_elementos; i++) {
        printf("Valor armazenado no elemento de indice [%d] = %d\n", i, p[i]);
    }
    printf("\n");

    //  liberando a memoria que foi alocada
    free(p);


    return 0;
}