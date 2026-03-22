// Desafio de Xadrez - Movimentação das Peças

#include <stdio.h>

#define MOVIMENTACAO_TORRE 5 // A Torre se move 5 casas para a direita
#define MOVIMENTACAO_BISPO 5 // O Bispo se move 5 casas na diagonal (cima e direita)
#define MOVIMENTACAO_RAINHA 8 // A Rainha se move 8 casas para a esquerda
#define MOVIMENTACAO_CAVALO_VERTICAL 2  // Cavalo move 2 casas verticalmente (baixo)
#define MOVIMENTACAO_CAVALO_HORIZONTAL 1 // Cavalo move 1 casa horizontalmente (esquerda)

void movimentacao_torre() {
    printf("Movimentação da Torre:\n");
    for(int i = 0; i < MOVIMENTACAO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n"); // Linha em branco para separar as saídas
}

void movimentacao_bispo() {
    printf("Movimentação do Bispo:\n");
    int contador_bispo = 0; // Contador para o loop while
    while(contador_bispo < MOVIMENTACAO_BISPO) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    printf("\n"); // Linha em branco para separar as saídas
}

void movimentacao_rainha() {
    printf("Movimentação da Rainha:\n");
    int contador_rainha = 0; // Contador para o loop do-while
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while(contador_rainha < MOVIMENTACAO_RAINHA);
    printf("\n"); // Linha em branco para separar as saídas
}

void movimentacao_cavalo() {
    printf("Movimentação do Cavalo:\n");
    // O Cavalo move-se em L: aqui simulamos 2 casas para baixo (vertical) e 1 para esquerda (horizontal)
    // Usamos loops aninhados: um loop for externo para as etapas do movimento, e loops while aninhados para cada etapa
    for(int etapa = 0; etapa < 2; etapa++) {  // 2 etapas: vertical e horizontal
        if(etapa == 0) {
            // Etapa vertical: movimentação para baixo
            int contador_vertical = 0;
            while(contador_vertical < MOVIMENTACAO_CAVALO_VERTICAL) {
                printf("Baixo\n");
                contador_vertical++;
            }
        } else {
            // Etapa horizontal: movimentação para esquerda
            int contador_horizontal = 0;
            while(contador_horizontal < MOVIMENTACAO_CAVALO_HORIZONTAL) {
                printf("Esquerda\n");
                contador_horizontal++;
            }
        }
    }
    printf("\n"); // Linha em branco para separar as saídas
}



int main() {

    movimentacao_bispo();
    movimentacao_torre();
    movimentacao_rainha(); 
    movimentacao_cavalo();

    return 0;
}
