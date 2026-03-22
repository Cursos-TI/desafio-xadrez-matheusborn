// Desafio de Xadrez - Movimentação das Peças

#include <stdio.h>

#define MOVIMENTACAO_TORRE 5 // A Torre se move 5 casas para a direita
#define MOVIMENTACAO_BISPO 5 // O Bispo se move 5 casas na diagonal (cima e direita)
#define MOVIMENTACAO_RAINHA 8 // A Rainha se move 8 casas para a esquerda
#define MOVIMENTACAO_CAVALO_VERTICAL 2  // Cavalo move 2 casas verticalmente (cima)
#define MOVIMENTACAO_CAVALO_HORIZONTAL 1 // Cavalo move 1 casa horizontalmente (direita)

void movimentacao_torre(int casas) {
    if(casas <= 0) return;
    printf("Direita\n");
    movimentacao_torre(casas - 1);
}

void movimentacao_bispo(int casas) {
    if(casas <= 0) return;
    printf("Cima, Direita\n");
    movimentacao_bispo(casas - 1);
}

void movimentacao_rainha(int casas) {
    if(casas <= 0) return;
    printf("Esquerda\n");
    movimentacao_rainha(casas - 1);
}

void movimentacao_cavalo() {
    // O Cavalo move-se em L: 2 casas para cima e 1 para direita
    // Usando loops aninhados com variáveis múltiplas, continue e break
    for(int dir = 0; dir < 2; dir++) {  // 2 direções: vertical e horizontal
        int max_casas = (dir == 0) ? MOVIMENTACAO_CAVALO_VERTICAL : MOVIMENTACAO_CAVALO_HORIZONTAL;
        int casa = 0;
        do {
            if(casa >= max_casas) break;  // Break para sair do loop
            if(dir == 0) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
            casa++;
        } while(1);
    }
    printf("\n"); // Linha em branco para separar as saídas
}



int main() {
    printf("Movimentação do Bispo:\n");
    movimentacao_bispo(MOVIMENTACAO_BISPO);
    printf("\n");

    printf("Movimentação da Torre:\n");
    movimentacao_torre(MOVIMENTACAO_TORRE);
    printf("\n");

    printf("Movimentação da Rainha:\n");
    movimentacao_rainha(MOVIMENTACAO_RAINHA);
    printf("\n");

    printf("Movimentação do Cavalo:\n");
    movimentacao_cavalo();

    return 0;
}
