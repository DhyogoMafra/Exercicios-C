#include <stdio.h>

int main() {
    char tabuleiro[3][3];
    int i, j;
    int linha, coluna;
    char jogador = 'X';
    int jogadas = 0;
    int ganhou = 0;

    // Inicializando o tabuleiro
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }

    while(jogadas < 9 && ganhou == 0){

        // Mostrar Tabuleiro
        printf("\n");
        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                printf(" %c ", tabuleiro[i][j]);
                if(j < 2) printf("|");

            }
            printf("\n");
            if(i < 2) printf("---|---|---\n");

        }

    
    // Jogada
    printf("\nJogador %c\n", jogador);
    printf("Digite a linha (0 a 2): ");
    scanf("%d", &linha);
    printf("Digite a coluna (0 a 2): ");
    scanf("%d", &coluna);

    // Verifica se a posição está vazia
    if(tabuleiro[linha][coluna] == ' ') {
        tabuleiro[linha][coluna] = jogador;
        jogadas++;

        // Verificar linhas
        for(i = 0; i < 3; i++) {
            if(tabuleiro[i][0] == jogador &&
               tabuleiro[i][1] == jogador &&
               tabuleiro[i][2] == jogador) {
                ganhou = 1;

               }
        }
        // Verificar colunas
        for(i = 0; i < 3; i++) {
            if(tabuleiro[0][i] == jogador &&
               tabuleiro[1][i] == jogador &&
               tabuleiro[2][i] == jogador) {
                ganhou = 1;
             }
               
        }
        // Verificar diagonais
        if(tabuleiro[0][2] == jogador &&
           tabuleiro[1][1] == jogador &&
           tabuleiro[2][2] == jogador) {
            ganhou = 1;
        }

        if(tabuleiro[0][2] == jogador &&
           tabuleiro[1][1] == jogador &&
           tabuleiro[2][0] == jogador) {
        ganhou = 1;
    }

    // Trocar jogador
    if(jogador == 'X') {
        jogador = 'O';
    } else {
        jogador = 'X';

    } 

    } else{
        printf("Posição já ocupada! Tente novamente.\n");
    }
} 

// Mostrar resultado final
printf("\nResultado final:\n");
for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++) {
        printf(" %c ", tabuleiro[i][j]);
        if(j < 2) printf("|");
    }

    printf("\n");
    if(i < 2) printf("---|---|---\n");
}

if(ganhou == 1) {
    if(jogador == 'X')
        printf("\nJogador O venceu!\n");
    else
        printf("\nJogador X venceu!\n");
        
} else {
    printf("\nEmpate\n");

}

return 0;

}