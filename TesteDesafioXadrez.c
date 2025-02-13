#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Movimentação do Bispo: 5 casas na diagonal superior direita (cima, direita)
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        printf("Cima, Direita\n");
    }

    // Movimentação da Torre: 5 casas para a direita
    printf("\nMovimentação da Torre:\n");
    int j = 0;
    while (j < 5) {
        printf("Direita\n");
        j++;
    }

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\nMovimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}