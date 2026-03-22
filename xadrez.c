// Desafio de Xadrez - Movimentação das Peças

#include <stdio.h>

#define MOVIMENTACAO_TORRE 5 // A Torre se move 5 casas para a direita
#define MOVIMENTACAO_BISPO 5 // O Bispo se move 5 casas na diagonal (cima e direita)
#define MOVIMENTACAO_RAINHA 8 // A Rainha se move 8 casas para a esquerda

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



int main() {

    movimentacao_bispo();
    movimentacao_torre();
    movimentacao_rainha(); 

    return 0;
}
